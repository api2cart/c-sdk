#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CustomerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// customer.add
//
// Add customer into store.
//
customer_add_200_response_t*
CustomerAPI_customerAdd(apiClient_t *apiClient, customer_add_t *customer_add)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/customer.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_customer_add = NULL;
    if (customer_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_customer_add = customer_add_convertToJSON(customer_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_customer_add);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
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
    customer_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = customer_add_200_response_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_customer_add) {
        cJSON_Delete(localVarSingleItemJSON_customer_add);
        localVarSingleItemJSON_customer_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// customer.address.add
//
// Add customer address.
//
attribute_add_200_response_t*
CustomerAPI_customerAddressAdd(apiClient_t *apiClient, customer_address_add_t *customer_address_add)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/customer.address.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_customer_address_add = NULL;
    if (customer_address_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_customer_address_add = customer_address_add_convertToJSON(customer_address_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_customer_address_add);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
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
    attribute_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_add_200_response_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_customer_address_add) {
        cJSON_Delete(localVarSingleItemJSON_customer_address_add);
        localVarSingleItemJSON_customer_address_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// customer.attribute.list
//
// Get attributes for specific customer
//
model_response_customer_attribute_list_t*
CustomerAPI_customerAttributeList(apiClient_t *apiClient, char *customer_id, int *count, char *page_cursor, char *store_id, char *lang_id, char *params, char *exclude, char *response_fields)
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
    char *localVarPath = strdup("/customer.attribute.list.json");





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
    char *keyQuery_customer_id = NULL;
    char * valueQuery_customer_id = NULL;
    keyValuePair_t *keyPairQuery_customer_id = 0;
    if (customer_id)
    {
        keyQuery_customer_id = strdup("customer_id");
        valueQuery_customer_id = strdup((customer_id));
        keyPairQuery_customer_id = keyValuePair_create(keyQuery_customer_id, valueQuery_customer_id);
        list_addElement(localVarQueryParameters,keyPairQuery_customer_id);
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
    model_response_customer_attribute_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_customer_attribute_list_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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
    if(keyQuery_customer_id){
        free(keyQuery_customer_id);
        keyQuery_customer_id = NULL;
    }
    if(valueQuery_customer_id){
        free(valueQuery_customer_id);
        valueQuery_customer_id = NULL;
    }
    if(keyPairQuery_customer_id){
        keyValuePair_free(keyPairQuery_customer_id);
        keyPairQuery_customer_id = NULL;
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

// customer.count
//
// Get number of customers from store.
//
customer_count_200_response_t*
CustomerAPI_customerCount(apiClient_t *apiClient, char *group_id, char *created_from, char *created_to, char *modified_from, char *modified_to, char *store_id, char *customer_list_id, int *avail, char *find_value, char *find_where, char *ids, char *since_id)
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
    char *localVarPath = strdup("/customer.count.json");





    // query parameters
    char *keyQuery_group_id = NULL;
    char * valueQuery_group_id = NULL;
    keyValuePair_t *keyPairQuery_group_id = 0;
    if (group_id)
    {
        keyQuery_group_id = strdup("group_id");
        valueQuery_group_id = strdup((group_id));
        keyPairQuery_group_id = keyValuePair_create(keyQuery_group_id, valueQuery_group_id);
        list_addElement(localVarQueryParameters,keyPairQuery_group_id);
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
    char *keyQuery_customer_list_id = NULL;
    char * valueQuery_customer_list_id = NULL;
    keyValuePair_t *keyPairQuery_customer_list_id = 0;
    if (customer_list_id)
    {
        keyQuery_customer_list_id = strdup("customer_list_id");
        valueQuery_customer_list_id = strdup((customer_list_id));
        keyPairQuery_customer_list_id = keyValuePair_create(keyQuery_customer_list_id, valueQuery_customer_list_id);
        list_addElement(localVarQueryParameters,keyPairQuery_customer_list_id);
    }

    // query parameters
    char *keyQuery_avail = NULL;
    char * valueQuery_avail = NULL;
    keyValuePair_t *keyPairQuery_avail = 0;
    if (avail)
    {
        keyQuery_avail = strdup("avail");
        valueQuery_avail = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_avail, MAX_NUMBER_LENGTH, "%d", *avail);
        keyPairQuery_avail = keyValuePair_create(keyQuery_avail, valueQuery_avail);
        list_addElement(localVarQueryParameters,keyPairQuery_avail);
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
    char *keyQuery_since_id = NULL;
    char * valueQuery_since_id = NULL;
    keyValuePair_t *keyPairQuery_since_id = 0;
    if (since_id)
    {
        keyQuery_since_id = strdup("since_id");
        valueQuery_since_id = strdup((since_id));
        keyPairQuery_since_id = keyValuePair_create(keyQuery_since_id, valueQuery_since_id);
        list_addElement(localVarQueryParameters,keyPairQuery_since_id);
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
    customer_count_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = customer_count_200_response_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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
    if(keyQuery_group_id){
        free(keyQuery_group_id);
        keyQuery_group_id = NULL;
    }
    if(valueQuery_group_id){
        free(valueQuery_group_id);
        valueQuery_group_id = NULL;
    }
    if(keyPairQuery_group_id){
        keyValuePair_free(keyPairQuery_group_id);
        keyPairQuery_group_id = NULL;
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
    if(keyQuery_customer_list_id){
        free(keyQuery_customer_list_id);
        keyQuery_customer_list_id = NULL;
    }
    if(valueQuery_customer_list_id){
        free(valueQuery_customer_list_id);
        valueQuery_customer_list_id = NULL;
    }
    if(keyPairQuery_customer_list_id){
        keyValuePair_free(keyPairQuery_customer_list_id);
        keyPairQuery_customer_list_id = NULL;
    }
    if(keyQuery_avail){
        free(keyQuery_avail);
        keyQuery_avail = NULL;
    }
    if(valueQuery_avail){
        free(valueQuery_avail);
        valueQuery_avail = NULL;
    }
    if(keyPairQuery_avail){
        keyValuePair_free(keyPairQuery_avail);
        keyPairQuery_avail = NULL;
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
    if(keyQuery_since_id){
        free(keyQuery_since_id);
        keyQuery_since_id = NULL;
    }
    if(valueQuery_since_id){
        free(valueQuery_since_id);
        valueQuery_since_id = NULL;
    }
    if(keyPairQuery_since_id){
        keyValuePair_free(keyPairQuery_since_id);
        keyPairQuery_since_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// customer.delete
//
// Delete customer from store.
//
customer_delete_200_response_t*
CustomerAPI_customerDelete(apiClient_t *apiClient, char *id)
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
    char *localVarPath = strdup("/customer.delete.json");





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
    customer_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = customer_delete_200_response_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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

// customer.find
//
// Find customers in store.
//
customer_find_200_response_t*
CustomerAPI_customerFind(apiClient_t *apiClient, char *find_value, char *find_where, char *find_params, char *store_id)
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
    char *localVarPath = strdup("/customer.find.json");





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
    char *keyQuery_find_params = NULL;
    char * valueQuery_find_params = NULL;
    keyValuePair_t *keyPairQuery_find_params = 0;
    if (find_params)
    {
        keyQuery_find_params = strdup("find_params");
        valueQuery_find_params = strdup((find_params));
        keyPairQuery_find_params = keyValuePair_create(keyQuery_find_params, valueQuery_find_params);
        list_addElement(localVarQueryParameters,keyPairQuery_find_params);
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
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    customer_find_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = customer_find_200_response_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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
    if(keyQuery_find_params){
        free(keyQuery_find_params);
        keyQuery_find_params = NULL;
    }
    if(valueQuery_find_params){
        free(valueQuery_find_params);
        valueQuery_find_params = NULL;
    }
    if(keyPairQuery_find_params){
        keyValuePair_free(keyPairQuery_find_params);
        keyPairQuery_find_params = NULL;
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

// customer.group.add
//
// Create customer group.
//
customer_group_add_200_response_t*
CustomerAPI_customerGroupAdd(apiClient_t *apiClient, char *name, char *store_id, char *stores_ids)
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
    char *localVarPath = strdup("/customer.group.add.json");





    // query parameters
    char *keyQuery_name = NULL;
    char * valueQuery_name = NULL;
    keyValuePair_t *keyPairQuery_name = 0;
    if (name)
    {
        keyQuery_name = strdup("name");
        valueQuery_name = strdup((name));
        keyPairQuery_name = keyValuePair_create(keyQuery_name, valueQuery_name);
        list_addElement(localVarQueryParameters,keyPairQuery_name);
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
    char *keyQuery_stores_ids = NULL;
    char * valueQuery_stores_ids = NULL;
    keyValuePair_t *keyPairQuery_stores_ids = 0;
    if (stores_ids)
    {
        keyQuery_stores_ids = strdup("stores_ids");
        valueQuery_stores_ids = strdup((stores_ids));
        keyPairQuery_stores_ids = keyValuePair_create(keyQuery_stores_ids, valueQuery_stores_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_stores_ids);
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
    customer_group_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = customer_group_add_200_response_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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
    if(keyQuery_name){
        free(keyQuery_name);
        keyQuery_name = NULL;
    }
    if(valueQuery_name){
        free(valueQuery_name);
        valueQuery_name = NULL;
    }
    if(keyPairQuery_name){
        keyValuePair_free(keyPairQuery_name);
        keyPairQuery_name = NULL;
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
    if(keyQuery_stores_ids){
        free(keyQuery_stores_ids);
        keyQuery_stores_ids = NULL;
    }
    if(valueQuery_stores_ids){
        free(valueQuery_stores_ids);
        valueQuery_stores_ids = NULL;
    }
    if(keyPairQuery_stores_ids){
        keyValuePair_free(keyPairQuery_stores_ids);
        keyPairQuery_stores_ids = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// customer.group.list
//
// Get list of customers groups.
//
model_response_customer_group_list_t*
CustomerAPI_customerGroupList(apiClient_t *apiClient, int *disable_cache, char *page_cursor, int *start, int *count, char *store_id, char *lang_id, char *group_ids, char *params, char *exclude, char *response_fields)
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
    char *localVarPath = strdup("/customer.group.list.json");





    // query parameters
    char *keyQuery_disable_cache = NULL;
    char * valueQuery_disable_cache = NULL;
    keyValuePair_t *keyPairQuery_disable_cache = 0;
    if (disable_cache)
    {
        keyQuery_disable_cache = strdup("disable_cache");
        valueQuery_disable_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_disable_cache, MAX_NUMBER_LENGTH, "%d", *disable_cache);
        keyPairQuery_disable_cache = keyValuePair_create(keyQuery_disable_cache, valueQuery_disable_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_disable_cache);
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
    char *keyQuery_group_ids = NULL;
    char * valueQuery_group_ids = NULL;
    keyValuePair_t *keyPairQuery_group_ids = 0;
    if (group_ids)
    {
        keyQuery_group_ids = strdup("group_ids");
        valueQuery_group_ids = strdup((group_ids));
        keyPairQuery_group_ids = keyValuePair_create(keyQuery_group_ids, valueQuery_group_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_group_ids);
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
    model_response_customer_group_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_customer_group_list_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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
    if(keyQuery_disable_cache){
        free(keyQuery_disable_cache);
        keyQuery_disable_cache = NULL;
    }
    if(valueQuery_disable_cache){
        free(valueQuery_disable_cache);
        valueQuery_disable_cache = NULL;
    }
    if(keyPairQuery_disable_cache){
        keyValuePair_free(keyPairQuery_disable_cache);
        keyPairQuery_disable_cache = NULL;
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
    if(keyQuery_group_ids){
        free(keyQuery_group_ids);
        keyQuery_group_ids = NULL;
    }
    if(valueQuery_group_ids){
        free(valueQuery_group_ids);
        valueQuery_group_ids = NULL;
    }
    if(keyPairQuery_group_ids){
        keyValuePair_free(keyPairQuery_group_ids);
        keyPairQuery_group_ids = NULL;
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

// customer.info
//
// Get customers' details from store.
//
customer_info_200_response_t*
CustomerAPI_customerInfo(apiClient_t *apiClient, char *id, char *params, char *response_fields, char *exclude, char *store_id)
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
    char *localVarPath = strdup("/customer.info.json");





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
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    customer_info_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = customer_info_200_response_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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

// customer.list
//
// Get list of customers from store.
//
model_response_customer_list_t*
CustomerAPI_customerList(apiClient_t *apiClient, char *page_cursor, int *start, int *count, char *created_from, char *created_to, char *modified_from, char *modified_to, char *params, char *response_fields, char *exclude, char *group_id, char *store_id, char *customer_list_id, int *avail, char *find_value, char *find_where, char *sort_by, char *sort_direction, char *ids, char *since_id)
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
    char *localVarPath = strdup("/customer.list.json");





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

    // query parameters
    char *keyQuery_group_id = NULL;
    char * valueQuery_group_id = NULL;
    keyValuePair_t *keyPairQuery_group_id = 0;
    if (group_id)
    {
        keyQuery_group_id = strdup("group_id");
        valueQuery_group_id = strdup((group_id));
        keyPairQuery_group_id = keyValuePair_create(keyQuery_group_id, valueQuery_group_id);
        list_addElement(localVarQueryParameters,keyPairQuery_group_id);
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
    char *keyQuery_customer_list_id = NULL;
    char * valueQuery_customer_list_id = NULL;
    keyValuePair_t *keyPairQuery_customer_list_id = 0;
    if (customer_list_id)
    {
        keyQuery_customer_list_id = strdup("customer_list_id");
        valueQuery_customer_list_id = strdup((customer_list_id));
        keyPairQuery_customer_list_id = keyValuePair_create(keyQuery_customer_list_id, valueQuery_customer_list_id);
        list_addElement(localVarQueryParameters,keyPairQuery_customer_list_id);
    }

    // query parameters
    char *keyQuery_avail = NULL;
    char * valueQuery_avail = NULL;
    keyValuePair_t *keyPairQuery_avail = 0;
    if (avail)
    {
        keyQuery_avail = strdup("avail");
        valueQuery_avail = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_avail, MAX_NUMBER_LENGTH, "%d", *avail);
        keyPairQuery_avail = keyValuePair_create(keyQuery_avail, valueQuery_avail);
        list_addElement(localVarQueryParameters,keyPairQuery_avail);
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
    char *keyQuery_sort_by = NULL;
    char * valueQuery_sort_by = NULL;
    keyValuePair_t *keyPairQuery_sort_by = 0;
    if (sort_by)
    {
        keyQuery_sort_by = strdup("sort_by");
        valueQuery_sort_by = strdup((sort_by));
        keyPairQuery_sort_by = keyValuePair_create(keyQuery_sort_by, valueQuery_sort_by);
        list_addElement(localVarQueryParameters,keyPairQuery_sort_by);
    }

    // query parameters
    char *keyQuery_sort_direction = NULL;
    char * valueQuery_sort_direction = NULL;
    keyValuePair_t *keyPairQuery_sort_direction = 0;
    if (sort_direction)
    {
        keyQuery_sort_direction = strdup("sort_direction");
        valueQuery_sort_direction = strdup((sort_direction));
        keyPairQuery_sort_direction = keyValuePair_create(keyQuery_sort_direction, valueQuery_sort_direction);
        list_addElement(localVarQueryParameters,keyPairQuery_sort_direction);
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
    char *keyQuery_since_id = NULL;
    char * valueQuery_since_id = NULL;
    keyValuePair_t *keyPairQuery_since_id = 0;
    if (since_id)
    {
        keyQuery_since_id = strdup("since_id");
        valueQuery_since_id = strdup((since_id));
        keyPairQuery_since_id = keyValuePair_create(keyQuery_since_id, valueQuery_since_id);
        list_addElement(localVarQueryParameters,keyPairQuery_since_id);
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
    model_response_customer_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_customer_list_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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
    if(keyQuery_group_id){
        free(keyQuery_group_id);
        keyQuery_group_id = NULL;
    }
    if(valueQuery_group_id){
        free(valueQuery_group_id);
        valueQuery_group_id = NULL;
    }
    if(keyPairQuery_group_id){
        keyValuePair_free(keyPairQuery_group_id);
        keyPairQuery_group_id = NULL;
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
    if(keyQuery_customer_list_id){
        free(keyQuery_customer_list_id);
        keyQuery_customer_list_id = NULL;
    }
    if(valueQuery_customer_list_id){
        free(valueQuery_customer_list_id);
        valueQuery_customer_list_id = NULL;
    }
    if(keyPairQuery_customer_list_id){
        keyValuePair_free(keyPairQuery_customer_list_id);
        keyPairQuery_customer_list_id = NULL;
    }
    if(keyQuery_avail){
        free(keyQuery_avail);
        keyQuery_avail = NULL;
    }
    if(valueQuery_avail){
        free(valueQuery_avail);
        valueQuery_avail = NULL;
    }
    if(keyPairQuery_avail){
        keyValuePair_free(keyPairQuery_avail);
        keyPairQuery_avail = NULL;
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
    if(keyQuery_sort_by){
        free(keyQuery_sort_by);
        keyQuery_sort_by = NULL;
    }
    if(valueQuery_sort_by){
        free(valueQuery_sort_by);
        valueQuery_sort_by = NULL;
    }
    if(keyPairQuery_sort_by){
        keyValuePair_free(keyPairQuery_sort_by);
        keyPairQuery_sort_by = NULL;
    }
    if(keyQuery_sort_direction){
        free(keyQuery_sort_direction);
        keyQuery_sort_direction = NULL;
    }
    if(valueQuery_sort_direction){
        free(valueQuery_sort_direction);
        valueQuery_sort_direction = NULL;
    }
    if(keyPairQuery_sort_direction){
        keyValuePair_free(keyPairQuery_sort_direction);
        keyPairQuery_sort_direction = NULL;
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
    if(keyQuery_since_id){
        free(keyQuery_since_id);
        keyQuery_since_id = NULL;
    }
    if(valueQuery_since_id){
        free(valueQuery_since_id);
        valueQuery_since_id = NULL;
    }
    if(keyPairQuery_since_id){
        keyValuePair_free(keyPairQuery_since_id);
        keyPairQuery_since_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// customer.update
//
// Update information of customer in store.
//
account_config_update_200_response_t*
CustomerAPI_customerUpdate(apiClient_t *apiClient, customer_update_t *customer_update)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/customer.update.json");





    // Body Param
    cJSON *localVarSingleItemJSON_customer_update = NULL;
    if (customer_update != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_customer_update = customer_update_convertToJSON(customer_update);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_customer_update);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
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
    account_config_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_customer_update) {
        cJSON_Delete(localVarSingleItemJSON_customer_update);
        localVarSingleItemJSON_customer_update = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// customer.wishlist.list
//
// Get a Wish List of customer from the store.
//
model_response_customer_wishlist_list_t*
CustomerAPI_customerWishlistList(apiClient_t *apiClient, char *customer_id, char *id, char *store_id, int *start, int *count, char *page_cursor, char *response_fields)
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
    char *localVarPath = strdup("/customer.wishlist.list.json");





    // query parameters
    char *keyQuery_customer_id = NULL;
    char * valueQuery_customer_id = NULL;
    keyValuePair_t *keyPairQuery_customer_id = 0;
    if (customer_id)
    {
        keyQuery_customer_id = strdup("customer_id");
        valueQuery_customer_id = strdup((customer_id));
        keyPairQuery_customer_id = keyValuePair_create(keyQuery_customer_id, valueQuery_customer_id);
        list_addElement(localVarQueryParameters,keyPairQuery_customer_id);
    }

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
    model_response_customer_wishlist_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_customer_wishlist_list_parseFromJSON(CustomerAPIlocalVarJSON);
        cJSON_Delete(CustomerAPIlocalVarJSON);
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
    if(keyQuery_customer_id){
        free(keyQuery_customer_id);
        keyQuery_customer_id = NULL;
    }
    if(valueQuery_customer_id){
        free(valueQuery_customer_id);
        valueQuery_customer_id = NULL;
    }
    if(keyPairQuery_customer_id){
        keyValuePair_free(keyPairQuery_customer_id);
        keyPairQuery_customer_id = NULL;
    }
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

