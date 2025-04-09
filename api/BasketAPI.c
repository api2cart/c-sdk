#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "BasketAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// basket.info
//
// Retrieve basket information.
//
basket_info_200_response_t*
BasketAPI_basketInfo(apiClient_t *apiClient, char *id, char *store_id, char *params, char *exclude, char *response_fields)
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
    char *localVarPath = strdup("/basket.info.json");





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
    basket_info_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BasketAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = basket_info_200_response_parseFromJSON(BasketAPIlocalVarJSON);
        cJSON_Delete(BasketAPIlocalVarJSON);
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

// basket.item.add
//
// Add item to basket
//
basket_item_add_200_response_t*
BasketAPI_basketItemAdd(apiClient_t *apiClient, char *customer_id, char *product_id, char *variant_id, double quantity, char *store_id)
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
    char *localVarPath = strdup("/basket.item.add.json");





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
    basket_item_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BasketAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = basket_item_add_200_response_parseFromJSON(BasketAPIlocalVarJSON);
        cJSON_Delete(BasketAPIlocalVarJSON);
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
    if(keyQuery_quantity){
        free(keyQuery_quantity);
        keyQuery_quantity = NULL;
    }
    if(keyPairQuery_quantity){
        keyValuePair_free(keyPairQuery_quantity);
        keyPairQuery_quantity = NULL;
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

// basket.live_shipping_service.create
//
// Create live shipping rate service.
//
basket_live_shipping_service_create_200_response_t*
BasketAPI_basketLiveShippingServiceCreate(apiClient_t *apiClient, char *name, char *callback, char *store_id)
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
    char *localVarPath = strdup("/basket.live_shipping_service.create.json");





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
        cJSON *BasketAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = basket_live_shipping_service_create_200_response_parseFromJSON(BasketAPIlocalVarJSON);
        cJSON_Delete(BasketAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// basket.live_shipping_service.delete
//
// Delete live shipping rate service.
//
basket_live_shipping_service_delete_200_response_t*
BasketAPI_basketLiveShippingServiceDelete(apiClient_t *apiClient, int *id)
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
    char *localVarPath = strdup("/basket.live_shipping_service.delete.json");





    // query parameters
    char *keyQuery_id = NULL;
    char * valueQuery_id = NULL;
    keyValuePair_t *keyPairQuery_id = 0;
    if (id)
    {
        keyQuery_id = strdup("id");
        valueQuery_id = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_id, MAX_NUMBER_LENGTH, "%d", *id);
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
    basket_live_shipping_service_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BasketAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = basket_live_shipping_service_delete_200_response_parseFromJSON(BasketAPIlocalVarJSON);
        cJSON_Delete(BasketAPIlocalVarJSON);
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

// basket.live_shipping_service.list
//
// Retrieve a list of live shipping rate services.
//
basket_live_shipping_service_list_200_response_t*
BasketAPI_basketLiveShippingServiceList(apiClient_t *apiClient, char *store_id, int *start, int *count)
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
    char *localVarPath = strdup("/basket.live_shipping_service.list.json");





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
    basket_live_shipping_service_list_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BasketAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = basket_live_shipping_service_list_200_response_parseFromJSON(BasketAPIlocalVarJSON);
        cJSON_Delete(BasketAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

