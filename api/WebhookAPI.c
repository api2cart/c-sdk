#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "WebhookAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// webhook.count
//
// Count registered webhooks on the store.
//
webhook_count_200_response_t*
WebhookAPI_webhookCount(apiClient_t *apiClient, char *entity, char *action, int *active)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/webhook.count.json");





    // query parameters
    char *keyQuery_entity = NULL;
    char * valueQuery_entity = NULL;
    keyValuePair_t *keyPairQuery_entity = 0;
    if (entity)
    {
        keyQuery_entity = strdup("entity");
        valueQuery_entity = strdup((entity));
        keyPairQuery_entity = keyValuePair_create(keyQuery_entity, valueQuery_entity);
        list_addElement(localVarQueryParameters,keyPairQuery_entity);
    }

    // query parameters
    char *keyQuery_action = NULL;
    char * valueQuery_action = NULL;
    keyValuePair_t *keyPairQuery_action = 0;
    if (action)
    {
        keyQuery_action = strdup("action");
        valueQuery_action = strdup((action));
        keyPairQuery_action = keyValuePair_create(keyQuery_action, valueQuery_action);
        list_addElement(localVarQueryParameters,keyPairQuery_action);
    }

    // query parameters
    char *keyQuery_active = NULL;
    char * valueQuery_active = NULL;
    keyValuePair_t *keyPairQuery_active = 0;
    if (active)
    {
        keyQuery_active = strdup("active");
        valueQuery_active = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_active, MAX_NUMBER_LENGTH, "%d", *active);
        keyPairQuery_active = keyValuePair_create(keyQuery_active, valueQuery_active);
        list_addElement(localVarQueryParameters,keyPairQuery_active);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    webhook_count_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *WebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = webhook_count_200_response_parseFromJSON(WebhookAPIlocalVarJSON);
        cJSON_Delete(WebhookAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_entity){
        free(keyQuery_entity);
        keyQuery_entity = NULL;
    }
    if(valueQuery_entity){
        free(valueQuery_entity);
        valueQuery_entity = NULL;
    }
    if(keyPairQuery_entity){
        keyValuePair_free(keyPairQuery_entity);
        keyPairQuery_entity = NULL;
    }
    if(keyQuery_action){
        free(keyQuery_action);
        keyQuery_action = NULL;
    }
    if(valueQuery_action){
        free(valueQuery_action);
        valueQuery_action = NULL;
    }
    if(keyPairQuery_action){
        keyValuePair_free(keyPairQuery_action);
        keyPairQuery_action = NULL;
    }
    if(keyQuery_active){
        free(keyQuery_active);
        keyQuery_active = NULL;
    }
    if(valueQuery_active){
        free(valueQuery_active);
        valueQuery_active = NULL;
    }
    if(keyPairQuery_active){
        keyValuePair_free(keyPairQuery_active);
        keyPairQuery_active = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// webhook.create
//
// Create webhook on the store and subscribe to it.
//
basket_live_shipping_service_create_200_response_t*
WebhookAPI_webhookCreate(apiClient_t *apiClient, char *entity, char *action, char *callback, char *label, char *fields, int *active, char *lang_id, char *store_id)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/webhook.create.json");





    // query parameters
    char *keyQuery_entity = NULL;
    char * valueQuery_entity = NULL;
    keyValuePair_t *keyPairQuery_entity = 0;
    if (entity)
    {
        keyQuery_entity = strdup("entity");
        valueQuery_entity = strdup((entity));
        keyPairQuery_entity = keyValuePair_create(keyQuery_entity, valueQuery_entity);
        list_addElement(localVarQueryParameters,keyPairQuery_entity);
    }

    // query parameters
    char *keyQuery_action = NULL;
    char * valueQuery_action = NULL;
    keyValuePair_t *keyPairQuery_action = 0;
    if (action)
    {
        keyQuery_action = strdup("action");
        valueQuery_action = strdup((action));
        keyPairQuery_action = keyValuePair_create(keyQuery_action, valueQuery_action);
        list_addElement(localVarQueryParameters,keyPairQuery_action);
    }

    // query parameters
    char *keyQuery_callback = NULL;
    char * valueQuery_callback = NULL;
    keyValuePair_t *keyPairQuery_callback = 0;
    if (callback)
    {
        keyQuery_callback = strdup("callback");
        valueQuery_callback = strdup((callback));
        keyPairQuery_callback = keyValuePair_create(keyQuery_callback, valueQuery_callback);
        list_addElement(localVarQueryParameters,keyPairQuery_callback);
    }

    // query parameters
    char *keyQuery_label = NULL;
    char * valueQuery_label = NULL;
    keyValuePair_t *keyPairQuery_label = 0;
    if (label)
    {
        keyQuery_label = strdup("label");
        valueQuery_label = strdup((label));
        keyPairQuery_label = keyValuePair_create(keyQuery_label, valueQuery_label);
        list_addElement(localVarQueryParameters,keyPairQuery_label);
    }

    // query parameters
    char *keyQuery_fields = NULL;
    char * valueQuery_fields = NULL;
    keyValuePair_t *keyPairQuery_fields = 0;
    if (fields)
    {
        keyQuery_fields = strdup("fields");
        valueQuery_fields = strdup((fields));
        keyPairQuery_fields = keyValuePair_create(keyQuery_fields, valueQuery_fields);
        list_addElement(localVarQueryParameters,keyPairQuery_fields);
    }

    // query parameters
    char *keyQuery_active = NULL;
    char * valueQuery_active = NULL;
    keyValuePair_t *keyPairQuery_active = 0;
    if (active)
    {
        keyQuery_active = strdup("active");
        valueQuery_active = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_active, MAX_NUMBER_LENGTH, "%d", *active);
        keyPairQuery_active = keyValuePair_create(keyQuery_active, valueQuery_active);
        list_addElement(localVarQueryParameters,keyPairQuery_active);
    }

    // query parameters
    char *keyQuery_lang_id = NULL;
    char * valueQuery_lang_id = NULL;
    keyValuePair_t *keyPairQuery_lang_id = 0;
    if (lang_id)
    {
        keyQuery_lang_id = strdup("lang_id");
        valueQuery_lang_id = strdup((lang_id));
        keyPairQuery_lang_id = keyValuePair_create(keyQuery_lang_id, valueQuery_lang_id);
        list_addElement(localVarQueryParameters,keyPairQuery_lang_id);
    }

    // query parameters
    char *keyQuery_store_id = NULL;
    char * valueQuery_store_id = NULL;
    keyValuePair_t *keyPairQuery_store_id = 0;
    if (store_id)
    {
        keyQuery_store_id = strdup("store_id");
        valueQuery_store_id = strdup((store_id));
        keyPairQuery_store_id = keyValuePair_create(keyQuery_store_id, valueQuery_store_id);
        list_addElement(localVarQueryParameters,keyPairQuery_store_id);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    basket_live_shipping_service_create_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *WebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = basket_live_shipping_service_create_200_response_parseFromJSON(WebhookAPIlocalVarJSON);
        cJSON_Delete(WebhookAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_entity){
        free(keyQuery_entity);
        keyQuery_entity = NULL;
    }
    if(valueQuery_entity){
        free(valueQuery_entity);
        valueQuery_entity = NULL;
    }
    if(keyPairQuery_entity){
        keyValuePair_free(keyPairQuery_entity);
        keyPairQuery_entity = NULL;
    }
    if(keyQuery_action){
        free(keyQuery_action);
        keyQuery_action = NULL;
    }
    if(valueQuery_action){
        free(valueQuery_action);
        valueQuery_action = NULL;
    }
    if(keyPairQuery_action){
        keyValuePair_free(keyPairQuery_action);
        keyPairQuery_action = NULL;
    }
    if(keyQuery_callback){
        free(keyQuery_callback);
        keyQuery_callback = NULL;
    }
    if(valueQuery_callback){
        free(valueQuery_callback);
        valueQuery_callback = NULL;
    }
    if(keyPairQuery_callback){
        keyValuePair_free(keyPairQuery_callback);
        keyPairQuery_callback = NULL;
    }
    if(keyQuery_label){
        free(keyQuery_label);
        keyQuery_label = NULL;
    }
    if(valueQuery_label){
        free(valueQuery_label);
        valueQuery_label = NULL;
    }
    if(keyPairQuery_label){
        keyValuePair_free(keyPairQuery_label);
        keyPairQuery_label = NULL;
    }
    if(keyQuery_fields){
        free(keyQuery_fields);
        keyQuery_fields = NULL;
    }
    if(valueQuery_fields){
        free(valueQuery_fields);
        valueQuery_fields = NULL;
    }
    if(keyPairQuery_fields){
        keyValuePair_free(keyPairQuery_fields);
        keyPairQuery_fields = NULL;
    }
    if(keyQuery_active){
        free(keyQuery_active);
        keyQuery_active = NULL;
    }
    if(valueQuery_active){
        free(valueQuery_active);
        valueQuery_active = NULL;
    }
    if(keyPairQuery_active){
        keyValuePair_free(keyPairQuery_active);
        keyPairQuery_active = NULL;
    }
    if(keyQuery_lang_id){
        free(keyQuery_lang_id);
        keyQuery_lang_id = NULL;
    }
    if(valueQuery_lang_id){
        free(valueQuery_lang_id);
        valueQuery_lang_id = NULL;
    }
    if(keyPairQuery_lang_id){
        keyValuePair_free(keyPairQuery_lang_id);
        keyPairQuery_lang_id = NULL;
    }
    if(keyQuery_store_id){
        free(keyQuery_store_id);
        keyQuery_store_id = NULL;
    }
    if(valueQuery_store_id){
        free(valueQuery_store_id);
        valueQuery_store_id = NULL;
    }
    if(keyPairQuery_store_id){
        keyValuePair_free(keyPairQuery_store_id);
        keyPairQuery_store_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// webhook.delete
//
// Delete registered webhook on the store.
//
attribute_delete_200_response_t*
WebhookAPI_webhookDelete(apiClient_t *apiClient, char *id)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/webhook.delete.json");





    // query parameters
    char *keyQuery_id = NULL;
    char * valueQuery_id = NULL;
    keyValuePair_t *keyPairQuery_id = 0;
    if (id)
    {
        keyQuery_id = strdup("id");
        valueQuery_id = strdup((id));
        keyPairQuery_id = keyValuePair_create(keyQuery_id, valueQuery_id);
        list_addElement(localVarQueryParameters,keyPairQuery_id);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *WebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(WebhookAPIlocalVarJSON);
        cJSON_Delete(WebhookAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_id){
        free(keyQuery_id);
        keyQuery_id = NULL;
    }
    if(valueQuery_id){
        free(valueQuery_id);
        valueQuery_id = NULL;
    }
    if(keyPairQuery_id){
        keyValuePair_free(keyPairQuery_id);
        keyPairQuery_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// webhook.events
//
// List all Webhooks that are available on this store.
//
webhook_events_200_response_t*
WebhookAPI_webhookEvents(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/webhook.events.json");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    webhook_events_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *WebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = webhook_events_200_response_parseFromJSON(WebhookAPIlocalVarJSON);
        cJSON_Delete(WebhookAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// webhook.list
//
// List registered webhook on the store.
//
webhook_list_200_response_t*
WebhookAPI_webhookList(apiClient_t *apiClient, int *start, int *count, char *entity, char *action, int *active, char *ids, char *params)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/webhook.list.json");





    // query parameters
    char *keyQuery_start = NULL;
    char * valueQuery_start = NULL;
    keyValuePair_t *keyPairQuery_start = 0;
    if (start)
    {
        keyQuery_start = strdup("start");
        valueQuery_start = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_start, MAX_NUMBER_LENGTH, "%d", *start);
        keyPairQuery_start = keyValuePair_create(keyQuery_start, valueQuery_start);
        list_addElement(localVarQueryParameters,keyPairQuery_start);
    }

    // query parameters
    char *keyQuery_count = NULL;
    char * valueQuery_count = NULL;
    keyValuePair_t *keyPairQuery_count = 0;
    if (count)
    {
        keyQuery_count = strdup("count");
        valueQuery_count = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_count, MAX_NUMBER_LENGTH, "%d", *count);
        keyPairQuery_count = keyValuePair_create(keyQuery_count, valueQuery_count);
        list_addElement(localVarQueryParameters,keyPairQuery_count);
    }

    // query parameters
    char *keyQuery_entity = NULL;
    char * valueQuery_entity = NULL;
    keyValuePair_t *keyPairQuery_entity = 0;
    if (entity)
    {
        keyQuery_entity = strdup("entity");
        valueQuery_entity = strdup((entity));
        keyPairQuery_entity = keyValuePair_create(keyQuery_entity, valueQuery_entity);
        list_addElement(localVarQueryParameters,keyPairQuery_entity);
    }

    // query parameters
    char *keyQuery_action = NULL;
    char * valueQuery_action = NULL;
    keyValuePair_t *keyPairQuery_action = 0;
    if (action)
    {
        keyQuery_action = strdup("action");
        valueQuery_action = strdup((action));
        keyPairQuery_action = keyValuePair_create(keyQuery_action, valueQuery_action);
        list_addElement(localVarQueryParameters,keyPairQuery_action);
    }

    // query parameters
    char *keyQuery_active = NULL;
    char * valueQuery_active = NULL;
    keyValuePair_t *keyPairQuery_active = 0;
    if (active)
    {
        keyQuery_active = strdup("active");
        valueQuery_active = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_active, MAX_NUMBER_LENGTH, "%d", *active);
        keyPairQuery_active = keyValuePair_create(keyQuery_active, valueQuery_active);
        list_addElement(localVarQueryParameters,keyPairQuery_active);
    }

    // query parameters
    char *keyQuery_ids = NULL;
    char * valueQuery_ids = NULL;
    keyValuePair_t *keyPairQuery_ids = 0;
    if (ids)
    {
        keyQuery_ids = strdup("ids");
        valueQuery_ids = strdup((ids));
        keyPairQuery_ids = keyValuePair_create(keyQuery_ids, valueQuery_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_ids);
    }

    // query parameters
    char *keyQuery_params = NULL;
    char * valueQuery_params = NULL;
    keyValuePair_t *keyPairQuery_params = 0;
    if (params)
    {
        keyQuery_params = strdup("params");
        valueQuery_params = strdup((params));
        keyPairQuery_params = keyValuePair_create(keyQuery_params, valueQuery_params);
        list_addElement(localVarQueryParameters,keyPairQuery_params);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    webhook_list_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *WebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = webhook_list_200_response_parseFromJSON(WebhookAPIlocalVarJSON);
        cJSON_Delete(WebhookAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_start){
        free(keyQuery_start);
        keyQuery_start = NULL;
    }
    if(valueQuery_start){
        free(valueQuery_start);
        valueQuery_start = NULL;
    }
    if(keyPairQuery_start){
        keyValuePair_free(keyPairQuery_start);
        keyPairQuery_start = NULL;
    }
    if(keyQuery_count){
        free(keyQuery_count);
        keyQuery_count = NULL;
    }
    if(valueQuery_count){
        free(valueQuery_count);
        valueQuery_count = NULL;
    }
    if(keyPairQuery_count){
        keyValuePair_free(keyPairQuery_count);
        keyPairQuery_count = NULL;
    }
    if(keyQuery_entity){
        free(keyQuery_entity);
        keyQuery_entity = NULL;
    }
    if(valueQuery_entity){
        free(valueQuery_entity);
        valueQuery_entity = NULL;
    }
    if(keyPairQuery_entity){
        keyValuePair_free(keyPairQuery_entity);
        keyPairQuery_entity = NULL;
    }
    if(keyQuery_action){
        free(keyQuery_action);
        keyQuery_action = NULL;
    }
    if(valueQuery_action){
        free(valueQuery_action);
        valueQuery_action = NULL;
    }
    if(keyPairQuery_action){
        keyValuePair_free(keyPairQuery_action);
        keyPairQuery_action = NULL;
    }
    if(keyQuery_active){
        free(keyQuery_active);
        keyQuery_active = NULL;
    }
    if(valueQuery_active){
        free(valueQuery_active);
        valueQuery_active = NULL;
    }
    if(keyPairQuery_active){
        keyValuePair_free(keyPairQuery_active);
        keyPairQuery_active = NULL;
    }
    if(keyQuery_ids){
        free(keyQuery_ids);
        keyQuery_ids = NULL;
    }
    if(valueQuery_ids){
        free(valueQuery_ids);
        valueQuery_ids = NULL;
    }
    if(keyPairQuery_ids){
        keyValuePair_free(keyPairQuery_ids);
        keyPairQuery_ids = NULL;
    }
    if(keyQuery_params){
        free(keyQuery_params);
        keyQuery_params = NULL;
    }
    if(valueQuery_params){
        free(valueQuery_params);
        valueQuery_params = NULL;
    }
    if(keyPairQuery_params){
        keyValuePair_free(keyPairQuery_params);
        keyPairQuery_params = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// webhook.update
//
// Update Webhooks parameters.
//
product_image_update_200_response_t*
WebhookAPI_webhookUpdate(apiClient_t *apiClient, char *id, char *callback, char *label, char *fields, int *active, char *lang_id)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/webhook.update.json");





    // query parameters
    char *keyQuery_id = NULL;
    char * valueQuery_id = NULL;
    keyValuePair_t *keyPairQuery_id = 0;
    if (id)
    {
        keyQuery_id = strdup("id");
        valueQuery_id = strdup((id));
        keyPairQuery_id = keyValuePair_create(keyQuery_id, valueQuery_id);
        list_addElement(localVarQueryParameters,keyPairQuery_id);
    }

    // query parameters
    char *keyQuery_callback = NULL;
    char * valueQuery_callback = NULL;
    keyValuePair_t *keyPairQuery_callback = 0;
    if (callback)
    {
        keyQuery_callback = strdup("callback");
        valueQuery_callback = strdup((callback));
        keyPairQuery_callback = keyValuePair_create(keyQuery_callback, valueQuery_callback);
        list_addElement(localVarQueryParameters,keyPairQuery_callback);
    }

    // query parameters
    char *keyQuery_label = NULL;
    char * valueQuery_label = NULL;
    keyValuePair_t *keyPairQuery_label = 0;
    if (label)
    {
        keyQuery_label = strdup("label");
        valueQuery_label = strdup((label));
        keyPairQuery_label = keyValuePair_create(keyQuery_label, valueQuery_label);
        list_addElement(localVarQueryParameters,keyPairQuery_label);
    }

    // query parameters
    char *keyQuery_fields = NULL;
    char * valueQuery_fields = NULL;
    keyValuePair_t *keyPairQuery_fields = 0;
    if (fields)
    {
        keyQuery_fields = strdup("fields");
        valueQuery_fields = strdup((fields));
        keyPairQuery_fields = keyValuePair_create(keyQuery_fields, valueQuery_fields);
        list_addElement(localVarQueryParameters,keyPairQuery_fields);
    }

    // query parameters
    char *keyQuery_active = NULL;
    char * valueQuery_active = NULL;
    keyValuePair_t *keyPairQuery_active = 0;
    if (active)
    {
        keyQuery_active = strdup("active");
        valueQuery_active = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_active, MAX_NUMBER_LENGTH, "%d", *active);
        keyPairQuery_active = keyValuePair_create(keyQuery_active, valueQuery_active);
        list_addElement(localVarQueryParameters,keyPairQuery_active);
    }

    // query parameters
    char *keyQuery_lang_id = NULL;
    char * valueQuery_lang_id = NULL;
    keyValuePair_t *keyPairQuery_lang_id = 0;
    if (lang_id)
    {
        keyQuery_lang_id = strdup("lang_id");
        valueQuery_lang_id = strdup((lang_id));
        keyPairQuery_lang_id = keyValuePair_create(keyQuery_lang_id, valueQuery_lang_id);
        list_addElement(localVarQueryParameters,keyPairQuery_lang_id);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    product_image_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *WebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_image_update_200_response_parseFromJSON(WebhookAPIlocalVarJSON);
        cJSON_Delete(WebhookAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_id){
        free(keyQuery_id);
        keyQuery_id = NULL;
    }
    if(valueQuery_id){
        free(valueQuery_id);
        valueQuery_id = NULL;
    }
    if(keyPairQuery_id){
        keyValuePair_free(keyPairQuery_id);
        keyPairQuery_id = NULL;
    }
    if(keyQuery_callback){
        free(keyQuery_callback);
        keyQuery_callback = NULL;
    }
    if(valueQuery_callback){
        free(valueQuery_callback);
        valueQuery_callback = NULL;
    }
    if(keyPairQuery_callback){
        keyValuePair_free(keyPairQuery_callback);
        keyPairQuery_callback = NULL;
    }
    if(keyQuery_label){
        free(keyQuery_label);
        keyQuery_label = NULL;
    }
    if(valueQuery_label){
        free(valueQuery_label);
        valueQuery_label = NULL;
    }
    if(keyPairQuery_label){
        keyValuePair_free(keyPairQuery_label);
        keyPairQuery_label = NULL;
    }
    if(keyQuery_fields){
        free(keyQuery_fields);
        keyQuery_fields = NULL;
    }
    if(valueQuery_fields){
        free(valueQuery_fields);
        valueQuery_fields = NULL;
    }
    if(keyPairQuery_fields){
        keyValuePair_free(keyPairQuery_fields);
        keyPairQuery_fields = NULL;
    }
    if(keyQuery_active){
        free(keyQuery_active);
        keyQuery_active = NULL;
    }
    if(valueQuery_active){
        free(valueQuery_active);
        valueQuery_active = NULL;
    }
    if(keyPairQuery_active){
        keyValuePair_free(keyPairQuery_active);
        keyPairQuery_active = NULL;
    }
    if(keyQuery_lang_id){
        free(keyQuery_lang_id);
        keyQuery_lang_id = NULL;
    }
    if(valueQuery_lang_id){
        free(valueQuery_lang_id);
        valueQuery_lang_id = NULL;
    }
    if(keyPairQuery_lang_id){
        keyValuePair_free(keyPairQuery_lang_id);
        keyPairQuery_lang_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

