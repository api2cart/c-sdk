#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_wish_list_item.h"



static customer_wish_list_item_t *customer_wish_list_item_create_internal(
    char *id,
    char *product_id,
    char *child_id,
    a2_c_date_time_t *created_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    customer_wish_list_item_t *customer_wish_list_item_local_var = malloc(sizeof(customer_wish_list_item_t));
    if (!customer_wish_list_item_local_var) {
        return NULL;
    }
    customer_wish_list_item_local_var->id = id;
    customer_wish_list_item_local_var->product_id = product_id;
    customer_wish_list_item_local_var->child_id = child_id;
    customer_wish_list_item_local_var->created_time = created_time;
    customer_wish_list_item_local_var->additional_fields = additional_fields;
    customer_wish_list_item_local_var->custom_fields = custom_fields;

    customer_wish_list_item_local_var->_library_owned = 1;
    return customer_wish_list_item_local_var;
}

__attribute__((deprecated)) customer_wish_list_item_t *customer_wish_list_item_create(
    char *id,
    char *product_id,
    char *child_id,
    a2_c_date_time_t *created_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return customer_wish_list_item_create_internal (
        id,
        product_id,
        child_id,
        created_time,
        additional_fields,
        custom_fields
        );
}

void customer_wish_list_item_free(customer_wish_list_item_t *customer_wish_list_item) {
    if(NULL == customer_wish_list_item){
        return ;
    }
    if(customer_wish_list_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_wish_list_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_wish_list_item->id) {
        free(customer_wish_list_item->id);
        customer_wish_list_item->id = NULL;
    }
    if (customer_wish_list_item->product_id) {
        free(customer_wish_list_item->product_id);
        customer_wish_list_item->product_id = NULL;
    }
    if (customer_wish_list_item->child_id) {
        free(customer_wish_list_item->child_id);
        customer_wish_list_item->child_id = NULL;
    }
    if (customer_wish_list_item->created_time) {
        a2_c_date_time_free(customer_wish_list_item->created_time);
        customer_wish_list_item->created_time = NULL;
    }
    if (customer_wish_list_item->additional_fields) {
        object_free(customer_wish_list_item->additional_fields);
        customer_wish_list_item->additional_fields = NULL;
    }
    if (customer_wish_list_item->custom_fields) {
        object_free(customer_wish_list_item->custom_fields);
        customer_wish_list_item->custom_fields = NULL;
    }
    free(customer_wish_list_item);
}

cJSON *customer_wish_list_item_convertToJSON(customer_wish_list_item_t *customer_wish_list_item) {
    cJSON *item = cJSON_CreateObject();

    // customer_wish_list_item->id
    if(customer_wish_list_item->id) {
    if(cJSON_AddStringToObject(item, "id", customer_wish_list_item->id) == NULL) {
    goto fail; //String
    }
    }


    // customer_wish_list_item->product_id
    if(customer_wish_list_item->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", customer_wish_list_item->product_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_wish_list_item->child_id
    if(customer_wish_list_item->child_id) {
    if(cJSON_AddStringToObject(item, "child_id", customer_wish_list_item->child_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_wish_list_item->created_time
    if(customer_wish_list_item->created_time) {
    cJSON *created_time_local_JSON = a2_c_date_time_convertToJSON(customer_wish_list_item->created_time);
    if(created_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_time", created_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_wish_list_item->additional_fields
    if(customer_wish_list_item->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(customer_wish_list_item->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_wish_list_item->custom_fields
    if(customer_wish_list_item->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(customer_wish_list_item->custom_fields);
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

customer_wish_list_item_t *customer_wish_list_item_parseFromJSON(cJSON *customer_wish_list_itemJSON){

    customer_wish_list_item_t *customer_wish_list_item_local_var = NULL;

    // define the local variable for customer_wish_list_item->created_time
    a2_c_date_time_t *created_time_local_nonprim = NULL;

    // customer_wish_list_item->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customer_wish_list_itemJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // customer_wish_list_item->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(customer_wish_list_itemJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // customer_wish_list_item->child_id
    cJSON *child_id = cJSON_GetObjectItemCaseSensitive(customer_wish_list_itemJSON, "child_id");
    if (cJSON_IsNull(child_id)) {
        child_id = NULL;
    }
    if (child_id) { 
    if(!cJSON_IsString(child_id) && !cJSON_IsNull(child_id))
    {
    goto end; //String
    }
    }

    // customer_wish_list_item->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(customer_wish_list_itemJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    created_time_local_nonprim = a2_c_date_time_parseFromJSON(created_time); //nonprimitive
    }

    // customer_wish_list_item->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(customer_wish_list_itemJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // customer_wish_list_item->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(customer_wish_list_itemJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    customer_wish_list_item_local_var = customer_wish_list_item_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        child_id && !cJSON_IsNull(child_id) ? strdup(child_id->valuestring) : NULL,
        created_time ? created_time_local_nonprim : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return customer_wish_list_item_local_var;
end:
    if (created_time_local_nonprim) {
        a2_c_date_time_free(created_time_local_nonprim);
        created_time_local_nonprim = NULL;
    }
    return NULL;

}
