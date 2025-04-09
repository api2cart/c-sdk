#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_subscriber_list_result.h"



static response_subscriber_list_result_t *response_subscriber_list_result_create_internal(
    int total_count,
    list_t *subscribers,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_subscriber_list_result_t *response_subscriber_list_result_local_var = malloc(sizeof(response_subscriber_list_result_t));
    if (!response_subscriber_list_result_local_var) {
        return NULL;
    }
    response_subscriber_list_result_local_var->total_count = total_count;
    response_subscriber_list_result_local_var->subscribers = subscribers;
    response_subscriber_list_result_local_var->additional_fields = additional_fields;
    response_subscriber_list_result_local_var->custom_fields = custom_fields;

    response_subscriber_list_result_local_var->_library_owned = 1;
    return response_subscriber_list_result_local_var;
}

__attribute__((deprecated)) response_subscriber_list_result_t *response_subscriber_list_result_create(
    int total_count,
    list_t *subscribers,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_subscriber_list_result_create_internal (
        total_count,
        subscribers,
        additional_fields,
        custom_fields
        );
}

void response_subscriber_list_result_free(response_subscriber_list_result_t *response_subscriber_list_result) {
    if(NULL == response_subscriber_list_result){
        return ;
    }
    if(response_subscriber_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_subscriber_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_subscriber_list_result->subscribers) {
        list_ForEach(listEntry, response_subscriber_list_result->subscribers) {
            subscriber_free(listEntry->data);
        }
        list_freeList(response_subscriber_list_result->subscribers);
        response_subscriber_list_result->subscribers = NULL;
    }
    if (response_subscriber_list_result->additional_fields) {
        object_free(response_subscriber_list_result->additional_fields);
        response_subscriber_list_result->additional_fields = NULL;
    }
    if (response_subscriber_list_result->custom_fields) {
        object_free(response_subscriber_list_result->custom_fields);
        response_subscriber_list_result->custom_fields = NULL;
    }
    free(response_subscriber_list_result);
}

cJSON *response_subscriber_list_result_convertToJSON(response_subscriber_list_result_t *response_subscriber_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_subscriber_list_result->total_count
    if(response_subscriber_list_result->total_count) {
    if(cJSON_AddNumberToObject(item, "total_count", response_subscriber_list_result->total_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_subscriber_list_result->subscribers
    if(response_subscriber_list_result->subscribers) {
    cJSON *subscribers = cJSON_AddArrayToObject(item, "subscribers");
    if(subscribers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *subscribersListEntry;
    if (response_subscriber_list_result->subscribers) {
    list_ForEach(subscribersListEntry, response_subscriber_list_result->subscribers) {
    cJSON *itemLocal = subscriber_convertToJSON(subscribersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(subscribers, itemLocal);
    }
    }
    }


    // response_subscriber_list_result->additional_fields
    if(response_subscriber_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_subscriber_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_subscriber_list_result->custom_fields
    if(response_subscriber_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_subscriber_list_result->custom_fields);
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

response_subscriber_list_result_t *response_subscriber_list_result_parseFromJSON(cJSON *response_subscriber_list_resultJSON){

    response_subscriber_list_result_t *response_subscriber_list_result_local_var = NULL;

    // define the local list for response_subscriber_list_result->subscribers
    list_t *subscribersList = NULL;

    // response_subscriber_list_result->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(response_subscriber_list_resultJSON, "total_count");
    if (cJSON_IsNull(total_count)) {
        total_count = NULL;
    }
    if (total_count) { 
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }
    }

    // response_subscriber_list_result->subscribers
    cJSON *subscribers = cJSON_GetObjectItemCaseSensitive(response_subscriber_list_resultJSON, "subscribers");
    if (cJSON_IsNull(subscribers)) {
        subscribers = NULL;
    }
    if (subscribers) { 
    cJSON *subscribers_local_nonprimitive = NULL;
    if(!cJSON_IsArray(subscribers)){
        goto end; //nonprimitive container
    }

    subscribersList = list_createList();

    cJSON_ArrayForEach(subscribers_local_nonprimitive,subscribers )
    {
        if(!cJSON_IsObject(subscribers_local_nonprimitive)){
            goto end;
        }
        subscriber_t *subscribersItem = subscriber_parseFromJSON(subscribers_local_nonprimitive);

        list_addElement(subscribersList, subscribersItem);
    }
    }

    // response_subscriber_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_subscriber_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_subscriber_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_subscriber_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_subscriber_list_result_local_var = response_subscriber_list_result_create_internal (
        total_count ? total_count->valuedouble : 0,
        subscribers ? subscribersList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_subscriber_list_result_local_var;
end:
    if (subscribersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, subscribersList) {
            subscriber_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(subscribersList);
        subscribersList = NULL;
    }
    return NULL;

}
