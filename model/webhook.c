#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook.h"



static webhook_t *webhook_create_internal(
    int id,
    char *label,
    char *store_id,
    char *lang_id,
    int active,
    char *callback,
    char *fields,
    char *created_at,
    char *updated_at,
    char *entity,
    char *action,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    webhook_t *webhook_local_var = malloc(sizeof(webhook_t));
    if (!webhook_local_var) {
        return NULL;
    }
    webhook_local_var->id = id;
    webhook_local_var->label = label;
    webhook_local_var->store_id = store_id;
    webhook_local_var->lang_id = lang_id;
    webhook_local_var->active = active;
    webhook_local_var->callback = callback;
    webhook_local_var->fields = fields;
    webhook_local_var->created_at = created_at;
    webhook_local_var->updated_at = updated_at;
    webhook_local_var->entity = entity;
    webhook_local_var->action = action;
    webhook_local_var->additional_fields = additional_fields;
    webhook_local_var->custom_fields = custom_fields;

    webhook_local_var->_library_owned = 1;
    return webhook_local_var;
}

__attribute__((deprecated)) webhook_t *webhook_create(
    int id,
    char *label,
    char *store_id,
    char *lang_id,
    int active,
    char *callback,
    char *fields,
    char *created_at,
    char *updated_at,
    char *entity,
    char *action,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return webhook_create_internal (
        id,
        label,
        store_id,
        lang_id,
        active,
        callback,
        fields,
        created_at,
        updated_at,
        entity,
        action,
        additional_fields,
        custom_fields
        );
}

void webhook_free(webhook_t *webhook) {
    if(NULL == webhook){
        return ;
    }
    if(webhook->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook->label) {
        free(webhook->label);
        webhook->label = NULL;
    }
    if (webhook->store_id) {
        free(webhook->store_id);
        webhook->store_id = NULL;
    }
    if (webhook->lang_id) {
        free(webhook->lang_id);
        webhook->lang_id = NULL;
    }
    if (webhook->callback) {
        free(webhook->callback);
        webhook->callback = NULL;
    }
    if (webhook->fields) {
        free(webhook->fields);
        webhook->fields = NULL;
    }
    if (webhook->created_at) {
        free(webhook->created_at);
        webhook->created_at = NULL;
    }
    if (webhook->updated_at) {
        free(webhook->updated_at);
        webhook->updated_at = NULL;
    }
    if (webhook->entity) {
        free(webhook->entity);
        webhook->entity = NULL;
    }
    if (webhook->action) {
        free(webhook->action);
        webhook->action = NULL;
    }
    if (webhook->additional_fields) {
        object_free(webhook->additional_fields);
        webhook->additional_fields = NULL;
    }
    if (webhook->custom_fields) {
        object_free(webhook->custom_fields);
        webhook->custom_fields = NULL;
    }
    free(webhook);
}

