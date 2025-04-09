#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_events_200_response_result_events_inner.h"



static webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner_create_internal(
    char *webhook_name,
    char *entity,
    char *action
    ) {
    webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner_local_var = malloc(sizeof(webhook_events_200_response_result_events_inner_t));
    if (!webhook_events_200_response_result_events_inner_local_var) {
        return NULL;
    }
    webhook_events_200_response_result_events_inner_local_var->webhook_name = webhook_name;
    webhook_events_200_response_result_events_inner_local_var->entity = entity;
    webhook_events_200_response_result_events_inner_local_var->action = action;

    webhook_events_200_response_result_events_inner_local_var->_library_owned = 1;
    return webhook_events_200_response_result_events_inner_local_var;
}

__attribute__((deprecated)) webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner_create(
    char *webhook_name,
    char *entity,
    char *action
    ) {
    return webhook_events_200_response_result_events_inner_create_internal (
        webhook_name,
        entity,
        action
        );
}

void webhook_events_200_response_result_events_inner_free(webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner) {
    if(NULL == webhook_events_200_response_result_events_inner){
        return ;
    }
    if(webhook_events_200_response_result_events_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_events_200_response_result_events_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_events_200_response_result_events_inner->webhook_name) {
        free(webhook_events_200_response_result_events_inner->webhook_name);
        webhook_events_200_response_result_events_inner->webhook_name = NULL;
    }
    if (webhook_events_200_response_result_events_inner->entity) {
        free(webhook_events_200_response_result_events_inner->entity);
        webhook_events_200_response_result_events_inner->entity = NULL;
    }
    if (webhook_events_200_response_result_events_inner->action) {
        free(webhook_events_200_response_result_events_inner->action);
        webhook_events_200_response_result_events_inner->action = NULL;
    }
    free(webhook_events_200_response_result_events_inner);
}

cJSON *webhook_events_200_response_result_events_inner_convertToJSON(webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner) {
    cJSON *item = cJSON_CreateObject();

    // webhook_events_200_response_result_events_inner->webhook_name
    if(webhook_events_200_response_result_events_inner->webhook_name) {
    if(cJSON_AddStringToObject(item, "webhook_name", webhook_events_200_response_result_events_inner->webhook_name) == NULL) {
    goto fail; //String
    }
    }


    // webhook_events_200_response_result_events_inner->entity
    if(webhook_events_200_response_result_events_inner->entity) {
    if(cJSON_AddStringToObject(item, "entity", webhook_events_200_response_result_events_inner->entity) == NULL) {
    goto fail; //String
    }
    }


    // webhook_events_200_response_result_events_inner->action
    if(webhook_events_200_response_result_events_inner->action) {
    if(cJSON_AddStringToObject(item, "action", webhook_events_200_response_result_events_inner->action) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner_parseFromJSON(cJSON *webhook_events_200_response_result_events_innerJSON){

    webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner_local_var = NULL;

    // webhook_events_200_response_result_events_inner->webhook_name
    cJSON *webhook_name = cJSON_GetObjectItemCaseSensitive(webhook_events_200_response_result_events_innerJSON, "webhook_name");
    if (cJSON_IsNull(webhook_name)) {
        webhook_name = NULL;
    }
    if (webhook_name) { 
    if(!cJSON_IsString(webhook_name) && !cJSON_IsNull(webhook_name))
    {
    goto end; //String
    }
    }

    // webhook_events_200_response_result_events_inner->entity
    cJSON *entity = cJSON_GetObjectItemCaseSensitive(webhook_events_200_response_result_events_innerJSON, "entity");
    if (cJSON_IsNull(entity)) {
        entity = NULL;
    }
    if (entity) { 
    if(!cJSON_IsString(entity) && !cJSON_IsNull(entity))
    {
    goto end; //String
    }
    }

    // webhook_events_200_response_result_events_inner->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(webhook_events_200_response_result_events_innerJSON, "action");
    if (cJSON_IsNull(action)) {
        action = NULL;
    }
    if (action) { 
    if(!cJSON_IsString(action) && !cJSON_IsNull(action))
    {
    goto end; //String
    }
    }


    webhook_events_200_response_result_events_inner_local_var = webhook_events_200_response_result_events_inner_create_internal (
        webhook_name && !cJSON_IsNull(webhook_name) ? strdup(webhook_name->valuestring) : NULL,
        entity && !cJSON_IsNull(entity) ? strdup(entity->valuestring) : NULL,
        action && !cJSON_IsNull(action) ? strdup(action->valuestring) : NULL
        );

    return webhook_events_200_response_result_events_inner_local_var;
end:
    return NULL;

}
