#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_wish_list.h"



static customer_wish_list_t *customer_wish_list_create_internal(
    char *id,
    char *name,
    char *description,
    char *is_public,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    list_t *products,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    customer_wish_list_t *customer_wish_list_local_var = malloc(sizeof(customer_wish_list_t));
    if (!customer_wish_list_local_var) {
        return NULL;
    }
    customer_wish_list_local_var->id = id;
    customer_wish_list_local_var->name = name;
    customer_wish_list_local_var->description = description;
    customer_wish_list_local_var->is_public = is_public;
    customer_wish_list_local_var->created_at = created_at;
    customer_wish_list_local_var->modified_at = modified_at;
    customer_wish_list_local_var->products = products;
    customer_wish_list_local_var->additional_fields = additional_fields;
    customer_wish_list_local_var->custom_fields = custom_fields;

    customer_wish_list_local_var->_library_owned = 1;
    return customer_wish_list_local_var;
}

__attribute__((deprecated)) customer_wish_list_t *customer_wish_list_create(
    char *id,
    char *name,
    char *description,
    char *is_public,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    list_t *products,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return customer_wish_list_create_internal (
        id,
        name,
        description,
        is_public,
        created_at,
        modified_at,
        products,
        additional_fields,
        custom_fields
        );
}

void customer_wish_list_free(customer_wish_list_t *customer_wish_list) {
    if(NULL == customer_wish_list){
        return ;
    }
    if(customer_wish_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_wish_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_wish_list->id) {
        free(customer_wish_list->id);
        customer_wish_list->id = NULL;
    }
    if (customer_wish_list->name) {
        free(customer_wish_list->name);
        customer_wish_list->name = NULL;
    }
    if (customer_wish_list->description) {
        free(customer_wish_list->description);
        customer_wish_list->description = NULL;
    }
    if (customer_wish_list->is_public) {
        free(customer_wish_list->is_public);
        customer_wish_list->is_public = NULL;
    }
    if (customer_wish_list->created_at) {
        a2_c_date_time_free(customer_wish_list->created_at);
        customer_wish_list->created_at = NULL;
    }
    if (customer_wish_list->modified_at) {
        a2_c_date_time_free(customer_wish_list->modified_at);
        customer_wish_list->modified_at = NULL;
    }
    if (customer_wish_list->products) {
        list_ForEach(listEntry, customer_wish_list->products) {
            customer_wish_list_item_free(listEntry->data);
        }
        list_freeList(customer_wish_list->products);
        customer_wish_list->products = NULL;
    }
    if (customer_wish_list->additional_fields) {
        object_free(customer_wish_list->additional_fields);
        customer_wish_list->additional_fields = NULL;
    }
    if (customer_wish_list->custom_fields) {
        object_free(customer_wish_list->custom_fields);
        customer_wish_list->custom_fields = NULL;
    }
    free(customer_wish_list);
}

