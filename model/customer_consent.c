#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_consent.h"



static customer_consent_t *customer_consent_create_internal(
    char *id,
    char *type,
    char *status,
    char *source,
    char *opt_in_level,
    char *modified_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    customer_consent_t *customer_consent_local_var = malloc(sizeof(customer_consent_t));
    if (!customer_consent_local_var) {
        return NULL;
    }
    customer_consent_local_var->id = id;
    customer_consent_local_var->type = type;
    customer_consent_local_var->status = status;
    customer_consent_local_var->source = source;
    customer_consent_local_var->opt_in_level = opt_in_level;
    customer_consent_local_var->modified_time = modified_time;
    customer_consent_local_var->additional_fields = additional_fields;
    customer_consent_local_var->custom_fields = custom_fields;

    customer_consent_local_var->_library_owned = 1;
    return customer_consent_local_var;
}

__attribute__((deprecated)) customer_consent_t *customer_consent_create(
    char *id,
    char *type,
    char *status,
    char *source,
    char *opt_in_level,
    char *modified_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return customer_consent_create_internal (
        id,
        type,
        status,
        source,
        opt_in_level,
        modified_time,
        additional_fields,
        custom_fields
        );
}

void customer_consent_free(customer_consent_t *customer_consent) {
    if(NULL == customer_consent){
        return ;
    }
    if(customer_consent->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_consent_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_consent->id) {
        free(customer_consent->id);
        customer_consent->id = NULL;
    }
    if (customer_consent->type) {
        free(customer_consent->type);
        customer_consent->type = NULL;
    }
    if (customer_consent->status) {
        free(customer_consent->status);
        customer_consent->status = NULL;
    }
    if (customer_consent->source) {
        free(customer_consent->source);
        customer_consent->source = NULL;
    }
    if (customer_consent->opt_in_level) {
        free(customer_consent->opt_in_level);
        customer_consent->opt_in_level = NULL;
    }
    if (customer_consent->modified_time) {
        free(customer_consent->modified_time);
        customer_consent->modified_time = NULL;
    }
    if (customer_consent->additional_fields) {
        object_free(customer_consent->additional_fields);
        customer_consent->additional_fields = NULL;
    }
    if (customer_consent->custom_fields) {
        object_free(customer_consent->custom_fields);
        customer_consent->custom_fields = NULL;
    }
    free(customer_consent);
}

cJSON *customer_consent_convertToJSON(customer_consent_t *customer_consent) {
    cJSON *item = cJSON_CreateObject();

    // customer_consent->id
    if(customer_consent->id) {
    if(cJSON_AddStringToObject(item, "id", customer_consent->id) == NULL) {
    goto fail; //String
    }
    }


    // customer_consent->type
    if(customer_consent->type) {
    if(cJSON_AddStringToObject(item, "type", customer_consent->type) == NULL) {
    goto fail; //String
    }
    }


    // customer_consent->status
    if(customer_consent->status) {
    if(cJSON_AddStringToObject(item, "status", customer_consent->status) == NULL) {
    goto fail; //String
    }
    }


    // customer_consent->source
    if(customer_consent->source) {
    if(cJSON_AddStringToObject(item, "source", customer_consent->source) == NULL) {
    goto fail; //String
    }
    }


    // customer_consent->opt_in_level
    if(customer_consent->opt_in_level) {
    if(cJSON_AddStringToObject(item, "opt_in_level", customer_consent->opt_in_level) == NULL) {
    goto fail; //String
    }
    }


    // customer_consent->modified_time
    if(customer_consent->modified_time) {
    if(cJSON_AddStringToObject(item, "modified_time", customer_consent->modified_time) == NULL) {
    goto fail; //String
    }
    }


    // customer_consent->additional_fields
    if(customer_consent->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(customer_consent->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_consent->custom_fields
    if(customer_consent->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(customer_consent->custom_fields);
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

customer_consent_t *customer_consent_parseFromJSON(cJSON *customer_consentJSON){

    customer_consent_t *customer_consent_local_var = NULL;

    // customer_consent->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customer_consentJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // customer_consent->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(customer_consentJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // customer_consent->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(customer_consentJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // customer_consent->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(customer_consentJSON, "source");
    if (cJSON_IsNull(source)) {
        source = NULL;
    }
    if (source) { 
    if(!cJSON_IsString(source) && !cJSON_IsNull(source))
    {
    goto end; //String
    }
    }

    // customer_consent->opt_in_level
    cJSON *opt_in_level = cJSON_GetObjectItemCaseSensitive(customer_consentJSON, "opt_in_level");
    if (cJSON_IsNull(opt_in_level)) {
        opt_in_level = NULL;
    }
    if (opt_in_level) { 
    if(!cJSON_IsString(opt_in_level) && !cJSON_IsNull(opt_in_level))
    {
    goto end; //String
    }
    }

    // customer_consent->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(customer_consentJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    if(!cJSON_IsString(modified_time) && !cJSON_IsNull(modified_time))
    {
    goto end; //String
    }
    }

    // customer_consent->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(customer_consentJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // customer_consent->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(customer_consentJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    customer_consent_local_var = customer_consent_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        source && !cJSON_IsNull(source) ? strdup(source->valuestring) : NULL,
        opt_in_level && !cJSON_IsNull(opt_in_level) ? strdup(opt_in_level->valuestring) : NULL,
        modified_time && !cJSON_IsNull(modified_time) ? strdup(modified_time->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return customer_consent_local_var;
end:
    return NULL;

}
