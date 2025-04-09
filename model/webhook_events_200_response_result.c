#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_events_200_response_result.h"



static webhook_events_200_response_result_t *webhook_events_200_response_result_create_internal(
    list_t *events
    ) {
    webhook_events_200_response_result_t *webhook_events_200_response_result_local_var = malloc(sizeof(webhook_events_200_response_result_t));
    if (!webhook_events_200_response_result_local_var) {
        return NULL;
    }
    webhook_events_200_response_result_local_var->events = events;

    webhook_events_200_response_result_local_var->_library_owned = 1;
    return webhook_events_200_response_result_local_var;
}

__attribute__((deprecated)) webhook_events_200_response_result_t *webhook_events_200_response_result_create(
    list_t *events
    ) {
    return webhook_events_200_response_result_create_internal (
        events
        );
}

void webhook_events_200_response_result_free(webhook_events_200_response_result_t *webhook_events_200_response_result) {
    if(NULL == webhook_events_200_response_result){
        return ;
    }
    if(webhook_events_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_events_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_events_200_response_result->events) {
        list_ForEach(listEntry, webhook_events_200_response_result->events) {
            webhook_events_200_response_result_events_inner_free(listEntry->data);
        }
        list_freeList(webhook_events_200_response_result->events);
        webhook_events_200_response_result->events = NULL;
    }
    free(webhook_events_200_response_result);
}

cJSON *webhook_events_200_response_result_convertToJSON(webhook_events_200_response_result_t *webhook_events_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // webhook_events_200_response_result->events
    if(webhook_events_200_response_result->events) {
    cJSON *events = cJSON_AddArrayToObject(item, "events");
    if(events == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *eventsListEntry;
    if (webhook_events_200_response_result->events) {
    list_ForEach(eventsListEntry, webhook_events_200_response_result->events) {
    cJSON *itemLocal = webhook_events_200_response_result_events_inner_convertToJSON(eventsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(events, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_events_200_response_result_t *webhook_events_200_response_result_parseFromJSON(cJSON *webhook_events_200_response_resultJSON){

    webhook_events_200_response_result_t *webhook_events_200_response_result_local_var = NULL;

    // define the local list for webhook_events_200_response_result->events
    list_t *eventsList = NULL;

    // webhook_events_200_response_result->events
    cJSON *events = cJSON_GetObjectItemCaseSensitive(webhook_events_200_response_resultJSON, "events");
    if (cJSON_IsNull(events)) {
        events = NULL;
    }
    if (events) { 
    cJSON *events_local_nonprimitive = NULL;
    if(!cJSON_IsArray(events)){
        goto end; //nonprimitive container
    }

    eventsList = list_createList();

    cJSON_ArrayForEach(events_local_nonprimitive,events )
    {
        if(!cJSON_IsObject(events_local_nonprimitive)){
            goto end;
        }
        webhook_events_200_response_result_events_inner_t *eventsItem = webhook_events_200_response_result_events_inner_parseFromJSON(events_local_nonprimitive);

        list_addElement(eventsList, eventsItem);
    }
    }


    webhook_events_200_response_result_local_var = webhook_events_200_response_result_create_internal (
        events ? eventsList : NULL
        );

    return webhook_events_200_response_result_local_var;
end:
    if (eventsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, eventsList) {
            webhook_events_200_response_result_events_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(eventsList);
        eventsList = NULL;
    }
    return NULL;

}
