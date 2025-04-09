#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_product_currency_list_result.h"



static response_product_currency_list_result_t *response_product_currency_list_result_create_internal(
    int total_count,
    list_t *currency,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_product_currency_list_result_t *response_product_currency_list_result_local_var = malloc(sizeof(response_product_currency_list_result_t));
    if (!response_product_currency_list_result_local_var) {
        return NULL;
    }
    response_product_currency_list_result_local_var->total_count = total_count;
    response_product_currency_list_result_local_var->currency = currency;
    response_product_currency_list_result_local_var->additional_fields = additional_fields;
    response_product_currency_list_result_local_var->custom_fields = custom_fields;

    response_product_currency_list_result_local_var->_library_owned = 1;
    return response_product_currency_list_result_local_var;
}

__attribute__((deprecated)) response_product_currency_list_result_t *response_product_currency_list_result_create(
    int total_count,
    list_t *currency,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_product_currency_list_result_create_internal (
        total_count,
        currency,
        additional_fields,
        custom_fields
        );
}

void response_product_currency_list_result_free(response_product_currency_list_result_t *response_product_currency_list_result) {
    if(NULL == response_product_currency_list_result){
        return ;
    }
    if(response_product_currency_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_product_currency_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_product_currency_list_result->currency) {
        list_ForEach(listEntry, response_product_currency_list_result->currency) {
            currency_free(listEntry->data);
        }
        list_freeList(response_product_currency_list_result->currency);
        response_product_currency_list_result->currency = NULL;
    }
    if (response_product_currency_list_result->additional_fields) {
        object_free(response_product_currency_list_result->additional_fields);
        response_product_currency_list_result->additional_fields = NULL;
    }
    if (response_product_currency_list_result->custom_fields) {
        object_free(response_product_currency_list_result->custom_fields);
        response_product_currency_list_result->custom_fields = NULL;
    }
    free(response_product_currency_list_result);
}

cJSON *response_product_currency_list_result_convertToJSON(response_product_currency_list_result_t *response_product_currency_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_product_currency_list_result->total_count
    if(response_product_currency_list_result->total_count) {
    if(cJSON_AddNumberToObject(item, "total_count", response_product_currency_list_result->total_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_product_currency_list_result->currency
    if(response_product_currency_list_result->currency) {
    cJSON *currency = cJSON_AddArrayToObject(item, "currency");
    if(currency == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *currencyListEntry;
    if (response_product_currency_list_result->currency) {
    list_ForEach(currencyListEntry, response_product_currency_list_result->currency) {
    cJSON *itemLocal = currency_convertToJSON(currencyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(currency, itemLocal);
    }
    }
    }


    // response_product_currency_list_result->additional_fields
    if(response_product_currency_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_product_currency_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_product_currency_list_result->custom_fields
    if(response_product_currency_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_product_currency_list_result->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

response_product_currency_list_result_t *response_product_currency_list_result_parseFromJSON(cJSON *response_product_currency_list_resultJSON){

    response_product_currency_list_result_t *response_product_currency_list_result_local_var = NULL;

    // define the local list for response_product_currency_list_result->currency
    list_t *currencyList = NULL;

    // response_product_currency_list_result->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(response_product_currency_list_resultJSON, "total_count");
    if (cJSON_IsNull(total_count)) {
        total_count = NULL;
    }
    if (total_count) { 
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }
    }

    // response_product_currency_list_result->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(response_product_currency_list_resultJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    cJSON *currency_local_nonprimitive = NULL;
    if(!cJSON_IsArray(currency)){
        goto end; //nonprimitive container
    }

    currencyList = list_createList();

    cJSON_ArrayForEach(currency_local_nonprimitive,currency )
    {
        if(!cJSON_IsObject(currency_local_nonprimitive)){
            goto end;
        }
        currency_t *currencyItem = currency_parseFromJSON(currency_local_nonprimitive);

        list_addElement(currencyList, currencyItem);
    }
    }

    // response_product_currency_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_product_currency_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_product_currency_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_product_currency_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_product_currency_list_result_local_var = response_product_currency_list_result_create_internal (
        total_count ? total_count->valuedouble : 0,
        currency ? currencyList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_product_currency_list_result_local_var;
end:
    if (currencyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, currencyList) {
            currency_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(currencyList);
        currencyList = NULL;
    }
    return NULL;

}
