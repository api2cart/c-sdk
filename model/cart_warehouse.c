#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_warehouse.h"



static cart_warehouse_t *cart_warehouse_create_internal(
    char *id,
    char *name,
    char *description,
    int avail,
    customer_address_t *address,
    list_t *carriers_ids,
    list_t *stores_ids,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    cart_warehouse_t *cart_warehouse_local_var = malloc(sizeof(cart_warehouse_t));
    if (!cart_warehouse_local_var) {
        return NULL;
    }
    cart_warehouse_local_var->id = id;
    cart_warehouse_local_var->name = name;
    cart_warehouse_local_var->description = description;
    cart_warehouse_local_var->avail = avail;
    cart_warehouse_local_var->address = address;
    cart_warehouse_local_var->carriers_ids = carriers_ids;
    cart_warehouse_local_var->stores_ids = stores_ids;
    cart_warehouse_local_var->additional_fields = additional_fields;
    cart_warehouse_local_var->custom_fields = custom_fields;

    cart_warehouse_local_var->_library_owned = 1;
    return cart_warehouse_local_var;
}

__attribute__((deprecated)) cart_warehouse_t *cart_warehouse_create(
    char *id,
    char *name,
    char *description,
    int avail,
    customer_address_t *address,
    list_t *carriers_ids,
    list_t *stores_ids,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return cart_warehouse_create_internal (
        id,
        name,
        description,
        avail,
        address,
        carriers_ids,
        stores_ids,
        additional_fields,
        custom_fields
        );
}

void cart_warehouse_free(cart_warehouse_t *cart_warehouse) {
    if(NULL == cart_warehouse){
        return ;
    }
    if(cart_warehouse->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_warehouse_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_warehouse->id) {
        free(cart_warehouse->id);
        cart_warehouse->id = NULL;
    }
    if (cart_warehouse->name) {
        free(cart_warehouse->name);
        cart_warehouse->name = NULL;
    }
    if (cart_warehouse->description) {
        free(cart_warehouse->description);
        cart_warehouse->description = NULL;
    }
    if (cart_warehouse->address) {
        customer_address_free(cart_warehouse->address);
        cart_warehouse->address = NULL;
    }
    if (cart_warehouse->carriers_ids) {
        list_ForEach(listEntry, cart_warehouse->carriers_ids) {
            free(listEntry->data);
        }
        list_freeList(cart_warehouse->carriers_ids);
        cart_warehouse->carriers_ids = NULL;
    }
    if (cart_warehouse->stores_ids) {
        list_ForEach(listEntry, cart_warehouse->stores_ids) {
            free(listEntry->data);
        }
        list_freeList(cart_warehouse->stores_ids);
        cart_warehouse->stores_ids = NULL;
    }
    if (cart_warehouse->additional_fields) {
        object_free(cart_warehouse->additional_fields);
        cart_warehouse->additional_fields = NULL;
    }
    if (cart_warehouse->custom_fields) {
        object_free(cart_warehouse->custom_fields);
        cart_warehouse->custom_fields = NULL;
    }
    free(cart_warehouse);
}

