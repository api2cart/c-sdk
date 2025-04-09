#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "TaxAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// tax.class.info
//
// Use this method to get information about a tax class and its rates. It allows you to calculate the tax percentage for a specific customer's address. This information contains relatively static data that rarely changes, so API2Cart may cache certain data to reduce the load on the store and speed up request execution. We also recommend that you cache the response of this method on your side to save requests. If you need to clear the cache for a specific store, use the cart.validate method.
//
model_response_tax_class_info_t*
TaxAPI_taxClassInfo(apiClient_t *apiClient, char *tax_class_id, char *store_id, char *lang_id, char *params, char *response_fields, char *exclude)
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
    char *localVarPath = strdup("/tax.class.info.json");





    // query parameters
    char *keyQuery_tax_class_id = NULL;
    char * valueQuery_tax_class_id = NULL;
    keyValuePair_t *keyPairQuery_tax_class_id = 0;
    if (tax_class_id)
    {
        keyQuery_tax_class_id = strdup("tax_class_id");
        valueQuery_tax_class_id = strdup((tax_class_id));
        keyPairQuery_tax_class_id = keyValuePair_create(keyQuery_tax_class_id, valueQuery_tax_class_id);
        list_addElement(localVarQueryParameters,keyPairQuery_tax_class_id);
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

    // query parameters
    char *keyQuery_response_fields = NULL;
    char * valueQuery_response_fields = NULL;
    keyValuePair_t *keyPairQuery_response_fields = 0;
    if (response_fields)
    {
        keyQuery_response_fields = strdup("response_fields");
        valueQuery_response_fields = strdup((response_fields));
        keyPairQuery_response_fields = keyValuePair_create(keyQuery_response_fields, valueQuery_response_fields);
        list_addElement(localVarQueryParameters,keyPairQuery_response_fields);
    }

    // query parameters
    char *keyQuery_exclude = NULL;
    char * valueQuery_exclude = NULL;
    keyValuePair_t *keyPairQuery_exclude = 0;
    if (exclude)
    {
        keyQuery_exclude = strdup("exclude");
        valueQuery_exclude = strdup((exclude));
        keyPairQuery_exclude = keyValuePair_create(keyQuery_exclude, valueQuery_exclude);
        list_addElement(localVarQueryParameters,keyPairQuery_exclude);
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
    model_response_tax_class_info_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TaxAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_tax_class_info_parseFromJSON(TaxAPIlocalVarJSON);
        cJSON_Delete(TaxAPIlocalVarJSON);
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
    if(keyQuery_tax_class_id){
        free(keyQuery_tax_class_id);
        keyQuery_tax_class_id = NULL;
    }
    if(valueQuery_tax_class_id){
        free(valueQuery_tax_class_id);
        valueQuery_tax_class_id = NULL;
    }
    if(keyPairQuery_tax_class_id){
        keyValuePair_free(keyPairQuery_tax_class_id);
        keyPairQuery_tax_class_id = NULL;
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
    if(keyQuery_response_fields){
        free(keyQuery_response_fields);
        keyQuery_response_fields = NULL;
    }
    if(valueQuery_response_fields){
        free(valueQuery_response_fields);
        valueQuery_response_fields = NULL;
    }
    if(keyPairQuery_response_fields){
        keyValuePair_free(keyPairQuery_response_fields);
        keyPairQuery_response_fields = NULL;
    }
    if(keyQuery_exclude){
        free(keyQuery_exclude);
        keyQuery_exclude = NULL;
    }
    if(valueQuery_exclude){
        free(valueQuery_exclude);
        valueQuery_exclude = NULL;
    }
    if(keyPairQuery_exclude){
        keyValuePair_free(keyPairQuery_exclude);
        keyPairQuery_exclude = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// tax.class.list
//
// Get list of tax classes from your store.
//
model_response_tax_class_list_t*
TaxAPI_taxClassList(apiClient_t *apiClient, char *created_to, char *created_from, char *modified_to, char *modified_from, char *find_value, char *find_where, char *store_id, int *count, char *page_cursor, char *response_fields)
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
    char *localVarPath = strdup("/tax.class.list.json");





    // query parameters
    char *keyQuery_created_to = NULL;
    char * valueQuery_created_to = NULL;
    keyValuePair_t *keyPairQuery_created_to = 0;
    if (created_to)
    {
        keyQuery_created_to = strdup("created_to");
        valueQuery_created_to = strdup((created_to));
        keyPairQuery_created_to = keyValuePair_create(keyQuery_created_to, valueQuery_created_to);
        list_addElement(localVarQueryParameters,keyPairQuery_created_to);
    }

    // query parameters
    char *keyQuery_created_from = NULL;
    char * valueQuery_created_from = NULL;
    keyValuePair_t *keyPairQuery_created_from = 0;
    if (created_from)
    {
        keyQuery_created_from = strdup("created_from");
        valueQuery_created_from = strdup((created_from));
        keyPairQuery_created_from = keyValuePair_create(keyQuery_created_from, valueQuery_created_from);
        list_addElement(localVarQueryParameters,keyPairQuery_created_from);
    }

    // query parameters
    char *keyQuery_modified_to = NULL;
    char * valueQuery_modified_to = NULL;
    keyValuePair_t *keyPairQuery_modified_to = 0;
    if (modified_to)
    {
        keyQuery_modified_to = strdup("modified_to");
        valueQuery_modified_to = strdup((modified_to));
        keyPairQuery_modified_to = keyValuePair_create(keyQuery_modified_to, valueQuery_modified_to);
        list_addElement(localVarQueryParameters,keyPairQuery_modified_to);
    }

    // query parameters
    char *keyQuery_modified_from = NULL;
    char * valueQuery_modified_from = NULL;
    keyValuePair_t *keyPairQuery_modified_from = 0;
    if (modified_from)
    {
        keyQuery_modified_from = strdup("modified_from");
        valueQuery_modified_from = strdup((modified_from));
        keyPairQuery_modified_from = keyValuePair_create(keyQuery_modified_from, valueQuery_modified_from);
        list_addElement(localVarQueryParameters,keyPairQuery_modified_from);
    }

    // query parameters
    char *keyQuery_find_value = NULL;
    char * valueQuery_find_value = NULL;
    keyValuePair_t *keyPairQuery_find_value = 0;
    if (find_value)
    {
        keyQuery_find_value = strdup("find_value");
        valueQuery_find_value = strdup((find_value));
        keyPairQuery_find_value = keyValuePair_create(keyQuery_find_value, valueQuery_find_value);
        list_addElement(localVarQueryParameters,keyPairQuery_find_value);
    }

    // query parameters
    char *keyQuery_find_where = NULL;
    char * valueQuery_find_where = NULL;
    keyValuePair_t *keyPairQuery_find_where = 0;
    if (find_where)
    {
        keyQuery_find_where = strdup("find_where");
        valueQuery_find_where = strdup((find_where));
        keyPairQuery_find_where = keyValuePair_create(keyQuery_find_where, valueQuery_find_where);
        list_addElement(localVarQueryParameters,keyPairQuery_find_where);
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
    char *keyQuery_page_cursor = NULL;
    char * valueQuery_page_cursor = NULL;
    keyValuePair_t *keyPairQuery_page_cursor = 0;
    if (page_cursor)
    {
        keyQuery_page_cursor = strdup("page_cursor");
        valueQuery_page_cursor = strdup((page_cursor));
        keyPairQuery_page_cursor = keyValuePair_create(keyQuery_page_cursor, valueQuery_page_cursor);
        list_addElement(localVarQueryParameters,keyPairQuery_page_cursor);
    }

    // query parameters
    char *keyQuery_response_fields = NULL;
    char * valueQuery_response_fields = NULL;
    keyValuePair_t *keyPairQuery_response_fields = 0;
    if (response_fields)
    {
        keyQuery_response_fields = strdup("response_fields");
        valueQuery_response_fields = strdup((response_fields));
        keyPairQuery_response_fields = keyValuePair_create(keyQuery_response_fields, valueQuery_response_fields);
        list_addElement(localVarQueryParameters,keyPairQuery_response_fields);
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
    model_response_tax_class_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *TaxAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_tax_class_list_parseFromJSON(TaxAPIlocalVarJSON);
        cJSON_Delete(TaxAPIlocalVarJSON);
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
    if(keyQuery_created_to){
        free(keyQuery_created_to);
        keyQuery_created_to = NULL;
    }
    if(valueQuery_created_to){
        free(valueQuery_created_to);
        valueQuery_created_to = NULL;
    }
    if(keyPairQuery_created_to){
        keyValuePair_free(keyPairQuery_created_to);
        keyPairQuery_created_to = NULL;
    }
    if(keyQuery_created_from){
        free(keyQuery_created_from);
        keyQuery_created_from = NULL;
    }
    if(valueQuery_created_from){
        free(valueQuery_created_from);
        valueQuery_created_from = NULL;
    }
    if(keyPairQuery_created_from){
        keyValuePair_free(keyPairQuery_created_from);
        keyPairQuery_created_from = NULL;
    }
    if(keyQuery_modified_to){
        free(keyQuery_modified_to);
        keyQuery_modified_to = NULL;
    }
    if(valueQuery_modified_to){
        free(valueQuery_modified_to);
        valueQuery_modified_to = NULL;
    }
    if(keyPairQuery_modified_to){
        keyValuePair_free(keyPairQuery_modified_to);
        keyPairQuery_modified_to = NULL;
    }
    if(keyQuery_modified_from){
        free(keyQuery_modified_from);
        keyQuery_modified_from = NULL;
    }
    if(valueQuery_modified_from){
        free(valueQuery_modified_from);
        valueQuery_modified_from = NULL;
    }
    if(keyPairQuery_modified_from){
        keyValuePair_free(keyPairQuery_modified_from);
        keyPairQuery_modified_from = NULL;
    }
    if(keyQuery_find_value){
        free(keyQuery_find_value);
        keyQuery_find_value = NULL;
    }
    if(valueQuery_find_value){
        free(valueQuery_find_value);
        valueQuery_find_value = NULL;
    }
    if(keyPairQuery_find_value){
        keyValuePair_free(keyPairQuery_find_value);
        keyPairQuery_find_value = NULL;
    }
    if(keyQuery_find_where){
        free(keyQuery_find_where);
        keyQuery_find_where = NULL;
    }
    if(valueQuery_find_where){
        free(valueQuery_find_where);
        valueQuery_find_where = NULL;
    }
    if(keyPairQuery_find_where){
        keyValuePair_free(keyPairQuery_find_where);
        keyPairQuery_find_where = NULL;
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
    if(keyQuery_page_cursor){
        free(keyQuery_page_cursor);
        keyQuery_page_cursor = NULL;
    }
    if(valueQuery_page_cursor){
        free(valueQuery_page_cursor);
        valueQuery_page_cursor = NULL;
    }
    if(keyPairQuery_page_cursor){
        keyValuePair_free(keyPairQuery_page_cursor);
        keyPairQuery_page_cursor = NULL;
    }
    if(keyQuery_response_fields){
        free(keyQuery_response_fields);
        keyQuery_response_fields = NULL;
    }
    if(valueQuery_response_fields){
        free(valueQuery_response_fields);
        valueQuery_response_fields = NULL;
    }
    if(keyPairQuery_response_fields){
        keyValuePair_free(keyPairQuery_response_fields);
        keyPairQuery_response_fields = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

