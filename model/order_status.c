#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_status.h"



static order_status_t *order_status_create_internal(
    char *id,
    char *name,
    list_t *history,
    order_status_refund_t *refund_info,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_status_t *order_status_local_var = malloc(sizeof(order_status_t));
    if (!order_status_local_var) {
        return NULL;
    }
    order_status_local_var->id = id;
    order_status_local_var->name = name;
    order_status_local_var->history = history;
    order_status_local_var->refund_info = refund_info;
    order_status_local_var->additional_fields = additional_fields;
    order_status_local_var->custom_fields = custom_fields;

    order_status_local_var->_library_owned = 1;
    return order_status_local_var;
}

__attribute__((deprecated)) order_status_t *order_status_create(
    char *id,
    char *name,
    list_t *history,
    order_status_refund_t *refund_info,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_status_create_internal (
        id,
        name,
        history,
        refund_info,
        additional_fields,
        custom_fields
        );
}

void order_status_free(order_status_t *order_status) {
    if(NULL == order_status){
        return ;
    }
    if(order_status->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_status_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_status->id) {
        free(order_status->id);
        order_status->id = NULL;
    }
    if (order_status->name) {
        free(order_status->name);
        order_status->name = NULL;
    }
    if (order_status->history) {
        list_ForEach(listEntry, order_status->history) {
            order_status_history_item_free(listEntry->data);
        }
        list_freeList(order_status->history);
        order_status->history = NULL;
    }
    if (order_status->refund_info) {
        order_status_refund_free(order_status->refund_info);
        order_status->refund_info = NULL;
    }
    if (order_status->additional_fields) {
        object_free(order_status->additional_fields);
        order_status->additional_fields = NULL;
    }
    if (order_status->custom_fields) {
        object_free(order_status->custom_fields);
        order_status->custom_fields = NULL;
    }
    free(order_status);
}

cJSON *order_status_convertToJSON(order_status_t *order_status) {
    cJSON *item = cJSON_CreateObject();

    // order_status->id
    if(order_status->id) {
    if(cJSON_AddStringToObject(item, "id", order_status->id) == NULL) {
    goto fail; //String
    }
    }


    // order_status->name
    if(order_status->name) {
    if(cJSON_AddStringToObject(item, "name", order_status->name) == NULL) {
    goto fail; //String
    }
    }


    // order_status->history
    if(order_status->history) {
    cJSON *history = cJSON_AddArrayToObject(item, "history");
    if(history == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *historyListEntry;
    if (order_status->history) {
    list_ForEach(historyListEntry, order_status->history) {
    cJSON *itemLocal = order_status_history_item_convertToJSON(historyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(history, itemLocal);
    }
    }
    }


    // order_status->refund_info
    if(order_status->refund_info) {
    cJSON *refund_info_local_JSON = order_status_refund_convertToJSON(order_status->refund_info);
    if(refund_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "refund_info", refund_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_status->additional_fields
    if(order_status->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_status->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_status->custom_fields
    if(order_status->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_status->custom_fields);
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

order_status_t *order_status_parseFromJSON(cJSON *order_statusJSON){

    order_status_t *order_status_local_var = NULL;

    // define the local list for order_status->history
    list_t *historyList = NULL;

    // define the local variable for order_status->refund_info
    order_status_refund_t *refund_info_local_nonprim = NULL;

    // order_status->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_statusJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // order_status->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_statusJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // order_status->history
    cJSON *history = cJSON_GetObjectItemCaseSensitive(order_statusJSON, "history");
    if (cJSON_IsNull(history)) {
        history = NULL;
    }
    if (history) { 
    cJSON *history_local_nonprimitive = NULL;
    if(!cJSON_IsArray(history)){
        goto end; //nonprimitive container
    }

    historyList = list_createList();

    cJSON_ArrayForEach(history_local_nonprimitive,history )
    {
        if(!cJSON_IsObject(history_local_nonprimitive)){
            goto end;
        }
        order_status_history_item_t *historyItem = order_status_history_item_parseFromJSON(history_local_nonprimitive);

        list_addElement(historyList, historyItem);
    }
    }

    // order_status->refund_info
    cJSON *refund_info = cJSON_GetObjectItemCaseSensitive(order_statusJSON, "refund_info");
    if (cJSON_IsNull(refund_info)) {
        refund_info = NULL;
    }
    if (refund_info) { 
    refund_info_local_nonprim = order_status_refund_parseFromJSON(refund_info); //nonprimitive
    }

    // order_status->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_statusJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_status->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_statusJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_status_local_var = order_status_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        history ? historyList : NULL,
        refund_info ? refund_info_local_nonprim : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_status_local_var;
end:
    if (historyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, historyList) {
            order_status_history_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(historyList);
        historyList = NULL;
    }
    if (refund_info_local_nonprim) {
        order_status_refund_free(refund_info_local_nonprim);
        refund_info_local_nonprim = NULL;
    }
    return NULL;

}