cJSON *customer_wish_list_convertToJSON(customer_wish_list_t *customer_wish_list) {
    cJSON *item = cJSON_CreateObject();

    // customer_wish_list->id
    if(customer_wish_list->id) {
    if(cJSON_AddStringToObject(item, "id", customer_wish_list->id) == NULL) {
    goto fail; //String
    }
    }


    // customer_wish_list->name
    if(customer_wish_list->name) {
    if(cJSON_AddStringToObject(item, "name", customer_wish_list->name) == NULL) {
    goto fail; //String
    }
    }


    // customer_wish_list->description
    if(customer_wish_list->description) {
    if(cJSON_AddStringToObject(item, "description", customer_wish_list->description) == NULL) {
    goto fail; //String
    }
    }


    // customer_wish_list->is_public
    if(customer_wish_list->is_public) {
    if(cJSON_AddStringToObject(item, "is_public", customer_wish_list->is_public) == NULL) {
    goto fail; //String
    }
    }


    // customer_wish_list->created_at
    if(customer_wish_list->created_at) {
    cJSON *created_at_local_JSON = a2_c_date_time_convertToJSON(customer_wish_list->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_at", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_wish_list->modified_at
    if(customer_wish_list->modified_at) {
    cJSON *modified_at_local_JSON = a2_c_date_time_convertToJSON(customer_wish_list->modified_at);
    if(modified_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_at", modified_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_wish_list->products
    if(customer_wish_list->products) {
    cJSON *products = cJSON_AddArrayToObject(item, "products");
    if(products == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *productsListEntry;
    if (customer_wish_list->products) {
    list_ForEach(productsListEntry, customer_wish_list->products) {
    cJSON *itemLocal = customer_wish_list_item_convertToJSON(productsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(products, itemLocal);
    }
    }
    }


    // customer_wish_list->additional_fields
    if(customer_wish_list->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(customer_wish_list->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_wish_list->custom_fields
    if(customer_wish_list->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(customer_wish_list->custom_fields);
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

customer_wish_list_t *customer_wish_list_parseFromJSON(cJSON *customer_wish_listJSON){

    customer_wish_list_t *customer_wish_list_local_var = NULL;

    // define the local variable for customer_wish_list->created_at
    a2_c_date_time_t *created_at_local_nonprim = NULL;

    // define the local variable for customer_wish_list->modified_at
    a2_c_date_time_t *modified_at_local_nonprim = NULL;

    // define the local list for customer_wish_list->products
    list_t *productsList = NULL;

    // customer_wish_list->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customer_wish_listJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // customer_wish_list->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(customer_wish_listJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // customer_wish_list->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(customer_wish_listJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // customer_wish_list->is_public
    cJSON *is_public = cJSON_GetObjectItemCaseSensitive(customer_wish_listJSON, "is_public");
    if (cJSON_IsNull(is_public)) {
        is_public = NULL;
    }
    if (is_public) { 
    if(!cJSON_IsString(is_public) && !cJSON_IsNull(is_public))
    {
    goto end; //String
    }
    }

    // customer_wish_list->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(customer_wish_listJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    created_at_local_nonprim = a2_c_date_time_parseFromJSON(created_at); //nonprimitive
    }

    // customer_wish_list->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(customer_wish_listJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    modified_at_local_nonprim = a2_c_date_time_parseFromJSON(modified_at); //nonprimitive
    }

    // customer_wish_list->products
    cJSON *products = cJSON_GetObjectItemCaseSensitive(customer_wish_listJSON, "products");
    if (cJSON_IsNull(products)) {
        products = NULL;
    }
    if (products) { 
    cJSON *products_local_nonprimitive = NULL;
    if(!cJSON_IsArray(products)){
        goto end; //nonprimitive container
    }

    productsList = list_createList();

    cJSON_ArrayForEach(products_local_nonprimitive,products )
    {
        if(!cJSON_IsObject(products_local_nonprimitive)){
            goto end;
        }
        customer_wish_list_item_t *productsItem = customer_wish_list_item_parseFromJSON(products_local_nonprimitive);

        list_addElement(productsList, productsItem);
    }
    }

    // customer_wish_list->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(customer_wish_listJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // customer_wish_list->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(customer_wish_listJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    customer_wish_list_local_var = customer_wish_list_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        is_public && !cJSON_IsNull(is_public) ? strdup(is_public->valuestring) : NULL,
        created_at ? created_at_local_nonprim : NULL,
        modified_at ? modified_at_local_nonprim : NULL,
        products ? productsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return customer_wish_list_local_var;
end:
    if (created_at_local_nonprim) {
        a2_c_date_time_free(created_at_local_nonprim);
        created_at_local_nonprim = NULL;
    }
    if (modified_at_local_nonprim) {
        a2_c_date_time_free(modified_at_local_nonprim);
        modified_at_local_nonprim = NULL;
    }
    if (productsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, productsList) {
            customer_wish_list_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(productsList);
        productsList = NULL;
    }
    return NULL;

}