cJSON *webhook_convertToJSON(webhook_t *webhook) {
    cJSON *item = cJSON_CreateObject();

    // webhook->id
    if(webhook->id) {
    if(cJSON_AddNumberToObject(item, "id", webhook->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook->label
    if(webhook->label) {
    if(cJSON_AddStringToObject(item, "label", webhook->label) == NULL) {
    goto fail; //String
    }
    }


    // webhook->store_id
    if(webhook->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", webhook->store_id) == NULL) {
    goto fail; //String
    }
    }


    // webhook->lang_id
    if(webhook->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", webhook->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // webhook->active
    if(webhook->active) {
    if(cJSON_AddBoolToObject(item, "active", webhook->active) == NULL) {
    goto fail; //Bool
    }
    }


    // webhook->callback
    if(webhook->callback) {
    if(cJSON_AddStringToObject(item, "callback", webhook->callback) == NULL) {
    goto fail; //String
    }
    }


    // webhook->fields
    if(webhook->fields) {
    if(cJSON_AddStringToObject(item, "fields", webhook->fields) == NULL) {
    goto fail; //String
    }
    }


    // webhook->created_at
    if(webhook->created_at) {
    if(cJSON_AddStringToObject(item, "created_at", webhook->created_at) == NULL) {
    goto fail; //String
    }
    }


    // webhook->updated_at
    if(webhook->updated_at) {
    if(cJSON_AddStringToObject(item, "updated_at", webhook->updated_at) == NULL) {
    goto fail; //String
    }
    }


    // webhook->entity
    if(webhook->entity) {
    if(cJSON_AddStringToObject(item, "entity", webhook->entity) == NULL) {
    goto fail; //String
    }
    }


    // webhook->action
    if(webhook->action) {
    if(cJSON_AddStringToObject(item, "action", webhook->action) == NULL) {
    goto fail; //String
    }
    }


    // webhook->additional_fields
    if(webhook->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(webhook->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // webhook->custom_fields
    if(webhook->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(webhook->custom_fields);
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

webhook_t *webhook_parseFromJSON(cJSON *webhookJSON){

    webhook_t *webhook_local_var = NULL;

    // webhook->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(webhookJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // webhook->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(webhookJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // webhook->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(webhookJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // webhook->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(webhookJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // webhook->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(webhookJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }
    }

    // webhook->callback
    cJSON *callback = cJSON_GetObjectItemCaseSensitive(webhookJSON, "callback");
    if (cJSON_IsNull(callback)) {
        callback = NULL;
    }
    if (callback) { 
    if(!cJSON_IsString(callback) && !cJSON_IsNull(callback))
    {
    goto end; //String
    }
    }

    // webhook->fields
    cJSON *fields = cJSON_GetObjectItemCaseSensitive(webhookJSON, "fields");
    if (cJSON_IsNull(fields)) {
        fields = NULL;
    }
    if (fields) { 
    if(!cJSON_IsString(fields) && !cJSON_IsNull(fields))
    {
    goto end; //String
    }
    }

    // webhook->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(webhookJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    if(!cJSON_IsString(created_at) && !cJSON_IsNull(created_at))
    {
    goto end; //String
    }
    }

    // webhook->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(webhookJSON, "updated_at");
    if (cJSON_IsNull(updated_at)) {
        updated_at = NULL;
    }
    if (updated_at) { 
    if(!cJSON_IsString(updated_at) && !cJSON_IsNull(updated_at))
    {
    goto end; //String
    }
    }

    // webhook->entity
    cJSON *entity = cJSON_GetObjectItemCaseSensitive(webhookJSON, "entity");
    if (cJSON_IsNull(entity)) {
        entity = NULL;
    }
    if (entity) { 
    if(!cJSON_IsString(entity) && !cJSON_IsNull(entity))
    {
    goto end; //String
    }
    }

    // webhook->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(webhookJSON, "action");
    if (cJSON_IsNull(action)) {
        action = NULL;
    }
    if (action) { 
    if(!cJSON_IsString(action) && !cJSON_IsNull(action))
    {
    goto end; //String
    }
    }

    // webhook->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(webhookJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // webhook->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(webhookJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    webhook_local_var = webhook_create_internal (
        id ? id->valuedouble : 0,
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        active ? active->valueint : 0,
        callback && !cJSON_IsNull(callback) ? strdup(callback->valuestring) : NULL,
        fields && !cJSON_IsNull(fields) ? strdup(fields->valuestring) : NULL,
        created_at && !cJSON_IsNull(created_at) ? strdup(created_at->valuestring) : NULL,
        updated_at && !cJSON_IsNull(updated_at) ? strdup(updated_at->valuestring) : NULL,
        entity && !cJSON_IsNull(entity) ? strdup(entity->valuestring) : NULL,
        action && !cJSON_IsNull(action) ? strdup(action->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return webhook_local_var;
end:
    return NULL;

}
