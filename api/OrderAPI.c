#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "OrderAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// order.abandoned.list
//
// Get list of orders that were left by customers before completing the order.
//
model_response_order_abandoned_list_t*
OrderAPI_orderAbandonedList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *customer_id, char *customer_email, char *store_id, char *created_from, char *created_to, char *modified_from, char *modified_to, int *skip_empty_email, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/order.abandoned.list.json");





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
    char *keyQuery_customer_email = NULL;
    char * valueQuery_customer_email = NULL;
    keyValuePair_t *keyPairQuery_customer_email = 0;
    if (customer_email)
    {
        keyQuery_customer_email = strdup("customer_email");
        valueQuery_customer_email = strdup((customer_email));
        keyPairQuery_customer_email = keyValuePair_create(keyQuery_customer_email, valueQuery_customer_email);
        list_addElement(localVarQueryParameters,keyPairQuery_customer_email);
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
    char *keyQuery_skip_empty_email = NULL;
    char * valueQuery_skip_empty_email = NULL;
    keyValuePair_t *keyPairQuery_skip_empty_email = 0;
    if (skip_empty_email)
    {
        keyQuery_skip_empty_email = strdup("skip_empty_email");
        valueQuery_skip_empty_email = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_skip_empty_email, MAX_NUMBER_LENGTH, "%d", *skip_empty_email);
        keyPairQuery_skip_empty_email = keyValuePair_create(keyQuery_skip_empty_email, valueQuery_skip_empty_email);
        list_addElement(localVarQueryParameters,keyPairQuery_skip_empty_email);
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
    model_response_order_abandoned_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_order_abandoned_list_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_customer_email){
        free(keyQuery_customer_email);
        keyQuery_customer_email = NULL;
    }
    if(valueQuery_customer_email){
        free(valueQuery_customer_email);
        valueQuery_customer_email = NULL;
    }
    if(keyPairQuery_customer_email){
        keyValuePair_free(keyPairQuery_customer_email);
        keyPairQuery_customer_email = NULL;
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
    if(keyQuery_skip_empty_email){
        free(keyQuery_skip_empty_email);
        keyQuery_skip_empty_email = NULL;
    }
    if(valueQuery_skip_empty_email){
        free(valueQuery_skip_empty_email);
        valueQuery_skip_empty_email = NULL;
    }
    if(keyPairQuery_skip_empty_email){
        keyValuePair_free(keyPairQuery_skip_empty_email);
        keyPairQuery_skip_empty_email = NULL;
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

// order.add
//
// Add a new order to the cart.
//
order_add_200_response_t*
OrderAPI_orderAdd(apiClient_t *apiClient, order_add_t *order_add)
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
    char *localVarPath = strdup("/order.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_order_add = NULL;
    if (order_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_order_add = order_add_convertToJSON(order_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_add);
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
    order_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_add_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_order_add) {
        cJSON_Delete(localVarSingleItemJSON_order_add);
        localVarSingleItemJSON_order_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// order.count
//
// Count orders in store
//
order_count_200_response_t*
OrderAPI_orderCount(apiClient_t *apiClient, char *order_ids, char *ids, char *customer_id, char *store_id, char *customer_email, char *order_status, list_t *order_status_ids, char *ebay_order_status, char *financial_status, list_t *financial_status_ids, char *fulfillment_channel, char *fulfillment_status, char *shipping_method, char *delivery_method, char *tags, char *ship_node_type, char *created_from, char *created_to, char *modified_from, char *modified_to)
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
    char *localVarPath = strdup("/order.count.json");





    // query parameters
    char *keyQuery_order_ids = NULL;
    char * valueQuery_order_ids = NULL;
    keyValuePair_t *keyPairQuery_order_ids = 0;
    if (order_ids)
    {
        keyQuery_order_ids = strdup("order_ids");
        valueQuery_order_ids = strdup((order_ids));
        keyPairQuery_order_ids = keyValuePair_create(keyQuery_order_ids, valueQuery_order_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_order_ids);
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
    char *keyQuery_customer_email = NULL;
    char * valueQuery_customer_email = NULL;
    keyValuePair_t *keyPairQuery_customer_email = 0;
    if (customer_email)
    {
        keyQuery_customer_email = strdup("customer_email");
        valueQuery_customer_email = strdup((customer_email));
        keyPairQuery_customer_email = keyValuePair_create(keyQuery_customer_email, valueQuery_customer_email);
        list_addElement(localVarQueryParameters,keyPairQuery_customer_email);
    }

    // query parameters
    char *keyQuery_order_status = NULL;
    char * valueQuery_order_status = NULL;
    keyValuePair_t *keyPairQuery_order_status = 0;
    if (order_status)
    {
        keyQuery_order_status = strdup("order_status");
        valueQuery_order_status = strdup((order_status));
        keyPairQuery_order_status = keyValuePair_create(keyQuery_order_status, valueQuery_order_status);
        list_addElement(localVarQueryParameters,keyPairQuery_order_status);
    }

    // query parameters
    if (order_status_ids)
    {
        list_addElement(localVarQueryParameters,order_status_ids);
    }

    // query parameters
    char *keyQuery_ebay_order_status = NULL;
    char * valueQuery_ebay_order_status = NULL;
    keyValuePair_t *keyPairQuery_ebay_order_status = 0;
    if (ebay_order_status)
    {
        keyQuery_ebay_order_status = strdup("ebay_order_status");
        valueQuery_ebay_order_status = strdup((ebay_order_status));
        keyPairQuery_ebay_order_status = keyValuePair_create(keyQuery_ebay_order_status, valueQuery_ebay_order_status);
        list_addElement(localVarQueryParameters,keyPairQuery_ebay_order_status);
    }

    // query parameters
    char *keyQuery_financial_status = NULL;
    char * valueQuery_financial_status = NULL;
    keyValuePair_t *keyPairQuery_financial_status = 0;
    if (financial_status)
    {
        keyQuery_financial_status = strdup("financial_status");
        valueQuery_financial_status = strdup((financial_status));
        keyPairQuery_financial_status = keyValuePair_create(keyQuery_financial_status, valueQuery_financial_status);
        list_addElement(localVarQueryParameters,keyPairQuery_financial_status);
    }

    // query parameters
    if (financial_status_ids)
    {
        list_addElement(localVarQueryParameters,financial_status_ids);
    }

    // query parameters
    char *keyQuery_fulfillment_channel = NULL;
    char * valueQuery_fulfillment_channel = NULL;
    keyValuePair_t *keyPairQuery_fulfillment_channel = 0;
    if (fulfillment_channel)
    {
        keyQuery_fulfillment_channel = strdup("fulfillment_channel");
        valueQuery_fulfillment_channel = strdup((fulfillment_channel));
        keyPairQuery_fulfillment_channel = keyValuePair_create(keyQuery_fulfillment_channel, valueQuery_fulfillment_channel);
        list_addElement(localVarQueryParameters,keyPairQuery_fulfillment_channel);
    }

    // query parameters
    char *keyQuery_fulfillment_status = NULL;
    char * valueQuery_fulfillment_status = NULL;
    keyValuePair_t *keyPairQuery_fulfillment_status = 0;
    if (fulfillment_status)
    {
        keyQuery_fulfillment_status = strdup("fulfillment_status");
        valueQuery_fulfillment_status = strdup((fulfillment_status));
        keyPairQuery_fulfillment_status = keyValuePair_create(keyQuery_fulfillment_status, valueQuery_fulfillment_status);
        list_addElement(localVarQueryParameters,keyPairQuery_fulfillment_status);
    }

    // query parameters
    char *keyQuery_shipping_method = NULL;
    char * valueQuery_shipping_method = NULL;
    keyValuePair_t *keyPairQuery_shipping_method = 0;
    if (shipping_method)
    {
        keyQuery_shipping_method = strdup("shipping_method");
        valueQuery_shipping_method = strdup((shipping_method));
        keyPairQuery_shipping_method = keyValuePair_create(keyQuery_shipping_method, valueQuery_shipping_method);
        list_addElement(localVarQueryParameters,keyPairQuery_shipping_method);
    }

    // query parameters
    char *keyQuery_delivery_method = NULL;
    char * valueQuery_delivery_method = NULL;
    keyValuePair_t *keyPairQuery_delivery_method = 0;
    if (delivery_method)
    {
        keyQuery_delivery_method = strdup("delivery_method");
        valueQuery_delivery_method = strdup((delivery_method));
        keyPairQuery_delivery_method = keyValuePair_create(keyQuery_delivery_method, valueQuery_delivery_method);
        list_addElement(localVarQueryParameters,keyPairQuery_delivery_method);
    }

    // query parameters
    char *keyQuery_tags = NULL;
    char * valueQuery_tags = NULL;
    keyValuePair_t *keyPairQuery_tags = 0;
    if (tags)
    {
        keyQuery_tags = strdup("tags");
        valueQuery_tags = strdup((tags));
        keyPairQuery_tags = keyValuePair_create(keyQuery_tags, valueQuery_tags);
        list_addElement(localVarQueryParameters,keyPairQuery_tags);
    }

    // query parameters
    char *keyQuery_ship_node_type = NULL;
    char * valueQuery_ship_node_type = NULL;
    keyValuePair_t *keyPairQuery_ship_node_type = 0;
    if (ship_node_type)
    {
        keyQuery_ship_node_type = strdup("ship_node_type");
        valueQuery_ship_node_type = strdup((ship_node_type));
        keyPairQuery_ship_node_type = keyValuePair_create(keyQuery_ship_node_type, valueQuery_ship_node_type);
        list_addElement(localVarQueryParameters,keyPairQuery_ship_node_type);
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
    order_count_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_count_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_order_ids){
        free(keyQuery_order_ids);
        keyQuery_order_ids = NULL;
    }
    if(valueQuery_order_ids){
        free(valueQuery_order_ids);
        valueQuery_order_ids = NULL;
    }
    if(keyPairQuery_order_ids){
        keyValuePair_free(keyPairQuery_order_ids);
        keyPairQuery_order_ids = NULL;
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
    if(keyQuery_customer_email){
        free(keyQuery_customer_email);
        keyQuery_customer_email = NULL;
    }
    if(valueQuery_customer_email){
        free(valueQuery_customer_email);
        valueQuery_customer_email = NULL;
    }
    if(keyPairQuery_customer_email){
        keyValuePair_free(keyPairQuery_customer_email);
        keyPairQuery_customer_email = NULL;
    }
    if(keyQuery_order_status){
        free(keyQuery_order_status);
        keyQuery_order_status = NULL;
    }
    if(valueQuery_order_status){
        free(valueQuery_order_status);
        valueQuery_order_status = NULL;
    }
    if(keyPairQuery_order_status){
        keyValuePair_free(keyPairQuery_order_status);
        keyPairQuery_order_status = NULL;
    }
    if(keyQuery_ebay_order_status){
        free(keyQuery_ebay_order_status);
        keyQuery_ebay_order_status = NULL;
    }
    if(valueQuery_ebay_order_status){
        free(valueQuery_ebay_order_status);
        valueQuery_ebay_order_status = NULL;
    }
    if(keyPairQuery_ebay_order_status){
        keyValuePair_free(keyPairQuery_ebay_order_status);
        keyPairQuery_ebay_order_status = NULL;
    }
    if(keyQuery_financial_status){
        free(keyQuery_financial_status);
        keyQuery_financial_status = NULL;
    }
    if(valueQuery_financial_status){
        free(valueQuery_financial_status);
        valueQuery_financial_status = NULL;
    }
    if(keyPairQuery_financial_status){
        keyValuePair_free(keyPairQuery_financial_status);
        keyPairQuery_financial_status = NULL;
    }
    if(keyQuery_fulfillment_channel){
        free(keyQuery_fulfillment_channel);
        keyQuery_fulfillment_channel = NULL;
    }
    if(valueQuery_fulfillment_channel){
        free(valueQuery_fulfillment_channel);
        valueQuery_fulfillment_channel = NULL;
    }
    if(keyPairQuery_fulfillment_channel){
        keyValuePair_free(keyPairQuery_fulfillment_channel);
        keyPairQuery_fulfillment_channel = NULL;
    }
    if(keyQuery_fulfillment_status){
        free(keyQuery_fulfillment_status);
        keyQuery_fulfillment_status = NULL;
    }
    if(valueQuery_fulfillment_status){
        free(valueQuery_fulfillment_status);
        valueQuery_fulfillment_status = NULL;
    }
    if(keyPairQuery_fulfillment_status){
        keyValuePair_free(keyPairQuery_fulfillment_status);
        keyPairQuery_fulfillment_status = NULL;
    }
    if(keyQuery_shipping_method){
        free(keyQuery_shipping_method);
        keyQuery_shipping_method = NULL;
    }
    if(valueQuery_shipping_method){
        free(valueQuery_shipping_method);
        valueQuery_shipping_method = NULL;
    }
    if(keyPairQuery_shipping_method){
        keyValuePair_free(keyPairQuery_shipping_method);
        keyPairQuery_shipping_method = NULL;
    }
    if(keyQuery_delivery_method){
        free(keyQuery_delivery_method);
        keyQuery_delivery_method = NULL;
    }
    if(valueQuery_delivery_method){
        free(valueQuery_delivery_method);
        valueQuery_delivery_method = NULL;
    }
    if(keyPairQuery_delivery_method){
        keyValuePair_free(keyPairQuery_delivery_method);
        keyPairQuery_delivery_method = NULL;
    }
    if(keyQuery_tags){
        free(keyQuery_tags);
        keyQuery_tags = NULL;
    }
    if(valueQuery_tags){
        free(valueQuery_tags);
        valueQuery_tags = NULL;
    }
    if(keyPairQuery_tags){
        keyValuePair_free(keyPairQuery_tags);
        keyPairQuery_tags = NULL;
    }
    if(keyQuery_ship_node_type){
        free(keyQuery_ship_node_type);
        keyQuery_ship_node_type = NULL;
    }
    if(valueQuery_ship_node_type){
        free(valueQuery_ship_node_type);
        valueQuery_ship_node_type = NULL;
    }
    if(keyPairQuery_ship_node_type){
        keyValuePair_free(keyPairQuery_ship_node_type);
        keyPairQuery_ship_node_type = NULL;
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

// order.financial_status.list
//
// Retrieve list of financial statuses
//
order_financial_status_list_200_response_t*
OrderAPI_orderFinancialStatusList(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/order.financial_status.list.json");




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
    order_financial_status_list_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_financial_status_list_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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

// order.find
//
// This method is deprecated and won't be supported in the future. Please use \"order.list\" instead.
//
order_find_200_response_t*
OrderAPI_orderFind(apiClient_t *apiClient, int *start, int *count, char *customer_id, char *customer_email, char *order_status, char *financial_status, char *created_to, char *created_from, char *modified_to, char *modified_from, char *params, char *exclude)
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
    char *localVarPath = strdup("/order.find.json");





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
    char *keyQuery_customer_email = NULL;
    char * valueQuery_customer_email = NULL;
    keyValuePair_t *keyPairQuery_customer_email = 0;
    if (customer_email)
    {
        keyQuery_customer_email = strdup("customer_email");
        valueQuery_customer_email = strdup((customer_email));
        keyPairQuery_customer_email = keyValuePair_create(keyQuery_customer_email, valueQuery_customer_email);
        list_addElement(localVarQueryParameters,keyPairQuery_customer_email);
    }

    // query parameters
    char *keyQuery_order_status = NULL;
    char * valueQuery_order_status = NULL;
    keyValuePair_t *keyPairQuery_order_status = 0;
    if (order_status)
    {
        keyQuery_order_status = strdup("order_status");
        valueQuery_order_status = strdup((order_status));
        keyPairQuery_order_status = keyValuePair_create(keyQuery_order_status, valueQuery_order_status);
        list_addElement(localVarQueryParameters,keyPairQuery_order_status);
    }

    // query parameters
    char *keyQuery_financial_status = NULL;
    char * valueQuery_financial_status = NULL;
    keyValuePair_t *keyPairQuery_financial_status = 0;
    if (financial_status)
    {
        keyQuery_financial_status = strdup("financial_status");
        valueQuery_financial_status = strdup((financial_status));
        keyPairQuery_financial_status = keyValuePair_create(keyQuery_financial_status, valueQuery_financial_status);
        list_addElement(localVarQueryParameters,keyPairQuery_financial_status);
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
    order_find_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_find_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_customer_email){
        free(keyQuery_customer_email);
        keyQuery_customer_email = NULL;
    }
    if(valueQuery_customer_email){
        free(valueQuery_customer_email);
        valueQuery_customer_email = NULL;
    }
    if(keyPairQuery_customer_email){
        keyValuePair_free(keyPairQuery_customer_email);
        keyPairQuery_customer_email = NULL;
    }
    if(keyQuery_order_status){
        free(keyQuery_order_status);
        keyQuery_order_status = NULL;
    }
    if(valueQuery_order_status){
        free(valueQuery_order_status);
        valueQuery_order_status = NULL;
    }
    if(keyPairQuery_order_status){
        keyValuePair_free(keyPairQuery_order_status);
        keyPairQuery_order_status = NULL;
    }
    if(keyQuery_financial_status){
        free(keyQuery_financial_status);
        keyQuery_financial_status = NULL;
    }
    if(valueQuery_financial_status){
        free(valueQuery_financial_status);
        valueQuery_financial_status = NULL;
    }
    if(keyPairQuery_financial_status){
        keyValuePair_free(keyPairQuery_financial_status);
        keyPairQuery_financial_status = NULL;
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

// order.fulfillment_status.list
//
// Retrieve list of fulfillment statuses
//
order_fulfillment_status_list_200_response_t*
OrderAPI_orderFulfillmentStatusList(apiClient_t *apiClient, char *action)
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
    char *localVarPath = strdup("/order.fulfillment_status.list.json");





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
    order_fulfillment_status_list_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_fulfillment_status_list_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// order.info
//
// Info about a specific order by ID
//
order_info_200_response_t*
OrderAPI_orderInfo(apiClient_t *apiClient, char *id, char *order_id, char *store_id, char *params, char *response_fields, char *exclude, int *enable_cache, int *use_latest_api_version)
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
    char *localVarPath = strdup("/order.info.json");





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
    char *keyQuery_order_id = NULL;
    char * valueQuery_order_id = NULL;
    keyValuePair_t *keyPairQuery_order_id = 0;
    if (order_id)
    {
        keyQuery_order_id = strdup("order_id");
        valueQuery_order_id = strdup((order_id));
        keyPairQuery_order_id = keyValuePair_create(keyQuery_order_id, valueQuery_order_id);
        list_addElement(localVarQueryParameters,keyPairQuery_order_id);
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

    // query parameters
    char *keyQuery_enable_cache = NULL;
    char * valueQuery_enable_cache = NULL;
    keyValuePair_t *keyPairQuery_enable_cache = 0;
    if (enable_cache)
    {
        keyQuery_enable_cache = strdup("enable_cache");
        valueQuery_enable_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_enable_cache, MAX_NUMBER_LENGTH, "%d", *enable_cache);
        keyPairQuery_enable_cache = keyValuePair_create(keyQuery_enable_cache, valueQuery_enable_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_enable_cache);
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
    order_info_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_info_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_order_id){
        free(keyQuery_order_id);
        keyQuery_order_id = NULL;
    }
    if(valueQuery_order_id){
        free(valueQuery_order_id);
        valueQuery_order_id = NULL;
    }
    if(keyPairQuery_order_id){
        keyValuePair_free(keyPairQuery_order_id);
        keyPairQuery_order_id = NULL;
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
    if(keyQuery_enable_cache){
        free(keyQuery_enable_cache);
        keyQuery_enable_cache = NULL;
    }
    if(valueQuery_enable_cache){
        free(valueQuery_enable_cache);
        valueQuery_enable_cache = NULL;
    }
    if(keyPairQuery_enable_cache){
        keyValuePair_free(keyPairQuery_enable_cache);
        keyPairQuery_enable_cache = NULL;
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

// order.list
//
// Get list of orders from store.
//
model_response_order_list_t*
OrderAPI_orderList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *ids, char *order_ids, char *since_id, char *store_id, char *customer_id, char *customer_email, char *basket_id, char *currency_id, char *phone, char *order_status, list_t *order_status_ids, char *ebay_order_status, char *financial_status, list_t *financial_status_ids, char *fulfillment_status, char *return_status, char *fulfillment_channel, char *shipping_method, char *skip_order_ids, int *is_deleted, char *shipping_country_iso3, char *delivery_method, char *ship_node_type, char *created_to, char *created_from, char *modified_to, char *modified_from, char *tags, char *sort_by, char *sort_direction, char *params, char *response_fields, char *exclude, int *enable_cache, int *use_latest_api_version)
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
    char *localVarPath = strdup("/order.list.json");





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
    char *keyQuery_order_ids = NULL;
    char * valueQuery_order_ids = NULL;
    keyValuePair_t *keyPairQuery_order_ids = 0;
    if (order_ids)
    {
        keyQuery_order_ids = strdup("order_ids");
        valueQuery_order_ids = strdup((order_ids));
        keyPairQuery_order_ids = keyValuePair_create(keyQuery_order_ids, valueQuery_order_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_order_ids);
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
    char *keyQuery_customer_email = NULL;
    char * valueQuery_customer_email = NULL;
    keyValuePair_t *keyPairQuery_customer_email = 0;
    if (customer_email)
    {
        keyQuery_customer_email = strdup("customer_email");
        valueQuery_customer_email = strdup((customer_email));
        keyPairQuery_customer_email = keyValuePair_create(keyQuery_customer_email, valueQuery_customer_email);
        list_addElement(localVarQueryParameters,keyPairQuery_customer_email);
    }

    // query parameters
    char *keyQuery_basket_id = NULL;
    char * valueQuery_basket_id = NULL;
    keyValuePair_t *keyPairQuery_basket_id = 0;
    if (basket_id)
    {
        keyQuery_basket_id = strdup("basket_id");
        valueQuery_basket_id = strdup((basket_id));
        keyPairQuery_basket_id = keyValuePair_create(keyQuery_basket_id, valueQuery_basket_id);
        list_addElement(localVarQueryParameters,keyPairQuery_basket_id);
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
    char *keyQuery_phone = NULL;
    char * valueQuery_phone = NULL;
    keyValuePair_t *keyPairQuery_phone = 0;
    if (phone)
    {
        keyQuery_phone = strdup("phone");
        valueQuery_phone = strdup((phone));
        keyPairQuery_phone = keyValuePair_create(keyQuery_phone, valueQuery_phone);
        list_addElement(localVarQueryParameters,keyPairQuery_phone);
    }

    // query parameters
    char *keyQuery_order_status = NULL;
    char * valueQuery_order_status = NULL;
    keyValuePair_t *keyPairQuery_order_status = 0;
    if (order_status)
    {
        keyQuery_order_status = strdup("order_status");
        valueQuery_order_status = strdup((order_status));
        keyPairQuery_order_status = keyValuePair_create(keyQuery_order_status, valueQuery_order_status);
        list_addElement(localVarQueryParameters,keyPairQuery_order_status);
    }

    // query parameters
    if (order_status_ids)
    {
        list_addElement(localVarQueryParameters,order_status_ids);
    }

    // query parameters
    char *keyQuery_ebay_order_status = NULL;
    char * valueQuery_ebay_order_status = NULL;
    keyValuePair_t *keyPairQuery_ebay_order_status = 0;
    if (ebay_order_status)
    {
        keyQuery_ebay_order_status = strdup("ebay_order_status");
        valueQuery_ebay_order_status = strdup((ebay_order_status));
        keyPairQuery_ebay_order_status = keyValuePair_create(keyQuery_ebay_order_status, valueQuery_ebay_order_status);
        list_addElement(localVarQueryParameters,keyPairQuery_ebay_order_status);
    }

    // query parameters
    char *keyQuery_financial_status = NULL;
    char * valueQuery_financial_status = NULL;
    keyValuePair_t *keyPairQuery_financial_status = 0;
    if (financial_status)
    {
        keyQuery_financial_status = strdup("financial_status");
        valueQuery_financial_status = strdup((financial_status));
        keyPairQuery_financial_status = keyValuePair_create(keyQuery_financial_status, valueQuery_financial_status);
        list_addElement(localVarQueryParameters,keyPairQuery_financial_status);
    }

    // query parameters
    if (financial_status_ids)
    {
        list_addElement(localVarQueryParameters,financial_status_ids);
    }

    // query parameters
    char *keyQuery_fulfillment_status = NULL;
    char * valueQuery_fulfillment_status = NULL;
    keyValuePair_t *keyPairQuery_fulfillment_status = 0;
    if (fulfillment_status)
    {
        keyQuery_fulfillment_status = strdup("fulfillment_status");
        valueQuery_fulfillment_status = strdup((fulfillment_status));
        keyPairQuery_fulfillment_status = keyValuePair_create(keyQuery_fulfillment_status, valueQuery_fulfillment_status);
        list_addElement(localVarQueryParameters,keyPairQuery_fulfillment_status);
    }

    // query parameters
    char *keyQuery_return_status = NULL;
    char * valueQuery_return_status = NULL;
    keyValuePair_t *keyPairQuery_return_status = 0;
    if (return_status)
    {
        keyQuery_return_status = strdup("return_status");
        valueQuery_return_status = strdup((return_status));
        keyPairQuery_return_status = keyValuePair_create(keyQuery_return_status, valueQuery_return_status);
        list_addElement(localVarQueryParameters,keyPairQuery_return_status);
    }

    // query parameters
    char *keyQuery_fulfillment_channel = NULL;
    char * valueQuery_fulfillment_channel = NULL;
    keyValuePair_t *keyPairQuery_fulfillment_channel = 0;
    if (fulfillment_channel)
    {
        keyQuery_fulfillment_channel = strdup("fulfillment_channel");
        valueQuery_fulfillment_channel = strdup((fulfillment_channel));
        keyPairQuery_fulfillment_channel = keyValuePair_create(keyQuery_fulfillment_channel, valueQuery_fulfillment_channel);
        list_addElement(localVarQueryParameters,keyPairQuery_fulfillment_channel);
    }

    // query parameters
    char *keyQuery_shipping_method = NULL;
    char * valueQuery_shipping_method = NULL;
    keyValuePair_t *keyPairQuery_shipping_method = 0;
    if (shipping_method)
    {
        keyQuery_shipping_method = strdup("shipping_method");
        valueQuery_shipping_method = strdup((shipping_method));
        keyPairQuery_shipping_method = keyValuePair_create(keyQuery_shipping_method, valueQuery_shipping_method);
        list_addElement(localVarQueryParameters,keyPairQuery_shipping_method);
    }

    // query parameters
    char *keyQuery_skip_order_ids = NULL;
    char * valueQuery_skip_order_ids = NULL;
    keyValuePair_t *keyPairQuery_skip_order_ids = 0;
    if (skip_order_ids)
    {
        keyQuery_skip_order_ids = strdup("skip_order_ids");
        valueQuery_skip_order_ids = strdup((skip_order_ids));
        keyPairQuery_skip_order_ids = keyValuePair_create(keyQuery_skip_order_ids, valueQuery_skip_order_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_skip_order_ids);
    }

    // query parameters
    char *keyQuery_is_deleted = NULL;
    char * valueQuery_is_deleted = NULL;
    keyValuePair_t *keyPairQuery_is_deleted = 0;
    if (is_deleted)
    {
        keyQuery_is_deleted = strdup("is_deleted");
        valueQuery_is_deleted = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_is_deleted, MAX_NUMBER_LENGTH, "%d", *is_deleted);
        keyPairQuery_is_deleted = keyValuePair_create(keyQuery_is_deleted, valueQuery_is_deleted);
        list_addElement(localVarQueryParameters,keyPairQuery_is_deleted);
    }

    // query parameters
    char *keyQuery_shipping_country_iso3 = NULL;
    char * valueQuery_shipping_country_iso3 = NULL;
    keyValuePair_t *keyPairQuery_shipping_country_iso3 = 0;
    if (shipping_country_iso3)
    {
        keyQuery_shipping_country_iso3 = strdup("shipping_country_iso3");
        valueQuery_shipping_country_iso3 = strdup((shipping_country_iso3));
        keyPairQuery_shipping_country_iso3 = keyValuePair_create(keyQuery_shipping_country_iso3, valueQuery_shipping_country_iso3);
        list_addElement(localVarQueryParameters,keyPairQuery_shipping_country_iso3);
    }

    // query parameters
    char *keyQuery_delivery_method = NULL;
    char * valueQuery_delivery_method = NULL;
    keyValuePair_t *keyPairQuery_delivery_method = 0;
    if (delivery_method)
    {
        keyQuery_delivery_method = strdup("delivery_method");
        valueQuery_delivery_method = strdup((delivery_method));
        keyPairQuery_delivery_method = keyValuePair_create(keyQuery_delivery_method, valueQuery_delivery_method);
        list_addElement(localVarQueryParameters,keyPairQuery_delivery_method);
    }

    // query parameters
    char *keyQuery_ship_node_type = NULL;
    char * valueQuery_ship_node_type = NULL;
    keyValuePair_t *keyPairQuery_ship_node_type = 0;
    if (ship_node_type)
    {
        keyQuery_ship_node_type = strdup("ship_node_type");
        valueQuery_ship_node_type = strdup((ship_node_type));
        keyPairQuery_ship_node_type = keyValuePair_create(keyQuery_ship_node_type, valueQuery_ship_node_type);
        list_addElement(localVarQueryParameters,keyPairQuery_ship_node_type);
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
    char *keyQuery_tags = NULL;
    char * valueQuery_tags = NULL;
    keyValuePair_t *keyPairQuery_tags = 0;
    if (tags)
    {
        keyQuery_tags = strdup("tags");
        valueQuery_tags = strdup((tags));
        keyPairQuery_tags = keyValuePair_create(keyQuery_tags, valueQuery_tags);
        list_addElement(localVarQueryParameters,keyPairQuery_tags);
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
    char *keyQuery_enable_cache = NULL;
    char * valueQuery_enable_cache = NULL;
    keyValuePair_t *keyPairQuery_enable_cache = 0;
    if (enable_cache)
    {
        keyQuery_enable_cache = strdup("enable_cache");
        valueQuery_enable_cache = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_enable_cache, MAX_NUMBER_LENGTH, "%d", *enable_cache);
        keyPairQuery_enable_cache = keyValuePair_create(keyQuery_enable_cache, valueQuery_enable_cache);
        list_addElement(localVarQueryParameters,keyPairQuery_enable_cache);
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
    model_response_order_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_order_list_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_order_ids){
        free(keyQuery_order_ids);
        keyQuery_order_ids = NULL;
    }
    if(valueQuery_order_ids){
        free(valueQuery_order_ids);
        valueQuery_order_ids = NULL;
    }
    if(keyPairQuery_order_ids){
        keyValuePair_free(keyPairQuery_order_ids);
        keyPairQuery_order_ids = NULL;
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
    if(keyQuery_customer_email){
        free(keyQuery_customer_email);
        keyQuery_customer_email = NULL;
    }
    if(valueQuery_customer_email){
        free(valueQuery_customer_email);
        valueQuery_customer_email = NULL;
    }
    if(keyPairQuery_customer_email){
        keyValuePair_free(keyPairQuery_customer_email);
        keyPairQuery_customer_email = NULL;
    }
    if(keyQuery_basket_id){
        free(keyQuery_basket_id);
        keyQuery_basket_id = NULL;
    }
    if(valueQuery_basket_id){
        free(valueQuery_basket_id);
        valueQuery_basket_id = NULL;
    }
    if(keyPairQuery_basket_id){
        keyValuePair_free(keyPairQuery_basket_id);
        keyPairQuery_basket_id = NULL;
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
    if(keyQuery_phone){
        free(keyQuery_phone);
        keyQuery_phone = NULL;
    }
    if(valueQuery_phone){
        free(valueQuery_phone);
        valueQuery_phone = NULL;
    }
    if(keyPairQuery_phone){
        keyValuePair_free(keyPairQuery_phone);
        keyPairQuery_phone = NULL;
    }
    if(keyQuery_order_status){
        free(keyQuery_order_status);
        keyQuery_order_status = NULL;
    }
    if(valueQuery_order_status){
        free(valueQuery_order_status);
        valueQuery_order_status = NULL;
    }
    if(keyPairQuery_order_status){
        keyValuePair_free(keyPairQuery_order_status);
        keyPairQuery_order_status = NULL;
    }
    if(keyQuery_ebay_order_status){
        free(keyQuery_ebay_order_status);
        keyQuery_ebay_order_status = NULL;
    }
    if(valueQuery_ebay_order_status){
        free(valueQuery_ebay_order_status);
        valueQuery_ebay_order_status = NULL;
    }
    if(keyPairQuery_ebay_order_status){
        keyValuePair_free(keyPairQuery_ebay_order_status);
        keyPairQuery_ebay_order_status = NULL;
    }
    if(keyQuery_financial_status){
        free(keyQuery_financial_status);
        keyQuery_financial_status = NULL;
    }
    if(valueQuery_financial_status){
        free(valueQuery_financial_status);
        valueQuery_financial_status = NULL;
    }
    if(keyPairQuery_financial_status){
        keyValuePair_free(keyPairQuery_financial_status);
        keyPairQuery_financial_status = NULL;
    }
    if(keyQuery_fulfillment_status){
        free(keyQuery_fulfillment_status);
        keyQuery_fulfillment_status = NULL;
    }
    if(valueQuery_fulfillment_status){
        free(valueQuery_fulfillment_status);
        valueQuery_fulfillment_status = NULL;
    }
    if(keyPairQuery_fulfillment_status){
        keyValuePair_free(keyPairQuery_fulfillment_status);
        keyPairQuery_fulfillment_status = NULL;
    }
    if(keyQuery_return_status){
        free(keyQuery_return_status);
        keyQuery_return_status = NULL;
    }
    if(valueQuery_return_status){
        free(valueQuery_return_status);
        valueQuery_return_status = NULL;
    }
    if(keyPairQuery_return_status){
        keyValuePair_free(keyPairQuery_return_status);
        keyPairQuery_return_status = NULL;
    }
    if(keyQuery_fulfillment_channel){
        free(keyQuery_fulfillment_channel);
        keyQuery_fulfillment_channel = NULL;
    }
    if(valueQuery_fulfillment_channel){
        free(valueQuery_fulfillment_channel);
        valueQuery_fulfillment_channel = NULL;
    }
    if(keyPairQuery_fulfillment_channel){
        keyValuePair_free(keyPairQuery_fulfillment_channel);
        keyPairQuery_fulfillment_channel = NULL;
    }
    if(keyQuery_shipping_method){
        free(keyQuery_shipping_method);
        keyQuery_shipping_method = NULL;
    }
    if(valueQuery_shipping_method){
        free(valueQuery_shipping_method);
        valueQuery_shipping_method = NULL;
    }
    if(keyPairQuery_shipping_method){
        keyValuePair_free(keyPairQuery_shipping_method);
        keyPairQuery_shipping_method = NULL;
    }
    if(keyQuery_skip_order_ids){
        free(keyQuery_skip_order_ids);
        keyQuery_skip_order_ids = NULL;
    }
    if(valueQuery_skip_order_ids){
        free(valueQuery_skip_order_ids);
        valueQuery_skip_order_ids = NULL;
    }
    if(keyPairQuery_skip_order_ids){
        keyValuePair_free(keyPairQuery_skip_order_ids);
        keyPairQuery_skip_order_ids = NULL;
    }
    if(keyQuery_is_deleted){
        free(keyQuery_is_deleted);
        keyQuery_is_deleted = NULL;
    }
    if(valueQuery_is_deleted){
        free(valueQuery_is_deleted);
        valueQuery_is_deleted = NULL;
    }
    if(keyPairQuery_is_deleted){
        keyValuePair_free(keyPairQuery_is_deleted);
        keyPairQuery_is_deleted = NULL;
    }
    if(keyQuery_shipping_country_iso3){
        free(keyQuery_shipping_country_iso3);
        keyQuery_shipping_country_iso3 = NULL;
    }
    if(valueQuery_shipping_country_iso3){
        free(valueQuery_shipping_country_iso3);
        valueQuery_shipping_country_iso3 = NULL;
    }
    if(keyPairQuery_shipping_country_iso3){
        keyValuePair_free(keyPairQuery_shipping_country_iso3);
        keyPairQuery_shipping_country_iso3 = NULL;
    }
    if(keyQuery_delivery_method){
        free(keyQuery_delivery_method);
        keyQuery_delivery_method = NULL;
    }
    if(valueQuery_delivery_method){
        free(valueQuery_delivery_method);
        valueQuery_delivery_method = NULL;
    }
    if(keyPairQuery_delivery_method){
        keyValuePair_free(keyPairQuery_delivery_method);
        keyPairQuery_delivery_method = NULL;
    }
    if(keyQuery_ship_node_type){
        free(keyQuery_ship_node_type);
        keyQuery_ship_node_type = NULL;
    }
    if(valueQuery_ship_node_type){
        free(valueQuery_ship_node_type);
        valueQuery_ship_node_type = NULL;
    }
    if(keyPairQuery_ship_node_type){
        keyValuePair_free(keyPairQuery_ship_node_type);
        keyPairQuery_ship_node_type = NULL;
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
    if(keyQuery_tags){
        free(keyQuery_tags);
        keyQuery_tags = NULL;
    }
    if(valueQuery_tags){
        free(valueQuery_tags);
        valueQuery_tags = NULL;
    }
    if(keyPairQuery_tags){
        keyValuePair_free(keyPairQuery_tags);
        keyPairQuery_tags = NULL;
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
    if(keyQuery_enable_cache){
        free(keyQuery_enable_cache);
        keyQuery_enable_cache = NULL;
    }
    if(valueQuery_enable_cache){
        free(valueQuery_enable_cache);
        valueQuery_enable_cache = NULL;
    }
    if(keyPairQuery_enable_cache){
        keyValuePair_free(keyPairQuery_enable_cache);
        keyPairQuery_enable_cache = NULL;
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

// order.preestimate_shipping.list
//
// Retrieve list of order preestimated shipping methods
//
model_response_order_preestimate_shipping_list_t*
OrderAPI_orderPreestimateShippingList(apiClient_t *apiClient, order_preestimate_shipping_list_t *order_preestimate_shipping_list)
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
    char *localVarPath = strdup("/order.preestimate_shipping.list.json");





    // Body Param
    cJSON *localVarSingleItemJSON_order_preestimate_shipping_list = NULL;
    if (order_preestimate_shipping_list != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_order_preestimate_shipping_list = order_preestimate_shipping_list_convertToJSON(order_preestimate_shipping_list);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_preestimate_shipping_list);
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
    model_response_order_preestimate_shipping_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_order_preestimate_shipping_list_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_order_preestimate_shipping_list) {
        cJSON_Delete(localVarSingleItemJSON_order_preestimate_shipping_list);
        localVarSingleItemJSON_order_preestimate_shipping_list = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// order.refund.add
//
// Add a refund to the order.
//
order_refund_add_200_response_t*
OrderAPI_orderRefundAdd(apiClient_t *apiClient, order_refund_add_t *order_refund_add)
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
    char *localVarPath = strdup("/order.refund.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_order_refund_add = NULL;
    if (order_refund_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_order_refund_add = order_refund_add_convertToJSON(order_refund_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_refund_add);
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
    order_refund_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_refund_add_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_order_refund_add) {
        cJSON_Delete(localVarSingleItemJSON_order_refund_add);
        localVarSingleItemJSON_order_refund_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// order.return.add
//
// Create new return request.
//
order_return_add_200_response_t*
OrderAPI_orderReturnAdd(apiClient_t *apiClient, order_return_add_t *order_return_add)
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
    char *localVarPath = strdup("/order.return.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_order_return_add = NULL;
    if (order_return_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_order_return_add = order_return_add_convertToJSON(order_return_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_return_add);
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
    order_return_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_return_add_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_order_return_add) {
        cJSON_Delete(localVarSingleItemJSON_order_return_add);
        localVarSingleItemJSON_order_return_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// order.return.delete
//
// Delete return.
//
attribute_value_delete_200_response_t*
OrderAPI_orderReturnDelete(apiClient_t *apiClient, char *return_id, char *order_id, char *store_id)
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
    char *localVarPath = strdup("/order.return.delete.json");





    // query parameters
    char *keyQuery_return_id = NULL;
    char * valueQuery_return_id = NULL;
    keyValuePair_t *keyPairQuery_return_id = 0;
    if (return_id)
    {
        keyQuery_return_id = strdup("return_id");
        valueQuery_return_id = strdup((return_id));
        keyPairQuery_return_id = keyValuePair_create(keyQuery_return_id, valueQuery_return_id);
        list_addElement(localVarQueryParameters,keyPairQuery_return_id);
    }

    // query parameters
    char *keyQuery_order_id = NULL;
    char * valueQuery_order_id = NULL;
    keyValuePair_t *keyPairQuery_order_id = 0;
    if (order_id)
    {
        keyQuery_order_id = strdup("order_id");
        valueQuery_order_id = strdup((order_id));
        keyPairQuery_order_id = keyValuePair_create(keyQuery_order_id, valueQuery_order_id);
        list_addElement(localVarQueryParameters,keyPairQuery_order_id);
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
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_value_delete_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_return_id){
        free(keyQuery_return_id);
        keyQuery_return_id = NULL;
    }
    if(valueQuery_return_id){
        free(valueQuery_return_id);
        valueQuery_return_id = NULL;
    }
    if(keyPairQuery_return_id){
        keyValuePair_free(keyPairQuery_return_id);
        keyPairQuery_return_id = NULL;
    }
    if(keyQuery_order_id){
        free(keyQuery_order_id);
        keyQuery_order_id = NULL;
    }
    if(valueQuery_order_id){
        free(valueQuery_order_id);
        valueQuery_order_id = NULL;
    }
    if(keyPairQuery_order_id){
        keyValuePair_free(keyPairQuery_order_id);
        keyPairQuery_order_id = NULL;
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

// order.return.update
//
// Update order's shipment information.
//
account_config_update_200_response_t*
OrderAPI_orderReturnUpdate(apiClient_t *apiClient, order_return_update_t *order_return_update)
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
    char *localVarPath = strdup("/order.return.update.json");





    // Body Param
    cJSON *localVarSingleItemJSON_order_return_update = NULL;
    if (order_return_update != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_order_return_update = order_return_update_convertToJSON(order_return_update);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_return_update);
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
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_order_return_update) {
        cJSON_Delete(localVarSingleItemJSON_order_return_update);
        localVarSingleItemJSON_order_return_update = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// order.shipment.add
//
// Add a shipment to the order.
//
order_shipment_add_200_response_t*
OrderAPI_orderShipmentAdd(apiClient_t *apiClient, order_shipment_add_t *order_shipment_add)
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
    char *localVarPath = strdup("/order.shipment.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_order_shipment_add = NULL;
    if (order_shipment_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_order_shipment_add = order_shipment_add_convertToJSON(order_shipment_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_shipment_add);
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
    order_shipment_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_shipment_add_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_order_shipment_add) {
        cJSON_Delete(localVarSingleItemJSON_order_shipment_add);
        localVarSingleItemJSON_order_shipment_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// order.shipment.add.batch
//
// Add a shipments to the orders.
//
category_add_batch_200_response_t*
OrderAPI_orderShipmentAddBatch(apiClient_t *apiClient, order_shipment_add_batch_t *order_shipment_add_batch)
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
    char *localVarPath = strdup("/order.shipment.add.batch.json");





    // Body Param
    cJSON *localVarSingleItemJSON_order_shipment_add_batch = NULL;
    if (order_shipment_add_batch != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_order_shipment_add_batch = order_shipment_add_batch_convertToJSON(order_shipment_add_batch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_shipment_add_batch);
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
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_add_batch_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_order_shipment_add_batch) {
        cJSON_Delete(localVarSingleItemJSON_order_shipment_add_batch);
        localVarSingleItemJSON_order_shipment_add_batch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// order.shipment.delete
//
// Delete order's shipment.
//
order_shipment_delete_200_response_t*
OrderAPI_orderShipmentDelete(apiClient_t *apiClient, char *shipment_id, char *order_id, char *store_id)
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
    char *localVarPath = strdup("/order.shipment.delete.json");





    // query parameters
    char *keyQuery_shipment_id = NULL;
    char * valueQuery_shipment_id = NULL;
    keyValuePair_t *keyPairQuery_shipment_id = 0;
    if (shipment_id)
    {
        keyQuery_shipment_id = strdup("shipment_id");
        valueQuery_shipment_id = strdup((shipment_id));
        keyPairQuery_shipment_id = keyValuePair_create(keyQuery_shipment_id, valueQuery_shipment_id);
        list_addElement(localVarQueryParameters,keyPairQuery_shipment_id);
    }

    // query parameters
    char *keyQuery_order_id = NULL;
    char * valueQuery_order_id = NULL;
    keyValuePair_t *keyPairQuery_order_id = 0;
    if (order_id)
    {
        keyQuery_order_id = strdup("order_id");
        valueQuery_order_id = strdup((order_id));
        keyPairQuery_order_id = keyValuePair_create(keyQuery_order_id, valueQuery_order_id);
        list_addElement(localVarQueryParameters,keyPairQuery_order_id);
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
    order_shipment_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_shipment_delete_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_shipment_id){
        free(keyQuery_shipment_id);
        keyQuery_shipment_id = NULL;
    }
    if(valueQuery_shipment_id){
        free(valueQuery_shipment_id);
        valueQuery_shipment_id = NULL;
    }
    if(keyPairQuery_shipment_id){
        keyValuePair_free(keyPairQuery_shipment_id);
        keyPairQuery_shipment_id = NULL;
    }
    if(keyQuery_order_id){
        free(keyQuery_order_id);
        keyQuery_order_id = NULL;
    }
    if(valueQuery_order_id){
        free(valueQuery_order_id);
        valueQuery_order_id = NULL;
    }
    if(keyPairQuery_order_id){
        keyValuePair_free(keyPairQuery_order_id);
        keyPairQuery_order_id = NULL;
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

// order.shipment.info
//
// Get information of shipment.
//
order_shipment_info_200_response_t*
OrderAPI_orderShipmentInfo(apiClient_t *apiClient, char *id, char *order_id, int *start, char *store_id, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/order.shipment.info.json");





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
    char *keyQuery_order_id = NULL;
    char * valueQuery_order_id = NULL;
    keyValuePair_t *keyPairQuery_order_id = 0;
    if (order_id)
    {
        keyQuery_order_id = strdup("order_id");
        valueQuery_order_id = strdup((order_id));
        keyPairQuery_order_id = keyValuePair_create(keyQuery_order_id, valueQuery_order_id);
        list_addElement(localVarQueryParameters,keyPairQuery_order_id);
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
    order_shipment_info_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_shipment_info_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_order_id){
        free(keyQuery_order_id);
        keyQuery_order_id = NULL;
    }
    if(valueQuery_order_id){
        free(valueQuery_order_id);
        valueQuery_order_id = NULL;
    }
    if(keyPairQuery_order_id){
        keyValuePair_free(keyPairQuery_order_id);
        keyPairQuery_order_id = NULL;
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

// order.shipment.list
//
// Get list of shipments by orders.
//
model_response_order_shipment_list_t*
OrderAPI_orderShipmentList(apiClient_t *apiClient, char *order_id, int *start, int *count, char *page_cursor, char *store_id, char *created_from, char *created_to, char *modified_from, char *modified_to, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/order.shipment.list.json");





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
    char *keyQuery_order_id = NULL;
    char * valueQuery_order_id = NULL;
    keyValuePair_t *keyPairQuery_order_id = 0;
    if (order_id)
    {
        keyQuery_order_id = strdup("order_id");
        valueQuery_order_id = strdup((order_id));
        keyPairQuery_order_id = keyValuePair_create(keyQuery_order_id, valueQuery_order_id);
        list_addElement(localVarQueryParameters,keyPairQuery_order_id);
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
    model_response_order_shipment_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_order_shipment_list_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_order_id){
        free(keyQuery_order_id);
        keyQuery_order_id = NULL;
    }
    if(valueQuery_order_id){
        free(valueQuery_order_id);
        valueQuery_order_id = NULL;
    }
    if(keyPairQuery_order_id){
        keyValuePair_free(keyPairQuery_order_id);
        keyPairQuery_order_id = NULL;
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

// order.shipment.tracking.add
//
// Add order shipment's tracking info.
//
order_shipment_tracking_add_200_response_t*
OrderAPI_orderShipmentTrackingAdd(apiClient_t *apiClient, order_shipment_tracking_add_t *order_shipment_tracking_add)
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
    char *localVarPath = strdup("/order.shipment.tracking.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_order_shipment_tracking_add = NULL;
    if (order_shipment_tracking_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_order_shipment_tracking_add = order_shipment_tracking_add_convertToJSON(order_shipment_tracking_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_shipment_tracking_add);
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
    order_shipment_tracking_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = order_shipment_tracking_add_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_order_shipment_tracking_add) {
        cJSON_Delete(localVarSingleItemJSON_order_shipment_tracking_add);
        localVarSingleItemJSON_order_shipment_tracking_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// order.shipment.update
//
// Update order's shipment information.
//
account_config_update_200_response_t*
OrderAPI_orderShipmentUpdate(apiClient_t *apiClient, order_shipment_update_t *order_shipment_update)
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
    char *localVarPath = strdup("/order.shipment.update.json");





    // Body Param
    cJSON *localVarSingleItemJSON_order_shipment_update = NULL;
    if (order_shipment_update != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_order_shipment_update = order_shipment_update_convertToJSON(order_shipment_update);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_shipment_update);
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
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_order_shipment_update) {
        cJSON_Delete(localVarSingleItemJSON_order_shipment_update);
        localVarSingleItemJSON_order_shipment_update = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// order.status.list
//
// Retrieve list of statuses
//
model_response_order_status_list_t*
OrderAPI_orderStatusList(apiClient_t *apiClient, char *store_id, char *action, char *response_fields)
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
    char *localVarPath = strdup("/order.status.list.json");





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
    model_response_order_status_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_order_status_list_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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

// order.transaction.list
//
// Retrieve list of order transaction
//
model_response_order_transaction_list_t*
OrderAPI_orderTransactionList(apiClient_t *apiClient, char *order_ids, int *count, char *page_cursor, char *store_id, char *params, char *response_fields, char *exclude)
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
    char *localVarPath = strdup("/order.transaction.list.json");





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
    char *keyQuery_order_ids = NULL;
    char * valueQuery_order_ids = NULL;
    keyValuePair_t *keyPairQuery_order_ids = 0;
    if (order_ids)
    {
        keyQuery_order_ids = strdup("order_ids");
        valueQuery_order_ids = strdup((order_ids));
        keyPairQuery_order_ids = keyValuePair_create(keyQuery_order_ids, valueQuery_order_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_order_ids);
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
    model_response_order_transaction_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_order_transaction_list_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_order_ids){
        free(keyQuery_order_ids);
        keyQuery_order_ids = NULL;
    }
    if(valueQuery_order_ids){
        free(valueQuery_order_ids);
        valueQuery_order_ids = NULL;
    }
    if(keyPairQuery_order_ids){
        keyValuePair_free(keyPairQuery_order_ids);
        keyPairQuery_order_ids = NULL;
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

// order.update
//
// Update existing order.
//
account_config_update_200_response_t*
OrderAPI_orderUpdate(apiClient_t *apiClient, char *order_id, char *store_id, char *order_status, char *financial_status, char *fulfillment_status, char *cancellation_reason, char *order_payment_method, char *comment, char *admin_comment, char *admin_private_comment, char *invoice_admin_comment, char *date_modified, char *date_finished, int *send_notifications, int *create_invoice, char *origin, char *tags)
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
    char *localVarPath = strdup("/order.update.json");





    // query parameters
    char *keyQuery_order_id = NULL;
    char * valueQuery_order_id = NULL;
    keyValuePair_t *keyPairQuery_order_id = 0;
    if (order_id)
    {
        keyQuery_order_id = strdup("order_id");
        valueQuery_order_id = strdup((order_id));
        keyPairQuery_order_id = keyValuePair_create(keyQuery_order_id, valueQuery_order_id);
        list_addElement(localVarQueryParameters,keyPairQuery_order_id);
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
    char *keyQuery_order_status = NULL;
    char * valueQuery_order_status = NULL;
    keyValuePair_t *keyPairQuery_order_status = 0;
    if (order_status)
    {
        keyQuery_order_status = strdup("order_status");
        valueQuery_order_status = strdup((order_status));
        keyPairQuery_order_status = keyValuePair_create(keyQuery_order_status, valueQuery_order_status);
        list_addElement(localVarQueryParameters,keyPairQuery_order_status);
    }

    // query parameters
    char *keyQuery_financial_status = NULL;
    char * valueQuery_financial_status = NULL;
    keyValuePair_t *keyPairQuery_financial_status = 0;
    if (financial_status)
    {
        keyQuery_financial_status = strdup("financial_status");
        valueQuery_financial_status = strdup((financial_status));
        keyPairQuery_financial_status = keyValuePair_create(keyQuery_financial_status, valueQuery_financial_status);
        list_addElement(localVarQueryParameters,keyPairQuery_financial_status);
    }

    // query parameters
    char *keyQuery_fulfillment_status = NULL;
    char * valueQuery_fulfillment_status = NULL;
    keyValuePair_t *keyPairQuery_fulfillment_status = 0;
    if (fulfillment_status)
    {
        keyQuery_fulfillment_status = strdup("fulfillment_status");
        valueQuery_fulfillment_status = strdup((fulfillment_status));
        keyPairQuery_fulfillment_status = keyValuePair_create(keyQuery_fulfillment_status, valueQuery_fulfillment_status);
        list_addElement(localVarQueryParameters,keyPairQuery_fulfillment_status);
    }

    // query parameters
    char *keyQuery_cancellation_reason = NULL;
    char * valueQuery_cancellation_reason = NULL;
    keyValuePair_t *keyPairQuery_cancellation_reason = 0;
    if (cancellation_reason)
    {
        keyQuery_cancellation_reason = strdup("cancellation_reason");
        valueQuery_cancellation_reason = strdup((cancellation_reason));
        keyPairQuery_cancellation_reason = keyValuePair_create(keyQuery_cancellation_reason, valueQuery_cancellation_reason);
        list_addElement(localVarQueryParameters,keyPairQuery_cancellation_reason);
    }

    // query parameters
    char *keyQuery_order_payment_method = NULL;
    char * valueQuery_order_payment_method = NULL;
    keyValuePair_t *keyPairQuery_order_payment_method = 0;
    if (order_payment_method)
    {
        keyQuery_order_payment_method = strdup("order_payment_method");
        valueQuery_order_payment_method = strdup((order_payment_method));
        keyPairQuery_order_payment_method = keyValuePair_create(keyQuery_order_payment_method, valueQuery_order_payment_method);
        list_addElement(localVarQueryParameters,keyPairQuery_order_payment_method);
    }

    // query parameters
    char *keyQuery_comment = NULL;
    char * valueQuery_comment = NULL;
    keyValuePair_t *keyPairQuery_comment = 0;
    if (comment)
    {
        keyQuery_comment = strdup("comment");
        valueQuery_comment = strdup((comment));
        keyPairQuery_comment = keyValuePair_create(keyQuery_comment, valueQuery_comment);
        list_addElement(localVarQueryParameters,keyPairQuery_comment);
    }

    // query parameters
    char *keyQuery_admin_comment = NULL;
    char * valueQuery_admin_comment = NULL;
    keyValuePair_t *keyPairQuery_admin_comment = 0;
    if (admin_comment)
    {
        keyQuery_admin_comment = strdup("admin_comment");
        valueQuery_admin_comment = strdup((admin_comment));
        keyPairQuery_admin_comment = keyValuePair_create(keyQuery_admin_comment, valueQuery_admin_comment);
        list_addElement(localVarQueryParameters,keyPairQuery_admin_comment);
    }

    // query parameters
    char *keyQuery_admin_private_comment = NULL;
    char * valueQuery_admin_private_comment = NULL;
    keyValuePair_t *keyPairQuery_admin_private_comment = 0;
    if (admin_private_comment)
    {
        keyQuery_admin_private_comment = strdup("admin_private_comment");
        valueQuery_admin_private_comment = strdup((admin_private_comment));
        keyPairQuery_admin_private_comment = keyValuePair_create(keyQuery_admin_private_comment, valueQuery_admin_private_comment);
        list_addElement(localVarQueryParameters,keyPairQuery_admin_private_comment);
    }

    // query parameters
    char *keyQuery_invoice_admin_comment = NULL;
    char * valueQuery_invoice_admin_comment = NULL;
    keyValuePair_t *keyPairQuery_invoice_admin_comment = 0;
    if (invoice_admin_comment)
    {
        keyQuery_invoice_admin_comment = strdup("invoice_admin_comment");
        valueQuery_invoice_admin_comment = strdup((invoice_admin_comment));
        keyPairQuery_invoice_admin_comment = keyValuePair_create(keyQuery_invoice_admin_comment, valueQuery_invoice_admin_comment);
        list_addElement(localVarQueryParameters,keyPairQuery_invoice_admin_comment);
    }

    // query parameters
    char *keyQuery_date_modified = NULL;
    char * valueQuery_date_modified = NULL;
    keyValuePair_t *keyPairQuery_date_modified = 0;
    if (date_modified)
    {
        keyQuery_date_modified = strdup("date_modified");
        valueQuery_date_modified = strdup((date_modified));
        keyPairQuery_date_modified = keyValuePair_create(keyQuery_date_modified, valueQuery_date_modified);
        list_addElement(localVarQueryParameters,keyPairQuery_date_modified);
    }

    // query parameters
    char *keyQuery_date_finished = NULL;
    char * valueQuery_date_finished = NULL;
    keyValuePair_t *keyPairQuery_date_finished = 0;
    if (date_finished)
    {
        keyQuery_date_finished = strdup("date_finished");
        valueQuery_date_finished = strdup((date_finished));
        keyPairQuery_date_finished = keyValuePair_create(keyQuery_date_finished, valueQuery_date_finished);
        list_addElement(localVarQueryParameters,keyPairQuery_date_finished);
    }

    // query parameters
    char *keyQuery_send_notifications = NULL;
    char * valueQuery_send_notifications = NULL;
    keyValuePair_t *keyPairQuery_send_notifications = 0;
    if (send_notifications)
    {
        keyQuery_send_notifications = strdup("send_notifications");
        valueQuery_send_notifications = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_send_notifications, MAX_NUMBER_LENGTH, "%d", *send_notifications);
        keyPairQuery_send_notifications = keyValuePair_create(keyQuery_send_notifications, valueQuery_send_notifications);
        list_addElement(localVarQueryParameters,keyPairQuery_send_notifications);
    }

    // query parameters
    char *keyQuery_create_invoice = NULL;
    char * valueQuery_create_invoice = NULL;
    keyValuePair_t *keyPairQuery_create_invoice = 0;
    if (create_invoice)
    {
        keyQuery_create_invoice = strdup("create_invoice");
        valueQuery_create_invoice = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_create_invoice, MAX_NUMBER_LENGTH, "%d", *create_invoice);
        keyPairQuery_create_invoice = keyValuePair_create(keyQuery_create_invoice, valueQuery_create_invoice);
        list_addElement(localVarQueryParameters,keyPairQuery_create_invoice);
    }

    // query parameters
    char *keyQuery_origin = NULL;
    char * valueQuery_origin = NULL;
    keyValuePair_t *keyPairQuery_origin = 0;
    if (origin)
    {
        keyQuery_origin = strdup("origin");
        valueQuery_origin = strdup((origin));
        keyPairQuery_origin = keyValuePair_create(keyQuery_origin, valueQuery_origin);
        list_addElement(localVarQueryParameters,keyPairQuery_origin);
    }

    // query parameters
    char *keyQuery_tags = NULL;
    char * valueQuery_tags = NULL;
    keyValuePair_t *keyPairQuery_tags = 0;
    if (tags)
    {
        keyQuery_tags = strdup("tags");
        valueQuery_tags = strdup((tags));
        keyPairQuery_tags = keyValuePair_create(keyQuery_tags, valueQuery_tags);
        list_addElement(localVarQueryParameters,keyPairQuery_tags);
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
        cJSON *OrderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(OrderAPIlocalVarJSON);
        cJSON_Delete(OrderAPIlocalVarJSON);
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
    if(keyQuery_order_id){
        free(keyQuery_order_id);
        keyQuery_order_id = NULL;
    }
    if(valueQuery_order_id){
        free(valueQuery_order_id);
        valueQuery_order_id = NULL;
    }
    if(keyPairQuery_order_id){
        keyValuePair_free(keyPairQuery_order_id);
        keyPairQuery_order_id = NULL;
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
    if(keyQuery_order_status){
        free(keyQuery_order_status);
        keyQuery_order_status = NULL;
    }
    if(valueQuery_order_status){
        free(valueQuery_order_status);
        valueQuery_order_status = NULL;
    }
    if(keyPairQuery_order_status){
        keyValuePair_free(keyPairQuery_order_status);
        keyPairQuery_order_status = NULL;
    }
    if(keyQuery_financial_status){
        free(keyQuery_financial_status);
        keyQuery_financial_status = NULL;
    }
    if(valueQuery_financial_status){
        free(valueQuery_financial_status);
        valueQuery_financial_status = NULL;
    }
    if(keyPairQuery_financial_status){
        keyValuePair_free(keyPairQuery_financial_status);
        keyPairQuery_financial_status = NULL;
    }
    if(keyQuery_fulfillment_status){
        free(keyQuery_fulfillment_status);
        keyQuery_fulfillment_status = NULL;
    }
    if(valueQuery_fulfillment_status){
        free(valueQuery_fulfillment_status);
        valueQuery_fulfillment_status = NULL;
    }
    if(keyPairQuery_fulfillment_status){
        keyValuePair_free(keyPairQuery_fulfillment_status);
        keyPairQuery_fulfillment_status = NULL;
    }
    if(keyQuery_cancellation_reason){
        free(keyQuery_cancellation_reason);
        keyQuery_cancellation_reason = NULL;
    }
    if(valueQuery_cancellation_reason){
        free(valueQuery_cancellation_reason);
        valueQuery_cancellation_reason = NULL;
    }
    if(keyPairQuery_cancellation_reason){
        keyValuePair_free(keyPairQuery_cancellation_reason);
        keyPairQuery_cancellation_reason = NULL;
    }
    if(keyQuery_order_payment_method){
        free(keyQuery_order_payment_method);
        keyQuery_order_payment_method = NULL;
    }
    if(valueQuery_order_payment_method){
        free(valueQuery_order_payment_method);
        valueQuery_order_payment_method = NULL;
    }
    if(keyPairQuery_order_payment_method){
        keyValuePair_free(keyPairQuery_order_payment_method);
        keyPairQuery_order_payment_method = NULL;
    }
    if(keyQuery_comment){
        free(keyQuery_comment);
        keyQuery_comment = NULL;
    }
    if(valueQuery_comment){
        free(valueQuery_comment);
        valueQuery_comment = NULL;
    }
    if(keyPairQuery_comment){
        keyValuePair_free(keyPairQuery_comment);
        keyPairQuery_comment = NULL;
    }
    if(keyQuery_admin_comment){
        free(keyQuery_admin_comment);
        keyQuery_admin_comment = NULL;
    }
    if(valueQuery_admin_comment){
        free(valueQuery_admin_comment);
        valueQuery_admin_comment = NULL;
    }
    if(keyPairQuery_admin_comment){
        keyValuePair_free(keyPairQuery_admin_comment);
        keyPairQuery_admin_comment = NULL;
    }
    if(keyQuery_admin_private_comment){
        free(keyQuery_admin_private_comment);
        keyQuery_admin_private_comment = NULL;
    }
    if(valueQuery_admin_private_comment){
        free(valueQuery_admin_private_comment);
        valueQuery_admin_private_comment = NULL;
    }
    if(keyPairQuery_admin_private_comment){
        keyValuePair_free(keyPairQuery_admin_private_comment);
        keyPairQuery_admin_private_comment = NULL;
    }
    if(keyQuery_invoice_admin_comment){
        free(keyQuery_invoice_admin_comment);
        keyQuery_invoice_admin_comment = NULL;
    }
    if(valueQuery_invoice_admin_comment){
        free(valueQuery_invoice_admin_comment);
        valueQuery_invoice_admin_comment = NULL;
    }
    if(keyPairQuery_invoice_admin_comment){
        keyValuePair_free(keyPairQuery_invoice_admin_comment);
        keyPairQuery_invoice_admin_comment = NULL;
    }
    if(keyQuery_date_modified){
        free(keyQuery_date_modified);
        keyQuery_date_modified = NULL;
    }
    if(valueQuery_date_modified){
        free(valueQuery_date_modified);
        valueQuery_date_modified = NULL;
    }
    if(keyPairQuery_date_modified){
        keyValuePair_free(keyPairQuery_date_modified);
        keyPairQuery_date_modified = NULL;
    }
    if(keyQuery_date_finished){
        free(keyQuery_date_finished);
        keyQuery_date_finished = NULL;
    }
    if(valueQuery_date_finished){
        free(valueQuery_date_finished);
        valueQuery_date_finished = NULL;
    }
    if(keyPairQuery_date_finished){
        keyValuePair_free(keyPairQuery_date_finished);
        keyPairQuery_date_finished = NULL;
    }
    if(keyQuery_send_notifications){
        free(keyQuery_send_notifications);
        keyQuery_send_notifications = NULL;
    }
    if(valueQuery_send_notifications){
        free(valueQuery_send_notifications);
        valueQuery_send_notifications = NULL;
    }
    if(keyPairQuery_send_notifications){
        keyValuePair_free(keyPairQuery_send_notifications);
        keyPairQuery_send_notifications = NULL;
    }
    if(keyQuery_create_invoice){
        free(keyQuery_create_invoice);
        keyQuery_create_invoice = NULL;
    }
    if(valueQuery_create_invoice){
        free(valueQuery_create_invoice);
        valueQuery_create_invoice = NULL;
    }
    if(keyPairQuery_create_invoice){
        keyValuePair_free(keyPairQuery_create_invoice);
        keyPairQuery_create_invoice = NULL;
    }
    if(keyQuery_origin){
        free(keyQuery_origin);
        keyQuery_origin = NULL;
    }
    if(valueQuery_origin){
        free(valueQuery_origin);
        valueQuery_origin = NULL;
    }
    if(keyPairQuery_origin){
        keyValuePair_free(keyPairQuery_origin);
        keyPairQuery_origin = NULL;
    }
    if(keyQuery_tags){
        free(keyQuery_tags);
        keyQuery_tags = NULL;
    }
    if(valueQuery_tags){
        free(valueQuery_tags);
        valueQuery_tags = NULL;
    }
    if(keyPairQuery_tags){
        keyValuePair_free(keyPairQuery_tags);
        keyPairQuery_tags = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

