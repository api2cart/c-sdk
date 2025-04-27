#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CategoryAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096

// Functions for enum TYPE for CategoryAPI_categoryImageAdd

static char* categoryImageAdd_TYPE_ToString(api2cart_openapi_categoryImageAdd_type_e TYPE){
    char *TYPEArray[] =  { "NULL", "base", "thumbnail" };
    return TYPEArray[TYPE];
}

static api2cart_openapi_categoryImageAdd_type_e categoryImageAdd_TYPE_FromString(char* TYPE){
    int stringToReturn = 0;
    char *TYPEArray[] =  { "NULL", "base", "thumbnail" };
    size_t sizeofArray = sizeof(TYPEArray) / sizeof(TYPEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(TYPE, TYPEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function categoryImageAdd_TYPE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *categoryImageAdd_TYPE_convertToJSON(api2cart_openapi_categoryImageAdd_type_e TYPE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "type", categoryImageAdd_TYPE_ToString(TYPE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function categoryImageAdd_TYPE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static api2cart_openapi_categoryImageAdd_type_e categoryImageAdd_TYPE_parseFromJSON(cJSON* TYPEJSON) {
    api2cart_openapi_categoryImageAdd_type_e TYPEVariable = 0;
    cJSON *TYPEVar = cJSON_GetObjectItemCaseSensitive(TYPEJSON, "type");
    if(!cJSON_IsString(TYPEVar) || (TYPEVar->valuestring == NULL))
    {
        goto end;
    }
    TYPEVariable = categoryImageAdd_TYPE_FromString(TYPEVar->valuestring);
    return TYPEVariable;
end:
    return 0;
}
*/


// category.add
//
// Add new category in store
//
category_add_200_response_t*
CategoryAPI_categoryAdd(apiClient_t *apiClient, char *name, char *description, char *short_description, char *parent_id, int *avail, char *created_time, char *modified_time, int *sort_order, char *meta_title, char *meta_description, char *meta_keywords, char *seo_url, char *store_id, char *stores_ids, char *lang_id)
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
    char *localVarPath = strdup("/category.add.json");





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
    char *keyQuery_short_description = NULL;
    char * valueQuery_short_description = NULL;
    keyValuePair_t *keyPairQuery_short_description = 0;
    if (short_description)
    {
        keyQuery_short_description = strdup("short_description");
        valueQuery_short_description = strdup((short_description));
        keyPairQuery_short_description = keyValuePair_create(keyQuery_short_description, valueQuery_short_description);
        list_addElement(localVarQueryParameters,keyPairQuery_short_description);
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
    char *keyQuery_created_time = NULL;
    char * valueQuery_created_time = NULL;
    keyValuePair_t *keyPairQuery_created_time = 0;
    if (created_time)
    {
        keyQuery_created_time = strdup("created_time");
        valueQuery_created_time = strdup((created_time));
        keyPairQuery_created_time = keyValuePair_create(keyQuery_created_time, valueQuery_created_time);
        list_addElement(localVarQueryParameters,keyPairQuery_created_time);
    }

    // query parameters
    char *keyQuery_modified_time = NULL;
    char * valueQuery_modified_time = NULL;
    keyValuePair_t *keyPairQuery_modified_time = 0;
    if (modified_time)
    {
        keyQuery_modified_time = strdup("modified_time");
        valueQuery_modified_time = strdup((modified_time));
        keyPairQuery_modified_time = keyValuePair_create(keyQuery_modified_time, valueQuery_modified_time);
        list_addElement(localVarQueryParameters,keyPairQuery_modified_time);
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
    char *keyQuery_meta_title = NULL;
    char * valueQuery_meta_title = NULL;
    keyValuePair_t *keyPairQuery_meta_title = 0;
    if (meta_title)
    {
        keyQuery_meta_title = strdup("meta_title");
        valueQuery_meta_title = strdup((meta_title));
        keyPairQuery_meta_title = keyValuePair_create(keyQuery_meta_title, valueQuery_meta_title);
        list_addElement(localVarQueryParameters,keyPairQuery_meta_title);
    }

    // query parameters
    char *keyQuery_meta_description = NULL;
    char * valueQuery_meta_description = NULL;
    keyValuePair_t *keyPairQuery_meta_description = 0;
    if (meta_description)
    {
        keyQuery_meta_description = strdup("meta_description");
        valueQuery_meta_description = strdup((meta_description));
        keyPairQuery_meta_description = keyValuePair_create(keyQuery_meta_description, valueQuery_meta_description);
        list_addElement(localVarQueryParameters,keyPairQuery_meta_description);
    }

    // query parameters
    char *keyQuery_meta_keywords = NULL;
    char * valueQuery_meta_keywords = NULL;
    keyValuePair_t *keyPairQuery_meta_keywords = 0;
    if (meta_keywords)
    {
        keyQuery_meta_keywords = strdup("meta_keywords");
        valueQuery_meta_keywords = strdup((meta_keywords));
        keyPairQuery_meta_keywords = keyValuePair_create(keyQuery_meta_keywords, valueQuery_meta_keywords);
        list_addElement(localVarQueryParameters,keyPairQuery_meta_keywords);
    }

    // query parameters
    char *keyQuery_seo_url = NULL;
    char * valueQuery_seo_url = NULL;
    keyValuePair_t *keyPairQuery_seo_url = 0;
    if (seo_url)
    {
        keyQuery_seo_url = strdup("seo_url");
        valueQuery_seo_url = strdup((seo_url));
        keyPairQuery_seo_url = keyValuePair_create(keyQuery_seo_url, valueQuery_seo_url);
        list_addElement(localVarQueryParameters,keyPairQuery_seo_url);
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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    category_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_add_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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
    if(keyQuery_short_description){
        free(keyQuery_short_description);
        keyQuery_short_description = NULL;
    }
    if(valueQuery_short_description){
        free(valueQuery_short_description);
        valueQuery_short_description = NULL;
    }
    if(keyPairQuery_short_description){
        keyValuePair_free(keyPairQuery_short_description);
        keyPairQuery_short_description = NULL;
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
    if(keyQuery_created_time){
        free(keyQuery_created_time);
        keyQuery_created_time = NULL;
    }
    if(valueQuery_created_time){
        free(valueQuery_created_time);
        valueQuery_created_time = NULL;
    }
    if(keyPairQuery_created_time){
        keyValuePair_free(keyPairQuery_created_time);
        keyPairQuery_created_time = NULL;
    }
    if(keyQuery_modified_time){
        free(keyQuery_modified_time);
        keyQuery_modified_time = NULL;
    }
    if(valueQuery_modified_time){
        free(valueQuery_modified_time);
        valueQuery_modified_time = NULL;
    }
    if(keyPairQuery_modified_time){
        keyValuePair_free(keyPairQuery_modified_time);
        keyPairQuery_modified_time = NULL;
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
    if(keyQuery_meta_title){
        free(keyQuery_meta_title);
        keyQuery_meta_title = NULL;
    }
    if(valueQuery_meta_title){
        free(valueQuery_meta_title);
        valueQuery_meta_title = NULL;
    }
    if(keyPairQuery_meta_title){
        keyValuePair_free(keyPairQuery_meta_title);
        keyPairQuery_meta_title = NULL;
    }
    if(keyQuery_meta_description){
        free(keyQuery_meta_description);
        keyQuery_meta_description = NULL;
    }
    if(valueQuery_meta_description){
        free(valueQuery_meta_description);
        valueQuery_meta_description = NULL;
    }
    if(keyPairQuery_meta_description){
        keyValuePair_free(keyPairQuery_meta_description);
        keyPairQuery_meta_description = NULL;
    }
    if(keyQuery_meta_keywords){
        free(keyQuery_meta_keywords);
        keyQuery_meta_keywords = NULL;
    }
    if(valueQuery_meta_keywords){
        free(valueQuery_meta_keywords);
        valueQuery_meta_keywords = NULL;
    }
    if(keyPairQuery_meta_keywords){
        keyValuePair_free(keyPairQuery_meta_keywords);
        keyPairQuery_meta_keywords = NULL;
    }
    if(keyQuery_seo_url){
        free(keyQuery_seo_url);
        keyQuery_seo_url = NULL;
    }
    if(valueQuery_seo_url){
        free(valueQuery_seo_url);
        valueQuery_seo_url = NULL;
    }
    if(keyPairQuery_seo_url){
        keyValuePair_free(keyPairQuery_seo_url);
        keyPairQuery_seo_url = NULL;
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

// category.add.batch
//
// Add new categories to the store.
//
category_add_batch_200_response_t*
CategoryAPI_categoryAddBatch(apiClient_t *apiClient, category_add_batch_t *category_add_batch)
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
    char *localVarPath = strdup("/category.add.batch.json");





    // Body Param
    cJSON *localVarSingleItemJSON_category_add_batch = NULL;
    if (category_add_batch != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_category_add_batch = category_add_batch_convertToJSON(category_add_batch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_category_add_batch);
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
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_add_batch_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_category_add_batch) {
        cJSON_Delete(localVarSingleItemJSON_category_add_batch);
        localVarSingleItemJSON_category_add_batch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// category.assign
//
// Assign category to product
//
cart_config_update_200_response_t*
CategoryAPI_categoryAssign(apiClient_t *apiClient, char *category_id, char *product_id, char *store_id)
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
    char *localVarPath = strdup("/category.assign.json");





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
    cart_config_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_config_update_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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

// category.count
//
// Count categories in store.
//
category_count_200_response_t*
CategoryAPI_categoryCount(apiClient_t *apiClient, char *parent_id, char *store_id, char *lang_id, int *avail, char *created_from, char *created_to, char *modified_from, char *modified_to, char *product_type, char *find_value, char *find_where, char *report_request_id, int *disable_report_cache)
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
    char *localVarPath = strdup("/category.count.json");





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
    char *keyQuery_product_type = NULL;
    char * valueQuery_product_type = NULL;
    keyValuePair_t *keyPairQuery_product_type = 0;
    if (product_type)
    {
        keyQuery_product_type = strdup("product_type");
        valueQuery_product_type = strdup((product_type));
        keyPairQuery_product_type = keyValuePair_create(keyQuery_product_type, valueQuery_product_type);
        list_addElement(localVarQueryParameters,keyPairQuery_product_type);
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
    category_count_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_count_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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
    if(keyQuery_product_type){
        free(keyQuery_product_type);
        keyQuery_product_type = NULL;
    }
    if(valueQuery_product_type){
        free(valueQuery_product_type);
        valueQuery_product_type = NULL;
    }
    if(keyPairQuery_product_type){
        keyValuePair_free(keyPairQuery_product_type);
        keyPairQuery_product_type = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// category.delete
//
// Delete category in store
//
category_delete_200_response_t*
CategoryAPI_categoryDelete(apiClient_t *apiClient, char *id, char *store_id)
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
    char *localVarPath = strdup("/category.delete.json");





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
    category_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_delete_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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

// category.find
//
// Search category in store. \"Laptop\" is specified here by default.
//
category_find_200_response_t*
CategoryAPI_categoryFind(apiClient_t *apiClient, char *find_value, char *find_where, char *find_params, char *store_id, char *lang_id)
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
    char *localVarPath = strdup("/category.find.json");





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
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    category_find_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_find_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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

// category.image.add
//
// Add image to category
//
category_image_add_200_response_t*
CategoryAPI_categoryImageAdd(apiClient_t *apiClient, char *category_id, char *image_name, char *url, api2cart_openapi_categoryImageAdd_type_e type, char *store_id, char *label, char *mime, int *position)
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
    char *localVarPath = strdup("/category.image.add.json");





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
    char *keyQuery_url = NULL;
    char * valueQuery_url = NULL;
    keyValuePair_t *keyPairQuery_url = 0;
    if (url)
    {
        keyQuery_url = strdup("url");
        valueQuery_url = strdup((url));
        keyPairQuery_url = keyValuePair_create(keyQuery_url, valueQuery_url);
        list_addElement(localVarQueryParameters,keyPairQuery_url);
    }

    // query parameters
    char *keyQuery_type = NULL;
    api2cart_openapi_categoryImageAdd_type_e valueQuery_type ;
    keyValuePair_t *keyPairQuery_type = 0;
    if (type)
    {
        keyQuery_type = strdup("type");
        valueQuery_type = (type);
        keyPairQuery_type = keyValuePair_create(keyQuery_type, strdup(categoryImageAdd_TYPE_ToString(
        valueQuery_type)));
        list_addElement(localVarQueryParameters,keyPairQuery_type);
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
    char *keyQuery_mime = NULL;
    char * valueQuery_mime = NULL;
    keyValuePair_t *keyPairQuery_mime = 0;
    if (mime)
    {
        keyQuery_mime = strdup("mime");
        valueQuery_mime = strdup((mime));
        keyPairQuery_mime = keyValuePair_create(keyQuery_mime, valueQuery_mime);
        list_addElement(localVarQueryParameters,keyPairQuery_mime);
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
    category_image_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_image_add_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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
    if(keyQuery_url){
        free(keyQuery_url);
        keyQuery_url = NULL;
    }
    if(valueQuery_url){
        free(valueQuery_url);
        valueQuery_url = NULL;
    }
    if(keyPairQuery_url){
        keyValuePair_free(keyPairQuery_url);
        keyPairQuery_url = NULL;
    }
    if(keyQuery_type){
        free(keyQuery_type);
        keyQuery_type = NULL;
    }
    if(keyPairQuery_type){
        keyValuePair_free(keyPairQuery_type);
        keyPairQuery_type = NULL;
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
    if(keyQuery_mime){
        free(keyQuery_mime);
        keyQuery_mime = NULL;
    }
    if(valueQuery_mime){
        free(valueQuery_mime);
        valueQuery_mime = NULL;
    }
    if(keyPairQuery_mime){
        keyValuePair_free(keyPairQuery_mime);
        keyPairQuery_mime = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// category.image.delete
//
// Delete image
//
attribute_delete_200_response_t*
CategoryAPI_categoryImageDelete(apiClient_t *apiClient, char *category_id, char *image_id, char *store_id)
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
    char *localVarPath = strdup("/category.image.delete.json");





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
    char *keyQuery_image_id = NULL;
    char * valueQuery_image_id = NULL;
    keyValuePair_t *keyPairQuery_image_id = 0;
    if (image_id)
    {
        keyQuery_image_id = strdup("image_id");
        valueQuery_image_id = strdup((image_id));
        keyPairQuery_image_id = keyValuePair_create(keyQuery_image_id, valueQuery_image_id);
        list_addElement(localVarQueryParameters,keyPairQuery_image_id);
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
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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
    if(keyQuery_image_id){
        free(keyQuery_image_id);
        keyQuery_image_id = NULL;
    }
    if(valueQuery_image_id){
        free(valueQuery_image_id);
        valueQuery_image_id = NULL;
    }
    if(keyPairQuery_image_id){
        keyValuePair_free(keyPairQuery_image_id);
        keyPairQuery_image_id = NULL;
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

// category.info
//
// Get category info about category ID*** or specify other category ID.
//
category_info_200_response_t*
CategoryAPI_categoryInfo(apiClient_t *apiClient, char *id, char *store_id, char *lang_id, char *schema_type, char *response_fields, char *params, char *exclude, char *report_request_id, int *disable_report_cache)
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
    char *localVarPath = strdup("/category.info.json");





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
    char *keyQuery_schema_type = NULL;
    char * valueQuery_schema_type = NULL;
    keyValuePair_t *keyPairQuery_schema_type = 0;
    if (schema_type)
    {
        keyQuery_schema_type = strdup("schema_type");
        valueQuery_schema_type = strdup((schema_type));
        keyPairQuery_schema_type = keyValuePair_create(keyQuery_schema_type, valueQuery_schema_type);
        list_addElement(localVarQueryParameters,keyPairQuery_schema_type);
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
    category_info_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = category_info_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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
    if(keyQuery_schema_type){
        free(keyQuery_schema_type);
        keyQuery_schema_type = NULL;
    }
    if(valueQuery_schema_type){
        free(valueQuery_schema_type);
        valueQuery_schema_type = NULL;
    }
    if(keyPairQuery_schema_type){
        keyValuePair_free(keyPairQuery_schema_type);
        keyPairQuery_schema_type = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// category.list
//
// Get list of categories from store.
//
model_response_category_list_t*
CategoryAPI_categoryList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *store_id, char *lang_id, char *parent_id, int *avail, char *product_type, char *created_from, char *created_to, char *modified_from, char *modified_to, char *find_value, char *find_where, char *response_fields, char *params, char *exclude, char *report_request_id, int *disable_report_cache, int *disable_cache)
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
    char *localVarPath = strdup("/category.list.json");





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
    char *keyQuery_product_type = NULL;
    char * valueQuery_product_type = NULL;
    keyValuePair_t *keyPairQuery_product_type = 0;
    if (product_type)
    {
        keyQuery_product_type = strdup("product_type");
        valueQuery_product_type = strdup((product_type));
        keyPairQuery_product_type = keyValuePair_create(keyQuery_product_type, valueQuery_product_type);
        list_addElement(localVarQueryParameters,keyPairQuery_product_type);
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
    model_response_category_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_category_list_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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
    if(keyQuery_product_type){
        free(keyQuery_product_type);
        keyQuery_product_type = NULL;
    }
    if(valueQuery_product_type){
        free(valueQuery_product_type);
        valueQuery_product_type = NULL;
    }
    if(keyPairQuery_product_type){
        keyValuePair_free(keyPairQuery_product_type);
        keyPairQuery_product_type = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// category.unassign
//
// Unassign category to product
//
cart_config_update_200_response_t*
CategoryAPI_categoryUnassign(apiClient_t *apiClient, char *category_id, char *product_id, char *store_id)
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
    char *localVarPath = strdup("/category.unassign.json");





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
    cart_config_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cart_config_update_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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

// category.update
//
// Update category in store
//
account_config_update_200_response_t*
CategoryAPI_categoryUpdate(apiClient_t *apiClient, char *id, char *name, char *description, char *short_description, char *parent_id, int *avail, int *sort_order, char *modified_time, char *meta_title, char *meta_description, char *meta_keywords, char *seo_url, char *store_id, char *stores_ids, char *lang_id)
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
    char *localVarPath = strdup("/category.update.json");





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
    char *keyQuery_short_description = NULL;
    char * valueQuery_short_description = NULL;
    keyValuePair_t *keyPairQuery_short_description = 0;
    if (short_description)
    {
        keyQuery_short_description = strdup("short_description");
        valueQuery_short_description = strdup((short_description));
        keyPairQuery_short_description = keyValuePair_create(keyQuery_short_description, valueQuery_short_description);
        list_addElement(localVarQueryParameters,keyPairQuery_short_description);
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
    char *keyQuery_modified_time = NULL;
    char * valueQuery_modified_time = NULL;
    keyValuePair_t *keyPairQuery_modified_time = 0;
    if (modified_time)
    {
        keyQuery_modified_time = strdup("modified_time");
        valueQuery_modified_time = strdup((modified_time));
        keyPairQuery_modified_time = keyValuePair_create(keyQuery_modified_time, valueQuery_modified_time);
        list_addElement(localVarQueryParameters,keyPairQuery_modified_time);
    }

    // query parameters
    char *keyQuery_meta_title = NULL;
    char * valueQuery_meta_title = NULL;
    keyValuePair_t *keyPairQuery_meta_title = 0;
    if (meta_title)
    {
        keyQuery_meta_title = strdup("meta_title");
        valueQuery_meta_title = strdup((meta_title));
        keyPairQuery_meta_title = keyValuePair_create(keyQuery_meta_title, valueQuery_meta_title);
        list_addElement(localVarQueryParameters,keyPairQuery_meta_title);
    }

    // query parameters
    char *keyQuery_meta_description = NULL;
    char * valueQuery_meta_description = NULL;
    keyValuePair_t *keyPairQuery_meta_description = 0;
    if (meta_description)
    {
        keyQuery_meta_description = strdup("meta_description");
        valueQuery_meta_description = strdup((meta_description));
        keyPairQuery_meta_description = keyValuePair_create(keyQuery_meta_description, valueQuery_meta_description);
        list_addElement(localVarQueryParameters,keyPairQuery_meta_description);
    }

    // query parameters
    char *keyQuery_meta_keywords = NULL;
    char * valueQuery_meta_keywords = NULL;
    keyValuePair_t *keyPairQuery_meta_keywords = 0;
    if (meta_keywords)
    {
        keyQuery_meta_keywords = strdup("meta_keywords");
        valueQuery_meta_keywords = strdup((meta_keywords));
        keyPairQuery_meta_keywords = keyValuePair_create(keyQuery_meta_keywords, valueQuery_meta_keywords);
        list_addElement(localVarQueryParameters,keyPairQuery_meta_keywords);
    }

    // query parameters
    char *keyQuery_seo_url = NULL;
    char * valueQuery_seo_url = NULL;
    keyValuePair_t *keyPairQuery_seo_url = 0;
    if (seo_url)
    {
        keyQuery_seo_url = strdup("seo_url");
        valueQuery_seo_url = strdup((seo_url));
        keyPairQuery_seo_url = keyValuePair_create(keyQuery_seo_url, valueQuery_seo_url);
        list_addElement(localVarQueryParameters,keyPairQuery_seo_url);
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
    account_config_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CategoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(CategoryAPIlocalVarJSON);
        cJSON_Delete(CategoryAPIlocalVarJSON);
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
    if(keyQuery_short_description){
        free(keyQuery_short_description);
        keyQuery_short_description = NULL;
    }
    if(valueQuery_short_description){
        free(valueQuery_short_description);
        valueQuery_short_description = NULL;
    }
    if(keyPairQuery_short_description){
        keyValuePair_free(keyPairQuery_short_description);
        keyPairQuery_short_description = NULL;
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
    if(keyQuery_modified_time){
        free(keyQuery_modified_time);
        keyQuery_modified_time = NULL;
    }
    if(valueQuery_modified_time){
        free(valueQuery_modified_time);
        valueQuery_modified_time = NULL;
    }
    if(keyPairQuery_modified_time){
        keyValuePair_free(keyPairQuery_modified_time);
        keyPairQuery_modified_time = NULL;
    }
    if(keyQuery_meta_title){
        free(keyQuery_meta_title);
        keyQuery_meta_title = NULL;
    }
    if(valueQuery_meta_title){
        free(valueQuery_meta_title);
        valueQuery_meta_title = NULL;
    }
    if(keyPairQuery_meta_title){
        keyValuePair_free(keyPairQuery_meta_title);
        keyPairQuery_meta_title = NULL;
    }
    if(keyQuery_meta_description){
        free(keyQuery_meta_description);
        keyQuery_meta_description = NULL;
    }
    if(valueQuery_meta_description){
        free(valueQuery_meta_description);
        valueQuery_meta_description = NULL;
    }
    if(keyPairQuery_meta_description){
        keyValuePair_free(keyPairQuery_meta_description);
        keyPairQuery_meta_description = NULL;
    }
    if(keyQuery_meta_keywords){
        free(keyQuery_meta_keywords);
        keyQuery_meta_keywords = NULL;
    }
    if(valueQuery_meta_keywords){
        free(valueQuery_meta_keywords);
        valueQuery_meta_keywords = NULL;
    }
    if(keyPairQuery_meta_keywords){
        keyValuePair_free(keyPairQuery_meta_keywords);
        keyPairQuery_meta_keywords = NULL;
    }
    if(keyQuery_seo_url){
        free(keyQuery_seo_url);
        keyQuery_seo_url = NULL;
    }
    if(valueQuery_seo_url){
        free(valueQuery_seo_url);
        valueQuery_seo_url = NULL;
    }
    if(keyPairQuery_seo_url){
        keyValuePair_free(keyPairQuery_seo_url);
        keyPairQuery_seo_url = NULL;
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

