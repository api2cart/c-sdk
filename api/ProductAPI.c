#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ProductAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// product.add
//
// Add new product to store.
//
product_add_200_response_t*
ProductAPI_productAdd(apiClient_t *apiClient, product_add_t *product_add)
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
    char *localVarPath = strdup("/product.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_add = NULL;
    if (product_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_add = product_add_convertToJSON(product_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_add);
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
    product_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_add_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_add) {
        cJSON_Delete(localVarSingleItemJSON_product_add);
        localVarSingleItemJSON_product_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.add.batch
//
// Add new products to the store.
//
category_add_batch_200_response_t*
ProductAPI_productAddBatch(apiClient_t *apiClient, product_add_batch_t *product_add_batch)
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
    char *localVarPath = strdup("/product.add.batch.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_add_batch = NULL;
    if (product_add_batch != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_add_batch = product_add_batch_convertToJSON(product_add_batch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_add_batch);
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
    category_add_batch_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_add_batch_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_add_batch) {
        cJSON_Delete(localVarSingleItemJSON_product_add_batch);
        localVarSingleItemJSON_product_add_batch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.attribute.list
//
// Get list of attributes and values.
//
model_response_product_attribute_list_t*
ProductAPI_productAttributeList(apiClient_t *apiClient, char *product_id, int *start, int *count, char *page_cursor, char *attribute_id, char *variant_id, char *attribute_group_id, char *lang_id, char *store_id, char *set_name, char *sort_by, char *sort_direction, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/product.attribute.list.json");





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
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_attribute_id = NULL;
    char * valueQuery_attribute_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_id = 0;
    if (attribute_id)
    {
        keyQuery_attribute_id = strdup("attribute_id");
        valueQuery_attribute_id = strdup((attribute_id));
        keyPairQuery_attribute_id = keyValuePair_create(keyQuery_attribute_id, valueQuery_attribute_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_id);
    }

    // query parameters
    char *keyQuery_variant_id = NULL;
    char * valueQuery_variant_id = NULL;
    keyValuePair_t *keyPairQuery_variant_id = 0;
    if (variant_id)
    {
        keyQuery_variant_id = strdup("variant_id");
        valueQuery_variant_id = strdup((variant_id));
        keyPairQuery_variant_id = keyValuePair_create(keyQuery_variant_id, valueQuery_variant_id);
        list_addElement(localVarQueryParameters,keyPairQuery_variant_id);
    }

    // query parameters
    char *keyQuery_attribute_group_id = NULL;
    char * valueQuery_attribute_group_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_group_id = 0;
    if (attribute_group_id)
    {
        keyQuery_attribute_group_id = strdup("attribute_group_id");
        valueQuery_attribute_group_id = strdup((attribute_group_id));
        keyPairQuery_attribute_group_id = keyValuePair_create(keyQuery_attribute_group_id, valueQuery_attribute_group_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_group_id);
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

    // query parameters
    char *keyQuery_set_name = NULL;
    char * valueQuery_set_name = NULL;
    keyValuePair_t *keyPairQuery_set_name = 0;
    if (set_name)
    {
        keyQuery_set_name = strdup("set_name");
        valueQuery_set_name = strdup((set_name));
        keyPairQuery_set_name = keyValuePair_create(keyQuery_set_name, valueQuery_set_name);
        list_addElement(localVarQueryParameters,keyPairQuery_set_name);
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
    model_response_product_attribute_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_product_attribute_list_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_attribute_id){
        free(keyQuery_attribute_id);
        keyQuery_attribute_id = NULL;
    }
    if(valueQuery_attribute_id){
        free(valueQuery_attribute_id);
        valueQuery_attribute_id = NULL;
    }
    if(keyPairQuery_attribute_id){
        keyValuePair_free(keyPairQuery_attribute_id);
        keyPairQuery_attribute_id = NULL;
    }
    if(keyQuery_variant_id){
        free(keyQuery_variant_id);
        keyQuery_variant_id = NULL;
    }
    if(valueQuery_variant_id){
        free(valueQuery_variant_id);
        valueQuery_variant_id = NULL;
    }
    if(keyPairQuery_variant_id){
        keyValuePair_free(keyPairQuery_variant_id);
        keyPairQuery_variant_id = NULL;
    }
    if(keyQuery_attribute_group_id){
        free(keyQuery_attribute_group_id);
        keyQuery_attribute_group_id = NULL;
    }
    if(valueQuery_attribute_group_id){
        free(valueQuery_attribute_group_id);
        valueQuery_attribute_group_id = NULL;
    }
    if(keyPairQuery_attribute_group_id){
        keyValuePair_free(keyPairQuery_attribute_group_id);
        keyPairQuery_attribute_group_id = NULL;
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
    if(keyQuery_set_name){
        free(keyQuery_set_name);
        keyQuery_set_name = NULL;
    }
    if(valueQuery_set_name){
        free(valueQuery_set_name);
        valueQuery_set_name = NULL;
    }
    if(keyPairQuery_set_name){
        keyValuePair_free(keyPairQuery_set_name);
        keyPairQuery_set_name = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.attribute.value.set
//
// Set attribute value to product.
//
product_attribute_value_set_200_response_t*
ProductAPI_productAttributeValueSet(apiClient_t *apiClient, char *product_id, char *attribute_id, char *attribute_group_id, char *attribute_name, char *value, int *value_id, char *lang_id, char *store_id)
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
    char *localVarPath = strdup("/product.attribute.value.set.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_attribute_id = NULL;
    char * valueQuery_attribute_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_id = 0;
    if (attribute_id)
    {
        keyQuery_attribute_id = strdup("attribute_id");
        valueQuery_attribute_id = strdup((attribute_id));
        keyPairQuery_attribute_id = keyValuePair_create(keyQuery_attribute_id, valueQuery_attribute_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_id);
    }

    // query parameters
    char *keyQuery_attribute_group_id = NULL;
    char * valueQuery_attribute_group_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_group_id = 0;
    if (attribute_group_id)
    {
        keyQuery_attribute_group_id = strdup("attribute_group_id");
        valueQuery_attribute_group_id = strdup((attribute_group_id));
        keyPairQuery_attribute_group_id = keyValuePair_create(keyQuery_attribute_group_id, valueQuery_attribute_group_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_group_id);
    }

    // query parameters
    char *keyQuery_attribute_name = NULL;
    char * valueQuery_attribute_name = NULL;
    keyValuePair_t *keyPairQuery_attribute_name = 0;
    if (attribute_name)
    {
        keyQuery_attribute_name = strdup("attribute_name");
        valueQuery_attribute_name = strdup((attribute_name));
        keyPairQuery_attribute_name = keyValuePair_create(keyQuery_attribute_name, valueQuery_attribute_name);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_name);
    }

    // query parameters
    char *keyQuery_value = NULL;
    char * valueQuery_value = NULL;
    keyValuePair_t *keyPairQuery_value = 0;
    if (value)
    {
        keyQuery_value = strdup("value");
        valueQuery_value = strdup((value));
        keyPairQuery_value = keyValuePair_create(keyQuery_value, valueQuery_value);
        list_addElement(localVarQueryParameters,keyPairQuery_value);
    }

    // query parameters
    char *keyQuery_value_id = NULL;
    char * valueQuery_value_id = NULL;
    keyValuePair_t *keyPairQuery_value_id = 0;
    if (value_id)
    {
        keyQuery_value_id = strdup("value_id");
        valueQuery_value_id = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_value_id, MAX_NUMBER_LENGTH, "%d", *value_id);
        keyPairQuery_value_id = keyValuePair_create(keyQuery_value_id, valueQuery_value_id);
        list_addElement(localVarQueryParameters,keyPairQuery_value_id);
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
    product_attribute_value_set_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_attribute_value_set_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_attribute_id){
        free(keyQuery_attribute_id);
        keyQuery_attribute_id = NULL;
    }
    if(valueQuery_attribute_id){
        free(valueQuery_attribute_id);
        valueQuery_attribute_id = NULL;
    }
    if(keyPairQuery_attribute_id){
        keyValuePair_free(keyPairQuery_attribute_id);
        keyPairQuery_attribute_id = NULL;
    }
    if(keyQuery_attribute_group_id){
        free(keyQuery_attribute_group_id);
        keyQuery_attribute_group_id = NULL;
    }
    if(valueQuery_attribute_group_id){
        free(valueQuery_attribute_group_id);
        valueQuery_attribute_group_id = NULL;
    }
    if(keyPairQuery_attribute_group_id){
        keyValuePair_free(keyPairQuery_attribute_group_id);
        keyPairQuery_attribute_group_id = NULL;
    }
    if(keyQuery_attribute_name){
        free(keyQuery_attribute_name);
        keyQuery_attribute_name = NULL;
    }
    if(valueQuery_attribute_name){
        free(valueQuery_attribute_name);
        valueQuery_attribute_name = NULL;
    }
    if(keyPairQuery_attribute_name){
        keyValuePair_free(keyPairQuery_attribute_name);
        keyPairQuery_attribute_name = NULL;
    }
    if(keyQuery_value){
        free(keyQuery_value);
        keyQuery_value = NULL;
    }
    if(valueQuery_value){
        free(valueQuery_value);
        valueQuery_value = NULL;
    }
    if(keyPairQuery_value){
        keyValuePair_free(keyPairQuery_value);
        keyPairQuery_value = NULL;
    }
    if(keyQuery_value_id){
        free(keyQuery_value_id);
        keyQuery_value_id = NULL;
    }
    if(valueQuery_value_id){
        free(valueQuery_value_id);
        valueQuery_value_id = NULL;
    }
    if(keyPairQuery_value_id){
        keyValuePair_free(keyPairQuery_value_id);
        keyPairQuery_value_id = NULL;
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

// product.attribute.value.unset
//
// Removes attribute value for a product.
//
product_attribute_value_unset_200_response_t*
ProductAPI_productAttributeValueUnset(apiClient_t *apiClient, char *product_id, char *attribute_id, char *store_id, int *include_default, int *reindex, int *clear_cache)
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
    char *localVarPath = strdup("/product.attribute.value.unset.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_attribute_id = NULL;
    char * valueQuery_attribute_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_id = 0;
    if (attribute_id)
    {
        keyQuery_attribute_id = strdup("attribute_id");
        valueQuery_attribute_id = strdup((attribute_id));
        keyPairQuery_attribute_id = keyValuePair_create(keyQuery_attribute_id, valueQuery_attribute_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_id);
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
    char *keyQuery_include_default = NULL;
    char * valueQuery_include_default = NULL;
    keyValuePair_t *keyPairQuery_include_default = 0;
    if (include_default)
    {
        keyQuery_include_default = strdup("include_default");
        valueQuery_include_default = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_include_default, MAX_NUMBER_LENGTH, "%d", *include_default);
        keyPairQuery_include_default = keyValuePair_create(keyQuery_include_default, valueQuery_include_default);
        list_addElement(localVarQueryParameters,keyPairQuery_include_default);
    }

    // query parameters
    char *keyQuery_reindex = NULL;
    char * valueQuery_reindex = NULL;
    keyValuePair_t *keyPairQuery_reindex = 0;
    if (reindex)
    {
        keyQuery_reindex = strdup("reindex");
        valueQuery_reindex = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_reindex, MAX_NUMBER_LENGTH, "%d", *reindex);
        keyPairQuery_reindex = keyValuePair_create(keyQuery_reindex, valueQuery_reindex);
        list_addElement(localVarQueryParameters,keyPairQuery_reindex);
    }

    // query parameters
    char *keyQuery_clear_cache = NULL;
    char * valueQuery_clear_cache = NULL;
    keyValuePair_t *keyPairQuery_clear_cache = 0;
    if (clear_cache)
    {
        keyQuery_clear_cache = strdup("clear_cache");
        valueQuery_clear_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_clear_cache, MAX_NUMBER_LENGTH, "%d", *clear_cache);
        keyPairQuery_clear_cache = keyValuePair_create(keyQuery_clear_cache, valueQuery_clear_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_clear_cache);
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
    product_attribute_value_unset_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_attribute_value_unset_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_attribute_id){
        free(keyQuery_attribute_id);
        keyQuery_attribute_id = NULL;
    }
    if(valueQuery_attribute_id){
        free(valueQuery_attribute_id);
        valueQuery_attribute_id = NULL;
    }
    if(keyPairQuery_attribute_id){
        keyValuePair_free(keyPairQuery_attribute_id);
        keyPairQuery_attribute_id = NULL;
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
    if(keyQuery_include_default){
        free(keyQuery_include_default);
        keyQuery_include_default = NULL;
    }
    if(valueQuery_include_default){
        free(valueQuery_include_default);
        valueQuery_include_default = NULL;
    }
    if(keyPairQuery_include_default){
        keyValuePair_free(keyPairQuery_include_default);
        keyPairQuery_include_default = NULL;
    }
    if(keyQuery_reindex){
        free(keyQuery_reindex);
        keyQuery_reindex = NULL;
    }
    if(valueQuery_reindex){
        free(valueQuery_reindex);
        valueQuery_reindex = NULL;
    }
    if(keyPairQuery_reindex){
        keyValuePair_free(keyPairQuery_reindex);
        keyPairQuery_reindex = NULL;
    }
    if(keyQuery_clear_cache){
        free(keyQuery_clear_cache);
        keyQuery_clear_cache = NULL;
    }
    if(valueQuery_clear_cache){
        free(valueQuery_clear_cache);
        valueQuery_clear_cache = NULL;
    }
    if(keyPairQuery_clear_cache){
        keyValuePair_free(keyPairQuery_clear_cache);
        keyPairQuery_clear_cache = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.brand.list
//
// Get list of brands from your store.
//
model_response_product_brand_list_t*
ProductAPI_productBrandList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *brand_ids, char *category_id, char *parent_id, char *store_id, char *lang_id, char *find_where, char *find_value, char *created_from, char *created_to, char *modified_from, char *modified_to, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/product.brand.list.json");





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
    char *keyQuery_brand_ids = NULL;
    char * valueQuery_brand_ids = NULL;
    keyValuePair_t *keyPairQuery_brand_ids = 0;
    if (brand_ids)
    {
        keyQuery_brand_ids = strdup("brand_ids");
        valueQuery_brand_ids = strdup((brand_ids));
        keyPairQuery_brand_ids = keyValuePair_create(keyQuery_brand_ids, valueQuery_brand_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_brand_ids);
    }

    // query parameters
    char *keyQuery_category_id = NULL;
    char * valueQuery_category_id = NULL;
    keyValuePair_t *keyPairQuery_category_id = 0;
    if (category_id)
    {
        keyQuery_category_id = strdup("category_id");
        valueQuery_category_id = strdup((category_id));
        keyPairQuery_category_id = keyValuePair_create(keyQuery_category_id, valueQuery_category_id);
        list_addElement(localVarQueryParameters,keyPairQuery_category_id);
    }

    // query parameters
    char *keyQuery_parent_id = NULL;
    char * valueQuery_parent_id = NULL;
    keyValuePair_t *keyPairQuery_parent_id = 0;
    if (parent_id)
    {
        keyQuery_parent_id = strdup("parent_id");
        valueQuery_parent_id = strdup((parent_id));
        keyPairQuery_parent_id = keyValuePair_create(keyQuery_parent_id, valueQuery_parent_id);
        list_addElement(localVarQueryParameters,keyPairQuery_parent_id);
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
    model_response_product_brand_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_product_brand_list_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_brand_ids){
        free(keyQuery_brand_ids);
        keyQuery_brand_ids = NULL;
    }
    if(valueQuery_brand_ids){
        free(valueQuery_brand_ids);
        valueQuery_brand_ids = NULL;
    }
    if(keyPairQuery_brand_ids){
        keyValuePair_free(keyPairQuery_brand_ids);
        keyPairQuery_brand_ids = NULL;
    }
    if(keyQuery_category_id){
        free(keyQuery_category_id);
        keyQuery_category_id = NULL;
    }
    if(valueQuery_category_id){
        free(valueQuery_category_id);
        valueQuery_category_id = NULL;
    }
    if(keyPairQuery_category_id){
        keyValuePair_free(keyPairQuery_category_id);
        keyPairQuery_category_id = NULL;
    }
    if(keyQuery_parent_id){
        free(keyQuery_parent_id);
        keyQuery_parent_id = NULL;
    }
    if(valueQuery_parent_id){
        free(valueQuery_parent_id);
        valueQuery_parent_id = NULL;
    }
    if(keyPairQuery_parent_id){
        keyValuePair_free(keyPairQuery_parent_id);
        keyPairQuery_parent_id = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.child_item.find
//
// Search product child item (bundled item or configurable product variant) in store catalog.
//
product_child_item_find_200_response_t*
ProductAPI_productChildItemFind(apiClient_t *apiClient, char *find_value, char *find_where, char *find_params, char *store_id)
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
    char *localVarPath = strdup("/product.child_item.find.json");





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
    product_child_item_find_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_child_item_find_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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

// product.child_item.info
//
// Get child for specific product.
//
product_child_item_info_200_response_t*
ProductAPI_productChildItemInfo(apiClient_t *apiClient, char *product_id, char *id, char *store_id, char *lang_id, char *currency_id, char *response_fields, char *params, char *exclude, int *use_latest_api_version)
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
    char *localVarPath = strdup("/product.child_item.info.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
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
    char *keyQuery_currency_id = NULL;
    char * valueQuery_currency_id = NULL;
    keyValuePair_t *keyPairQuery_currency_id = 0;
    if (currency_id)
    {
        keyQuery_currency_id = strdup("currency_id");
        valueQuery_currency_id = strdup((currency_id));
        keyPairQuery_currency_id = keyValuePair_create(keyQuery_currency_id, valueQuery_currency_id);
        list_addElement(localVarQueryParameters,keyPairQuery_currency_id);
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
    char *keyQuery_use_latest_api_version = NULL;
    char * valueQuery_use_latest_api_version = NULL;
    keyValuePair_t *keyPairQuery_use_latest_api_version = 0;
    if (use_latest_api_version)
    {
        keyQuery_use_latest_api_version = strdup("use_latest_api_version");
        valueQuery_use_latest_api_version = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_use_latest_api_version, MAX_NUMBER_LENGTH, "%d", *use_latest_api_version);
        keyPairQuery_use_latest_api_version = keyValuePair_create(keyQuery_use_latest_api_version, valueQuery_use_latest_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_use_latest_api_version);
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
    product_child_item_info_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_child_item_info_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
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
    if(keyQuery_currency_id){
        free(keyQuery_currency_id);
        keyQuery_currency_id = NULL;
    }
    if(valueQuery_currency_id){
        free(valueQuery_currency_id);
        valueQuery_currency_id = NULL;
    }
    if(keyPairQuery_currency_id){
        keyValuePair_free(keyPairQuery_currency_id);
        keyPairQuery_currency_id = NULL;
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
    if(keyQuery_use_latest_api_version){
        free(keyQuery_use_latest_api_version);
        keyQuery_use_latest_api_version = NULL;
    }
    if(valueQuery_use_latest_api_version){
        free(valueQuery_use_latest_api_version);
        valueQuery_use_latest_api_version = NULL;
    }
    if(keyPairQuery_use_latest_api_version){
        keyValuePair_free(keyPairQuery_use_latest_api_version);
        keyPairQuery_use_latest_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.child_item.list
//
// Get a list of a product's child items, such as variants or bundle components. The total_count field in the response indicates the total number of items in the context of the current filter.
//
model_response_product_child_item_list_t*
ProductAPI_productChildItemList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *product_id, char *product_ids, char *sku, char *store_id, char *lang_id, char *currency_id, int *avail_sale, char *find_value, char *find_where, char *created_from, char *created_to, char *modified_from, char *modified_to, int *return_global, char *response_fields, char *params, char *exclude, char *report_request_id, int *disable_report_cache, int *use_latest_api_version)
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
    char *localVarPath = strdup("/product.child_item.list.json");





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
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_product_ids = NULL;
    char * valueQuery_product_ids = NULL;
    keyValuePair_t *keyPairQuery_product_ids = 0;
    if (product_ids)
    {
        keyQuery_product_ids = strdup("product_ids");
        valueQuery_product_ids = strdup((product_ids));
        keyPairQuery_product_ids = keyValuePair_create(keyQuery_product_ids, valueQuery_product_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_product_ids);
    }

    // query parameters
    char *keyQuery_sku = NULL;
    char * valueQuery_sku = NULL;
    keyValuePair_t *keyPairQuery_sku = 0;
    if (sku)
    {
        keyQuery_sku = strdup("sku");
        valueQuery_sku = strdup((sku));
        keyPairQuery_sku = keyValuePair_create(keyQuery_sku, valueQuery_sku);
        list_addElement(localVarQueryParameters,keyPairQuery_sku);
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
    char *keyQuery_currency_id = NULL;
    char * valueQuery_currency_id = NULL;
    keyValuePair_t *keyPairQuery_currency_id = 0;
    if (currency_id)
    {
        keyQuery_currency_id = strdup("currency_id");
        valueQuery_currency_id = strdup((currency_id));
        keyPairQuery_currency_id = keyValuePair_create(keyQuery_currency_id, valueQuery_currency_id);
        list_addElement(localVarQueryParameters,keyPairQuery_currency_id);
    }

    // query parameters
    char *keyQuery_avail_sale = NULL;
    char * valueQuery_avail_sale = NULL;
    keyValuePair_t *keyPairQuery_avail_sale = 0;
    if (avail_sale)
    {
        keyQuery_avail_sale = strdup("avail_sale");
        valueQuery_avail_sale = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_avail_sale, MAX_NUMBER_LENGTH, "%d", *avail_sale);
        keyPairQuery_avail_sale = keyValuePair_create(keyQuery_avail_sale, valueQuery_avail_sale);
        list_addElement(localVarQueryParameters,keyPairQuery_avail_sale);
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
    char *keyQuery_return_global = NULL;
    char * valueQuery_return_global = NULL;
    keyValuePair_t *keyPairQuery_return_global = 0;
    if (return_global)
    {
        keyQuery_return_global = strdup("return_global");
        valueQuery_return_global = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_return_global, MAX_NUMBER_LENGTH, "%d", *return_global);
        keyPairQuery_return_global = keyValuePair_create(keyQuery_return_global, valueQuery_return_global);
        list_addElement(localVarQueryParameters,keyPairQuery_return_global);
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
    char *keyQuery_report_request_id = NULL;
    char * valueQuery_report_request_id = NULL;
    keyValuePair_t *keyPairQuery_report_request_id = 0;
    if (report_request_id)
    {
        keyQuery_report_request_id = strdup("report_request_id");
        valueQuery_report_request_id = strdup((report_request_id));
        keyPairQuery_report_request_id = keyValuePair_create(keyQuery_report_request_id, valueQuery_report_request_id);
        list_addElement(localVarQueryParameters,keyPairQuery_report_request_id);
    }

    // query parameters
    char *keyQuery_disable_report_cache = NULL;
    char * valueQuery_disable_report_cache = NULL;
    keyValuePair_t *keyPairQuery_disable_report_cache = 0;
    if (disable_report_cache)
    {
        keyQuery_disable_report_cache = strdup("disable_report_cache");
        valueQuery_disable_report_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_disable_report_cache, MAX_NUMBER_LENGTH, "%d", *disable_report_cache);
        keyPairQuery_disable_report_cache = keyValuePair_create(keyQuery_disable_report_cache, valueQuery_disable_report_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_disable_report_cache);
    }

    // query parameters
    char *keyQuery_use_latest_api_version = NULL;
    char * valueQuery_use_latest_api_version = NULL;
    keyValuePair_t *keyPairQuery_use_latest_api_version = 0;
    if (use_latest_api_version)
    {
        keyQuery_use_latest_api_version = strdup("use_latest_api_version");
        valueQuery_use_latest_api_version = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_use_latest_api_version, MAX_NUMBER_LENGTH, "%d", *use_latest_api_version);
        keyPairQuery_use_latest_api_version = keyValuePair_create(keyQuery_use_latest_api_version, valueQuery_use_latest_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_use_latest_api_version);
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
    model_response_product_child_item_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_product_child_item_list_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_product_ids){
        free(keyQuery_product_ids);
        keyQuery_product_ids = NULL;
    }
    if(valueQuery_product_ids){
        free(valueQuery_product_ids);
        valueQuery_product_ids = NULL;
    }
    if(keyPairQuery_product_ids){
        keyValuePair_free(keyPairQuery_product_ids);
        keyPairQuery_product_ids = NULL;
    }
    if(keyQuery_sku){
        free(keyQuery_sku);
        keyQuery_sku = NULL;
    }
    if(valueQuery_sku){
        free(valueQuery_sku);
        valueQuery_sku = NULL;
    }
    if(keyPairQuery_sku){
        keyValuePair_free(keyPairQuery_sku);
        keyPairQuery_sku = NULL;
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
    if(keyQuery_currency_id){
        free(keyQuery_currency_id);
        keyQuery_currency_id = NULL;
    }
    if(valueQuery_currency_id){
        free(valueQuery_currency_id);
        valueQuery_currency_id = NULL;
    }
    if(keyPairQuery_currency_id){
        keyValuePair_free(keyPairQuery_currency_id);
        keyPairQuery_currency_id = NULL;
    }
    if(keyQuery_avail_sale){
        free(keyQuery_avail_sale);
        keyQuery_avail_sale = NULL;
    }
    if(valueQuery_avail_sale){
        free(valueQuery_avail_sale);
        valueQuery_avail_sale = NULL;
    }
    if(keyPairQuery_avail_sale){
        keyValuePair_free(keyPairQuery_avail_sale);
        keyPairQuery_avail_sale = NULL;
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
    if(keyQuery_return_global){
        free(keyQuery_return_global);
        keyQuery_return_global = NULL;
    }
    if(valueQuery_return_global){
        free(valueQuery_return_global);
        valueQuery_return_global = NULL;
    }
    if(keyPairQuery_return_global){
        keyValuePair_free(keyPairQuery_return_global);
        keyPairQuery_return_global = NULL;
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
    if(keyQuery_report_request_id){
        free(keyQuery_report_request_id);
        keyQuery_report_request_id = NULL;
    }
    if(valueQuery_report_request_id){
        free(valueQuery_report_request_id);
        valueQuery_report_request_id = NULL;
    }
    if(keyPairQuery_report_request_id){
        keyValuePair_free(keyPairQuery_report_request_id);
        keyPairQuery_report_request_id = NULL;
    }
    if(keyQuery_disable_report_cache){
        free(keyQuery_disable_report_cache);
        keyQuery_disable_report_cache = NULL;
    }
    if(valueQuery_disable_report_cache){
        free(valueQuery_disable_report_cache);
        valueQuery_disable_report_cache = NULL;
    }
    if(keyPairQuery_disable_report_cache){
        keyValuePair_free(keyPairQuery_disable_report_cache);
        keyPairQuery_disable_report_cache = NULL;
    }
    if(keyQuery_use_latest_api_version){
        free(keyQuery_use_latest_api_version);
        keyQuery_use_latest_api_version = NULL;
    }
    if(valueQuery_use_latest_api_version){
        free(valueQuery_use_latest_api_version);
        valueQuery_use_latest_api_version = NULL;
    }
    if(keyPairQuery_use_latest_api_version){
        keyValuePair_free(keyPairQuery_use_latest_api_version);
        keyPairQuery_use_latest_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.count
//
// Count products in store.
//
product_count_200_response_t*
ProductAPI_productCount(apiClient_t *apiClient, char *product_ids, char *since_id, char *categories_ids, char *category_id, char *store_id, char *lang_id, int *avail_view, int *avail_sale, char *created_from, char *created_to, char *modified_from, char *modified_to, char *brand_name, list_t *product_attributes, char *status, char *type, char *visible, char *find_value, char *find_where, char *report_request_id, int *return_global, int *disable_report_cache, int *use_latest_api_version)
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
    char *localVarPath = strdup("/product.count.json");





    // query parameters
    char *keyQuery_product_ids = NULL;
    char * valueQuery_product_ids = NULL;
    keyValuePair_t *keyPairQuery_product_ids = 0;
    if (product_ids)
    {
        keyQuery_product_ids = strdup("product_ids");
        valueQuery_product_ids = strdup((product_ids));
        keyPairQuery_product_ids = keyValuePair_create(keyQuery_product_ids, valueQuery_product_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_product_ids);
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

    // query parameters
    char *keyQuery_categories_ids = NULL;
    char * valueQuery_categories_ids = NULL;
    keyValuePair_t *keyPairQuery_categories_ids = 0;
    if (categories_ids)
    {
        keyQuery_categories_ids = strdup("categories_ids");
        valueQuery_categories_ids = strdup((categories_ids));
        keyPairQuery_categories_ids = keyValuePair_create(keyQuery_categories_ids, valueQuery_categories_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_categories_ids);
    }

    // query parameters
    char *keyQuery_category_id = NULL;
    char * valueQuery_category_id = NULL;
    keyValuePair_t *keyPairQuery_category_id = 0;
    if (category_id)
    {
        keyQuery_category_id = strdup("category_id");
        valueQuery_category_id = strdup((category_id));
        keyPairQuery_category_id = keyValuePair_create(keyQuery_category_id, valueQuery_category_id);
        list_addElement(localVarQueryParameters,keyPairQuery_category_id);
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
    char *keyQuery_avail_view = NULL;
    char * valueQuery_avail_view = NULL;
    keyValuePair_t *keyPairQuery_avail_view = 0;
    if (avail_view)
    {
        keyQuery_avail_view = strdup("avail_view");
        valueQuery_avail_view = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_avail_view, MAX_NUMBER_LENGTH, "%d", *avail_view);
        keyPairQuery_avail_view = keyValuePair_create(keyQuery_avail_view, valueQuery_avail_view);
        list_addElement(localVarQueryParameters,keyPairQuery_avail_view);
    }

    // query parameters
    char *keyQuery_avail_sale = NULL;
    char * valueQuery_avail_sale = NULL;
    keyValuePair_t *keyPairQuery_avail_sale = 0;
    if (avail_sale)
    {
        keyQuery_avail_sale = strdup("avail_sale");
        valueQuery_avail_sale = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_avail_sale, MAX_NUMBER_LENGTH, "%d", *avail_sale);
        keyPairQuery_avail_sale = keyValuePair_create(keyQuery_avail_sale, valueQuery_avail_sale);
        list_addElement(localVarQueryParameters,keyPairQuery_avail_sale);
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
    char *keyQuery_brand_name = NULL;
    char * valueQuery_brand_name = NULL;
    keyValuePair_t *keyPairQuery_brand_name = 0;
    if (brand_name)
    {
        keyQuery_brand_name = strdup("brand_name");
        valueQuery_brand_name = strdup((brand_name));
        keyPairQuery_brand_name = keyValuePair_create(keyQuery_brand_name, valueQuery_brand_name);
        list_addElement(localVarQueryParameters,keyPairQuery_brand_name);
    }

    // query parameters
    if (product_attributes)
    {
        list_addElement(localVarQueryParameters,product_attributes);
    }

    // query parameters
    char *keyQuery_status = NULL;
    char * valueQuery_status = NULL;
    keyValuePair_t *keyPairQuery_status = 0;
    if (status)
    {
        keyQuery_status = strdup("status");
        valueQuery_status = strdup((status));
        keyPairQuery_status = keyValuePair_create(keyQuery_status, valueQuery_status);
        list_addElement(localVarQueryParameters,keyPairQuery_status);
    }

    // query parameters
    char *keyQuery_type = NULL;
    char * valueQuery_type = NULL;
    keyValuePair_t *keyPairQuery_type = 0;
    if (type)
    {
        keyQuery_type = strdup("type");
        valueQuery_type = strdup((type));
        keyPairQuery_type = keyValuePair_create(keyQuery_type, valueQuery_type);
        list_addElement(localVarQueryParameters,keyPairQuery_type);
    }

    // query parameters
    char *keyQuery_visible = NULL;
    char * valueQuery_visible = NULL;
    keyValuePair_t *keyPairQuery_visible = 0;
    if (visible)
    {
        keyQuery_visible = strdup("visible");
        valueQuery_visible = strdup((visible));
        keyPairQuery_visible = keyValuePair_create(keyQuery_visible, valueQuery_visible);
        list_addElement(localVarQueryParameters,keyPairQuery_visible);
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
    char *keyQuery_report_request_id = NULL;
    char * valueQuery_report_request_id = NULL;
    keyValuePair_t *keyPairQuery_report_request_id = 0;
    if (report_request_id)
    {
        keyQuery_report_request_id = strdup("report_request_id");
        valueQuery_report_request_id = strdup((report_request_id));
        keyPairQuery_report_request_id = keyValuePair_create(keyQuery_report_request_id, valueQuery_report_request_id);
        list_addElement(localVarQueryParameters,keyPairQuery_report_request_id);
    }

    // query parameters
    char *keyQuery_return_global = NULL;
    char * valueQuery_return_global = NULL;
    keyValuePair_t *keyPairQuery_return_global = 0;
    if (return_global)
    {
        keyQuery_return_global = strdup("return_global");
        valueQuery_return_global = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_return_global, MAX_NUMBER_LENGTH, "%d", *return_global);
        keyPairQuery_return_global = keyValuePair_create(keyQuery_return_global, valueQuery_return_global);
        list_addElement(localVarQueryParameters,keyPairQuery_return_global);
    }

    // query parameters
    char *keyQuery_disable_report_cache = NULL;
    char * valueQuery_disable_report_cache = NULL;
    keyValuePair_t *keyPairQuery_disable_report_cache = 0;
    if (disable_report_cache)
    {
        keyQuery_disable_report_cache = strdup("disable_report_cache");
        valueQuery_disable_report_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_disable_report_cache, MAX_NUMBER_LENGTH, "%d", *disable_report_cache);
        keyPairQuery_disable_report_cache = keyValuePair_create(keyQuery_disable_report_cache, valueQuery_disable_report_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_disable_report_cache);
    }

    // query parameters
    char *keyQuery_use_latest_api_version = NULL;
    char * valueQuery_use_latest_api_version = NULL;
    keyValuePair_t *keyPairQuery_use_latest_api_version = 0;
    if (use_latest_api_version)
    {
        keyQuery_use_latest_api_version = strdup("use_latest_api_version");
        valueQuery_use_latest_api_version = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_use_latest_api_version, MAX_NUMBER_LENGTH, "%d", *use_latest_api_version);
        keyPairQuery_use_latest_api_version = keyValuePair_create(keyQuery_use_latest_api_version, valueQuery_use_latest_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_use_latest_api_version);
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
    product_count_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_count_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_ids){
        free(keyQuery_product_ids);
        keyQuery_product_ids = NULL;
    }
    if(valueQuery_product_ids){
        free(valueQuery_product_ids);
        valueQuery_product_ids = NULL;
    }
    if(keyPairQuery_product_ids){
        keyValuePair_free(keyPairQuery_product_ids);
        keyPairQuery_product_ids = NULL;
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
    if(keyQuery_categories_ids){
        free(keyQuery_categories_ids);
        keyQuery_categories_ids = NULL;
    }
    if(valueQuery_categories_ids){
        free(valueQuery_categories_ids);
        valueQuery_categories_ids = NULL;
    }
    if(keyPairQuery_categories_ids){
        keyValuePair_free(keyPairQuery_categories_ids);
        keyPairQuery_categories_ids = NULL;
    }
    if(keyQuery_category_id){
        free(keyQuery_category_id);
        keyQuery_category_id = NULL;
    }
    if(valueQuery_category_id){
        free(valueQuery_category_id);
        valueQuery_category_id = NULL;
    }
    if(keyPairQuery_category_id){
        keyValuePair_free(keyPairQuery_category_id);
        keyPairQuery_category_id = NULL;
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
    if(keyQuery_avail_view){
        free(keyQuery_avail_view);
        keyQuery_avail_view = NULL;
    }
    if(valueQuery_avail_view){
        free(valueQuery_avail_view);
        valueQuery_avail_view = NULL;
    }
    if(keyPairQuery_avail_view){
        keyValuePair_free(keyPairQuery_avail_view);
        keyPairQuery_avail_view = NULL;
    }
    if(keyQuery_avail_sale){
        free(keyQuery_avail_sale);
        keyQuery_avail_sale = NULL;
    }
    if(valueQuery_avail_sale){
        free(valueQuery_avail_sale);
        valueQuery_avail_sale = NULL;
    }
    if(keyPairQuery_avail_sale){
        keyValuePair_free(keyPairQuery_avail_sale);
        keyPairQuery_avail_sale = NULL;
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
    if(keyQuery_brand_name){
        free(keyQuery_brand_name);
        keyQuery_brand_name = NULL;
    }
    if(valueQuery_brand_name){
        free(valueQuery_brand_name);
        valueQuery_brand_name = NULL;
    }
    if(keyPairQuery_brand_name){
        keyValuePair_free(keyPairQuery_brand_name);
        keyPairQuery_brand_name = NULL;
    }
    if(keyQuery_status){
        free(keyQuery_status);
        keyQuery_status = NULL;
    }
    if(valueQuery_status){
        free(valueQuery_status);
        valueQuery_status = NULL;
    }
    if(keyPairQuery_status){
        keyValuePair_free(keyPairQuery_status);
        keyPairQuery_status = NULL;
    }
    if(keyQuery_type){
        free(keyQuery_type);
        keyQuery_type = NULL;
    }
    if(valueQuery_type){
        free(valueQuery_type);
        valueQuery_type = NULL;
    }
    if(keyPairQuery_type){
        keyValuePair_free(keyPairQuery_type);
        keyPairQuery_type = NULL;
    }
    if(keyQuery_visible){
        free(keyQuery_visible);
        keyQuery_visible = NULL;
    }
    if(valueQuery_visible){
        free(valueQuery_visible);
        valueQuery_visible = NULL;
    }
    if(keyPairQuery_visible){
        keyValuePair_free(keyPairQuery_visible);
        keyPairQuery_visible = NULL;
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
    if(keyQuery_report_request_id){
        free(keyQuery_report_request_id);
        keyQuery_report_request_id = NULL;
    }
    if(valueQuery_report_request_id){
        free(valueQuery_report_request_id);
        valueQuery_report_request_id = NULL;
    }
    if(keyPairQuery_report_request_id){
        keyValuePair_free(keyPairQuery_report_request_id);
        keyPairQuery_report_request_id = NULL;
    }
    if(keyQuery_return_global){
        free(keyQuery_return_global);
        keyQuery_return_global = NULL;
    }
    if(valueQuery_return_global){
        free(valueQuery_return_global);
        valueQuery_return_global = NULL;
    }
    if(keyPairQuery_return_global){
        keyValuePair_free(keyPairQuery_return_global);
        keyPairQuery_return_global = NULL;
    }
    if(keyQuery_disable_report_cache){
        free(keyQuery_disable_report_cache);
        keyQuery_disable_report_cache = NULL;
    }
    if(valueQuery_disable_report_cache){
        free(valueQuery_disable_report_cache);
        valueQuery_disable_report_cache = NULL;
    }
    if(keyPairQuery_disable_report_cache){
        keyValuePair_free(keyPairQuery_disable_report_cache);
        keyPairQuery_disable_report_cache = NULL;
    }
    if(keyQuery_use_latest_api_version){
        free(keyQuery_use_latest_api_version);
        keyQuery_use_latest_api_version = NULL;
    }
    if(valueQuery_use_latest_api_version){
        free(valueQuery_use_latest_api_version);
        valueQuery_use_latest_api_version = NULL;
    }
    if(keyPairQuery_use_latest_api_version){
        keyValuePair_free(keyPairQuery_use_latest_api_version);
        keyPairQuery_use_latest_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.currency.add
//
// Add currency and/or set default in store
//
product_currency_add_200_response_t*
ProductAPI_productCurrencyAdd(apiClient_t *apiClient, char *iso3, double rate, char *name, int *avail, char *symbol_left, char *symbol_right, int *_default)
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
    char *localVarPath = strdup("/product.currency.add.json");





    // query parameters
    char *keyQuery_iso3 = NULL;
    char * valueQuery_iso3 = NULL;
    keyValuePair_t *keyPairQuery_iso3 = 0;
    if (iso3)
    {
        keyQuery_iso3 = strdup("iso3");
        valueQuery_iso3 = strdup((iso3));
        keyPairQuery_iso3 = keyValuePair_create(keyQuery_iso3, valueQuery_iso3);
        list_addElement(localVarQueryParameters,keyPairQuery_iso3);
    }

    // query parameters
    char *keyQuery_rate = NULL;
    double valueQuery_rate ;
    keyValuePair_t *keyPairQuery_rate = 0;
    if (rate)
    {
        keyQuery_rate = strdup("rate");
        valueQuery_rate = (rate);
        keyPairQuery_rate = keyValuePair_create(keyQuery_rate, &valueQuery_rate);
        list_addElement(localVarQueryParameters,keyPairQuery_rate);
    }

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
    char *keyQuery_symbol_left = NULL;
    char * valueQuery_symbol_left = NULL;
    keyValuePair_t *keyPairQuery_symbol_left = 0;
    if (symbol_left)
    {
        keyQuery_symbol_left = strdup("symbol_left");
        valueQuery_symbol_left = strdup((symbol_left));
        keyPairQuery_symbol_left = keyValuePair_create(keyQuery_symbol_left, valueQuery_symbol_left);
        list_addElement(localVarQueryParameters,keyPairQuery_symbol_left);
    }

    // query parameters
    char *keyQuery_symbol_right = NULL;
    char * valueQuery_symbol_right = NULL;
    keyValuePair_t *keyPairQuery_symbol_right = 0;
    if (symbol_right)
    {
        keyQuery_symbol_right = strdup("symbol_right");
        valueQuery_symbol_right = strdup((symbol_right));
        keyPairQuery_symbol_right = keyValuePair_create(keyQuery_symbol_right, valueQuery_symbol_right);
        list_addElement(localVarQueryParameters,keyPairQuery_symbol_right);
    }

    // query parameters
    char *keyQuery__default = NULL;
    char * valueQuery__default = NULL;
    keyValuePair_t *keyPairQuery__default = 0;
    if (_default)
    {
        keyQuery__default = strdup("default");
        valueQuery__default = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery__default, MAX_NUMBER_LENGTH, "%d", *_default);
        keyPairQuery__default = keyValuePair_create(keyQuery__default, valueQuery__default);
        list_addElement(localVarQueryParameters,keyPairQuery__default);
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
    product_currency_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_currency_add_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_iso3){
        free(keyQuery_iso3);
        keyQuery_iso3 = NULL;
    }
    if(valueQuery_iso3){
        free(valueQuery_iso3);
        valueQuery_iso3 = NULL;
    }
    if(keyPairQuery_iso3){
        keyValuePair_free(keyPairQuery_iso3);
        keyPairQuery_iso3 = NULL;
    }
    if(keyQuery_rate){
        free(keyQuery_rate);
        keyQuery_rate = NULL;
    }
    if(keyPairQuery_rate){
        keyValuePair_free(keyPairQuery_rate);
        keyPairQuery_rate = NULL;
    }
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
    if(keyQuery_symbol_left){
        free(keyQuery_symbol_left);
        keyQuery_symbol_left = NULL;
    }
    if(valueQuery_symbol_left){
        free(valueQuery_symbol_left);
        valueQuery_symbol_left = NULL;
    }
    if(keyPairQuery_symbol_left){
        keyValuePair_free(keyPairQuery_symbol_left);
        keyPairQuery_symbol_left = NULL;
    }
    if(keyQuery_symbol_right){
        free(keyQuery_symbol_right);
        keyQuery_symbol_right = NULL;
    }
    if(valueQuery_symbol_right){
        free(valueQuery_symbol_right);
        valueQuery_symbol_right = NULL;
    }
    if(keyPairQuery_symbol_right){
        keyValuePair_free(keyPairQuery_symbol_right);
        keyPairQuery_symbol_right = NULL;
    }
    if(keyQuery__default){
        free(keyQuery__default);
        keyQuery__default = NULL;
    }
    if(valueQuery__default){
        free(valueQuery__default);
        valueQuery__default = NULL;
    }
    if(keyPairQuery__default){
        keyValuePair_free(keyPairQuery__default);
        keyPairQuery__default = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.currency.list
//
// Get list of currencies
//
model_response_product_currency_list_t*
ProductAPI_productCurrencyList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, int *_default, int *avail, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/product.currency.list.json");





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
    char *keyQuery__default = NULL;
    char * valueQuery__default = NULL;
    keyValuePair_t *keyPairQuery__default = 0;
    if (_default)
    {
        keyQuery__default = strdup("default");
        valueQuery__default = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery__default, MAX_NUMBER_LENGTH, "%d", *_default);
        keyPairQuery__default = keyValuePair_create(keyQuery__default, valueQuery__default);
        list_addElement(localVarQueryParameters,keyPairQuery__default);
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
    model_response_product_currency_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_product_currency_list_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery__default){
        free(keyQuery__default);
        keyQuery__default = NULL;
    }
    if(valueQuery__default){
        free(valueQuery__default);
        valueQuery__default = NULL;
    }
    if(keyPairQuery__default){
        keyValuePair_free(keyPairQuery__default);
        keyPairQuery__default = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.delete
//
// Product delete
//
customer_delete_200_response_t*
ProductAPI_productDelete(apiClient_t *apiClient, char *id, char *store_id)
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
    char *localVarPath = strdup("/product.delete.json");





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
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = customer_delete_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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

// product.delete.batch
//
// Remove product from the store.
//
category_add_batch_200_response_t*
ProductAPI_productDeleteBatch(apiClient_t *apiClient, product_delete_batch_t *product_delete_batch)
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
    char *localVarPath = strdup("/product.delete.batch.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_delete_batch = NULL;
    if (product_delete_batch != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_delete_batch = product_delete_batch_convertToJSON(product_delete_batch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_delete_batch);
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
    category_add_batch_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_add_batch_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_delete_batch) {
        cJSON_Delete(localVarSingleItemJSON_product_delete_batch);
        localVarSingleItemJSON_product_delete_batch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.fields
//
// Retrieve all available fields for product item in store.
//
cart_config_update_200_response_t*
ProductAPI_productFields(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/product.fields.json");




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
    cart_config_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_config_update_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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

// product.find
//
// Search product in store catalog. \"Apple\" is specified here by default.
//
product_find_200_response_t*
ProductAPI_productFind(apiClient_t *apiClient, char *find_value, char *find_where, char *find_params, char *find_what, char *lang_id, char *store_id)
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
    char *localVarPath = strdup("/product.find.json");





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
    char *keyQuery_find_what = NULL;
    char * valueQuery_find_what = NULL;
    keyValuePair_t *keyPairQuery_find_what = 0;
    if (find_what)
    {
        keyQuery_find_what = strdup("find_what");
        valueQuery_find_what = strdup((find_what));
        keyPairQuery_find_what = keyValuePair_create(keyQuery_find_what, valueQuery_find_what);
        list_addElement(localVarQueryParameters,keyPairQuery_find_what);
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
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    product_find_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_find_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_find_what){
        free(keyQuery_find_what);
        keyQuery_find_what = NULL;
    }
    if(valueQuery_find_what){
        free(valueQuery_find_what);
        valueQuery_find_what = NULL;
    }
    if(keyPairQuery_find_what){
        keyValuePair_free(keyPairQuery_find_what);
        keyPairQuery_find_what = NULL;
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

// product.image.add
//
// Add image to product
//
product_image_add_200_response_t*
ProductAPI_productImageAdd(apiClient_t *apiClient, product_image_add_t *product_image_add)
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
    char *localVarPath = strdup("/product.image.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_image_add = NULL;
    if (product_image_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_image_add = product_image_add_convertToJSON(product_image_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_image_add);
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
    product_image_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_image_add_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_image_add) {
        cJSON_Delete(localVarSingleItemJSON_product_image_add);
        localVarSingleItemJSON_product_image_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.image.delete
//
// Delete image
//
attribute_delete_200_response_t*
ProductAPI_productImageDelete(apiClient_t *apiClient, char *product_id, char *id, char *store_id)
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
    char *localVarPath = strdup("/product.image.delete.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
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
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.image.update
//
// Update details of image
//
product_image_update_200_response_t*
ProductAPI_productImageUpdate(apiClient_t *apiClient, char *product_id, char *id, char *variant_ids, char *store_id, char *lang_id, char *image_name, char *type, char *label, int *position, int *hidden)
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
    char *localVarPath = strdup("/product.image.update.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
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
    char *keyQuery_variant_ids = NULL;
    char * valueQuery_variant_ids = NULL;
    keyValuePair_t *keyPairQuery_variant_ids = 0;
    if (variant_ids)
    {
        keyQuery_variant_ids = strdup("variant_ids");
        valueQuery_variant_ids = strdup((variant_ids));
        keyPairQuery_variant_ids = keyValuePair_create(keyQuery_variant_ids, valueQuery_variant_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_variant_ids);
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
    char *keyQuery_image_name = NULL;
    char * valueQuery_image_name = NULL;
    keyValuePair_t *keyPairQuery_image_name = 0;
    if (image_name)
    {
        keyQuery_image_name = strdup("image_name");
        valueQuery_image_name = strdup((image_name));
        keyPairQuery_image_name = keyValuePair_create(keyQuery_image_name, valueQuery_image_name);
        list_addElement(localVarQueryParameters,keyPairQuery_image_name);
    }

    // query parameters
    char *keyQuery_type = NULL;
    char * valueQuery_type = NULL;
    keyValuePair_t *keyPairQuery_type = 0;
    if (type)
    {
        keyQuery_type = strdup("type");
        valueQuery_type = strdup((type));
        keyPairQuery_type = keyValuePair_create(keyQuery_type, valueQuery_type);
        list_addElement(localVarQueryParameters,keyPairQuery_type);
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
    char *keyQuery_position = NULL;
    char * valueQuery_position = NULL;
    keyValuePair_t *keyPairQuery_position = 0;
    if (position)
    {
        keyQuery_position = strdup("position");
        valueQuery_position = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_position, MAX_NUMBER_LENGTH, "%d", *position);
        keyPairQuery_position = keyValuePair_create(keyQuery_position, valueQuery_position);
        list_addElement(localVarQueryParameters,keyPairQuery_position);
    }

    // query parameters
    char *keyQuery_hidden = NULL;
    char * valueQuery_hidden = NULL;
    keyValuePair_t *keyPairQuery_hidden = 0;
    if (hidden)
    {
        keyQuery_hidden = strdup("hidden");
        valueQuery_hidden = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_hidden, MAX_NUMBER_LENGTH, "%d", *hidden);
        keyPairQuery_hidden = keyValuePair_create(keyQuery_hidden, valueQuery_hidden);
        list_addElement(localVarQueryParameters,keyPairQuery_hidden);
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
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_image_update_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
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
    if(keyQuery_variant_ids){
        free(keyQuery_variant_ids);
        keyQuery_variant_ids = NULL;
    }
    if(valueQuery_variant_ids){
        free(valueQuery_variant_ids);
        valueQuery_variant_ids = NULL;
    }
    if(keyPairQuery_variant_ids){
        keyValuePair_free(keyPairQuery_variant_ids);
        keyPairQuery_variant_ids = NULL;
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
    if(keyQuery_image_name){
        free(keyQuery_image_name);
        keyQuery_image_name = NULL;
    }
    if(valueQuery_image_name){
        free(valueQuery_image_name);
        valueQuery_image_name = NULL;
    }
    if(keyPairQuery_image_name){
        keyValuePair_free(keyPairQuery_image_name);
        keyPairQuery_image_name = NULL;
    }
    if(keyQuery_type){
        free(keyQuery_type);
        keyQuery_type = NULL;
    }
    if(valueQuery_type){
        free(valueQuery_type);
        valueQuery_type = NULL;
    }
    if(keyPairQuery_type){
        keyValuePair_free(keyPairQuery_type);
        keyPairQuery_type = NULL;
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
    if(keyQuery_position){
        free(keyQuery_position);
        keyQuery_position = NULL;
    }
    if(valueQuery_position){
        free(valueQuery_position);
        valueQuery_position = NULL;
    }
    if(keyPairQuery_position){
        keyValuePair_free(keyPairQuery_position);
        keyPairQuery_position = NULL;
    }
    if(keyQuery_hidden){
        free(keyQuery_hidden);
        keyQuery_hidden = NULL;
    }
    if(valueQuery_hidden){
        free(valueQuery_hidden);
        valueQuery_hidden = NULL;
    }
    if(keyPairQuery_hidden){
        keyValuePair_free(keyPairQuery_hidden);
        keyPairQuery_hidden = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.info
//
// Get information about a specific product by its ID. In the case of a multistore configuration, use the store_id filter to get a response in the context of a specific store.
//
product_info_200_response_t*
ProductAPI_productInfo(apiClient_t *apiClient, char *id, char *store_id, char *lang_id, char *currency_id, char *response_fields, char *params, char *exclude, char *report_request_id, int *disable_report_cache, int *use_latest_api_version)
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
    char *localVarPath = strdup("/product.info.json");





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
    char *keyQuery_currency_id = NULL;
    char * valueQuery_currency_id = NULL;
    keyValuePair_t *keyPairQuery_currency_id = 0;
    if (currency_id)
    {
        keyQuery_currency_id = strdup("currency_id");
        valueQuery_currency_id = strdup((currency_id));
        keyPairQuery_currency_id = keyValuePair_create(keyQuery_currency_id, valueQuery_currency_id);
        list_addElement(localVarQueryParameters,keyPairQuery_currency_id);
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
    char *keyQuery_report_request_id = NULL;
    char * valueQuery_report_request_id = NULL;
    keyValuePair_t *keyPairQuery_report_request_id = 0;
    if (report_request_id)
    {
        keyQuery_report_request_id = strdup("report_request_id");
        valueQuery_report_request_id = strdup((report_request_id));
        keyPairQuery_report_request_id = keyValuePair_create(keyQuery_report_request_id, valueQuery_report_request_id);
        list_addElement(localVarQueryParameters,keyPairQuery_report_request_id);
    }

    // query parameters
    char *keyQuery_disable_report_cache = NULL;
    char * valueQuery_disable_report_cache = NULL;
    keyValuePair_t *keyPairQuery_disable_report_cache = 0;
    if (disable_report_cache)
    {
        keyQuery_disable_report_cache = strdup("disable_report_cache");
        valueQuery_disable_report_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_disable_report_cache, MAX_NUMBER_LENGTH, "%d", *disable_report_cache);
        keyPairQuery_disable_report_cache = keyValuePair_create(keyQuery_disable_report_cache, valueQuery_disable_report_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_disable_report_cache);
    }

    // query parameters
    char *keyQuery_use_latest_api_version = NULL;
    char * valueQuery_use_latest_api_version = NULL;
    keyValuePair_t *keyPairQuery_use_latest_api_version = 0;
    if (use_latest_api_version)
    {
        keyQuery_use_latest_api_version = strdup("use_latest_api_version");
        valueQuery_use_latest_api_version = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_use_latest_api_version, MAX_NUMBER_LENGTH, "%d", *use_latest_api_version);
        keyPairQuery_use_latest_api_version = keyValuePair_create(keyQuery_use_latest_api_version, valueQuery_use_latest_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_use_latest_api_version);
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
    product_info_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_info_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_currency_id){
        free(keyQuery_currency_id);
        keyQuery_currency_id = NULL;
    }
    if(valueQuery_currency_id){
        free(valueQuery_currency_id);
        valueQuery_currency_id = NULL;
    }
    if(keyPairQuery_currency_id){
        keyValuePair_free(keyPairQuery_currency_id);
        keyPairQuery_currency_id = NULL;
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
    if(keyQuery_report_request_id){
        free(keyQuery_report_request_id);
        keyQuery_report_request_id = NULL;
    }
    if(valueQuery_report_request_id){
        free(valueQuery_report_request_id);
        valueQuery_report_request_id = NULL;
    }
    if(keyPairQuery_report_request_id){
        keyValuePair_free(keyPairQuery_report_request_id);
        keyPairQuery_report_request_id = NULL;
    }
    if(keyQuery_disable_report_cache){
        free(keyQuery_disable_report_cache);
        keyQuery_disable_report_cache = NULL;
    }
    if(valueQuery_disable_report_cache){
        free(valueQuery_disable_report_cache);
        valueQuery_disable_report_cache = NULL;
    }
    if(keyPairQuery_disable_report_cache){
        keyValuePair_free(keyPairQuery_disable_report_cache);
        keyPairQuery_disable_report_cache = NULL;
    }
    if(keyQuery_use_latest_api_version){
        free(keyQuery_use_latest_api_version);
        keyQuery_use_latest_api_version = NULL;
    }
    if(valueQuery_use_latest_api_version){
        free(valueQuery_use_latest_api_version);
        valueQuery_use_latest_api_version = NULL;
    }
    if(keyPairQuery_use_latest_api_version){
        keyValuePair_free(keyPairQuery_use_latest_api_version);
        keyPairQuery_use_latest_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.list
//
// Get list of products from your store. Returns 10 products by default.
//
model_response_product_list_t*
ProductAPI_productList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *product_ids, char *since_id, char *categories_ids, char *category_id, char *store_id, char *lang_id, char *currency_id, int *avail_view, int *avail_sale, char *created_from, char *created_to, char *modified_from, char *modified_to, char *sku, char *brand_name, list_t *product_attributes, char *status, char *type, char *visible, char *find_value, char *find_where, int *return_global, char *params, char *response_fields, char *exclude, char *sort_by, char *sort_direction, char *report_request_id, int *disable_cache, int *disable_report_cache, int *use_latest_api_version)
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
    char *localVarPath = strdup("/product.list.json");





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
    char *keyQuery_product_ids = NULL;
    char * valueQuery_product_ids = NULL;
    keyValuePair_t *keyPairQuery_product_ids = 0;
    if (product_ids)
    {
        keyQuery_product_ids = strdup("product_ids");
        valueQuery_product_ids = strdup((product_ids));
        keyPairQuery_product_ids = keyValuePair_create(keyQuery_product_ids, valueQuery_product_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_product_ids);
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

    // query parameters
    char *keyQuery_categories_ids = NULL;
    char * valueQuery_categories_ids = NULL;
    keyValuePair_t *keyPairQuery_categories_ids = 0;
    if (categories_ids)
    {
        keyQuery_categories_ids = strdup("categories_ids");
        valueQuery_categories_ids = strdup((categories_ids));
        keyPairQuery_categories_ids = keyValuePair_create(keyQuery_categories_ids, valueQuery_categories_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_categories_ids);
    }

    // query parameters
    char *keyQuery_category_id = NULL;
    char * valueQuery_category_id = NULL;
    keyValuePair_t *keyPairQuery_category_id = 0;
    if (category_id)
    {
        keyQuery_category_id = strdup("category_id");
        valueQuery_category_id = strdup((category_id));
        keyPairQuery_category_id = keyValuePair_create(keyQuery_category_id, valueQuery_category_id);
        list_addElement(localVarQueryParameters,keyPairQuery_category_id);
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
    char *keyQuery_currency_id = NULL;
    char * valueQuery_currency_id = NULL;
    keyValuePair_t *keyPairQuery_currency_id = 0;
    if (currency_id)
    {
        keyQuery_currency_id = strdup("currency_id");
        valueQuery_currency_id = strdup((currency_id));
        keyPairQuery_currency_id = keyValuePair_create(keyQuery_currency_id, valueQuery_currency_id);
        list_addElement(localVarQueryParameters,keyPairQuery_currency_id);
    }

    // query parameters
    char *keyQuery_avail_view = NULL;
    char * valueQuery_avail_view = NULL;
    keyValuePair_t *keyPairQuery_avail_view = 0;
    if (avail_view)
    {
        keyQuery_avail_view = strdup("avail_view");
        valueQuery_avail_view = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_avail_view, MAX_NUMBER_LENGTH, "%d", *avail_view);
        keyPairQuery_avail_view = keyValuePair_create(keyQuery_avail_view, valueQuery_avail_view);
        list_addElement(localVarQueryParameters,keyPairQuery_avail_view);
    }

    // query parameters
    char *keyQuery_avail_sale = NULL;
    char * valueQuery_avail_sale = NULL;
    keyValuePair_t *keyPairQuery_avail_sale = 0;
    if (avail_sale)
    {
        keyQuery_avail_sale = strdup("avail_sale");
        valueQuery_avail_sale = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_avail_sale, MAX_NUMBER_LENGTH, "%d", *avail_sale);
        keyPairQuery_avail_sale = keyValuePair_create(keyQuery_avail_sale, valueQuery_avail_sale);
        list_addElement(localVarQueryParameters,keyPairQuery_avail_sale);
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
    char *keyQuery_sku = NULL;
    char * valueQuery_sku = NULL;
    keyValuePair_t *keyPairQuery_sku = 0;
    if (sku)
    {
        keyQuery_sku = strdup("sku");
        valueQuery_sku = strdup((sku));
        keyPairQuery_sku = keyValuePair_create(keyQuery_sku, valueQuery_sku);
        list_addElement(localVarQueryParameters,keyPairQuery_sku);
    }

    // query parameters
    char *keyQuery_brand_name = NULL;
    char * valueQuery_brand_name = NULL;
    keyValuePair_t *keyPairQuery_brand_name = 0;
    if (brand_name)
    {
        keyQuery_brand_name = strdup("brand_name");
        valueQuery_brand_name = strdup((brand_name));
        keyPairQuery_brand_name = keyValuePair_create(keyQuery_brand_name, valueQuery_brand_name);
        list_addElement(localVarQueryParameters,keyPairQuery_brand_name);
    }

    // query parameters
    if (product_attributes)
    {
        list_addElement(localVarQueryParameters,product_attributes);
    }

    // query parameters
    char *keyQuery_status = NULL;
    char * valueQuery_status = NULL;
    keyValuePair_t *keyPairQuery_status = 0;
    if (status)
    {
        keyQuery_status = strdup("status");
        valueQuery_status = strdup((status));
        keyPairQuery_status = keyValuePair_create(keyQuery_status, valueQuery_status);
        list_addElement(localVarQueryParameters,keyPairQuery_status);
    }

    // query parameters
    char *keyQuery_type = NULL;
    char * valueQuery_type = NULL;
    keyValuePair_t *keyPairQuery_type = 0;
    if (type)
    {
        keyQuery_type = strdup("type");
        valueQuery_type = strdup((type));
        keyPairQuery_type = keyValuePair_create(keyQuery_type, valueQuery_type);
        list_addElement(localVarQueryParameters,keyPairQuery_type);
    }

    // query parameters
    char *keyQuery_visible = NULL;
    char * valueQuery_visible = NULL;
    keyValuePair_t *keyPairQuery_visible = 0;
    if (visible)
    {
        keyQuery_visible = strdup("visible");
        valueQuery_visible = strdup((visible));
        keyPairQuery_visible = keyValuePair_create(keyQuery_visible, valueQuery_visible);
        list_addElement(localVarQueryParameters,keyPairQuery_visible);
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
    char *keyQuery_return_global = NULL;
    char * valueQuery_return_global = NULL;
    keyValuePair_t *keyPairQuery_return_global = 0;
    if (return_global)
    {
        keyQuery_return_global = strdup("return_global");
        valueQuery_return_global = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_return_global, MAX_NUMBER_LENGTH, "%d", *return_global);
        keyPairQuery_return_global = keyValuePair_create(keyQuery_return_global, valueQuery_return_global);
        list_addElement(localVarQueryParameters,keyPairQuery_return_global);
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
    char *keyQuery_report_request_id = NULL;
    char * valueQuery_report_request_id = NULL;
    keyValuePair_t *keyPairQuery_report_request_id = 0;
    if (report_request_id)
    {
        keyQuery_report_request_id = strdup("report_request_id");
        valueQuery_report_request_id = strdup((report_request_id));
        keyPairQuery_report_request_id = keyValuePair_create(keyQuery_report_request_id, valueQuery_report_request_id);
        list_addElement(localVarQueryParameters,keyPairQuery_report_request_id);
    }

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
    char *keyQuery_disable_report_cache = NULL;
    char * valueQuery_disable_report_cache = NULL;
    keyValuePair_t *keyPairQuery_disable_report_cache = 0;
    if (disable_report_cache)
    {
        keyQuery_disable_report_cache = strdup("disable_report_cache");
        valueQuery_disable_report_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_disable_report_cache, MAX_NUMBER_LENGTH, "%d", *disable_report_cache);
        keyPairQuery_disable_report_cache = keyValuePair_create(keyQuery_disable_report_cache, valueQuery_disable_report_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_disable_report_cache);
    }

    // query parameters
    char *keyQuery_use_latest_api_version = NULL;
    char * valueQuery_use_latest_api_version = NULL;
    keyValuePair_t *keyPairQuery_use_latest_api_version = 0;
    if (use_latest_api_version)
    {
        keyQuery_use_latest_api_version = strdup("use_latest_api_version");
        valueQuery_use_latest_api_version = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_use_latest_api_version, MAX_NUMBER_LENGTH, "%d", *use_latest_api_version);
        keyPairQuery_use_latest_api_version = keyValuePair_create(keyQuery_use_latest_api_version, valueQuery_use_latest_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_use_latest_api_version);
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
    model_response_product_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_product_list_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_ids){
        free(keyQuery_product_ids);
        keyQuery_product_ids = NULL;
    }
    if(valueQuery_product_ids){
        free(valueQuery_product_ids);
        valueQuery_product_ids = NULL;
    }
    if(keyPairQuery_product_ids){
        keyValuePair_free(keyPairQuery_product_ids);
        keyPairQuery_product_ids = NULL;
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
    if(keyQuery_categories_ids){
        free(keyQuery_categories_ids);
        keyQuery_categories_ids = NULL;
    }
    if(valueQuery_categories_ids){
        free(valueQuery_categories_ids);
        valueQuery_categories_ids = NULL;
    }
    if(keyPairQuery_categories_ids){
        keyValuePair_free(keyPairQuery_categories_ids);
        keyPairQuery_categories_ids = NULL;
    }
    if(keyQuery_category_id){
        free(keyQuery_category_id);
        keyQuery_category_id = NULL;
    }
    if(valueQuery_category_id){
        free(valueQuery_category_id);
        valueQuery_category_id = NULL;
    }
    if(keyPairQuery_category_id){
        keyValuePair_free(keyPairQuery_category_id);
        keyPairQuery_category_id = NULL;
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
    if(keyQuery_currency_id){
        free(keyQuery_currency_id);
        keyQuery_currency_id = NULL;
    }
    if(valueQuery_currency_id){
        free(valueQuery_currency_id);
        valueQuery_currency_id = NULL;
    }
    if(keyPairQuery_currency_id){
        keyValuePair_free(keyPairQuery_currency_id);
        keyPairQuery_currency_id = NULL;
    }
    if(keyQuery_avail_view){
        free(keyQuery_avail_view);
        keyQuery_avail_view = NULL;
    }
    if(valueQuery_avail_view){
        free(valueQuery_avail_view);
        valueQuery_avail_view = NULL;
    }
    if(keyPairQuery_avail_view){
        keyValuePair_free(keyPairQuery_avail_view);
        keyPairQuery_avail_view = NULL;
    }
    if(keyQuery_avail_sale){
        free(keyQuery_avail_sale);
        keyQuery_avail_sale = NULL;
    }
    if(valueQuery_avail_sale){
        free(valueQuery_avail_sale);
        valueQuery_avail_sale = NULL;
    }
    if(keyPairQuery_avail_sale){
        keyValuePair_free(keyPairQuery_avail_sale);
        keyPairQuery_avail_sale = NULL;
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
    if(keyQuery_sku){
        free(keyQuery_sku);
        keyQuery_sku = NULL;
    }
    if(valueQuery_sku){
        free(valueQuery_sku);
        valueQuery_sku = NULL;
    }
    if(keyPairQuery_sku){
        keyValuePair_free(keyPairQuery_sku);
        keyPairQuery_sku = NULL;
    }
    if(keyQuery_brand_name){
        free(keyQuery_brand_name);
        keyQuery_brand_name = NULL;
    }
    if(valueQuery_brand_name){
        free(valueQuery_brand_name);
        valueQuery_brand_name = NULL;
    }
    if(keyPairQuery_brand_name){
        keyValuePair_free(keyPairQuery_brand_name);
        keyPairQuery_brand_name = NULL;
    }
    if(keyQuery_status){
        free(keyQuery_status);
        keyQuery_status = NULL;
    }
    if(valueQuery_status){
        free(valueQuery_status);
        valueQuery_status = NULL;
    }
    if(keyPairQuery_status){
        keyValuePair_free(keyPairQuery_status);
        keyPairQuery_status = NULL;
    }
    if(keyQuery_type){
        free(keyQuery_type);
        keyQuery_type = NULL;
    }
    if(valueQuery_type){
        free(valueQuery_type);
        valueQuery_type = NULL;
    }
    if(keyPairQuery_type){
        keyValuePair_free(keyPairQuery_type);
        keyPairQuery_type = NULL;
    }
    if(keyQuery_visible){
        free(keyQuery_visible);
        keyQuery_visible = NULL;
    }
    if(valueQuery_visible){
        free(valueQuery_visible);
        valueQuery_visible = NULL;
    }
    if(keyPairQuery_visible){
        keyValuePair_free(keyPairQuery_visible);
        keyPairQuery_visible = NULL;
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
    if(keyQuery_return_global){
        free(keyQuery_return_global);
        keyQuery_return_global = NULL;
    }
    if(valueQuery_return_global){
        free(valueQuery_return_global);
        valueQuery_return_global = NULL;
    }
    if(keyPairQuery_return_global){
        keyValuePair_free(keyPairQuery_return_global);
        keyPairQuery_return_global = NULL;
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
    if(keyQuery_report_request_id){
        free(keyQuery_report_request_id);
        keyQuery_report_request_id = NULL;
    }
    if(valueQuery_report_request_id){
        free(valueQuery_report_request_id);
        valueQuery_report_request_id = NULL;
    }
    if(keyPairQuery_report_request_id){
        keyValuePair_free(keyPairQuery_report_request_id);
        keyPairQuery_report_request_id = NULL;
    }
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
    if(keyQuery_disable_report_cache){
        free(keyQuery_disable_report_cache);
        keyQuery_disable_report_cache = NULL;
    }
    if(valueQuery_disable_report_cache){
        free(valueQuery_disable_report_cache);
        valueQuery_disable_report_cache = NULL;
    }
    if(keyPairQuery_disable_report_cache){
        keyValuePair_free(keyPairQuery_disable_report_cache);
        keyPairQuery_disable_report_cache = NULL;
    }
    if(keyQuery_use_latest_api_version){
        free(keyQuery_use_latest_api_version);
        keyQuery_use_latest_api_version = NULL;
    }
    if(valueQuery_use_latest_api_version){
        free(valueQuery_use_latest_api_version);
        valueQuery_use_latest_api_version = NULL;
    }
    if(keyPairQuery_use_latest_api_version){
        keyValuePair_free(keyPairQuery_use_latest_api_version);
        keyPairQuery_use_latest_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.manufacturer.add
//
// Add manufacturer to store and assign to product
//
product_manufacturer_add_200_response_t*
ProductAPI_productManufacturerAdd(apiClient_t *apiClient, char *product_id, char *manufacturer, char *store_id)
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
    char *localVarPath = strdup("/product.manufacturer.add.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_manufacturer = NULL;
    char * valueQuery_manufacturer = NULL;
    keyValuePair_t *keyPairQuery_manufacturer = 0;
    if (manufacturer)
    {
        keyQuery_manufacturer = strdup("manufacturer");
        valueQuery_manufacturer = strdup((manufacturer));
        keyPairQuery_manufacturer = keyValuePair_create(keyQuery_manufacturer, valueQuery_manufacturer);
        list_addElement(localVarQueryParameters,keyPairQuery_manufacturer);
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
    product_manufacturer_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_manufacturer_add_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_manufacturer){
        free(keyQuery_manufacturer);
        keyQuery_manufacturer = NULL;
    }
    if(valueQuery_manufacturer){
        free(valueQuery_manufacturer);
        valueQuery_manufacturer = NULL;
    }
    if(keyPairQuery_manufacturer){
        keyValuePair_free(keyPairQuery_manufacturer);
        keyPairQuery_manufacturer = NULL;
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

// product.option.add
//
// Add product option from store.
//
product_option_add_200_response_t*
ProductAPI_productOptionAdd(apiClient_t *apiClient, product_option_add_t *product_option_add)
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
    char *localVarPath = strdup("/product.option.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_option_add = NULL;
    if (product_option_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_option_add = product_option_add_convertToJSON(product_option_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_option_add);
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
    product_option_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_option_add_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_option_add) {
        cJSON_Delete(localVarSingleItemJSON_product_option_add);
        localVarSingleItemJSON_product_option_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.option.assign
//
// Assign option from product.
//
product_option_assign_200_response_t*
ProductAPI_productOptionAssign(apiClient_t *apiClient, char *product_id, char *option_id, int *required, int *sort_order, char *option_values, int *clear_cache)
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
    char *localVarPath = strdup("/product.option.assign.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_option_id = NULL;
    char * valueQuery_option_id = NULL;
    keyValuePair_t *keyPairQuery_option_id = 0;
    if (option_id)
    {
        keyQuery_option_id = strdup("option_id");
        valueQuery_option_id = strdup((option_id));
        keyPairQuery_option_id = keyValuePair_create(keyQuery_option_id, valueQuery_option_id);
        list_addElement(localVarQueryParameters,keyPairQuery_option_id);
    }

    // query parameters
    char *keyQuery_required = NULL;
    char * valueQuery_required = NULL;
    keyValuePair_t *keyPairQuery_required = 0;
    if (required)
    {
        keyQuery_required = strdup("required");
        valueQuery_required = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_required, MAX_NUMBER_LENGTH, "%d", *required);
        keyPairQuery_required = keyValuePair_create(keyQuery_required, valueQuery_required);
        list_addElement(localVarQueryParameters,keyPairQuery_required);
    }

    // query parameters
    char *keyQuery_sort_order = NULL;
    char * valueQuery_sort_order = NULL;
    keyValuePair_t *keyPairQuery_sort_order = 0;
    if (sort_order)
    {
        keyQuery_sort_order = strdup("sort_order");
        valueQuery_sort_order = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_sort_order, MAX_NUMBER_LENGTH, "%d", *sort_order);
        keyPairQuery_sort_order = keyValuePair_create(keyQuery_sort_order, valueQuery_sort_order);
        list_addElement(localVarQueryParameters,keyPairQuery_sort_order);
    }

    // query parameters
    char *keyQuery_option_values = NULL;
    char * valueQuery_option_values = NULL;
    keyValuePair_t *keyPairQuery_option_values = 0;
    if (option_values)
    {
        keyQuery_option_values = strdup("option_values");
        valueQuery_option_values = strdup((option_values));
        keyPairQuery_option_values = keyValuePair_create(keyQuery_option_values, valueQuery_option_values);
        list_addElement(localVarQueryParameters,keyPairQuery_option_values);
    }

    // query parameters
    char *keyQuery_clear_cache = NULL;
    char * valueQuery_clear_cache = NULL;
    keyValuePair_t *keyPairQuery_clear_cache = 0;
    if (clear_cache)
    {
        keyQuery_clear_cache = strdup("clear_cache");
        valueQuery_clear_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_clear_cache, MAX_NUMBER_LENGTH, "%d", *clear_cache);
        keyPairQuery_clear_cache = keyValuePair_create(keyQuery_clear_cache, valueQuery_clear_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_clear_cache);
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
    product_option_assign_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_option_assign_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_option_id){
        free(keyQuery_option_id);
        keyQuery_option_id = NULL;
    }
    if(valueQuery_option_id){
        free(valueQuery_option_id);
        valueQuery_option_id = NULL;
    }
    if(keyPairQuery_option_id){
        keyValuePair_free(keyPairQuery_option_id);
        keyPairQuery_option_id = NULL;
    }
    if(keyQuery_required){
        free(keyQuery_required);
        keyQuery_required = NULL;
    }
    if(valueQuery_required){
        free(valueQuery_required);
        valueQuery_required = NULL;
    }
    if(keyPairQuery_required){
        keyValuePair_free(keyPairQuery_required);
        keyPairQuery_required = NULL;
    }
    if(keyQuery_sort_order){
        free(keyQuery_sort_order);
        keyQuery_sort_order = NULL;
    }
    if(valueQuery_sort_order){
        free(valueQuery_sort_order);
        valueQuery_sort_order = NULL;
    }
    if(keyPairQuery_sort_order){
        keyValuePair_free(keyPairQuery_sort_order);
        keyPairQuery_sort_order = NULL;
    }
    if(keyQuery_option_values){
        free(keyQuery_option_values);
        keyQuery_option_values = NULL;
    }
    if(valueQuery_option_values){
        free(valueQuery_option_values);
        valueQuery_option_values = NULL;
    }
    if(keyPairQuery_option_values){
        keyValuePair_free(keyPairQuery_option_values);
        keyPairQuery_option_values = NULL;
    }
    if(keyQuery_clear_cache){
        free(keyQuery_clear_cache);
        keyQuery_clear_cache = NULL;
    }
    if(valueQuery_clear_cache){
        free(valueQuery_clear_cache);
        valueQuery_clear_cache = NULL;
    }
    if(keyPairQuery_clear_cache){
        keyValuePair_free(keyPairQuery_clear_cache);
        keyPairQuery_clear_cache = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.option.delete
//
// Product option delete.
//
attribute_delete_200_response_t*
ProductAPI_productOptionDelete(apiClient_t *apiClient, char *option_id, char *product_id, char *store_id)
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
    char *localVarPath = strdup("/product.option.delete.json");





    // query parameters
    char *keyQuery_option_id = NULL;
    char * valueQuery_option_id = NULL;
    keyValuePair_t *keyPairQuery_option_id = 0;
    if (option_id)
    {
        keyQuery_option_id = strdup("option_id");
        valueQuery_option_id = strdup((option_id));
        keyPairQuery_option_id = keyValuePair_create(keyQuery_option_id, valueQuery_option_id);
        list_addElement(localVarQueryParameters,keyPairQuery_option_id);
    }

    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
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
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_option_id){
        free(keyQuery_option_id);
        keyQuery_option_id = NULL;
    }
    if(valueQuery_option_id){
        free(valueQuery_option_id);
        valueQuery_option_id = NULL;
    }
    if(keyPairQuery_option_id){
        keyValuePair_free(keyPairQuery_option_id);
        keyPairQuery_option_id = NULL;
    }
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
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

// product.option.list
//
// Get list of options.
//
model_response_product_option_list_t*
ProductAPI_productOptionList(apiClient_t *apiClient, int *start, int *count, char *product_id, char *lang_id, char *store_id, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/product.option.list.json");





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
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
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
    model_response_product_option_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_product_option_list_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.option.value.add
//
// Add product option item from option.
//
product_option_value_add_200_response_t*
ProductAPI_productOptionValueAdd(apiClient_t *apiClient, char *product_id, char *option_id, char *option_value, int *sort_order, char *display_value, int *is_default, int *clear_cache)
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
    char *localVarPath = strdup("/product.option.value.add.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_option_id = NULL;
    char * valueQuery_option_id = NULL;
    keyValuePair_t *keyPairQuery_option_id = 0;
    if (option_id)
    {
        keyQuery_option_id = strdup("option_id");
        valueQuery_option_id = strdup((option_id));
        keyPairQuery_option_id = keyValuePair_create(keyQuery_option_id, valueQuery_option_id);
        list_addElement(localVarQueryParameters,keyPairQuery_option_id);
    }

    // query parameters
    char *keyQuery_option_value = NULL;
    char * valueQuery_option_value = NULL;
    keyValuePair_t *keyPairQuery_option_value = 0;
    if (option_value)
    {
        keyQuery_option_value = strdup("option_value");
        valueQuery_option_value = strdup((option_value));
        keyPairQuery_option_value = keyValuePair_create(keyQuery_option_value, valueQuery_option_value);
        list_addElement(localVarQueryParameters,keyPairQuery_option_value);
    }

    // query parameters
    char *keyQuery_sort_order = NULL;
    char * valueQuery_sort_order = NULL;
    keyValuePair_t *keyPairQuery_sort_order = 0;
    if (sort_order)
    {
        keyQuery_sort_order = strdup("sort_order");
        valueQuery_sort_order = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_sort_order, MAX_NUMBER_LENGTH, "%d", *sort_order);
        keyPairQuery_sort_order = keyValuePair_create(keyQuery_sort_order, valueQuery_sort_order);
        list_addElement(localVarQueryParameters,keyPairQuery_sort_order);
    }

    // query parameters
    char *keyQuery_display_value = NULL;
    char * valueQuery_display_value = NULL;
    keyValuePair_t *keyPairQuery_display_value = 0;
    if (display_value)
    {
        keyQuery_display_value = strdup("display_value");
        valueQuery_display_value = strdup((display_value));
        keyPairQuery_display_value = keyValuePair_create(keyQuery_display_value, valueQuery_display_value);
        list_addElement(localVarQueryParameters,keyPairQuery_display_value);
    }

    // query parameters
    char *keyQuery_is_default = NULL;
    char * valueQuery_is_default = NULL;
    keyValuePair_t *keyPairQuery_is_default = 0;
    if (is_default)
    {
        keyQuery_is_default = strdup("is_default");
        valueQuery_is_default = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_is_default, MAX_NUMBER_LENGTH, "%d", *is_default);
        keyPairQuery_is_default = keyValuePair_create(keyQuery_is_default, valueQuery_is_default);
        list_addElement(localVarQueryParameters,keyPairQuery_is_default);
    }

    // query parameters
    char *keyQuery_clear_cache = NULL;
    char * valueQuery_clear_cache = NULL;
    keyValuePair_t *keyPairQuery_clear_cache = 0;
    if (clear_cache)
    {
        keyQuery_clear_cache = strdup("clear_cache");
        valueQuery_clear_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_clear_cache, MAX_NUMBER_LENGTH, "%d", *clear_cache);
        keyPairQuery_clear_cache = keyValuePair_create(keyQuery_clear_cache, valueQuery_clear_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_clear_cache);
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
    product_option_value_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_option_value_add_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_option_id){
        free(keyQuery_option_id);
        keyQuery_option_id = NULL;
    }
    if(valueQuery_option_id){
        free(valueQuery_option_id);
        valueQuery_option_id = NULL;
    }
    if(keyPairQuery_option_id){
        keyValuePair_free(keyPairQuery_option_id);
        keyPairQuery_option_id = NULL;
    }
    if(keyQuery_option_value){
        free(keyQuery_option_value);
        keyQuery_option_value = NULL;
    }
    if(valueQuery_option_value){
        free(valueQuery_option_value);
        valueQuery_option_value = NULL;
    }
    if(keyPairQuery_option_value){
        keyValuePair_free(keyPairQuery_option_value);
        keyPairQuery_option_value = NULL;
    }
    if(keyQuery_sort_order){
        free(keyQuery_sort_order);
        keyQuery_sort_order = NULL;
    }
    if(valueQuery_sort_order){
        free(valueQuery_sort_order);
        valueQuery_sort_order = NULL;
    }
    if(keyPairQuery_sort_order){
        keyValuePair_free(keyPairQuery_sort_order);
        keyPairQuery_sort_order = NULL;
    }
    if(keyQuery_display_value){
        free(keyQuery_display_value);
        keyQuery_display_value = NULL;
    }
    if(valueQuery_display_value){
        free(valueQuery_display_value);
        valueQuery_display_value = NULL;
    }
    if(keyPairQuery_display_value){
        keyValuePair_free(keyPairQuery_display_value);
        keyPairQuery_display_value = NULL;
    }
    if(keyQuery_is_default){
        free(keyQuery_is_default);
        keyQuery_is_default = NULL;
    }
    if(valueQuery_is_default){
        free(valueQuery_is_default);
        valueQuery_is_default = NULL;
    }
    if(keyPairQuery_is_default){
        keyValuePair_free(keyPairQuery_is_default);
        keyPairQuery_is_default = NULL;
    }
    if(keyQuery_clear_cache){
        free(keyQuery_clear_cache);
        keyQuery_clear_cache = NULL;
    }
    if(valueQuery_clear_cache){
        free(valueQuery_clear_cache);
        valueQuery_clear_cache = NULL;
    }
    if(keyPairQuery_clear_cache){
        keyValuePair_free(keyPairQuery_clear_cache);
        keyPairQuery_clear_cache = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.option.value.assign
//
// Assign product option item from product.
//
product_option_value_assign_200_response_t*
ProductAPI_productOptionValueAssign(apiClient_t *apiClient, int *product_option_id, char *option_value_id, int *clear_cache)
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
    char *localVarPath = strdup("/product.option.value.assign.json");





    // query parameters
    char *keyQuery_product_option_id = NULL;
    char * valueQuery_product_option_id = NULL;
    keyValuePair_t *keyPairQuery_product_option_id = 0;
    if (product_option_id)
    {
        keyQuery_product_option_id = strdup("product_option_id");
        valueQuery_product_option_id = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_product_option_id, MAX_NUMBER_LENGTH, "%d", *product_option_id);
        keyPairQuery_product_option_id = keyValuePair_create(keyQuery_product_option_id, valueQuery_product_option_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_option_id);
    }

    // query parameters
    char *keyQuery_option_value_id = NULL;
    char * valueQuery_option_value_id = NULL;
    keyValuePair_t *keyPairQuery_option_value_id = 0;
    if (option_value_id)
    {
        keyQuery_option_value_id = strdup("option_value_id");
        valueQuery_option_value_id = strdup((option_value_id));
        keyPairQuery_option_value_id = keyValuePair_create(keyQuery_option_value_id, valueQuery_option_value_id);
        list_addElement(localVarQueryParameters,keyPairQuery_option_value_id);
    }

    // query parameters
    char *keyQuery_clear_cache = NULL;
    char * valueQuery_clear_cache = NULL;
    keyValuePair_t *keyPairQuery_clear_cache = 0;
    if (clear_cache)
    {
        keyQuery_clear_cache = strdup("clear_cache");
        valueQuery_clear_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_clear_cache, MAX_NUMBER_LENGTH, "%d", *clear_cache);
        keyPairQuery_clear_cache = keyValuePair_create(keyQuery_clear_cache, valueQuery_clear_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_clear_cache);
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
    product_option_value_assign_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_option_value_assign_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_option_id){
        free(keyQuery_product_option_id);
        keyQuery_product_option_id = NULL;
    }
    if(valueQuery_product_option_id){
        free(valueQuery_product_option_id);
        valueQuery_product_option_id = NULL;
    }
    if(keyPairQuery_product_option_id){
        keyValuePair_free(keyPairQuery_product_option_id);
        keyPairQuery_product_option_id = NULL;
    }
    if(keyQuery_option_value_id){
        free(keyQuery_option_value_id);
        keyQuery_option_value_id = NULL;
    }
    if(valueQuery_option_value_id){
        free(valueQuery_option_value_id);
        valueQuery_option_value_id = NULL;
    }
    if(keyPairQuery_option_value_id){
        keyValuePair_free(keyPairQuery_option_value_id);
        keyPairQuery_option_value_id = NULL;
    }
    if(keyQuery_clear_cache){
        free(keyQuery_clear_cache);
        keyQuery_clear_cache = NULL;
    }
    if(valueQuery_clear_cache){
        free(valueQuery_clear_cache);
        valueQuery_clear_cache = NULL;
    }
    if(keyPairQuery_clear_cache){
        keyValuePair_free(keyPairQuery_clear_cache);
        keyPairQuery_clear_cache = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.option.value.delete
//
// Product option value delete.
//
attribute_delete_200_response_t*
ProductAPI_productOptionValueDelete(apiClient_t *apiClient, char *option_id, char *option_value_id, char *product_id, char *store_id)
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
    char *localVarPath = strdup("/product.option.value.delete.json");





    // query parameters
    char *keyQuery_option_id = NULL;
    char * valueQuery_option_id = NULL;
    keyValuePair_t *keyPairQuery_option_id = 0;
    if (option_id)
    {
        keyQuery_option_id = strdup("option_id");
        valueQuery_option_id = strdup((option_id));
        keyPairQuery_option_id = keyValuePair_create(keyQuery_option_id, valueQuery_option_id);
        list_addElement(localVarQueryParameters,keyPairQuery_option_id);
    }

    // query parameters
    char *keyQuery_option_value_id = NULL;
    char * valueQuery_option_value_id = NULL;
    keyValuePair_t *keyPairQuery_option_value_id = 0;
    if (option_value_id)
    {
        keyQuery_option_value_id = strdup("option_value_id");
        valueQuery_option_value_id = strdup((option_value_id));
        keyPairQuery_option_value_id = keyValuePair_create(keyQuery_option_value_id, valueQuery_option_value_id);
        list_addElement(localVarQueryParameters,keyPairQuery_option_value_id);
    }

    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
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
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_option_id){
        free(keyQuery_option_id);
        keyQuery_option_id = NULL;
    }
    if(valueQuery_option_id){
        free(valueQuery_option_id);
        valueQuery_option_id = NULL;
    }
    if(keyPairQuery_option_id){
        keyValuePair_free(keyPairQuery_option_id);
        keyPairQuery_option_id = NULL;
    }
    if(keyQuery_option_value_id){
        free(keyQuery_option_value_id);
        keyQuery_option_value_id = NULL;
    }
    if(valueQuery_option_value_id){
        free(valueQuery_option_value_id);
        valueQuery_option_value_id = NULL;
    }
    if(keyPairQuery_option_value_id){
        keyValuePair_free(keyPairQuery_option_value_id);
        keyPairQuery_option_value_id = NULL;
    }
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
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

// product.option.value.update
//
// Update product option item from option.
//
account_config_update_200_response_t*
ProductAPI_productOptionValueUpdate(apiClient_t *apiClient, char *product_id, char *option_id, char *option_value_id, char *option_value, double price, double quantity, char *display_value, int *clear_cache)
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
    char *localVarPath = strdup("/product.option.value.update.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_option_id = NULL;
    char * valueQuery_option_id = NULL;
    keyValuePair_t *keyPairQuery_option_id = 0;
    if (option_id)
    {
        keyQuery_option_id = strdup("option_id");
        valueQuery_option_id = strdup((option_id));
        keyPairQuery_option_id = keyValuePair_create(keyQuery_option_id, valueQuery_option_id);
        list_addElement(localVarQueryParameters,keyPairQuery_option_id);
    }

    // query parameters
    char *keyQuery_option_value_id = NULL;
    char * valueQuery_option_value_id = NULL;
    keyValuePair_t *keyPairQuery_option_value_id = 0;
    if (option_value_id)
    {
        keyQuery_option_value_id = strdup("option_value_id");
        valueQuery_option_value_id = strdup((option_value_id));
        keyPairQuery_option_value_id = keyValuePair_create(keyQuery_option_value_id, valueQuery_option_value_id);
        list_addElement(localVarQueryParameters,keyPairQuery_option_value_id);
    }

    // query parameters
    char *keyQuery_option_value = NULL;
    char * valueQuery_option_value = NULL;
    keyValuePair_t *keyPairQuery_option_value = 0;
    if (option_value)
    {
        keyQuery_option_value = strdup("option_value");
        valueQuery_option_value = strdup((option_value));
        keyPairQuery_option_value = keyValuePair_create(keyQuery_option_value, valueQuery_option_value);
        list_addElement(localVarQueryParameters,keyPairQuery_option_value);
    }

    // query parameters
    char *keyQuery_price = NULL;
    double valueQuery_price ;
    keyValuePair_t *keyPairQuery_price = 0;
    if (price)
    {
        keyQuery_price = strdup("price");
        valueQuery_price = (price);
        keyPairQuery_price = keyValuePair_create(keyQuery_price, &valueQuery_price);
        list_addElement(localVarQueryParameters,keyPairQuery_price);
    }

    // query parameters
    char *keyQuery_quantity = NULL;
    double valueQuery_quantity ;
    keyValuePair_t *keyPairQuery_quantity = 0;
    if (quantity)
    {
        keyQuery_quantity = strdup("quantity");
        valueQuery_quantity = (quantity);
        keyPairQuery_quantity = keyValuePair_create(keyQuery_quantity, &valueQuery_quantity);
        list_addElement(localVarQueryParameters,keyPairQuery_quantity);
    }

    // query parameters
    char *keyQuery_display_value = NULL;
    char * valueQuery_display_value = NULL;
    keyValuePair_t *keyPairQuery_display_value = 0;
    if (display_value)
    {
        keyQuery_display_value = strdup("display_value");
        valueQuery_display_value = strdup((display_value));
        keyPairQuery_display_value = keyValuePair_create(keyQuery_display_value, valueQuery_display_value);
        list_addElement(localVarQueryParameters,keyPairQuery_display_value);
    }

    // query parameters
    char *keyQuery_clear_cache = NULL;
    char * valueQuery_clear_cache = NULL;
    keyValuePair_t *keyPairQuery_clear_cache = 0;
    if (clear_cache)
    {
        keyQuery_clear_cache = strdup("clear_cache");
        valueQuery_clear_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_clear_cache, MAX_NUMBER_LENGTH, "%d", *clear_cache);
        keyPairQuery_clear_cache = keyValuePair_create(keyQuery_clear_cache, valueQuery_clear_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_clear_cache);
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
    account_config_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_option_id){
        free(keyQuery_option_id);
        keyQuery_option_id = NULL;
    }
    if(valueQuery_option_id){
        free(valueQuery_option_id);
        valueQuery_option_id = NULL;
    }
    if(keyPairQuery_option_id){
        keyValuePair_free(keyPairQuery_option_id);
        keyPairQuery_option_id = NULL;
    }
    if(keyQuery_option_value_id){
        free(keyQuery_option_value_id);
        keyQuery_option_value_id = NULL;
    }
    if(valueQuery_option_value_id){
        free(valueQuery_option_value_id);
        valueQuery_option_value_id = NULL;
    }
    if(keyPairQuery_option_value_id){
        keyValuePair_free(keyPairQuery_option_value_id);
        keyPairQuery_option_value_id = NULL;
    }
    if(keyQuery_option_value){
        free(keyQuery_option_value);
        keyQuery_option_value = NULL;
    }
    if(valueQuery_option_value){
        free(valueQuery_option_value);
        valueQuery_option_value = NULL;
    }
    if(keyPairQuery_option_value){
        keyValuePair_free(keyPairQuery_option_value);
        keyPairQuery_option_value = NULL;
    }
    if(keyQuery_price){
        free(keyQuery_price);
        keyQuery_price = NULL;
    }
    if(keyPairQuery_price){
        keyValuePair_free(keyPairQuery_price);
        keyPairQuery_price = NULL;
    }
    if(keyQuery_quantity){
        free(keyQuery_quantity);
        keyQuery_quantity = NULL;
    }
    if(keyPairQuery_quantity){
        keyValuePair_free(keyPairQuery_quantity);
        keyPairQuery_quantity = NULL;
    }
    if(keyQuery_display_value){
        free(keyQuery_display_value);
        keyQuery_display_value = NULL;
    }
    if(valueQuery_display_value){
        free(valueQuery_display_value);
        valueQuery_display_value = NULL;
    }
    if(keyPairQuery_display_value){
        keyValuePair_free(keyPairQuery_display_value);
        keyPairQuery_display_value = NULL;
    }
    if(keyQuery_clear_cache){
        free(keyQuery_clear_cache);
        keyQuery_clear_cache = NULL;
    }
    if(valueQuery_clear_cache){
        free(valueQuery_clear_cache);
        valueQuery_clear_cache = NULL;
    }
    if(keyPairQuery_clear_cache){
        keyValuePair_free(keyPairQuery_clear_cache);
        keyPairQuery_clear_cache = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.price.add
//
// Add some prices to the product.
//
cart_validate_200_response_t*
ProductAPI_productPriceAdd(apiClient_t *apiClient, product_price_add_t *product_price_add)
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
    char *localVarPath = strdup("/product.price.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_price_add = NULL;
    if (product_price_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_price_add = product_price_add_convertToJSON(product_price_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_price_add);
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
    cart_validate_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_validate_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_price_add) {
        cJSON_Delete(localVarSingleItemJSON_product_price_add);
        localVarSingleItemJSON_product_price_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.price.delete
//
// Delete some prices of the product
//
attribute_delete_200_response_t*
ProductAPI_productPriceDelete(apiClient_t *apiClient, char *product_id, char *group_prices, char *store_id)
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
    char *localVarPath = strdup("/product.price.delete.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_group_prices = NULL;
    char * valueQuery_group_prices = NULL;
    keyValuePair_t *keyPairQuery_group_prices = 0;
    if (group_prices)
    {
        keyQuery_group_prices = strdup("group_prices");
        valueQuery_group_prices = strdup((group_prices));
        keyPairQuery_group_prices = keyValuePair_create(keyQuery_group_prices, valueQuery_group_prices);
        list_addElement(localVarQueryParameters,keyPairQuery_group_prices);
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
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_group_prices){
        free(keyQuery_group_prices);
        keyQuery_group_prices = NULL;
    }
    if(valueQuery_group_prices){
        free(valueQuery_group_prices);
        valueQuery_group_prices = NULL;
    }
    if(keyPairQuery_group_prices){
        keyValuePair_free(keyPairQuery_group_prices);
        keyPairQuery_group_prices = NULL;
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

// product.price.update
//
// Update some prices of the product.
//
account_config_update_200_response_t*
ProductAPI_productPriceUpdate(apiClient_t *apiClient, product_price_update_t *product_price_update)
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
    char *localVarPath = strdup("/product.price.update.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_price_update = NULL;
    if (product_price_update != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_price_update = product_price_update_convertToJSON(product_price_update);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_price_update);
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
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_price_update) {
        cJSON_Delete(localVarSingleItemJSON_product_price_update);
        localVarSingleItemJSON_product_price_update = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.review.list
//
// Get reviews of a specific product.
//
model_response_product_review_list_t*
ProductAPI_productReviewList(apiClient_t *apiClient, char *product_id, int *start, int *count, char *page_cursor, char *ids, char *store_id, char *status, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/product.review.list.json");





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
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
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
    char *keyQuery_status = NULL;
    char * valueQuery_status = NULL;
    keyValuePair_t *keyPairQuery_status = 0;
    if (status)
    {
        keyQuery_status = strdup("status");
        valueQuery_status = strdup((status));
        keyPairQuery_status = keyValuePair_create(keyQuery_status, valueQuery_status);
        list_addElement(localVarQueryParameters,keyPairQuery_status);
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
    model_response_product_review_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_product_review_list_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
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
    if(keyQuery_status){
        free(keyQuery_status);
        keyQuery_status = NULL;
    }
    if(valueQuery_status){
        free(valueQuery_status);
        valueQuery_status = NULL;
    }
    if(keyPairQuery_status){
        keyValuePair_free(keyPairQuery_status);
        keyPairQuery_status = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.store.assign
//
// Assign product to store
//
account_config_update_200_response_t*
ProductAPI_productStoreAssign(apiClient_t *apiClient, char *product_id, char *store_id)
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
    char *localVarPath = strdup("/product.store.assign.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
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
    account_config_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
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

// product.tax.add
//
// Add tax class and tax rate to store and assign to product.
//
product_tax_add_200_response_t*
ProductAPI_productTaxAdd(apiClient_t *apiClient, product_tax_add_t *product_tax_add)
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
    char *localVarPath = strdup("/product.tax.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_tax_add = NULL;
    if (product_tax_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_tax_add = product_tax_add_convertToJSON(product_tax_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_tax_add);
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
    product_tax_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_tax_add_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_tax_add) {
        cJSON_Delete(localVarSingleItemJSON_product_tax_add);
        localVarSingleItemJSON_product_tax_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.update
//
// This method can be used to update certain product data. The list of supported parameters depends on the specific platform. Please transmit only those parameters that are supported by the particular platform. Please note that to update the product quantity, it is recommended to use relative parameters (increase_quantity or reduce_quantity) to avoid unexpected overwrites on heavily loaded stores.
//
account_config_update_200_response_t*
ProductAPI_productUpdate(apiClient_t *apiClient, product_update_t *product_update)
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
    char *localVarPath = strdup("/product.update.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_update = NULL;
    if (product_update != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_update = product_update_convertToJSON(product_update);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_update);
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
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_update) {
        cJSON_Delete(localVarSingleItemJSON_product_update);
        localVarSingleItemJSON_product_update = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.update.batch
//
// Update products on the store.
//
category_add_batch_200_response_t*
ProductAPI_productUpdateBatch(apiClient_t *apiClient, product_update_batch_t *product_update_batch)
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
    char *localVarPath = strdup("/product.update.batch.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_update_batch = NULL;
    if (product_update_batch != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_update_batch = product_update_batch_convertToJSON(product_update_batch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_update_batch);
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
    category_add_batch_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_add_batch_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_update_batch) {
        cJSON_Delete(localVarSingleItemJSON_product_update_batch);
        localVarSingleItemJSON_product_update_batch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.add
//
// Add variant to product.
//
product_variant_add_200_response_t*
ProductAPI_productVariantAdd(apiClient_t *apiClient, product_variant_add_t *product_variant_add)
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
    char *localVarPath = strdup("/product.variant.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_variant_add = NULL;
    if (product_variant_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_variant_add = product_variant_add_convertToJSON(product_variant_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_variant_add);
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
    product_variant_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_variant_add_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_variant_add) {
        cJSON_Delete(localVarSingleItemJSON_product_variant_add);
        localVarSingleItemJSON_product_variant_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.add.batch
//
// Add new product variants to the store.
//
category_add_batch_200_response_t*
ProductAPI_productVariantAddBatch(apiClient_t *apiClient, product_variant_add_batch_t *product_variant_add_batch)
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
    char *localVarPath = strdup("/product.variant.add.batch.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_variant_add_batch = NULL;
    if (product_variant_add_batch != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_variant_add_batch = product_variant_add_batch_convertToJSON(product_variant_add_batch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_variant_add_batch);
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
    category_add_batch_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_add_batch_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_variant_add_batch) {
        cJSON_Delete(localVarSingleItemJSON_product_variant_add_batch);
        localVarSingleItemJSON_product_variant_add_batch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.count
//
// Get count variants.
//
product_variant_count_200_response_t*
ProductAPI_productVariantCount(apiClient_t *apiClient, char *product_id, char *category_id, char *store_id, char *created_from, char *created_to, char *modified_from, char *modified_to)
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
    char *localVarPath = strdup("/product.variant.count.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_category_id = NULL;
    char * valueQuery_category_id = NULL;
    keyValuePair_t *keyPairQuery_category_id = 0;
    if (category_id)
    {
        keyQuery_category_id = strdup("category_id");
        valueQuery_category_id = strdup((category_id));
        keyPairQuery_category_id = keyValuePair_create(keyQuery_category_id, valueQuery_category_id);
        list_addElement(localVarQueryParameters,keyPairQuery_category_id);
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
    product_variant_count_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_variant_count_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_category_id){
        free(keyQuery_category_id);
        keyQuery_category_id = NULL;
    }
    if(valueQuery_category_id){
        free(valueQuery_category_id);
        valueQuery_category_id = NULL;
    }
    if(keyPairQuery_category_id){
        keyValuePair_free(keyPairQuery_category_id);
        keyPairQuery_category_id = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.delete
//
// Delete variant.
//
attribute_value_delete_200_response_t*
ProductAPI_productVariantDelete(apiClient_t *apiClient, char *id, char *product_id, char *store_id)
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
    char *localVarPath = strdup("/product.variant.delete.json");





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
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
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
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_value_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_value_delete_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
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

// product.variant.delete.batch
//
// Remove product variants from the store.
//
category_add_batch_200_response_t*
ProductAPI_productVariantDeleteBatch(apiClient_t *apiClient, product_variant_delete_batch_t *product_variant_delete_batch)
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
    char *localVarPath = strdup("/product.variant.delete.batch.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_variant_delete_batch = NULL;
    if (product_variant_delete_batch != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_variant_delete_batch = product_variant_delete_batch_convertToJSON(product_variant_delete_batch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_variant_delete_batch);
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
    category_add_batch_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_add_batch_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_variant_delete_batch) {
        cJSON_Delete(localVarSingleItemJSON_product_variant_delete_batch);
        localVarSingleItemJSON_product_variant_delete_batch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.image.add
//
// Add image to product
//
product_variant_image_add_200_response_t*
ProductAPI_productVariantImageAdd(apiClient_t *apiClient, product_variant_image_add_t *product_variant_image_add)
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
    char *localVarPath = strdup("/product.variant.image.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_variant_image_add = NULL;
    if (product_variant_image_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_variant_image_add = product_variant_image_add_convertToJSON(product_variant_image_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_variant_image_add);
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
    product_variant_image_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_variant_image_add_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_variant_image_add) {
        cJSON_Delete(localVarSingleItemJSON_product_variant_image_add);
        localVarSingleItemJSON_product_variant_image_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.image.delete
//
// Delete  image to product
//
attribute_delete_200_response_t*
ProductAPI_productVariantImageDelete(apiClient_t *apiClient, char *product_id, char *product_variant_id, char *id, char *store_id)
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
    char *localVarPath = strdup("/product.variant.image.delete.json");





    // query parameters
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_product_variant_id = NULL;
    char * valueQuery_product_variant_id = NULL;
    keyValuePair_t *keyPairQuery_product_variant_id = 0;
    if (product_variant_id)
    {
        keyQuery_product_variant_id = strdup("product_variant_id");
        valueQuery_product_variant_id = strdup((product_variant_id));
        keyPairQuery_product_variant_id = keyValuePair_create(keyQuery_product_variant_id, valueQuery_product_variant_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_variant_id);
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
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_product_variant_id){
        free(keyQuery_product_variant_id);
        keyQuery_product_variant_id = NULL;
    }
    if(valueQuery_product_variant_id){
        free(valueQuery_product_variant_id);
        valueQuery_product_variant_id = NULL;
    }
    if(keyPairQuery_product_variant_id){
        keyValuePair_free(keyPairQuery_product_variant_id);
        keyPairQuery_product_variant_id = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.info
//
// Get variant info. This method is deprecated, and its development is stopped. Please use \"product.child_item.info\" instead.
//
product_info_200_response_t*
ProductAPI_productVariantInfo(apiClient_t *apiClient, char *id, char *store_id, char *params, char *exclude)
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
    char *localVarPath = strdup("/product.variant.info.json");





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
    product_info_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_info_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.list
//
// Get a list of variants. This method is deprecated, and its development is stopped. Please use \"product.child_item.list\" instead.
//
product_variant_list_200_response_t*
ProductAPI_productVariantList(apiClient_t *apiClient, int *start, int *count, char *product_id, char *category_id, char *store_id, char *created_from, char *created_to, char *modified_from, char *modified_to, char *params, char *exclude)
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
    char *localVarPath = strdup("/product.variant.list.json");





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
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_category_id = NULL;
    char * valueQuery_category_id = NULL;
    keyValuePair_t *keyPairQuery_category_id = 0;
    if (category_id)
    {
        keyQuery_category_id = strdup("category_id");
        valueQuery_category_id = strdup((category_id));
        keyPairQuery_category_id = keyValuePair_create(keyQuery_category_id, valueQuery_category_id);
        list_addElement(localVarQueryParameters,keyPairQuery_category_id);
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
    product_variant_list_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = product_variant_list_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_category_id){
        free(keyQuery_category_id);
        keyQuery_category_id = NULL;
    }
    if(valueQuery_category_id){
        free(valueQuery_category_id);
        valueQuery_category_id = NULL;
    }
    if(keyPairQuery_category_id){
        keyValuePair_free(keyPairQuery_category_id);
        keyPairQuery_category_id = NULL;
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

// product.variant.price.add
//
// Add some prices to the product variant.
//
cart_validate_200_response_t*
ProductAPI_productVariantPriceAdd(apiClient_t *apiClient, product_variant_price_add_t *product_variant_price_add)
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
    char *localVarPath = strdup("/product.variant.price.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_variant_price_add = NULL;
    if (product_variant_price_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_variant_price_add = product_variant_price_add_convertToJSON(product_variant_price_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_variant_price_add);
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
    cart_validate_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_validate_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_variant_price_add) {
        cJSON_Delete(localVarSingleItemJSON_product_variant_price_add);
        localVarSingleItemJSON_product_variant_price_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.price.delete
//
// Delete some prices of the product variant.
//
attribute_delete_200_response_t*
ProductAPI_productVariantPriceDelete(apiClient_t *apiClient, char *id, char *product_id, char *group_prices, char *store_id)
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
    char *localVarPath = strdup("/product.variant.price.delete.json");





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
    char *keyQuery_product_id = NULL;
    char * valueQuery_product_id = NULL;
    keyValuePair_t *keyPairQuery_product_id = 0;
    if (product_id)
    {
        keyQuery_product_id = strdup("product_id");
        valueQuery_product_id = strdup((product_id));
        keyPairQuery_product_id = keyValuePair_create(keyQuery_product_id, valueQuery_product_id);
        list_addElement(localVarQueryParameters,keyPairQuery_product_id);
    }

    // query parameters
    char *keyQuery_group_prices = NULL;
    char * valueQuery_group_prices = NULL;
    keyValuePair_t *keyPairQuery_group_prices = 0;
    if (group_prices)
    {
        keyQuery_group_prices = strdup("group_prices");
        valueQuery_group_prices = strdup((group_prices));
        keyPairQuery_group_prices = keyValuePair_create(keyQuery_group_prices, valueQuery_group_prices);
        list_addElement(localVarQueryParameters,keyPairQuery_group_prices);
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
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if(keyQuery_product_id){
        free(keyQuery_product_id);
        keyQuery_product_id = NULL;
    }
    if(valueQuery_product_id){
        free(valueQuery_product_id);
        valueQuery_product_id = NULL;
    }
    if(keyPairQuery_product_id){
        keyValuePair_free(keyPairQuery_product_id);
        keyPairQuery_product_id = NULL;
    }
    if(keyQuery_group_prices){
        free(keyQuery_group_prices);
        keyQuery_group_prices = NULL;
    }
    if(valueQuery_group_prices){
        free(valueQuery_group_prices);
        valueQuery_group_prices = NULL;
    }
    if(keyPairQuery_group_prices){
        keyValuePair_free(keyPairQuery_group_prices);
        keyPairQuery_group_prices = NULL;
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

// product.variant.price.update
//
// Update some prices of the product variant.
//
account_config_update_200_response_t*
ProductAPI_productVariantPriceUpdate(apiClient_t *apiClient, product_variant_price_update_t *product_variant_price_update)
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
    char *localVarPath = strdup("/product.variant.price.update.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_variant_price_update = NULL;
    if (product_variant_price_update != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_variant_price_update = product_variant_price_update_convertToJSON(product_variant_price_update);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_variant_price_update);
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
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_variant_price_update) {
        cJSON_Delete(localVarSingleItemJSON_product_variant_price_update);
        localVarSingleItemJSON_product_variant_price_update = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.update
//
// Update variant.
//
account_config_update_200_response_t*
ProductAPI_productVariantUpdate(apiClient_t *apiClient, product_variant_update_t *product_variant_update)
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
    char *localVarPath = strdup("/product.variant.update.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_variant_update = NULL;
    if (product_variant_update != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_variant_update = product_variant_update_convertToJSON(product_variant_update);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_variant_update);
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
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_variant_update) {
        cJSON_Delete(localVarSingleItemJSON_product_variant_update);
        localVarSingleItemJSON_product_variant_update = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// product.variant.update.batch
//
// Update products variants on the store.
//
category_add_batch_200_response_t*
ProductAPI_productVariantUpdateBatch(apiClient_t *apiClient, product_variant_update_batch_t *product_variant_update_batch)
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
    char *localVarPath = strdup("/product.variant.update.batch.json");





    // Body Param
    cJSON *localVarSingleItemJSON_product_variant_update_batch = NULL;
    if (product_variant_update_batch != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_product_variant_update_batch = product_variant_update_batch_convertToJSON(product_variant_update_batch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_variant_update_batch);
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
    category_add_batch_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ProductAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_add_batch_200_response_parseFromJSON(ProductAPIlocalVarJSON);
        cJSON_Delete(ProductAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_product_variant_update_batch) {
        cJSON_Delete(localVarSingleItemJSON_product_variant_update_batch);
        localVarSingleItemJSON_product_variant_update_batch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

