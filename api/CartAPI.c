#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CartAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096

// Functions for enum ENTITY for CartAPI_cartCouponConditionAdd

static char* cartCouponConditionAdd_ENTITY_ToString(api2cart_openapi_cartCouponConditionAdd_entity_e ENTITY){
    char *ENTITYArray[] =  { "NULL", "order", "order_shipping_address", "product", "customer" };
    return ENTITYArray[ENTITY];
}

static api2cart_openapi_cartCouponConditionAdd_entity_e cartCouponConditionAdd_ENTITY_FromString(char* ENTITY){
    int stringToReturn = 0;
    char *ENTITYArray[] =  { "NULL", "order", "order_shipping_address", "product", "customer" };
    size_t sizeofArray = sizeof(ENTITYArray) / sizeof(ENTITYArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ENTITY, ENTITYArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cartCouponConditionAdd_ENTITY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cartCouponConditionAdd_ENTITY_convertToJSON(api2cart_openapi_cartCouponConditionAdd_entity_e ENTITY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "entity", cartCouponConditionAdd_ENTITY_ToString(ENTITY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cartCouponConditionAdd_ENTITY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static api2cart_openapi_cartCouponConditionAdd_entity_e cartCouponConditionAdd_ENTITY_parseFromJSON(cJSON* ENTITYJSON) {
    api2cart_openapi_cartCouponConditionAdd_entity_e ENTITYVariable = 0;
    cJSON *ENTITYVar = cJSON_GetObjectItemCaseSensitive(ENTITYJSON, "entity");
    if(!cJSON_IsString(ENTITYVar) || (ENTITYVar->valuestring == NULL))
    {
        goto end;
    }
    ENTITYVariable = cartCouponConditionAdd_ENTITY_FromString(ENTITYVar->valuestring);
    return ENTITYVariable;
end:
    return 0;
}
*/

// Functions for enum KEY for CartAPI_cartCouponConditionAdd

static char* cartCouponConditionAdd_KEY_ToString(api2cart_openapi_cartCouponConditionAdd_key_e KEY){
    char *KEYArray[] =  { "NULL", "total", "subtotal", "shipping_total", "total_quantity", "total_weight", "country", "product_id", "variant_id", "category_id", "customer_id", "item_price", "item_total_price", "item_quantity", "carrier_id" };
    return KEYArray[KEY];
}

static api2cart_openapi_cartCouponConditionAdd_key_e cartCouponConditionAdd_KEY_FromString(char* KEY){
    int stringToReturn = 0;
    char *KEYArray[] =  { "NULL", "total", "subtotal", "shipping_total", "total_quantity", "total_weight", "country", "product_id", "variant_id", "category_id", "customer_id", "item_price", "item_total_price", "item_quantity", "carrier_id" };
    size_t sizeofArray = sizeof(KEYArray) / sizeof(KEYArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(KEY, KEYArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cartCouponConditionAdd_KEY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cartCouponConditionAdd_KEY_convertToJSON(api2cart_openapi_cartCouponConditionAdd_key_e KEY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "key", cartCouponConditionAdd_KEY_ToString(KEY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cartCouponConditionAdd_KEY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static api2cart_openapi_cartCouponConditionAdd_key_e cartCouponConditionAdd_KEY_parseFromJSON(cJSON* KEYJSON) {
    api2cart_openapi_cartCouponConditionAdd_key_e KEYVariable = 0;
    cJSON *KEYVar = cJSON_GetObjectItemCaseSensitive(KEYJSON, "key");
    if(!cJSON_IsString(KEYVar) || (KEYVar->valuestring == NULL))
    {
        goto end;
    }
    KEYVariable = cartCouponConditionAdd_KEY_FromString(KEYVar->valuestring);
    return KEYVariable;
end:
    return 0;
}
*/


// cart.bridge
//
// Get bridge key and store key
//
cart_bridge_200_response_t*
CartAPI_cartBridge(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/cart.bridge.json");




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
    cart_bridge_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_bridge_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.catalog_price_rules.count
//
// Get count of cart catalog price rules discounts.
//
cart_catalog_price_rules_count_200_response_t*
CartAPI_cartCatalogPriceRulesCount(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/cart.catalog_price_rules.count.json");




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
    cart_catalog_price_rules_count_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_catalog_price_rules_count_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.catalog_price_rules.list
//
// Get cart catalog price rules discounts.
//
model_response_cart_catalog_price_rules_list_t*
CartAPI_cartCatalogPriceRulesList(apiClient_t *apiClient, char *page_cursor, int *start, int *count, char *ids, char *params, char *response_fields, char *exclude)
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
    char *localVarPath = strdup("/cart.catalog_price_rules.list.json");





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
    model_response_cart_catalog_price_rules_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_cart_catalog_price_rules_list_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.clear_cache
//
// Clear cache on store.
//
cart_clear_cache_200_response_t*
CartAPI_cartClearCache(apiClient_t *apiClient, char *cache_type)
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
    char *localVarPath = strdup("/cart.clear_cache.json");





    // query parameters
    char *keyQuery_cache_type = NULL;
    char * valueQuery_cache_type = NULL;
    keyValuePair_t *keyPairQuery_cache_type = 0;
    if (cache_type)
    {
        keyQuery_cache_type = strdup("cache_type");
        valueQuery_cache_type = strdup((cache_type));
        keyPairQuery_cache_type = keyValuePair_create(keyQuery_cache_type, valueQuery_cache_type);
        list_addElement(localVarQueryParameters,keyPairQuery_cache_type);
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
    cart_clear_cache_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_clear_cache_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_cache_type){
        free(keyQuery_cache_type);
        keyQuery_cache_type = NULL;
    }
    if(valueQuery_cache_type){
        free(valueQuery_cache_type);
        valueQuery_cache_type = NULL;
    }
    if(keyPairQuery_cache_type){
        keyValuePair_free(keyPairQuery_cache_type);
        keyPairQuery_cache_type = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.config
//
// Get list of cart configs
//
cart_config_200_response_t*
CartAPI_cartConfig(apiClient_t *apiClient, char *params, char *exclude)
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
    char *localVarPath = strdup("/cart.config.json");





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
    cart_config_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_config_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.config.update
//
// Use this API method to update custom data in client database.
//
cart_config_update_200_response_t*
CartAPI_cartConfigUpdate(apiClient_t *apiClient, cart_config_update_t *cart_config_update)
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
    char *localVarPath = strdup("/cart.config.update.json");





    // Body Param
    cJSON *localVarSingleItemJSON_cart_config_update = NULL;
    if (cart_config_update != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_cart_config_update = cart_config_update_convertToJSON(cart_config_update);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_cart_config_update);
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
    cart_config_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_config_update_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_cart_config_update) {
        cJSON_Delete(localVarSingleItemJSON_cart_config_update);
        localVarSingleItemJSON_cart_config_update = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.coupon.add
//
// Use this method to create a coupon with specified conditions.
//
cart_coupon_add_200_response_t*
CartAPI_cartCouponAdd(apiClient_t *apiClient, cart_coupon_add_t *cart_coupon_add)
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
    char *localVarPath = strdup("/cart.coupon.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_cart_coupon_add = NULL;
    if (cart_coupon_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_cart_coupon_add = cart_coupon_add_convertToJSON(cart_coupon_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_cart_coupon_add);
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
    cart_coupon_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_coupon_add_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_cart_coupon_add) {
        cJSON_Delete(localVarSingleItemJSON_cart_coupon_add);
        localVarSingleItemJSON_cart_coupon_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.coupon.condition.add
//
// Use this method to add additional conditions for coupon application.
//
basket_live_shipping_service_delete_200_response_t*
CartAPI_cartCouponConditionAdd(apiClient_t *apiClient, char *coupon_id, api2cart_openapi_cartCouponConditionAdd_entity_e entity, api2cart_openapi_cartCouponConditionAdd_key_e key, char *_operator, char *value, char *store_id, char *target, int *include_tax, int *include_shipping)
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
    char *localVarPath = strdup("/cart.coupon.condition.add.json");





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
    char *keyQuery_coupon_id = NULL;
    char * valueQuery_coupon_id = NULL;
    keyValuePair_t *keyPairQuery_coupon_id = 0;
    if (coupon_id)
    {
        keyQuery_coupon_id = strdup("coupon_id");
        valueQuery_coupon_id = strdup((coupon_id));
        keyPairQuery_coupon_id = keyValuePair_create(keyQuery_coupon_id, valueQuery_coupon_id);
        list_addElement(localVarQueryParameters,keyPairQuery_coupon_id);
    }

    // query parameters
    char *keyQuery_target = NULL;
    char * valueQuery_target = NULL;
    keyValuePair_t *keyPairQuery_target = 0;
    if (target)
    {
        keyQuery_target = strdup("target");
        valueQuery_target = strdup((target));
        keyPairQuery_target = keyValuePair_create(keyQuery_target, valueQuery_target);
        list_addElement(localVarQueryParameters,keyPairQuery_target);
    }

    // query parameters
    char *keyQuery_entity = NULL;
    api2cart_openapi_cartCouponConditionAdd_entity_e valueQuery_entity ;
    keyValuePair_t *keyPairQuery_entity = 0;
    if (entity)
    {
        keyQuery_entity = strdup("entity");
        valueQuery_entity = (entity);
        keyPairQuery_entity = keyValuePair_create(keyQuery_entity, strdup(cartCouponConditionAdd_ENTITY_ToString(
        valueQuery_entity)));
        list_addElement(localVarQueryParameters,keyPairQuery_entity);
    }

    // query parameters
    char *keyQuery_key = NULL;
    api2cart_openapi_cartCouponConditionAdd_key_e valueQuery_key ;
    keyValuePair_t *keyPairQuery_key = 0;
    if (key)
    {
        keyQuery_key = strdup("key");
        valueQuery_key = (key);
        keyPairQuery_key = keyValuePair_create(keyQuery_key, strdup(cartCouponConditionAdd_KEY_ToString(
        valueQuery_key)));
        list_addElement(localVarQueryParameters,keyPairQuery_key);
    }

    // query parameters
    char *keyQuery__operator = NULL;
    char * valueQuery__operator = NULL;
    keyValuePair_t *keyPairQuery__operator = 0;
    if (_operator)
    {
        keyQuery__operator = strdup("operator");
        valueQuery__operator = strdup((_operator));
        keyPairQuery__operator = keyValuePair_create(keyQuery__operator, valueQuery__operator);
        list_addElement(localVarQueryParameters,keyPairQuery__operator);
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
    char *keyQuery_include_tax = NULL;
    char * valueQuery_include_tax = NULL;
    keyValuePair_t *keyPairQuery_include_tax = 0;
    if (include_tax)
    {
        keyQuery_include_tax = strdup("include_tax");
        valueQuery_include_tax = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_include_tax, MAX_NUMBER_LENGTH, "%d", *include_tax);
        keyPairQuery_include_tax = keyValuePair_create(keyQuery_include_tax, valueQuery_include_tax);
        list_addElement(localVarQueryParameters,keyPairQuery_include_tax);
    }

    // query parameters
    char *keyQuery_include_shipping = NULL;
    char * valueQuery_include_shipping = NULL;
    keyValuePair_t *keyPairQuery_include_shipping = 0;
    if (include_shipping)
    {
        keyQuery_include_shipping = strdup("include_shipping");
        valueQuery_include_shipping = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_include_shipping, MAX_NUMBER_LENGTH, "%d", *include_shipping);
        keyPairQuery_include_shipping = keyValuePair_create(keyQuery_include_shipping, valueQuery_include_shipping);
        list_addElement(localVarQueryParameters,keyPairQuery_include_shipping);
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
    basket_live_shipping_service_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = basket_live_shipping_service_delete_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_coupon_id){
        free(keyQuery_coupon_id);
        keyQuery_coupon_id = NULL;
    }
    if(valueQuery_coupon_id){
        free(valueQuery_coupon_id);
        valueQuery_coupon_id = NULL;
    }
    if(keyPairQuery_coupon_id){
        keyValuePair_free(keyPairQuery_coupon_id);
        keyPairQuery_coupon_id = NULL;
    }
    if(keyQuery_target){
        free(keyQuery_target);
        keyQuery_target = NULL;
    }
    if(valueQuery_target){
        free(valueQuery_target);
        valueQuery_target = NULL;
    }
    if(keyPairQuery_target){
        keyValuePair_free(keyPairQuery_target);
        keyPairQuery_target = NULL;
    }
    if(keyQuery_entity){
        free(keyQuery_entity);
        keyQuery_entity = NULL;
    }
    if(keyPairQuery_entity){
        keyValuePair_free(keyPairQuery_entity);
        keyPairQuery_entity = NULL;
    }
    if(keyQuery_key){
        free(keyQuery_key);
        keyQuery_key = NULL;
    }
    if(keyPairQuery_key){
        keyValuePair_free(keyPairQuery_key);
        keyPairQuery_key = NULL;
    }
    if(keyQuery__operator){
        free(keyQuery__operator);
        keyQuery__operator = NULL;
    }
    if(valueQuery__operator){
        free(valueQuery__operator);
        valueQuery__operator = NULL;
    }
    if(keyPairQuery__operator){
        keyValuePair_free(keyPairQuery__operator);
        keyPairQuery__operator = NULL;
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
    if(keyQuery_include_tax){
        free(keyQuery_include_tax);
        keyQuery_include_tax = NULL;
    }
    if(valueQuery_include_tax){
        free(valueQuery_include_tax);
        valueQuery_include_tax = NULL;
    }
    if(keyPairQuery_include_tax){
        keyValuePair_free(keyPairQuery_include_tax);
        keyPairQuery_include_tax = NULL;
    }
    if(keyQuery_include_shipping){
        free(keyQuery_include_shipping);
        keyQuery_include_shipping = NULL;
    }
    if(valueQuery_include_shipping){
        free(valueQuery_include_shipping);
        valueQuery_include_shipping = NULL;
    }
    if(keyPairQuery_include_shipping){
        keyValuePair_free(keyPairQuery_include_shipping);
        keyPairQuery_include_shipping = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.coupon.count
//
// This method allows you to get the number of coupons. On some platforms, you can filter the coupons by the date they were active.
//
cart_coupon_count_200_response_t*
CartAPI_cartCouponCount(apiClient_t *apiClient, char *store_id, char *date_start_from, char *date_start_to, char *date_end_from, char *date_end_to, int *avail)
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
    char *localVarPath = strdup("/cart.coupon.count.json");





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
    char *keyQuery_date_start_from = NULL;
    char * valueQuery_date_start_from = NULL;
    keyValuePair_t *keyPairQuery_date_start_from = 0;
    if (date_start_from)
    {
        keyQuery_date_start_from = strdup("date_start_from");
        valueQuery_date_start_from = strdup((date_start_from));
        keyPairQuery_date_start_from = keyValuePair_create(keyQuery_date_start_from, valueQuery_date_start_from);
        list_addElement(localVarQueryParameters,keyPairQuery_date_start_from);
    }

    // query parameters
    char *keyQuery_date_start_to = NULL;
    char * valueQuery_date_start_to = NULL;
    keyValuePair_t *keyPairQuery_date_start_to = 0;
    if (date_start_to)
    {
        keyQuery_date_start_to = strdup("date_start_to");
        valueQuery_date_start_to = strdup((date_start_to));
        keyPairQuery_date_start_to = keyValuePair_create(keyQuery_date_start_to, valueQuery_date_start_to);
        list_addElement(localVarQueryParameters,keyPairQuery_date_start_to);
    }

    // query parameters
    char *keyQuery_date_end_from = NULL;
    char * valueQuery_date_end_from = NULL;
    keyValuePair_t *keyPairQuery_date_end_from = 0;
    if (date_end_from)
    {
        keyQuery_date_end_from = strdup("date_end_from");
        valueQuery_date_end_from = strdup((date_end_from));
        keyPairQuery_date_end_from = keyValuePair_create(keyQuery_date_end_from, valueQuery_date_end_from);
        list_addElement(localVarQueryParameters,keyPairQuery_date_end_from);
    }

    // query parameters
    char *keyQuery_date_end_to = NULL;
    char * valueQuery_date_end_to = NULL;
    keyValuePair_t *keyPairQuery_date_end_to = 0;
    if (date_end_to)
    {
        keyQuery_date_end_to = strdup("date_end_to");
        valueQuery_date_end_to = strdup((date_end_to));
        keyPairQuery_date_end_to = keyValuePair_create(keyQuery_date_end_to, valueQuery_date_end_to);
        list_addElement(localVarQueryParameters,keyPairQuery_date_end_to);
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
    cart_coupon_count_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_coupon_count_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_date_start_from){
        free(keyQuery_date_start_from);
        keyQuery_date_start_from = NULL;
    }
    if(valueQuery_date_start_from){
        free(valueQuery_date_start_from);
        valueQuery_date_start_from = NULL;
    }
    if(keyPairQuery_date_start_from){
        keyValuePair_free(keyPairQuery_date_start_from);
        keyPairQuery_date_start_from = NULL;
    }
    if(keyQuery_date_start_to){
        free(keyQuery_date_start_to);
        keyQuery_date_start_to = NULL;
    }
    if(valueQuery_date_start_to){
        free(valueQuery_date_start_to);
        valueQuery_date_start_to = NULL;
    }
    if(keyPairQuery_date_start_to){
        keyValuePair_free(keyPairQuery_date_start_to);
        keyPairQuery_date_start_to = NULL;
    }
    if(keyQuery_date_end_from){
        free(keyQuery_date_end_from);
        keyQuery_date_end_from = NULL;
    }
    if(valueQuery_date_end_from){
        free(valueQuery_date_end_from);
        valueQuery_date_end_from = NULL;
    }
    if(keyPairQuery_date_end_from){
        keyValuePair_free(keyPairQuery_date_end_from);
        keyPairQuery_date_end_from = NULL;
    }
    if(keyQuery_date_end_to){
        free(keyQuery_date_end_to);
        keyQuery_date_end_to = NULL;
    }
    if(valueQuery_date_end_to){
        free(valueQuery_date_end_to);
        valueQuery_date_end_to = NULL;
    }
    if(keyPairQuery_date_end_to){
        keyValuePair_free(keyPairQuery_date_end_to);
        keyPairQuery_date_end_to = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.coupon.delete
//
// Delete coupon
//
attribute_delete_200_response_t*
CartAPI_cartCouponDelete(apiClient_t *apiClient, char *id, char *store_id)
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
    char *localVarPath = strdup("/cart.coupon.delete.json");





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
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.coupon.list
//
// Get cart coupon discounts.
//
model_response_cart_coupon_list_t*
CartAPI_cartCouponList(apiClient_t *apiClient, char *page_cursor, int *start, int *count, char *coupons_ids, char *store_id, char *date_start_from, char *date_start_to, char *date_end_from, char *date_end_to, int *avail, char *lang_id, char *params, char *response_fields, char *exclude)
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
    char *localVarPath = strdup("/cart.coupon.list.json");





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
    char *keyQuery_coupons_ids = NULL;
    char * valueQuery_coupons_ids = NULL;
    keyValuePair_t *keyPairQuery_coupons_ids = 0;
    if (coupons_ids)
    {
        keyQuery_coupons_ids = strdup("coupons_ids");
        valueQuery_coupons_ids = strdup((coupons_ids));
        keyPairQuery_coupons_ids = keyValuePair_create(keyQuery_coupons_ids, valueQuery_coupons_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_coupons_ids);
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
    char *keyQuery_date_start_from = NULL;
    char * valueQuery_date_start_from = NULL;
    keyValuePair_t *keyPairQuery_date_start_from = 0;
    if (date_start_from)
    {
        keyQuery_date_start_from = strdup("date_start_from");
        valueQuery_date_start_from = strdup((date_start_from));
        keyPairQuery_date_start_from = keyValuePair_create(keyQuery_date_start_from, valueQuery_date_start_from);
        list_addElement(localVarQueryParameters,keyPairQuery_date_start_from);
    }

    // query parameters
    char *keyQuery_date_start_to = NULL;
    char * valueQuery_date_start_to = NULL;
    keyValuePair_t *keyPairQuery_date_start_to = 0;
    if (date_start_to)
    {
        keyQuery_date_start_to = strdup("date_start_to");
        valueQuery_date_start_to = strdup((date_start_to));
        keyPairQuery_date_start_to = keyValuePair_create(keyQuery_date_start_to, valueQuery_date_start_to);
        list_addElement(localVarQueryParameters,keyPairQuery_date_start_to);
    }

    // query parameters
    char *keyQuery_date_end_from = NULL;
    char * valueQuery_date_end_from = NULL;
    keyValuePair_t *keyPairQuery_date_end_from = 0;
    if (date_end_from)
    {
        keyQuery_date_end_from = strdup("date_end_from");
        valueQuery_date_end_from = strdup((date_end_from));
        keyPairQuery_date_end_from = keyValuePair_create(keyQuery_date_end_from, valueQuery_date_end_from);
        list_addElement(localVarQueryParameters,keyPairQuery_date_end_from);
    }

    // query parameters
    char *keyQuery_date_end_to = NULL;
    char * valueQuery_date_end_to = NULL;
    keyValuePair_t *keyPairQuery_date_end_to = 0;
    if (date_end_to)
    {
        keyQuery_date_end_to = strdup("date_end_to");
        valueQuery_date_end_to = strdup((date_end_to));
        keyPairQuery_date_end_to = keyValuePair_create(keyQuery_date_end_to, valueQuery_date_end_to);
        list_addElement(localVarQueryParameters,keyPairQuery_date_end_to);
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
    model_response_cart_coupon_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_cart_coupon_list_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_coupons_ids){
        free(keyQuery_coupons_ids);
        keyQuery_coupons_ids = NULL;
    }
    if(valueQuery_coupons_ids){
        free(valueQuery_coupons_ids);
        valueQuery_coupons_ids = NULL;
    }
    if(keyPairQuery_coupons_ids){
        keyValuePair_free(keyPairQuery_coupons_ids);
        keyPairQuery_coupons_ids = NULL;
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
    if(keyQuery_date_start_from){
        free(keyQuery_date_start_from);
        keyQuery_date_start_from = NULL;
    }
    if(valueQuery_date_start_from){
        free(valueQuery_date_start_from);
        valueQuery_date_start_from = NULL;
    }
    if(keyPairQuery_date_start_from){
        keyValuePair_free(keyPairQuery_date_start_from);
        keyPairQuery_date_start_from = NULL;
    }
    if(keyQuery_date_start_to){
        free(keyQuery_date_start_to);
        keyQuery_date_start_to = NULL;
    }
    if(valueQuery_date_start_to){
        free(valueQuery_date_start_to);
        valueQuery_date_start_to = NULL;
    }
    if(keyPairQuery_date_start_to){
        keyValuePair_free(keyPairQuery_date_start_to);
        keyPairQuery_date_start_to = NULL;
    }
    if(keyQuery_date_end_from){
        free(keyQuery_date_end_from);
        keyQuery_date_end_from = NULL;
    }
    if(valueQuery_date_end_from){
        free(valueQuery_date_end_from);
        valueQuery_date_end_from = NULL;
    }
    if(keyPairQuery_date_end_from){
        keyValuePair_free(keyPairQuery_date_end_from);
        keyPairQuery_date_end_from = NULL;
    }
    if(keyQuery_date_end_to){
        free(keyQuery_date_end_to);
        keyQuery_date_end_to = NULL;
    }
    if(valueQuery_date_end_to){
        free(valueQuery_date_end_to);
        valueQuery_date_end_to = NULL;
    }
    if(keyPairQuery_date_end_to){
        keyValuePair_free(keyPairQuery_date_end_to);
        keyPairQuery_date_end_to = NULL;
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

// cart.create
//
// Add store to the account
//
account_cart_add_200_response_t*
CartAPI_cartCreate(apiClient_t *apiClient, cart_create_t *cart_create)
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
    char *localVarPath = strdup("/cart.create.json");





    // Body Param
    cJSON *localVarSingleItemJSON_cart_create = NULL;
    if (cart_create != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_cart_create = cart_create_convertToJSON(cart_create);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_cart_create);
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
    account_cart_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_cart_add_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_cart_create) {
        cJSON_Delete(localVarSingleItemJSON_cart_create);
        localVarSingleItemJSON_cart_create = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.delete
//
// Remove store from API2Cart
//
cart_delete_200_response_t*
CartAPI_cartDelete(apiClient_t *apiClient, int *delete_bridge)
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
    char *localVarPath = strdup("/cart.delete.json");





    // query parameters
    char *keyQuery_delete_bridge = NULL;
    char * valueQuery_delete_bridge = NULL;
    keyValuePair_t *keyPairQuery_delete_bridge = 0;
    if (delete_bridge)
    {
        keyQuery_delete_bridge = strdup("delete_bridge");
        valueQuery_delete_bridge = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_delete_bridge, MAX_NUMBER_LENGTH, "%d", *delete_bridge);
        keyPairQuery_delete_bridge = keyValuePair_create(keyQuery_delete_bridge, valueQuery_delete_bridge);
        list_addElement(localVarQueryParameters,keyPairQuery_delete_bridge);
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
    cart_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_delete_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_delete_bridge){
        free(keyQuery_delete_bridge);
        keyQuery_delete_bridge = NULL;
    }
    if(valueQuery_delete_bridge){
        free(valueQuery_delete_bridge);
        valueQuery_delete_bridge = NULL;
    }
    if(keyPairQuery_delete_bridge){
        keyValuePair_free(keyPairQuery_delete_bridge);
        keyPairQuery_delete_bridge = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.disconnect
//
// Disconnect with the store and clear store session data.
//
cart_disconnect_200_response_t*
CartAPI_cartDisconnect(apiClient_t *apiClient, int *delete_bridge)
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
    char *localVarPath = strdup("/cart.disconnect.json");





    // query parameters
    char *keyQuery_delete_bridge = NULL;
    char * valueQuery_delete_bridge = NULL;
    keyValuePair_t *keyPairQuery_delete_bridge = 0;
    if (delete_bridge)
    {
        keyQuery_delete_bridge = strdup("delete_bridge");
        valueQuery_delete_bridge = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_delete_bridge, MAX_NUMBER_LENGTH, "%d", *delete_bridge);
        keyPairQuery_delete_bridge = keyValuePair_create(keyQuery_delete_bridge, valueQuery_delete_bridge);
        list_addElement(localVarQueryParameters,keyPairQuery_delete_bridge);
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
    cart_disconnect_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_disconnect_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_delete_bridge){
        free(keyQuery_delete_bridge);
        keyQuery_delete_bridge = NULL;
    }
    if(valueQuery_delete_bridge){
        free(valueQuery_delete_bridge);
        valueQuery_delete_bridge = NULL;
    }
    if(keyPairQuery_delete_bridge){
        keyValuePair_free(keyPairQuery_delete_bridge);
        keyPairQuery_delete_bridge = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.giftcard.add
//
// Use this method to create a gift card for a specified amount.
//
cart_giftcard_add_200_response_t*
CartAPI_cartGiftcardAdd(apiClient_t *apiClient, double amount, char *code, char *owner_email, char *recipient_email, char *recipient_name, char *owner_name)
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
    char *localVarPath = strdup("/cart.giftcard.add.json");





    // query parameters
    char *keyQuery_amount = NULL;
    double valueQuery_amount ;
    keyValuePair_t *keyPairQuery_amount = 0;
    if (amount)
    {
        keyQuery_amount = strdup("amount");
        valueQuery_amount = (amount);
        keyPairQuery_amount = keyValuePair_create(keyQuery_amount, &valueQuery_amount);
        list_addElement(localVarQueryParameters,keyPairQuery_amount);
    }

    // query parameters
    char *keyQuery_code = NULL;
    char * valueQuery_code = NULL;
    keyValuePair_t *keyPairQuery_code = 0;
    if (code)
    {
        keyQuery_code = strdup("code");
        valueQuery_code = strdup((code));
        keyPairQuery_code = keyValuePair_create(keyQuery_code, valueQuery_code);
        list_addElement(localVarQueryParameters,keyPairQuery_code);
    }

    // query parameters
    char *keyQuery_owner_email = NULL;
    char * valueQuery_owner_email = NULL;
    keyValuePair_t *keyPairQuery_owner_email = 0;
    if (owner_email)
    {
        keyQuery_owner_email = strdup("owner_email");
        valueQuery_owner_email = strdup((owner_email));
        keyPairQuery_owner_email = keyValuePair_create(keyQuery_owner_email, valueQuery_owner_email);
        list_addElement(localVarQueryParameters,keyPairQuery_owner_email);
    }

    // query parameters
    char *keyQuery_recipient_email = NULL;
    char * valueQuery_recipient_email = NULL;
    keyValuePair_t *keyPairQuery_recipient_email = 0;
    if (recipient_email)
    {
        keyQuery_recipient_email = strdup("recipient_email");
        valueQuery_recipient_email = strdup((recipient_email));
        keyPairQuery_recipient_email = keyValuePair_create(keyQuery_recipient_email, valueQuery_recipient_email);
        list_addElement(localVarQueryParameters,keyPairQuery_recipient_email);
    }

    // query parameters
    char *keyQuery_recipient_name = NULL;
    char * valueQuery_recipient_name = NULL;
    keyValuePair_t *keyPairQuery_recipient_name = 0;
    if (recipient_name)
    {
        keyQuery_recipient_name = strdup("recipient_name");
        valueQuery_recipient_name = strdup((recipient_name));
        keyPairQuery_recipient_name = keyValuePair_create(keyQuery_recipient_name, valueQuery_recipient_name);
        list_addElement(localVarQueryParameters,keyPairQuery_recipient_name);
    }

    // query parameters
    char *keyQuery_owner_name = NULL;
    char * valueQuery_owner_name = NULL;
    keyValuePair_t *keyPairQuery_owner_name = 0;
    if (owner_name)
    {
        keyQuery_owner_name = strdup("owner_name");
        valueQuery_owner_name = strdup((owner_name));
        keyPairQuery_owner_name = keyValuePair_create(keyQuery_owner_name, valueQuery_owner_name);
        list_addElement(localVarQueryParameters,keyPairQuery_owner_name);
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
    cart_giftcard_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_giftcard_add_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_amount){
        free(keyQuery_amount);
        keyQuery_amount = NULL;
    }
    if(keyPairQuery_amount){
        keyValuePair_free(keyPairQuery_amount);
        keyPairQuery_amount = NULL;
    }
    if(keyQuery_code){
        free(keyQuery_code);
        keyQuery_code = NULL;
    }
    if(valueQuery_code){
        free(valueQuery_code);
        valueQuery_code = NULL;
    }
    if(keyPairQuery_code){
        keyValuePair_free(keyPairQuery_code);
        keyPairQuery_code = NULL;
    }
    if(keyQuery_owner_email){
        free(keyQuery_owner_email);
        keyQuery_owner_email = NULL;
    }
    if(valueQuery_owner_email){
        free(valueQuery_owner_email);
        valueQuery_owner_email = NULL;
    }
    if(keyPairQuery_owner_email){
        keyValuePair_free(keyPairQuery_owner_email);
        keyPairQuery_owner_email = NULL;
    }
    if(keyQuery_recipient_email){
        free(keyQuery_recipient_email);
        keyQuery_recipient_email = NULL;
    }
    if(valueQuery_recipient_email){
        free(valueQuery_recipient_email);
        valueQuery_recipient_email = NULL;
    }
    if(keyPairQuery_recipient_email){
        keyValuePair_free(keyPairQuery_recipient_email);
        keyPairQuery_recipient_email = NULL;
    }
    if(keyQuery_recipient_name){
        free(keyQuery_recipient_name);
        keyQuery_recipient_name = NULL;
    }
    if(valueQuery_recipient_name){
        free(valueQuery_recipient_name);
        valueQuery_recipient_name = NULL;
    }
    if(keyPairQuery_recipient_name){
        keyValuePair_free(keyPairQuery_recipient_name);
        keyPairQuery_recipient_name = NULL;
    }
    if(keyQuery_owner_name){
        free(keyQuery_owner_name);
        keyQuery_owner_name = NULL;
    }
    if(valueQuery_owner_name){
        free(valueQuery_owner_name);
        valueQuery_owner_name = NULL;
    }
    if(keyPairQuery_owner_name){
        keyValuePair_free(keyPairQuery_owner_name);
        keyPairQuery_owner_name = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.giftcard.count
//
// Get gift cards count.
//
cart_giftcard_count_200_response_t*
CartAPI_cartGiftcardCount(apiClient_t *apiClient, char *store_id)
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
    char *localVarPath = strdup("/cart.giftcard.count.json");





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
    cart_giftcard_count_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_giftcard_count_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.giftcard.delete
//
// Delete giftcard
//
attribute_delete_200_response_t*
CartAPI_cartGiftcardDelete(apiClient_t *apiClient, char *id)
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
    char *localVarPath = strdup("/cart.giftcard.delete.json");





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
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.giftcard.list
//
// Get gift cards list.
//
model_response_cart_gift_card_list_t*
CartAPI_cartGiftcardList(apiClient_t *apiClient, char *page_cursor, int *start, int *count, char *store_id, char *params, char *response_fields, char *exclude)
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
    char *localVarPath = strdup("/cart.giftcard.list.json");





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
    model_response_cart_gift_card_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_cart_gift_card_list_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.info
//
// This method allows you to get various information about the store, including a list of stores (in the case of a multistore configuration), a list of supported languages, currencies, carriers, warehouses, and many other information. This information contains data that is relatively stable and rarely changes, so API2Cart can cache certain data to reduce the load on the store and speed up the execution of the request. We also recommend that you cache the response of this method on your side to save requests. If you need to clear the cache for a specific store, then use the cart.validate method.
//
cart_info_200_response_t*
CartAPI_cartInfo(apiClient_t *apiClient, char *params, char *response_fields, char *exclude, char *store_id)
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
    char *localVarPath = strdup("/cart.info.json");





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
    cart_info_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_info_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.list
//
// Get list of supported carts
//
cart_list_200_response_t*
CartAPI_cartList(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/cart.list.json");




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
    cart_list_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_list_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.meta_data.list
//
// Using this method, you can get a list of metadata for various entities (products, options, customers, orders). Usually this is data created by third-party plugins.
//
model_response_cart_meta_data_list_t*
CartAPI_cartMetaDataList(apiClient_t *apiClient, char *entity_id, char *entity, char *store_id, char *lang_id, char *key, int *count, char *page_cursor, char *params, char *response_fields, char *exclude)
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
    char *localVarPath = strdup("/cart.meta_data.list.json");





    // query parameters
    char *keyQuery_entity_id = NULL;
    char * valueQuery_entity_id = NULL;
    keyValuePair_t *keyPairQuery_entity_id = 0;
    if (entity_id)
    {
        keyQuery_entity_id = strdup("entity_id");
        valueQuery_entity_id = strdup((entity_id));
        keyPairQuery_entity_id = keyValuePair_create(keyQuery_entity_id, valueQuery_entity_id);
        list_addElement(localVarQueryParameters,keyPairQuery_entity_id);
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
    char *keyQuery_key = NULL;
    char * valueQuery_key = NULL;
    keyValuePair_t *keyPairQuery_key = 0;
    if (key)
    {
        keyQuery_key = strdup("key");
        valueQuery_key = strdup((key));
        keyPairQuery_key = keyValuePair_create(keyQuery_key, valueQuery_key);
        list_addElement(localVarQueryParameters,keyPairQuery_key);
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
    model_response_cart_meta_data_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_cart_meta_data_list_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_entity_id){
        free(keyQuery_entity_id);
        keyQuery_entity_id = NULL;
    }
    if(valueQuery_entity_id){
        free(valueQuery_entity_id);
        valueQuery_entity_id = NULL;
    }
    if(keyPairQuery_entity_id){
        keyValuePair_free(keyPairQuery_entity_id);
        keyPairQuery_entity_id = NULL;
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
    if(keyQuery_key){
        free(keyQuery_key);
        keyQuery_key = NULL;
    }
    if(valueQuery_key){
        free(valueQuery_key);
        valueQuery_key = NULL;
    }
    if(keyPairQuery_key){
        keyValuePair_free(keyPairQuery_key);
        keyPairQuery_key = NULL;
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

// cart.meta_data.set
//
// Set meta data for a specific entity
//
attribute_add_200_response_t*
CartAPI_cartMetaDataSet(apiClient_t *apiClient, char *entity_id, char *key, char *value, char *_namespace, char *entity, char *store_id, char *lang_id)
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
    char *localVarPath = strdup("/cart.meta_data.set.json");





    // query parameters
    char *keyQuery_entity_id = NULL;
    char * valueQuery_entity_id = NULL;
    keyValuePair_t *keyPairQuery_entity_id = 0;
    if (entity_id)
    {
        keyQuery_entity_id = strdup("entity_id");
        valueQuery_entity_id = strdup((entity_id));
        keyPairQuery_entity_id = keyValuePair_create(keyQuery_entity_id, valueQuery_entity_id);
        list_addElement(localVarQueryParameters,keyPairQuery_entity_id);
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
    char *keyQuery_key = NULL;
    char * valueQuery_key = NULL;
    keyValuePair_t *keyPairQuery_key = 0;
    if (key)
    {
        keyQuery_key = strdup("key");
        valueQuery_key = strdup((key));
        keyPairQuery_key = keyValuePair_create(keyQuery_key, valueQuery_key);
        list_addElement(localVarQueryParameters,keyPairQuery_key);
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
    char *keyQuery__namespace = NULL;
    char * valueQuery__namespace = NULL;
    keyValuePair_t *keyPairQuery__namespace = 0;
    if (_namespace)
    {
        keyQuery__namespace = strdup("namespace");
        valueQuery__namespace = strdup((_namespace));
        keyPairQuery__namespace = keyValuePair_create(keyQuery__namespace, valueQuery__namespace);
        list_addElement(localVarQueryParameters,keyPairQuery__namespace);
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
    attribute_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_add_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_entity_id){
        free(keyQuery_entity_id);
        keyQuery_entity_id = NULL;
    }
    if(valueQuery_entity_id){
        free(valueQuery_entity_id);
        valueQuery_entity_id = NULL;
    }
    if(keyPairQuery_entity_id){
        keyValuePair_free(keyPairQuery_entity_id);
        keyPairQuery_entity_id = NULL;
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
    if(keyQuery_key){
        free(keyQuery_key);
        keyQuery_key = NULL;
    }
    if(valueQuery_key){
        free(valueQuery_key);
        valueQuery_key = NULL;
    }
    if(keyPairQuery_key){
        keyValuePair_free(keyPairQuery_key);
        keyPairQuery_key = NULL;
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
    if(keyQuery__namespace){
        free(keyQuery__namespace);
        keyQuery__namespace = NULL;
    }
    if(valueQuery__namespace){
        free(valueQuery__namespace);
        valueQuery__namespace = NULL;
    }
    if(keyPairQuery__namespace){
        keyValuePair_free(keyPairQuery__namespace);
        keyPairQuery__namespace = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.meta_data.unset
//
// Unset meta data for a specific entity
//
basket_live_shipping_service_delete_200_response_t*
CartAPI_cartMetaDataUnset(apiClient_t *apiClient, char *entity_id, char *key, char *id, char *entity, char *store_id)
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
    char *localVarPath = strdup("/cart.meta_data.unset.json");





    // query parameters
    char *keyQuery_entity_id = NULL;
    char * valueQuery_entity_id = NULL;
    keyValuePair_t *keyPairQuery_entity_id = 0;
    if (entity_id)
    {
        keyQuery_entity_id = strdup("entity_id");
        valueQuery_entity_id = strdup((entity_id));
        keyPairQuery_entity_id = keyValuePair_create(keyQuery_entity_id, valueQuery_entity_id);
        list_addElement(localVarQueryParameters,keyPairQuery_entity_id);
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
    char *keyQuery_key = NULL;
    char * valueQuery_key = NULL;
    keyValuePair_t *keyPairQuery_key = 0;
    if (key)
    {
        keyQuery_key = strdup("key");
        valueQuery_key = strdup((key));
        keyPairQuery_key = keyValuePair_create(keyQuery_key, valueQuery_key);
        list_addElement(localVarQueryParameters,keyPairQuery_key);
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
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = basket_live_shipping_service_delete_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_entity_id){
        free(keyQuery_entity_id);
        keyQuery_entity_id = NULL;
    }
    if(valueQuery_entity_id){
        free(valueQuery_entity_id);
        valueQuery_entity_id = NULL;
    }
    if(keyPairQuery_entity_id){
        keyValuePair_free(keyPairQuery_entity_id);
        keyPairQuery_entity_id = NULL;
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
    if(keyQuery_key){
        free(keyQuery_key);
        keyQuery_key = NULL;
    }
    if(valueQuery_key){
        free(valueQuery_key);
        valueQuery_key = NULL;
    }
    if(keyPairQuery_key){
        keyValuePair_free(keyPairQuery_key);
        keyPairQuery_key = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// cart.methods
//
// Returns a list of supported API methods.
//
cart_methods_200_response_t*
CartAPI_cartMethods(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/cart.methods.json");




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
    cart_methods_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_methods_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.plugin.list
//
// Get a list of third-party plugins installed on the store.
//
cart_plugin_list_200_response_t*
CartAPI_cartPluginList(apiClient_t *apiClient, char *store_id, int *start, int *count)
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
    char *localVarPath = strdup("/cart.plugin.list.json");





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
    cart_plugin_list_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_plugin_list_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.script.add
//
// Add new script to the storefront
//
cart_script_add_200_response_t*
CartAPI_cartScriptAdd(apiClient_t *apiClient, char *name, char *description, char *html, char *src, char *load_method, char *scope, char *events, char *store_id)
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
    char *localVarPath = strdup("/cart.script.add.json");





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
    char *keyQuery_description = NULL;
    char * valueQuery_description = NULL;
    keyValuePair_t *keyPairQuery_description = 0;
    if (description)
    {
        keyQuery_description = strdup("description");
        valueQuery_description = strdup((description));
        keyPairQuery_description = keyValuePair_create(keyQuery_description, valueQuery_description);
        list_addElement(localVarQueryParameters,keyPairQuery_description);
    }

    // query parameters
    char *keyQuery_html = NULL;
    char * valueQuery_html = NULL;
    keyValuePair_t *keyPairQuery_html = 0;
    if (html)
    {
        keyQuery_html = strdup("html");
        valueQuery_html = strdup((html));
        keyPairQuery_html = keyValuePair_create(keyQuery_html, valueQuery_html);
        list_addElement(localVarQueryParameters,keyPairQuery_html);
    }

    // query parameters
    char *keyQuery_src = NULL;
    char * valueQuery_src = NULL;
    keyValuePair_t *keyPairQuery_src = 0;
    if (src)
    {
        keyQuery_src = strdup("src");
        valueQuery_src = strdup((src));
        keyPairQuery_src = keyValuePair_create(keyQuery_src, valueQuery_src);
        list_addElement(localVarQueryParameters,keyPairQuery_src);
    }

    // query parameters
    char *keyQuery_load_method = NULL;
    char * valueQuery_load_method = NULL;
    keyValuePair_t *keyPairQuery_load_method = 0;
    if (load_method)
    {
        keyQuery_load_method = strdup("load_method");
        valueQuery_load_method = strdup((load_method));
        keyPairQuery_load_method = keyValuePair_create(keyQuery_load_method, valueQuery_load_method);
        list_addElement(localVarQueryParameters,keyPairQuery_load_method);
    }

    // query parameters
    char *keyQuery_scope = NULL;
    char * valueQuery_scope = NULL;
    keyValuePair_t *keyPairQuery_scope = 0;
    if (scope)
    {
        keyQuery_scope = strdup("scope");
        valueQuery_scope = strdup((scope));
        keyPairQuery_scope = keyValuePair_create(keyQuery_scope, valueQuery_scope);
        list_addElement(localVarQueryParameters,keyPairQuery_scope);
    }

    // query parameters
    char *keyQuery_events = NULL;
    char * valueQuery_events = NULL;
    keyValuePair_t *keyPairQuery_events = 0;
    if (events)
    {
        keyQuery_events = strdup("events");
        valueQuery_events = strdup((events));
        keyPairQuery_events = keyValuePair_create(keyQuery_events, valueQuery_events);
        list_addElement(localVarQueryParameters,keyPairQuery_events);
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
    cart_script_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_script_add_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_description){
        free(keyQuery_description);
        keyQuery_description = NULL;
    }
    if(valueQuery_description){
        free(valueQuery_description);
        valueQuery_description = NULL;
    }
    if(keyPairQuery_description){
        keyValuePair_free(keyPairQuery_description);
        keyPairQuery_description = NULL;
    }
    if(keyQuery_html){
        free(keyQuery_html);
        keyQuery_html = NULL;
    }
    if(valueQuery_html){
        free(valueQuery_html);
        valueQuery_html = NULL;
    }
    if(keyPairQuery_html){
        keyValuePair_free(keyPairQuery_html);
        keyPairQuery_html = NULL;
    }
    if(keyQuery_src){
        free(keyQuery_src);
        keyQuery_src = NULL;
    }
    if(valueQuery_src){
        free(valueQuery_src);
        valueQuery_src = NULL;
    }
    if(keyPairQuery_src){
        keyValuePair_free(keyPairQuery_src);
        keyPairQuery_src = NULL;
    }
    if(keyQuery_load_method){
        free(keyQuery_load_method);
        keyQuery_load_method = NULL;
    }
    if(valueQuery_load_method){
        free(valueQuery_load_method);
        valueQuery_load_method = NULL;
    }
    if(keyPairQuery_load_method){
        keyValuePair_free(keyPairQuery_load_method);
        keyPairQuery_load_method = NULL;
    }
    if(keyQuery_scope){
        free(keyQuery_scope);
        keyQuery_scope = NULL;
    }
    if(valueQuery_scope){
        free(valueQuery_scope);
        valueQuery_scope = NULL;
    }
    if(keyPairQuery_scope){
        keyValuePair_free(keyPairQuery_scope);
        keyPairQuery_scope = NULL;
    }
    if(keyQuery_events){
        free(keyQuery_events);
        keyQuery_events = NULL;
    }
    if(valueQuery_events){
        free(valueQuery_events);
        valueQuery_events = NULL;
    }
    if(keyPairQuery_events){
        keyValuePair_free(keyPairQuery_events);
        keyPairQuery_events = NULL;
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

// cart.script.delete
//
// Remove script from the storefront
//
attribute_delete_200_response_t*
CartAPI_cartScriptDelete(apiClient_t *apiClient, char *id, char *store_id)
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
    char *localVarPath = strdup("/cart.script.delete.json");





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
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.script.list
//
// Get scripts installed to the storefront
//
model_response_cart_script_list_t*
CartAPI_cartScriptList(apiClient_t *apiClient, char *page_cursor, int *start, int *count, char *created_from, char *created_to, char *modified_from, char *modified_to, char *script_ids, char *store_id, char *params, char *response_fields, char *exclude)
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
    char *localVarPath = strdup("/cart.script.list.json");





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
    char *keyQuery_script_ids = NULL;
    char * valueQuery_script_ids = NULL;
    keyValuePair_t *keyPairQuery_script_ids = 0;
    if (script_ids)
    {
        keyQuery_script_ids = strdup("script_ids");
        valueQuery_script_ids = strdup((script_ids));
        keyPairQuery_script_ids = keyValuePair_create(keyQuery_script_ids, valueQuery_script_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_script_ids);
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
    model_response_cart_script_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_cart_script_list_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_script_ids){
        free(keyQuery_script_ids);
        keyQuery_script_ids = NULL;
    }
    if(valueQuery_script_ids){
        free(valueQuery_script_ids);
        valueQuery_script_ids = NULL;
    }
    if(keyPairQuery_script_ids){
        keyValuePair_free(keyPairQuery_script_ids);
        keyPairQuery_script_ids = NULL;
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

// cart.shipping_zones.list
//
// Get list of shipping zones
//
model_response_cart_shipping_zones_list_t*
CartAPI_cartShippingZonesList(apiClient_t *apiClient, char *store_id, int *start, int *count, char *params, char *response_fields, char *exclude)
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
    char *localVarPath = strdup("/cart.shipping_zones.list.json");





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
    model_response_cart_shipping_zones_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_cart_shipping_zones_list_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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

// cart.validate
//
// This method clears the cache in API2Cart for a particular store and checks whether the connection to the store is available. Use this method if there have been any changes in the settings on the storе, for example, if a new plugin has been installed or removed.
//
cart_validate_200_response_t*
CartAPI_cartValidate(apiClient_t *apiClient, int *validate_version)
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
    char *localVarPath = strdup("/cart.validate.json");





    // query parameters
    char *keyQuery_validate_version = NULL;
    char * valueQuery_validate_version = NULL;
    keyValuePair_t *keyPairQuery_validate_version = 0;
    if (validate_version)
    {
        keyQuery_validate_version = strdup("validate_version");
        valueQuery_validate_version = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_validate_version, MAX_NUMBER_LENGTH, "%d", *validate_version);
        keyPairQuery_validate_version = keyValuePair_create(keyQuery_validate_version, valueQuery_validate_version);
        list_addElement(localVarQueryParameters,keyPairQuery_validate_version);
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
    cart_validate_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CartAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_validate_200_response_parseFromJSON(CartAPIlocalVarJSON);
        cJSON_Delete(CartAPIlocalVarJSON);
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
    if(keyQuery_validate_version){
        free(keyQuery_validate_version);
        keyQuery_validate_version = NULL;
    }
    if(valueQuery_validate_version){
        free(valueQuery_validate_version);
        valueQuery_validate_version = NULL;
    }
    if(keyPairQuery_validate_version){
        keyValuePair_free(keyPairQuery_validate_version);
        keyPairQuery_validate_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

