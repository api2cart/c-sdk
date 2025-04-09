#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "model_return.h"



static ModelReturn_t *ModelReturn_create_internal(
    char *id,
    char *name,
    char *order_id,
    char *customer_id,
    char *store_id,
    char *created_at,
    char *modified_at,
    return_status_t *status,
    list_t *order_products,
    char *comment,
    char *staff_note,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    ModelReturn_t *ModelReturn_local_var = malloc(sizeof(ModelReturn_t));
    if (!ModelReturn_local_var) {
        return NULL;
    }
    ModelReturn_local_var->id = id;
    ModelReturn_local_var->name = name;
    ModelReturn_local_var->order_id = order_id;
    ModelReturn_local_var->customer_id = customer_id;
    ModelReturn_local_var->store_id = store_id;
    ModelReturn_local_var->created_at = created_at;
    ModelReturn_local_var->modified_at = modified_at;
    ModelReturn_local_var->status = status;
    ModelReturn_local_var->order_products = order_products;
    ModelReturn_local_var->comment = comment;
    ModelReturn_local_var->staff_note = staff_note;
    ModelReturn_local_var->additional_fields = additional_fields;
    ModelReturn_local_var->custom_fields = custom_fields;

    ModelReturn_local_var->_library_owned = 1;
    return ModelReturn_local_var;
}

__attribute__((deprecated)) ModelReturn_t *ModelReturn_create(
    char *id,
    char *name,
    char *order_id,
    char *customer_id,
    char *store_id,
    char *created_at,
    char *modified_at,
    return_status_t *status,
    list_t *order_products,
    char *comment,
    char *staff_note,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return ModelReturn_create_internal (
        id,
        name,
        order_id,
        customer_id,
        store_id,
        created_at,
        modified_at,
        status,
        order_products,
        comment,
        staff_note,
        additional_fields,
        custom_fields
        );
}

void ModelReturn_free(ModelReturn_t *ModelReturn) {
    if(NULL == ModelReturn){
        return ;
    }
    if(ModelReturn->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ModelReturn_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ModelReturn->id) {
        free(ModelReturn->id);
        ModelReturn->id = NULL;
    }
    if (ModelReturn->name) {
        free(ModelReturn->name);
        ModelReturn->name = NULL;
    }
    if (ModelReturn->order_id) {
        free(ModelReturn->order_id);
        ModelReturn->order_id = NULL;
    }
    if (ModelReturn->customer_id) {
        free(ModelReturn->customer_id);
        ModelReturn->customer_id = NULL;
    }
    if (ModelReturn->store_id) {
        free(ModelReturn->store_id);
        ModelReturn->store_id = NULL;
    }
    if (ModelReturn->created_at) {
        free(ModelReturn->created_at);
        ModelReturn->created_at = NULL;
    }
    if (ModelReturn->modified_at) {
        free(ModelReturn->modified_at);
        ModelReturn->modified_at = NULL;
    }
    if (ModelReturn->status) {
        return_status_free(ModelReturn->status);
        ModelReturn->status = NULL;
    }
    if (ModelReturn->order_products) {
        list_ForEach(listEntry, ModelReturn->order_products) {
            return_order_product_free(listEntry->data);
        }
        list_freeList(ModelReturn->order_products);
        ModelReturn->order_products = NULL;
    }
    if (ModelReturn->comment) {
        free(ModelReturn->comment);
        ModelReturn->comment = NULL;
    }
    if (ModelReturn->staff_note) {
        free(ModelReturn->staff_note);
        ModelReturn->staff_note = NULL;
    }
    if (ModelReturn->additional_fields) {
        object_free(ModelReturn->additional_fields);
        ModelReturn->additional_fields = NULL;
    }
    if (ModelReturn->custom_fields) {
        object_free(ModelReturn->custom_fields);
        ModelReturn->custom_fields = NULL;
    }
    free(ModelReturn);
}