cJSON *cart_warehouse_convertToJSON(cart_warehouse_t *cart_warehouse) {
    cJSON *item = cJSON_CreateObject();

    // cart_warehouse->id
    if(cart_warehouse->id) {
    if(cJSON_AddStringToObject(item, "id", cart_warehouse->id) == NULL) {
    goto fail; //String
    }
    }


    // cart_warehouse->name
    if(cart_warehouse->name) {
    if(cJSON_AddStringToObject(item, "name", cart_warehouse->name) == NULL) {
    goto fail; //String
    }
    }


    // cart_warehouse->description
    if(cart_warehouse->description) {
    if(cJSON_AddStringToObject(item, "description", cart_warehouse->description) == NULL) {
    goto fail; //String
    }
    }


    // cart_warehouse->avail
    if(cart_warehouse->avail) {
    if(cJSON_AddBoolToObject(item, "avail", cart_warehouse->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_warehouse->address
    if(cart_warehouse->address) {
    cJSON *address_local_JSON = customer_address_convertToJSON(cart_warehouse->address);
    if(address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "address", address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_warehouse->carriers_ids
    if(cart_warehouse->carriers_ids) {
    cJSON *carriers_ids = cJSON_AddArrayToObject(item, "carriers_ids");
    if(carriers_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *carriers_idsListEntry;
    list_ForEach(carriers_idsListEntry, cart_warehouse->carriers_ids) {
    if(cJSON_AddStringToObject(carriers_ids, "", carriers_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // cart_warehouse->stores_ids
    if(cart_warehouse->stores_ids) {
    cJSON *stores_ids = cJSON_AddArrayToObject(item, "stores_ids");
    if(stores_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stores_idsListEntry;
    list_ForEach(stores_idsListEntry, cart_warehouse->stores_ids) {
    if(cJSON_AddStringToObject(stores_ids, "", stores_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // cart_warehouse->additional_fields
    if(cart_warehouse->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(cart_warehouse->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_warehouse->custom_fields
    if(cart_warehouse->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(cart_warehouse->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cart_warehouse_t *cart_warehouse_parseFromJSON(cJSON *cart_warehouseJSON){

    cart_warehouse_t *cart_warehouse_local_var = NULL;

    // define the local variable for cart_warehouse->address
    customer_address_t *address_local_nonprim = NULL;

    // define the local list for cart_warehouse->carriers_ids
    list_t *carriers_idsList = NULL;

    // define the local list for cart_warehouse->stores_ids
    list_t *stores_idsList = NULL;

    // cart_warehouse->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cart_warehouseJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cart_warehouse->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cart_warehouseJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cart_warehouse->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(cart_warehouseJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // cart_warehouse->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(cart_warehouseJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // cart_warehouse->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(cart_warehouseJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    address_local_nonprim = customer_address_parseFromJSON(address); //nonprimitive
    }

    // cart_warehouse->carriers_ids
    cJSON *carriers_ids = cJSON_GetObjectItemCaseSensitive(cart_warehouseJSON, "carriers_ids");
    if (cJSON_IsNull(carriers_ids)) {
        carriers_ids = NULL;
    }
    if (carriers_ids) { 
    cJSON *carriers_ids_local = NULL;
    if(!cJSON_IsArray(carriers_ids)) {
        goto end;//primitive container
    }
    carriers_idsList = list_createList();

    cJSON_ArrayForEach(carriers_ids_local, carriers_ids)
    {
        if(!cJSON_IsString(carriers_ids_local))
        {
            goto end;
        }
        list_addElement(carriers_idsList , strdup(carriers_ids_local->valuestring));
    }
    }

    // cart_warehouse->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(cart_warehouseJSON, "stores_ids");
    if (cJSON_IsNull(stores_ids)) {
        stores_ids = NULL;
    }
    if (stores_ids) { 
    cJSON *stores_ids_local = NULL;
    if(!cJSON_IsArray(stores_ids)) {
        goto end;//primitive container
    }
    stores_idsList = list_createList();

    cJSON_ArrayForEach(stores_ids_local, stores_ids)
    {
        if(!cJSON_IsString(stores_ids_local))
        {
            goto end;
        }
        list_addElement(stores_idsList , strdup(stores_ids_local->valuestring));
    }
    }

    // cart_warehouse->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(cart_warehouseJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // cart_warehouse->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(cart_warehouseJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    cart_warehouse_local_var = cart_warehouse_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        avail ? avail->valueint : 0,
        address ? address_local_nonprim : NULL,
        carriers_ids ? carriers_idsList : NULL,
        stores_ids ? stores_idsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return cart_warehouse_local_var;
end:
    if (address_local_nonprim) {
        customer_address_free(address_local_nonprim);
        address_local_nonprim = NULL;
    }
    if (carriers_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, carriers_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(carriers_idsList);
        carriers_idsList = NULL;
    }
    if (stores_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, stores_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(stores_idsList);
        stores_idsList = NULL;
    }
    return NULL;

}
