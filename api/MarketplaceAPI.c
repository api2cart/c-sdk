#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "MarketplaceAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// marketplace.product.find
//
// Search product in global catalog.
//
model_response_marketplace_product_find_t*
MarketplaceAPI_marketplaceProductFind(apiClient_t *apiClient, int *count, char *page_cursor, char *keyword, char *categories_ids, char *store_id, char *asin, char *ean, char *gtin, char *upc, char *mpn, char *isbn, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/marketplace.product.find.json");





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
    char *keyQuery_keyword = NULL;
    char * valueQuery_keyword = NULL;
    keyValuePair_t *keyPairQuery_keyword = 0;
    if (keyword)
    {
        keyQuery_keyword = strdup("keyword");
        valueQuery_keyword = strdup((keyword));
        keyPairQuery_keyword = keyValuePair_create(keyQuery_keyword, valueQuery_keyword);
        list_addElement(localVarQueryParameters,keyPairQuery_keyword);
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
    char *keyQuery_asin = NULL;
    char * valueQuery_asin = NULL;
    keyValuePair_t *keyPairQuery_asin = 0;
    if (asin)
    {
        keyQuery_asin = strdup("asin");
        valueQuery_asin = strdup((asin));
        keyPairQuery_asin = keyValuePair_create(keyQuery_asin, valueQuery_asin);
        list_addElement(localVarQueryParameters,keyPairQuery_asin);
    }

    // query parameters
    char *keyQuery_ean = NULL;
    char * valueQuery_ean = NULL;
    keyValuePair_t *keyPairQuery_ean = 0;
    if (ean)
    {
        keyQuery_ean = strdup("ean");
        valueQuery_ean = strdup((ean));
        keyPairQuery_ean = keyValuePair_create(keyQuery_ean, valueQuery_ean);
        list_addElement(localVarQueryParameters,keyPairQuery_ean);
    }

    // query parameters
    char *keyQuery_gtin = NULL;
    char * valueQuery_gtin = NULL;
    keyValuePair_t *keyPairQuery_gtin = 0;
    if (gtin)
    {
        keyQuery_gtin = strdup("gtin");
        valueQuery_gtin = strdup((gtin));
        keyPairQuery_gtin = keyValuePair_create(keyQuery_gtin, valueQuery_gtin);
        list_addElement(localVarQueryParameters,keyPairQuery_gtin);
    }

    // query parameters
    char *keyQuery_upc = NULL;
    char * valueQuery_upc = NULL;
    keyValuePair_t *keyPairQuery_upc = 0;
    if (upc)
    {
        keyQuery_upc = strdup("upc");
        valueQuery_upc = strdup((upc));
        keyPairQuery_upc = keyValuePair_create(keyQuery_upc, valueQuery_upc);
        list_addElement(localVarQueryParameters,keyPairQuery_upc);
    }

    // query parameters
    char *keyQuery_mpn = NULL;
    char * valueQuery_mpn = NULL;
    keyValuePair_t *keyPairQuery_mpn = 0;
    if (mpn)
    {
        keyQuery_mpn = strdup("mpn");
        valueQuery_mpn = strdup((mpn));
        keyPairQuery_mpn = keyValuePair_create(keyQuery_mpn, valueQuery_mpn);
        list_addElement(localVarQueryParameters,keyPairQuery_mpn);
    }

    // query parameters
    char *keyQuery_isbn = NULL;
    char * valueQuery_isbn = NULL;
    keyValuePair_t *keyPairQuery_isbn = 0;
    if (isbn)
    {
        keyQuery_isbn = strdup("isbn");
        valueQuery_isbn = strdup((isbn));
        keyPairQuery_isbn = keyValuePair_create(keyQuery_isbn, valueQuery_isbn);
        list_addElement(localVarQueryParameters,keyPairQuery_isbn);
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
    model_response_marketplace_product_find_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *MarketplaceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_marketplace_product_find_parseFromJSON(MarketplaceAPIlocalVarJSON);
        cJSON_Delete(MarketplaceAPIlocalVarJSON);
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
    if(keyQuery_keyword){
        free(keyQuery_keyword);
        keyQuery_keyword = NULL;
    }
    if(valueQuery_keyword){
        free(valueQuery_keyword);
        valueQuery_keyword = NULL;
    }
    if(keyPairQuery_keyword){
        keyValuePair_free(keyPairQuery_keyword);
        keyPairQuery_keyword = NULL;
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
    if(keyQuery_asin){
        free(keyQuery_asin);
        keyQuery_asin = NULL;
    }
    if(valueQuery_asin){
        free(valueQuery_asin);
        valueQuery_asin = NULL;
    }
    if(keyPairQuery_asin){
        keyValuePair_free(keyPairQuery_asin);
        keyPairQuery_asin = NULL;
    }
    if(keyQuery_ean){
        free(keyQuery_ean);
        keyQuery_ean = NULL;
    }
    if(valueQuery_ean){
        free(valueQuery_ean);
        valueQuery_ean = NULL;
    }
    if(keyPairQuery_ean){
        keyValuePair_free(keyPairQuery_ean);
        keyPairQuery_ean = NULL;
    }
    if(keyQuery_gtin){
        free(keyQuery_gtin);
        keyQuery_gtin = NULL;
    }
    if(valueQuery_gtin){
        free(valueQuery_gtin);
        valueQuery_gtin = NULL;
    }
    if(keyPairQuery_gtin){
        keyValuePair_free(keyPairQuery_gtin);
        keyPairQuery_gtin = NULL;
    }
    if(keyQuery_upc){
        free(keyQuery_upc);
        keyQuery_upc = NULL;
    }
    if(valueQuery_upc){
        free(valueQuery_upc);
        valueQuery_upc = NULL;
    }
    if(keyPairQuery_upc){
        keyValuePair_free(keyPairQuery_upc);
        keyPairQuery_upc = NULL;
    }
    if(keyQuery_mpn){
        free(keyQuery_mpn);
        keyQuery_mpn = NULL;
    }
    if(valueQuery_mpn){
        free(valueQuery_mpn);
        valueQuery_mpn = NULL;
    }
    if(keyPairQuery_mpn){
        keyValuePair_free(keyPairQuery_mpn);
        keyPairQuery_mpn = NULL;
    }
    if(keyQuery_isbn){
        free(keyQuery_isbn);
        keyQuery_isbn = NULL;
    }
    if(valueQuery_isbn){
        free(valueQuery_isbn);
        valueQuery_isbn = NULL;
    }
    if(keyPairQuery_isbn){
        keyValuePair_free(keyPairQuery_isbn);
        keyPairQuery_isbn = NULL;
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

