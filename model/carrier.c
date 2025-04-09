#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "carrier.h"



static carrier_t *carrier_create_internal(
    char *id,
    char *name,
    int active,
    list_t *shipping_methods,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    carrier_t *carrier_local_var = malloc(sizeof(carrier_t));
    if (!carrier_local_var) {
        return NULL;
    }
    carrier_local_var->id = id;
    carrier_local_var->name = name;
    carrier_local_var->active = active;
    carrier_local_var->shipping_methods = shipping_methods;
    carrier_local_var->additional_fields = additional_fields;
    carrier_local_var->custom_fields = custom_fields;

    carrier_local_var->_library_owned = 1;
    return carrier_local_var;
}

__attribute__((deprecated)) carrier_t *carrier_create(
    char *id,
    char *name,
    int active,
    list_t *shipping_methods,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return carrier_create_internal (
        id,
        name,
        active,
        shipping_methods,
        additional_fields,
        custom_fields
        );
}

void carrier_free(carrier_t *carrier) {
    if(NULL == carrier){
        return ;
    }
    if(carrier->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "carrier_free");
        return ;
    }
    listEntry_t *listEntry;
    if (carrier->id) {
        free(carrier->id);
        carrier->id = NULL;
    }
    if (carrier->name) {
        free(carrier->name);
        carrier->name = NULL;
    }
    if (carrier->shipping_methods) {
        list_ForEach(listEntry, carrier->shipping_methods) {
            order_shipping_method_free(listEntry->data);
        }
        list_freeList(carrier->shipping_methods);
        carrier->shipping_methods = NULL;
    }
    if (carrier->additional_fields) {
        object_free(carrier->additional_fields);
        carrier->additional_fields = NULL;
    }
    if (carrier->custom_fields) {
        object_free(carrier->custom_fields);
        carrier->custom_fields = NULL;
    }
    free(carrier);
}

cJSON *carrier_convertToJSON(carrier_t *carrier) {
    cJSON *item = cJSON_CreateObject();

    // carrier->id
    if(carrier->id) {
    if(cJSON_AddStringToObject(item, "id", carrier->id) == NULL) {
    goto fail; //String
    }
    }


    // carrier->name
    if(carrier->name) {
    if(cJSON_AddStringToObject(item, "name", carrier->name) == NULL) {
    goto fail; //String
    }
    }


    // carrier->active
    if(carrier->active) {
    if(cJSON_AddBoolToObject(item, "active", carrier->active) == NULL) {
    goto fail; //Bool
    }
    }


    // carrier->shipping_methods
    if(carrier->shipping_methods) {
    cJSON *shipping_methods = cJSON_AddArrayToObject(item, "shipping_methods");
    if(shipping_methods == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *shipping_methodsListEntry;
    if (carrier->shipping_methods) {
    list_ForEach(shipping_methodsListEntry, carrier->shipping_methods) {
    cJSON *itemLocal = order_shipping_method_convertToJSON(shipping_methodsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(shipping_methods, itemLocal);
    }
    }
    }


    // carrier->additional_fields
    if(carrier->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(carrier->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // carrier->custom_fields
    if(carrier->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(carrier->custom_fields);
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

carrier_t *carrier_parseFromJSON(cJSON *carrierJSON){

    carrier_t *carrier_local_var = NULL;

    // define the local list for carrier->shipping_methods
    list_t *shipping_methodsList = NULL;

    // carrier->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(carrierJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // carrier->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(carrierJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // carrier->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(carrierJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }
    }

    // carrier->shipping_methods
    cJSON *shipping_methods = cJSON_GetObjectItemCaseSensitive(carrierJSON, "shipping_methods");
    if (cJSON_IsNull(shipping_methods)) {
        shipping_methods = NULL;
    }
    if (shipping_methods) { 
    cJSON *shipping_methods_local_nonprimitive = NULL;
    if(!cJSON_IsArray(shipping_methods)){
        goto end; //nonprimitive container
    }

    shipping_methodsList = list_createList();

    cJSON_ArrayForEach(shipping_methods_local_nonprimitive,shipping_methods )
    {
        if(!cJSON_IsObject(shipping_methods_local_nonprimitive)){
            goto end;
        }
        order_shipping_method_t *shipping_methodsItem = order_shipping_method_parseFromJSON(shipping_methods_local_nonprimitive);

        list_addElement(shipping_methodsList, shipping_methodsItem);
    }
    }

    // carrier->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(carrierJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // carrier->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(carrierJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    carrier_local_var = carrier_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        active ? active->valueint : 0,
        shipping_methods ? shipping_methodsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return carrier_local_var;
end:
    if (shipping_methodsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, shipping_methodsList) {
            order_shipping_method_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(shipping_methodsList);
        shipping_methodsList = NULL;
    }
    return NULL;

}
