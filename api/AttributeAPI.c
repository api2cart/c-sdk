#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "AttributeAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096

// Functions for enum TYPE for AttributeAPI_attributeAdd

static char* attributeAdd_TYPE_ToString(api2cart_openapi_attributeAdd_type_e TYPE){
    char *TYPEArray[] =  { "NULL", "text", "select", "textarea", "date", "price", "multiselect", "boolean" };
    return TYPEArray[TYPE];
}

static api2cart_openapi_attributeAdd_type_e attributeAdd_TYPE_FromString(char* TYPE){
    int stringToReturn = 0;
    char *TYPEArray[] =  { "NULL", "text", "select", "textarea", "date", "price", "multiselect", "boolean" };
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
// Function attributeAdd_TYPE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *attributeAdd_TYPE_convertToJSON(api2cart_openapi_attributeAdd_type_e TYPE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "type", attributeAdd_TYPE_ToString(TYPE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function attributeAdd_TYPE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static api2cart_openapi_attributeAdd_type_e attributeAdd_TYPE_parseFromJSON(cJSON* TYPEJSON) {
    api2cart_openapi_attributeAdd_type_e TYPEVariable = 0;
    cJSON *TYPEVar = cJSON_GetObjectItemCaseSensitive(TYPEJSON, "type");
    if(!cJSON_IsString(TYPEVar) || (TYPEVar->valuestring == NULL))
    {
        goto end;
    }
    TYPEVariable = attributeAdd_TYPE_FromString(TYPEVar->valuestring);
    return TYPEVariable;
end:
    return 0;
}
*/


