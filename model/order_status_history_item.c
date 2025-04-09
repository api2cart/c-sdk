#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_status_history_item.h"



static order_status_history_item_t *order_status_history_item_create_internal(
    char *id,
    char *name,
    a2_c_date_time_t *modified_time,
    int notify,
    char *comment,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_status_history_item_t *order_status_history_item_local_var = malloc(sizeof(order_status_history_item_t));
    if (!order_status_history_item_local_var) {
        return NULL;
    }
    order_status_history_item_local_var->id = id;
    order_status_history_item_local_var->name = name;
    order_status_history_item_local_var->modified_time = modified_time;
    order_status_history_item_local_var->notify = notify;
    order_status_history_item_local_var->comment = comment;
    order_status_history_item_local_var->additional_fields = additional_fields;
    order_status_history_item_local_var->custom_fields = custom_fields;

    order_status_history_item_local_var->_library_owned = 1;
    return order_status_history_item_local_var;
}

__attribute__((deprecated)) order_status_history_item_t *order_status_history_item_create(
    char *id,
    char *name,
    a2_c_date_time_t *modified_time,
    int notify,
    char *comment,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_status_history_item_create_internal (
        id,
        name,
        modified_time,
        notify,
        comment,
        additional_fields,
        custom_fields
        );
}

void order_status_history_item_free(order_status_history_item_t *order_status_history_item) {
    if(NULL == order_status_history_item){
        return ;
    }
    if(order_status_history_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_status_history_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_status_history_item->id) {
        free(order_status_history_item->id);
        order_status_history_item->id = NULL;
    }
    if (order_status_history_item->name) {
        free(order_status_history_item->name);
        order_status_history_item->name = NULL;
    }
    if (order_status_history_item->modified_time) {
        a2_c_date_time_free(order_status_history_item->modified_time);
        order_status_history_item->modified_time = NULL;
    }
    if (order_status_history_item->comment) {
        free(order_status_history_item->comment);
        order_status_history_item->comment = NULL;
    }
    if (order_status_history_item->additional_fields) {
        object_free(order_status_history_item->additional_fields);
        order_status_history_item->additional_fields = NULL;
    }
    if (order_status_history_item->custom_fields) {
        object_free(order_status_history_item->custom_fields);
        order_status_history_item->custom_fields = NULL;
    }
    free(order_status_history_item);
}

cJSON *order_status_history_item_convertToJSON(order_status_history_item_t *order_status_history_item) {
    cJSON *item = cJSON_CreateObject();

    // order_status_history_item->id
    if(order_status_history_item->id) {
    if(cJSON_AddStringToObject(item, "id", order_status_history_item->id) == NULL) {
    goto fail; //String
    }
    }


    // order_status_history_item->name
    if(order_status_history_item->name) {
    if(cJSON_AddStringToObject(item, "name", order_status_history_item->name) == NULL) {
    goto fail; //String
    }
    }


    // order_status_history_item->modified_time
    if(order_status_history_item->modified_time) {
    cJSON *modified_time_local_JSON = a2_c_date_time_convertToJSON(order_status_history_item->modified_time);
    if(modified_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_time", modified_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_status_history_item->notify
    if(order_status_history_item->notify) {
    if(cJSON_AddBoolToObject(item, "notify", order_status_history_item->notify) == NULL) {
    goto fail; //Bool
    }
    }


    // order_status_history_item->comment
    if(order_status_history_item->comment) {
    if(cJSON_AddStringToObject(item, "comment", order_status_history_item->comment) == NULL) {
    goto fail; //String
    }
    }


    // order_status_history_item->additional_fields
    if(order_status_history_item->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_status_history_item->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_status_history_item->custom_fields
    if(order_status_history_item->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_status_history_item->custom_fields);
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

order_status_history_item_t *order_status_history_item_parseFromJSON(cJSON *order_status_history_itemJSON){

    order_status_history_item_t *order_status_history_item_local_var = NULL;

    // define the local variable for order_status_history_item->modified_time
    a2_c_date_time_t *modified_time_local_nonprim = NULL;

    // order_status_history_item->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_status_history_itemJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // order_status_history_item->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_status_history_itemJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // order_status_history_item->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(order_status_history_itemJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    modified_time_local_nonprim = a2_c_date_time_parseFromJSON(modified_time); //nonprimitive
    }

    // order_status_history_item->notify
    cJSON *notify = cJSON_GetObjectItemCaseSensitive(order_status_history_itemJSON, "notify");
    if (cJSON_IsNull(notify)) {
        notify = NULL;
    }
    if (notify) { 
    if(!cJSON_IsBool(notify))
    {
    goto end; //Bool
    }
    }

    // order_status_history_item->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(order_status_history_itemJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // order_status_history_item->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_status_history_itemJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_status_history_item->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_status_history_itemJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_status_history_item_local_var = order_status_history_item_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        modified_time ? modified_time_local_nonprim : NULL,
        notify ? notify->valueint : 0,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_status_history_item_local_var;
end:
    if (modified_time_local_nonprim) {
        a2_c_date_time_free(modified_time_local_nonprim);
        modified_time_local_nonprim = NULL;
    }
    return NULL;

}