cJSON *ModelReturn_convertToJSON(ModelReturn_t *ModelReturn) {
    cJSON *item = cJSON_CreateObject();

    // ModelReturn->id
    if(ModelReturn->id) {
    if(cJSON_AddStringToObject(item, "id", ModelReturn->id) == NULL) {
    goto fail; //String
    }
    }


    // ModelReturn->name
    if(ModelReturn->name) {
    if(cJSON_AddStringToObject(item, "name", ModelReturn->name) == NULL) {
    goto fail; //String
    }
    }


    // ModelReturn->order_id
    if(ModelReturn->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", ModelReturn->order_id) == NULL) {
    goto fail; //String
    }
    }


    // ModelReturn->customer_id
    if(ModelReturn->customer_id) {
    if(cJSON_AddStringToObject(item, "customer_id", ModelReturn->customer_id) == NULL) {
    goto fail; //String
    }
    }


    // ModelReturn->store_id
    if(ModelReturn->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", ModelReturn->store_id) == NULL) {
    goto fail; //String
    }
    }


    // ModelReturn->created_at
    if(ModelReturn->created_at) {
    if(cJSON_AddStringToObject(item, "created_at", ModelReturn->created_at) == NULL) {
    goto fail; //String
    }
    }


    // ModelReturn->modified_at
    if(ModelReturn->modified_at) {
    if(cJSON_AddStringToObject(item, "modified_at", ModelReturn->modified_at) == NULL) {
    goto fail; //String
    }
    }


    // ModelReturn->status
    if(ModelReturn->status) {
    cJSON *status_local_JSON = return_status_convertToJSON(ModelReturn->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ModelReturn->order_products
    if(ModelReturn->order_products) {
    cJSON *order_products = cJSON_AddArrayToObject(item, "order_products");
    if(order_products == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_productsListEntry;
    if (ModelReturn->order_products) {
    list_ForEach(order_productsListEntry, ModelReturn->order_products) {
    cJSON *itemLocal = return_order_product_convertToJSON(order_productsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_products, itemLocal);
    }
    }
    }


    // ModelReturn->comment
    if(ModelReturn->comment) {
    if(cJSON_AddStringToObject(item, "comment", ModelReturn->comment) == NULL) {
    goto fail; //String
    }
    }


    // ModelReturn->staff_note
    if(ModelReturn->staff_note) {
    if(cJSON_AddStringToObject(item, "staff_note", ModelReturn->staff_note) == NULL) {
    goto fail; //String
    }
    }


    // ModelReturn->additional_fields
    if(ModelReturn->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(ModelReturn->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ModelReturn->custom_fields
    if(ModelReturn->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(ModelReturn->custom_fields);
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

ModelReturn_t *ModelReturn_parseFromJSON(cJSON *ModelReturnJSON){

    ModelReturn_t *ModelReturn_local_var = NULL;

    // define the local variable for ModelReturn->status
    return_status_t *status_local_nonprim = NULL;

    // define the local list for ModelReturn->order_products
    list_t *order_productsList = NULL;

    // ModelReturn->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // ModelReturn->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // ModelReturn->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // ModelReturn->customer_id
    cJSON *customer_id = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "customer_id");
    if (cJSON_IsNull(customer_id)) {
        customer_id = NULL;
    }
    if (customer_id) { 
    if(!cJSON_IsString(customer_id) && !cJSON_IsNull(customer_id))
    {
    goto end; //String
    }
    }

    // ModelReturn->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // ModelReturn->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    if(!cJSON_IsString(created_at) && !cJSON_IsNull(created_at))
    {
    goto end; //String
    }
    }

    // ModelReturn->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    if(!cJSON_IsString(modified_at) && !cJSON_IsNull(modified_at))
    {
    goto end; //String
    }
    }

    // ModelReturn->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    status_local_nonprim = return_status_parseFromJSON(status); //nonprimitive
    }

    // ModelReturn->order_products
    cJSON *order_products = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "order_products");
    if (cJSON_IsNull(order_products)) {
        order_products = NULL;
    }
    if (order_products) { 
    cJSON *order_products_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order_products)){
        goto end; //nonprimitive container
    }

    order_productsList = list_createList();

    cJSON_ArrayForEach(order_products_local_nonprimitive,order_products )
    {
        if(!cJSON_IsObject(order_products_local_nonprimitive)){
            goto end;
        }
        return_order_product_t *order_productsItem = return_order_product_parseFromJSON(order_products_local_nonprimitive);

        list_addElement(order_productsList, order_productsItem);
    }
    }

    // ModelReturn->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // ModelReturn->staff_note
    cJSON *staff_note = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "staff_note");
    if (cJSON_IsNull(staff_note)) {
        staff_note = NULL;
    }
    if (staff_note) { 
    if(!cJSON_IsString(staff_note) && !cJSON_IsNull(staff_note))
    {
    goto end; //String
    }
    }

    // ModelReturn->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // ModelReturn->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(ModelReturnJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    ModelReturn_local_var = ModelReturn_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        customer_id && !cJSON_IsNull(customer_id) ? strdup(customer_id->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        created_at && !cJSON_IsNull(created_at) ? strdup(created_at->valuestring) : NULL,
        modified_at && !cJSON_IsNull(modified_at) ? strdup(modified_at->valuestring) : NULL,
        status ? status_local_nonprim : NULL,
        order_products ? order_productsList : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        staff_note && !cJSON_IsNull(staff_note) ? strdup(staff_note->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return ModelReturn_local_var;
end:
    if (status_local_nonprim) {
        return_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    if (order_productsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_productsList) {
            return_order_product_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_productsList);
        order_productsList = NULL;
    }
    return NULL;

}