// attribute.add
//
// Add new attribute
//
attribute_add_200_response_t*
AttributeAPI_attributeAdd(apiClient_t *apiClient, api2cart_openapi_attributeAdd_type_e type, char *name, char *code, char *store_id, char *lang_id, int *visible, int *required, int *position, char *attribute_group_id, char *is_global, int *is_searchable, char *is_filterable, int *is_comparable, int *is_html_allowed_on_front, int *is_filterable_in_search, int *is_configurable, int *is_visible_in_advanced_search, int *is_used_for_promo_rules, int *used_in_product_listing, int *used_for_sort_by, char *apply_to)
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
    char *localVarPath = strdup("/attribute.add.json");





    // query parameters
    char *keyQuery_type = NULL;
    api2cart_openapi_attributeAdd_type_e valueQuery_type ;
    keyValuePair_t *keyPairQuery_type = 0;
    if (type)
    {
        keyQuery_type = strdup("type");
        valueQuery_type = (type);
        keyPairQuery_type = keyValuePair_create(keyQuery_type, strdup(attributeAdd_TYPE_ToString(
        valueQuery_type)));
        list_addElement(localVarQueryParameters,keyPairQuery_type);
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
    char *keyQuery_visible = NULL;
    char * valueQuery_visible = NULL;
    keyValuePair_t *keyPairQuery_visible = 0;
    if (visible)
    {
        keyQuery_visible = strdup("visible");
        valueQuery_visible = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_visible, MAX_NUMBER_LENGTH, "%d", *visible);
        keyPairQuery_visible = keyValuePair_create(keyQuery_visible, valueQuery_visible);
        list_addElement(localVarQueryParameters,keyPairQuery_visible);
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
    char *keyQuery_is_global = NULL;
    char * valueQuery_is_global = NULL;
    keyValuePair_t *keyPairQuery_is_global = 0;
    if (is_global)
    {
        keyQuery_is_global = strdup("is_global");
        valueQuery_is_global = strdup((is_global));
        keyPairQuery_is_global = keyValuePair_create(keyQuery_is_global, valueQuery_is_global);
        list_addElement(localVarQueryParameters,keyPairQuery_is_global);
    }

    // query parameters
    char *keyQuery_is_searchable = NULL;
    char * valueQuery_is_searchable = NULL;
    keyValuePair_t *keyPairQuery_is_searchable = 0;
    if (is_searchable)
    {
        keyQuery_is_searchable = strdup("is_searchable");
        valueQuery_is_searchable = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_is_searchable, MAX_NUMBER_LENGTH, "%d", *is_searchable);
        keyPairQuery_is_searchable = keyValuePair_create(keyQuery_is_searchable, valueQuery_is_searchable);
        list_addElement(localVarQueryParameters,keyPairQuery_is_searchable);
    }

    // query parameters
    char *keyQuery_is_filterable = NULL;
    char * valueQuery_is_filterable = NULL;
    keyValuePair_t *keyPairQuery_is_filterable = 0;
    if (is_filterable)
    {
        keyQuery_is_filterable = strdup("is_filterable");
        valueQuery_is_filterable = strdup((is_filterable));
        keyPairQuery_is_filterable = keyValuePair_create(keyQuery_is_filterable, valueQuery_is_filterable);
        list_addElement(localVarQueryParameters,keyPairQuery_is_filterable);
    }

    // query parameters
    char *keyQuery_is_comparable = NULL;
    char * valueQuery_is_comparable = NULL;
    keyValuePair_t *keyPairQuery_is_comparable = 0;
    if (is_comparable)
    {
        keyQuery_is_comparable = strdup("is_comparable");
        valueQuery_is_comparable = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_is_comparable, MAX_NUMBER_LENGTH, "%d", *is_comparable);
        keyPairQuery_is_comparable = keyValuePair_create(keyQuery_is_comparable, valueQuery_is_comparable);
        list_addElement(localVarQueryParameters,keyPairQuery_is_comparable);
    }

    // query parameters
    char *keyQuery_is_html_allowed_on_front = NULL;
    char * valueQuery_is_html_allowed_on_front = NULL;
    keyValuePair_t *keyPairQuery_is_html_allowed_on_front = 0;
    if (is_html_allowed_on_front)
    {
        keyQuery_is_html_allowed_on_front = strdup("is_html_allowed_on_front");
        valueQuery_is_html_allowed_on_front = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_is_html_allowed_on_front, MAX_NUMBER_LENGTH, "%d", *is_html_allowed_on_front);
        keyPairQuery_is_html_allowed_on_front = keyValuePair_create(keyQuery_is_html_allowed_on_front, valueQuery_is_html_allowed_on_front);
        list_addElement(localVarQueryParameters,keyPairQuery_is_html_allowed_on_front);
    }

    // query parameters
    char *keyQuery_is_filterable_in_search = NULL;
    char * valueQuery_is_filterable_in_search = NULL;
    keyValuePair_t *keyPairQuery_is_filterable_in_search = 0;
    if (is_filterable_in_search)
    {
        keyQuery_is_filterable_in_search = strdup("is_filterable_in_search");
        valueQuery_is_filterable_in_search = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_is_filterable_in_search, MAX_NUMBER_LENGTH, "%d", *is_filterable_in_search);
        keyPairQuery_is_filterable_in_search = keyValuePair_create(keyQuery_is_filterable_in_search, valueQuery_is_filterable_in_search);
        list_addElement(localVarQueryParameters,keyPairQuery_is_filterable_in_search);
    }

    // query parameters
    char *keyQuery_is_configurable = NULL;
    char * valueQuery_is_configurable = NULL;
    keyValuePair_t *keyPairQuery_is_configurable = 0;
    if (is_configurable)
    {
        keyQuery_is_configurable = strdup("is_configurable");
        valueQuery_is_configurable = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_is_configurable, MAX_NUMBER_LENGTH, "%d", *is_configurable);
        keyPairQuery_is_configurable = keyValuePair_create(keyQuery_is_configurable, valueQuery_is_configurable);
        list_addElement(localVarQueryParameters,keyPairQuery_is_configurable);
    }

    // query parameters
    char *keyQuery_is_visible_in_advanced_search = NULL;
    char * valueQuery_is_visible_in_advanced_search = NULL;
    keyValuePair_t *keyPairQuery_is_visible_in_advanced_search = 0;
    if (is_visible_in_advanced_search)
    {
        keyQuery_is_visible_in_advanced_search = strdup("is_visible_in_advanced_search");
        valueQuery_is_visible_in_advanced_search = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_is_visible_in_advanced_search, MAX_NUMBER_LENGTH, "%d", *is_visible_in_advanced_search);
        keyPairQuery_is_visible_in_advanced_search = keyValuePair_create(keyQuery_is_visible_in_advanced_search, valueQuery_is_visible_in_advanced_search);
        list_addElement(localVarQueryParameters,keyPairQuery_is_visible_in_advanced_search);
    }

    // query parameters
    char *keyQuery_is_used_for_promo_rules = NULL;
    char * valueQuery_is_used_for_promo_rules = NULL;
    keyValuePair_t *keyPairQuery_is_used_for_promo_rules = 0;
    if (is_used_for_promo_rules)
    {
        keyQuery_is_used_for_promo_rules = strdup("is_used_for_promo_rules");
        valueQuery_is_used_for_promo_rules = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_is_used_for_promo_rules, MAX_NUMBER_LENGTH, "%d", *is_used_for_promo_rules);
        keyPairQuery_is_used_for_promo_rules = keyValuePair_create(keyQuery_is_used_for_promo_rules, valueQuery_is_used_for_promo_rules);
        list_addElement(localVarQueryParameters,keyPairQuery_is_used_for_promo_rules);
    }

    // query parameters
    char *keyQuery_used_in_product_listing = NULL;
    char * valueQuery_used_in_product_listing = NULL;
    keyValuePair_t *keyPairQuery_used_in_product_listing = 0;
    if (used_in_product_listing)
    {
        keyQuery_used_in_product_listing = strdup("used_in_product_listing");
        valueQuery_used_in_product_listing = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_used_in_product_listing, MAX_NUMBER_LENGTH, "%d", *used_in_product_listing);
        keyPairQuery_used_in_product_listing = keyValuePair_create(keyQuery_used_in_product_listing, valueQuery_used_in_product_listing);
        list_addElement(localVarQueryParameters,keyPairQuery_used_in_product_listing);
    }

    // query parameters
    char *keyQuery_used_for_sort_by = NULL;
    char * valueQuery_used_for_sort_by = NULL;
    keyValuePair_t *keyPairQuery_used_for_sort_by = 0;
    if (used_for_sort_by)
    {
        keyQuery_used_for_sort_by = strdup("used_for_sort_by");
        valueQuery_used_for_sort_by = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_used_for_sort_by, MAX_NUMBER_LENGTH, "%d", *used_for_sort_by);
        keyPairQuery_used_for_sort_by = keyValuePair_create(keyQuery_used_for_sort_by, valueQuery_used_for_sort_by);
        list_addElement(localVarQueryParameters,keyPairQuery_used_for_sort_by);
    }

    // query parameters
    char *keyQuery_apply_to = NULL;
    char * valueQuery_apply_to = NULL;
    keyValuePair_t *keyPairQuery_apply_to = 0;
    if (apply_to)
    {
        keyQuery_apply_to = strdup("apply_to");
        valueQuery_apply_to = strdup((apply_to));
        keyPairQuery_apply_to = keyValuePair_create(keyQuery_apply_to, valueQuery_apply_to);
        list_addElement(localVarQueryParameters,keyPairQuery_apply_to);
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
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_add_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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
    if(keyQuery_type){
        free(keyQuery_type);
        keyQuery_type = NULL;
    }
    if(keyPairQuery_type){
        keyValuePair_free(keyPairQuery_type);
        keyPairQuery_type = NULL;
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
    if(keyQuery_is_global){
        free(keyQuery_is_global);
        keyQuery_is_global = NULL;
    }
    if(valueQuery_is_global){
        free(valueQuery_is_global);
        valueQuery_is_global = NULL;
    }
    if(keyPairQuery_is_global){
        keyValuePair_free(keyPairQuery_is_global);
        keyPairQuery_is_global = NULL;
    }
    if(keyQuery_is_searchable){
        free(keyQuery_is_searchable);
        keyQuery_is_searchable = NULL;
    }
    if(valueQuery_is_searchable){
        free(valueQuery_is_searchable);
        valueQuery_is_searchable = NULL;
    }
    if(keyPairQuery_is_searchable){
        keyValuePair_free(keyPairQuery_is_searchable);
        keyPairQuery_is_searchable = NULL;
    }
    if(keyQuery_is_filterable){
        free(keyQuery_is_filterable);
        keyQuery_is_filterable = NULL;
    }
    if(valueQuery_is_filterable){
        free(valueQuery_is_filterable);
        valueQuery_is_filterable = NULL;
    }
    if(keyPairQuery_is_filterable){
        keyValuePair_free(keyPairQuery_is_filterable);
        keyPairQuery_is_filterable = NULL;
    }
    if(keyQuery_is_comparable){
        free(keyQuery_is_comparable);
        keyQuery_is_comparable = NULL;
    }
    if(valueQuery_is_comparable){
        free(valueQuery_is_comparable);
        valueQuery_is_comparable = NULL;
    }
    if(keyPairQuery_is_comparable){
        keyValuePair_free(keyPairQuery_is_comparable);
        keyPairQuery_is_comparable = NULL;
    }
    if(keyQuery_is_html_allowed_on_front){
        free(keyQuery_is_html_allowed_on_front);
        keyQuery_is_html_allowed_on_front = NULL;
    }
    if(valueQuery_is_html_allowed_on_front){
        free(valueQuery_is_html_allowed_on_front);
        valueQuery_is_html_allowed_on_front = NULL;
    }
    if(keyPairQuery_is_html_allowed_on_front){
        keyValuePair_free(keyPairQuery_is_html_allowed_on_front);
        keyPairQuery_is_html_allowed_on_front = NULL;
    }
    if(keyQuery_is_filterable_in_search){
        free(keyQuery_is_filterable_in_search);
        keyQuery_is_filterable_in_search = NULL;
    }
    if(valueQuery_is_filterable_in_search){
        free(valueQuery_is_filterable_in_search);
        valueQuery_is_filterable_in_search = NULL;
    }
    if(keyPairQuery_is_filterable_in_search){
        keyValuePair_free(keyPairQuery_is_filterable_in_search);
        keyPairQuery_is_filterable_in_search = NULL;
    }
    if(keyQuery_is_configurable){
        free(keyQuery_is_configurable);
        keyQuery_is_configurable = NULL;
    }
    if(valueQuery_is_configurable){
        free(valueQuery_is_configurable);
        valueQuery_is_configurable = NULL;
    }
    if(keyPairQuery_is_configurable){
        keyValuePair_free(keyPairQuery_is_configurable);
        keyPairQuery_is_configurable = NULL;
    }
    if(keyQuery_is_visible_in_advanced_search){
        free(keyQuery_is_visible_in_advanced_search);
        keyQuery_is_visible_in_advanced_search = NULL;
    }
    if(valueQuery_is_visible_in_advanced_search){
        free(valueQuery_is_visible_in_advanced_search);
        valueQuery_is_visible_in_advanced_search = NULL;
    }
    if(keyPairQuery_is_visible_in_advanced_search){
        keyValuePair_free(keyPairQuery_is_visible_in_advanced_search);
        keyPairQuery_is_visible_in_advanced_search = NULL;
    }
    if(keyQuery_is_used_for_promo_rules){
        free(keyQuery_is_used_for_promo_rules);
        keyQuery_is_used_for_promo_rules = NULL;
    }
    if(valueQuery_is_used_for_promo_rules){
        free(valueQuery_is_used_for_promo_rules);
        valueQuery_is_used_for_promo_rules = NULL;
    }
    if(keyPairQuery_is_used_for_promo_rules){
        keyValuePair_free(keyPairQuery_is_used_for_promo_rules);
        keyPairQuery_is_used_for_promo_rules = NULL;
    }
    if(keyQuery_used_in_product_listing){
        free(keyQuery_used_in_product_listing);
        keyQuery_used_in_product_listing = NULL;
    }
    if(valueQuery_used_in_product_listing){
        free(valueQuery_used_in_product_listing);
        valueQuery_used_in_product_listing = NULL;
    }
    if(keyPairQuery_used_in_product_listing){
        keyValuePair_free(keyPairQuery_used_in_product_listing);
        keyPairQuery_used_in_product_listing = NULL;
    }
    if(keyQuery_used_for_sort_by){
        free(keyQuery_used_for_sort_by);
        keyQuery_used_for_sort_by = NULL;
    }
    if(valueQuery_used_for_sort_by){
        free(valueQuery_used_for_sort_by);
        valueQuery_used_for_sort_by = NULL;
    }
    if(keyPairQuery_used_for_sort_by){
        keyValuePair_free(keyPairQuery_used_for_sort_by);
        keyPairQuery_used_for_sort_by = NULL;
    }
    if(keyQuery_apply_to){
        free(keyQuery_apply_to);
        keyQuery_apply_to = NULL;
    }
    if(valueQuery_apply_to){
        free(valueQuery_apply_to);
        valueQuery_apply_to = NULL;
    }
    if(keyPairQuery_apply_to){
        keyValuePair_free(keyPairQuery_apply_to);
        keyPairQuery_apply_to = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// attribute.assign.group
//
// Assign attribute to the group
//
attribute_assign_group_200_response_t*
AttributeAPI_attributeAssignGroup(apiClient_t *apiClient, char *id, char *group_id, char *attribute_set_id)
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
    char *localVarPath = strdup("/attribute.assign.group.json");





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
    char *keyQuery_attribute_set_id = NULL;
    char * valueQuery_attribute_set_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_set_id = 0;
    if (attribute_set_id)
    {
        keyQuery_attribute_set_id = strdup("attribute_set_id");
        valueQuery_attribute_set_id = strdup((attribute_set_id));
        keyPairQuery_attribute_set_id = keyValuePair_create(keyQuery_attribute_set_id, valueQuery_attribute_set_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_set_id);
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
    attribute_assign_group_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_assign_group_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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
    if(keyQuery_attribute_set_id){
        free(keyQuery_attribute_set_id);
        keyQuery_attribute_set_id = NULL;
    }
    if(valueQuery_attribute_set_id){
        free(valueQuery_attribute_set_id);
        valueQuery_attribute_set_id = NULL;
    }
    if(keyPairQuery_attribute_set_id){
        keyValuePair_free(keyPairQuery_attribute_set_id);
        keyPairQuery_attribute_set_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// attribute.assign.set
//
// Assign attribute to the attribute set
//
attribute_assign_group_200_response_t*
AttributeAPI_attributeAssignSet(apiClient_t *apiClient, char *id, char *attribute_set_id, char *group_id)
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
    char *localVarPath = strdup("/attribute.assign.set.json");





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
    char *keyQuery_attribute_set_id = NULL;
    char * valueQuery_attribute_set_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_set_id = 0;
    if (attribute_set_id)
    {
        keyQuery_attribute_set_id = strdup("attribute_set_id");
        valueQuery_attribute_set_id = strdup((attribute_set_id));
        keyPairQuery_attribute_set_id = keyValuePair_create(keyQuery_attribute_set_id, valueQuery_attribute_set_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_set_id);
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
    attribute_assign_group_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_assign_group_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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
    if(keyQuery_attribute_set_id){
        free(keyQuery_attribute_set_id);
        keyQuery_attribute_set_id = NULL;
    }
    if(valueQuery_attribute_set_id){
        free(valueQuery_attribute_set_id);
        valueQuery_attribute_set_id = NULL;
    }
    if(keyPairQuery_attribute_set_id){
        keyValuePair_free(keyPairQuery_attribute_set_id);
        keyPairQuery_attribute_set_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// attribute.attributeset.list
//
// Get attribute_set list
//
model_response_attribute_attributeset_list_t*
AttributeAPI_attributeAttributesetList(apiClient_t *apiClient, int *start, int *count, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/attribute.attributeset.list.json");





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
    model_response_attribute_attributeset_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_attribute_attributeset_list_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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

// attribute.count
//
// Get attributes count
//
attribute_count_200_response_t*
AttributeAPI_attributeCount(apiClient_t *apiClient, char *type, char *attribute_set_id, char *store_id, char *lang_id, int *visible, int *required, int *system)
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
    char *localVarPath = strdup("/attribute.count.json");





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
    char *keyQuery_attribute_set_id = NULL;
    char * valueQuery_attribute_set_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_set_id = 0;
    if (attribute_set_id)
    {
        keyQuery_attribute_set_id = strdup("attribute_set_id");
        valueQuery_attribute_set_id = strdup((attribute_set_id));
        keyPairQuery_attribute_set_id = keyValuePair_create(keyQuery_attribute_set_id, valueQuery_attribute_set_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_set_id);
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
    char *keyQuery_visible = NULL;
    char * valueQuery_visible = NULL;
    keyValuePair_t *keyPairQuery_visible = 0;
    if (visible)
    {
        keyQuery_visible = strdup("visible");
        valueQuery_visible = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_visible, MAX_NUMBER_LENGTH, "%d", *visible);
        keyPairQuery_visible = keyValuePair_create(keyQuery_visible, valueQuery_visible);
        list_addElement(localVarQueryParameters,keyPairQuery_visible);
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
    char *keyQuery_system = NULL;
    char * valueQuery_system = NULL;
    keyValuePair_t *keyPairQuery_system = 0;
    if (system)
    {
        keyQuery_system = strdup("system");
        valueQuery_system = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_system, MAX_NUMBER_LENGTH, "%d", *system);
        keyPairQuery_system = keyValuePair_create(keyQuery_system, valueQuery_system);
        list_addElement(localVarQueryParameters,keyPairQuery_system);
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
    attribute_count_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_count_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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
    if(keyQuery_attribute_set_id){
        free(keyQuery_attribute_set_id);
        keyQuery_attribute_set_id = NULL;
    }
    if(valueQuery_attribute_set_id){
        free(valueQuery_attribute_set_id);
        valueQuery_attribute_set_id = NULL;
    }
    if(keyPairQuery_attribute_set_id){
        keyValuePair_free(keyPairQuery_attribute_set_id);
        keyPairQuery_attribute_set_id = NULL;
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
    if(keyQuery_system){
        free(keyQuery_system);
        keyQuery_system = NULL;
    }
    if(valueQuery_system){
        free(valueQuery_system);
        valueQuery_system = NULL;
    }
    if(keyPairQuery_system){
        keyValuePair_free(keyPairQuery_system);
        keyPairQuery_system = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// attribute.delete
//
// Delete attribute from store
//
attribute_delete_200_response_t*
AttributeAPI_attributeDelete(apiClient_t *apiClient, char *id, char *store_id)
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
    char *localVarPath = strdup("/attribute.delete.json");





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
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_delete_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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

// attribute.group.list
//
// Get attribute group list
//
model_response_attribute_group_list_t*
AttributeAPI_attributeGroupList(apiClient_t *apiClient, int *start, int *count, char *attribute_set_id, char *lang_id, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/attribute.group.list.json");





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
    char *keyQuery_attribute_set_id = NULL;
    char * valueQuery_attribute_set_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_set_id = 0;
    if (attribute_set_id)
    {
        keyQuery_attribute_set_id = strdup("attribute_set_id");
        valueQuery_attribute_set_id = strdup((attribute_set_id));
        keyPairQuery_attribute_set_id = keyValuePair_create(keyQuery_attribute_set_id, valueQuery_attribute_set_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_set_id);
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
    model_response_attribute_group_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_attribute_group_list_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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
    if(keyQuery_attribute_set_id){
        free(keyQuery_attribute_set_id);
        keyQuery_attribute_set_id = NULL;
    }
    if(valueQuery_attribute_set_id){
        free(valueQuery_attribute_set_id);
        valueQuery_attribute_set_id = NULL;
    }
    if(keyPairQuery_attribute_set_id){
        keyValuePair_free(keyPairQuery_attribute_set_id);
        keyPairQuery_attribute_set_id = NULL;
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

// attribute.info
//
// Get information about a specific global attribute by its ID.
//
attribute_info_200_response_t*
AttributeAPI_attributeInfo(apiClient_t *apiClient, char *id, char *attribute_set_id, char *store_id, char *lang_id, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/attribute.info.json");





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
    char *keyQuery_attribute_set_id = NULL;
    char * valueQuery_attribute_set_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_set_id = 0;
    if (attribute_set_id)
    {
        keyQuery_attribute_set_id = strdup("attribute_set_id");
        valueQuery_attribute_set_id = strdup((attribute_set_id));
        keyPairQuery_attribute_set_id = keyValuePair_create(keyQuery_attribute_set_id, valueQuery_attribute_set_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_set_id);
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
    attribute_info_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_info_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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
    if(keyQuery_attribute_set_id){
        free(keyQuery_attribute_set_id);
        keyQuery_attribute_set_id = NULL;
    }
    if(valueQuery_attribute_set_id){
        free(valueQuery_attribute_set_id);
        valueQuery_attribute_set_id = NULL;
    }
    if(keyPairQuery_attribute_set_id){
        keyValuePair_free(keyPairQuery_attribute_set_id);
        keyPairQuery_attribute_set_id = NULL;
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

// attribute.list
//
// Get a list of global attributes.
//
model_response_attribute_list_t*
AttributeAPI_attributeList(apiClient_t *apiClient, int *start, int *count, char *attribute_ids, char *attribute_set_id, char *store_id, char *lang_id, char *type, int *visible, int *required, int *system, char *response_fields, char *params, char *exclude)
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
    char *localVarPath = strdup("/attribute.list.json");





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
    char *keyQuery_attribute_ids = NULL;
    char * valueQuery_attribute_ids = NULL;
    keyValuePair_t *keyPairQuery_attribute_ids = 0;
    if (attribute_ids)
    {
        keyQuery_attribute_ids = strdup("attribute_ids");
        valueQuery_attribute_ids = strdup((attribute_ids));
        keyPairQuery_attribute_ids = keyValuePair_create(keyQuery_attribute_ids, valueQuery_attribute_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_ids);
    }

    // query parameters
    char *keyQuery_attribute_set_id = NULL;
    char * valueQuery_attribute_set_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_set_id = 0;
    if (attribute_set_id)
    {
        keyQuery_attribute_set_id = strdup("attribute_set_id");
        valueQuery_attribute_set_id = strdup((attribute_set_id));
        keyPairQuery_attribute_set_id = keyValuePair_create(keyQuery_attribute_set_id, valueQuery_attribute_set_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_set_id);
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
        valueQuery_visible = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_visible, MAX_NUMBER_LENGTH, "%d", *visible);
        keyPairQuery_visible = keyValuePair_create(keyQuery_visible, valueQuery_visible);
        list_addElement(localVarQueryParameters,keyPairQuery_visible);
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
    char *keyQuery_system = NULL;
    char * valueQuery_system = NULL;
    keyValuePair_t *keyPairQuery_system = 0;
    if (system)
    {
        keyQuery_system = strdup("system");
        valueQuery_system = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_system, MAX_NUMBER_LENGTH, "%d", *system);
        keyPairQuery_system = keyValuePair_create(keyQuery_system, valueQuery_system);
        list_addElement(localVarQueryParameters,keyPairQuery_system);
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
    model_response_attribute_list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = model_response_attribute_list_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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
    if(keyQuery_attribute_ids){
        free(keyQuery_attribute_ids);
        keyQuery_attribute_ids = NULL;
    }
    if(valueQuery_attribute_ids){
        free(valueQuery_attribute_ids);
        valueQuery_attribute_ids = NULL;
    }
    if(keyPairQuery_attribute_ids){
        keyValuePair_free(keyPairQuery_attribute_ids);
        keyPairQuery_attribute_ids = NULL;
    }
    if(keyQuery_attribute_set_id){
        free(keyQuery_attribute_set_id);
        keyQuery_attribute_set_id = NULL;
    }
    if(valueQuery_attribute_set_id){
        free(valueQuery_attribute_set_id);
        valueQuery_attribute_set_id = NULL;
    }
    if(keyPairQuery_attribute_set_id){
        keyValuePair_free(keyPairQuery_attribute_set_id);
        keyPairQuery_attribute_set_id = NULL;
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
    if(keyQuery_system){
        free(keyQuery_system);
        keyQuery_system = NULL;
    }
    if(valueQuery_system){
        free(valueQuery_system);
        valueQuery_system = NULL;
    }
    if(keyPairQuery_system){
        keyValuePair_free(keyPairQuery_system);
        keyPairQuery_system = NULL;
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

// attribute.type.list
//
// Get list of supported attributes types
//
attribute_type_list_200_response_t*
AttributeAPI_attributeTypeList(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/attribute.type.list.json");




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
    attribute_type_list_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_type_list_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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

// attribute.unassign.group
//
// Unassign attribute from group
//
attribute_unassign_group_200_response_t*
AttributeAPI_attributeUnassignGroup(apiClient_t *apiClient, char *id, char *group_id)
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
    char *localVarPath = strdup("/attribute.unassign.group.json");





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
    attribute_unassign_group_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_unassign_group_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// attribute.unassign.set
//
// Unassign attribute from attribute set
//
attribute_unassign_group_200_response_t*
AttributeAPI_attributeUnassignSet(apiClient_t *apiClient, char *id, char *attribute_set_id)
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
    char *localVarPath = strdup("/attribute.unassign.set.json");





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
    char *keyQuery_attribute_set_id = NULL;
    char * valueQuery_attribute_set_id = NULL;
    keyValuePair_t *keyPairQuery_attribute_set_id = 0;
    if (attribute_set_id)
    {
        keyQuery_attribute_set_id = strdup("attribute_set_id");
        valueQuery_attribute_set_id = strdup((attribute_set_id));
        keyPairQuery_attribute_set_id = keyValuePair_create(keyQuery_attribute_set_id, valueQuery_attribute_set_id);
        list_addElement(localVarQueryParameters,keyPairQuery_attribute_set_id);
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
    attribute_unassign_group_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_unassign_group_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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
    if(keyQuery_attribute_set_id){
        free(keyQuery_attribute_set_id);
        keyQuery_attribute_set_id = NULL;
    }
    if(valueQuery_attribute_set_id){
        free(valueQuery_attribute_set_id);
        valueQuery_attribute_set_id = NULL;
    }
    if(keyPairQuery_attribute_set_id){
        keyValuePair_free(keyPairQuery_attribute_set_id);
        keyPairQuery_attribute_set_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// attribute.update
//
// Update attribute data
//
attribute_update_200_response_t*
AttributeAPI_attributeUpdate(apiClient_t *apiClient, char *id, char *name, char *store_id, char *lang_id)
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
    char *localVarPath = strdup("/attribute.update.json");





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
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_update_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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

// attribute.value.add
//
// Add new value to attribute.
//
attribute_add_200_response_t*
AttributeAPI_attributeValueAdd(apiClient_t *apiClient, char *attribute_id, char *name, char *code, char *description, char *store_id, char *lang_id)
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
    char *localVarPath = strdup("/attribute.value.add.json");





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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_add_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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

// attribute.value.delete
//
// Delete attribute value.
//
attribute_value_delete_200_response_t*
AttributeAPI_attributeValueDelete(apiClient_t *apiClient, char *id, char *attribute_id, char *store_id)
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
    char *localVarPath = strdup("/attribute.value.delete.json");





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
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_value_delete_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// attribute.value.update
//
// Update attribute value.
//
attribute_update_200_response_t*
AttributeAPI_attributeValueUpdate(apiClient_t *apiClient, char *id, char *attribute_id, char *name, char *description, char *code, char *store_id, char *lang_id)
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
    char *localVarPath = strdup("/attribute.value.update.json");





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
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AttributeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_update_200_response_parseFromJSON(AttributeAPIlocalVarJSON);
        cJSON_Delete(AttributeAPIlocalVarJSON);
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

