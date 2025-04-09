#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_order_transaction_list_result.h"



static response_order_transaction_list_result_t *response_order_transaction_list_result_create_internal(
    int transactions_count,
    list_t *transactions,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_order_transaction_list_result_t *response_order_transaction_list_result_local_var = malloc(sizeof(response_order_transaction_list_result_t));
    if (!response_order_transaction_list_result_local_var) {
        return NULL;
    }
    response_order_transaction_list_result_local_var->transactions_count = transactions_count;
    response_order_transaction_list_result_local_var->transactions = transactions;
    response_order_transaction_list_result_local_var->additional_fields = additional_fields;
    response_order_transaction_list_result_local_var->custom_fields = custom_fields;

    response_order_transaction_list_result_local_var->_library_owned = 1;
    return response_order_transaction_list_result_local_var;
}

__attribute__((deprecated)) response_order_transaction_list_result_t *response_order_transaction_list_result_create(
    int transactions_count,
    list_t *transactions,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_order_transaction_list_result_create_internal (
        transactions_count,
        transactions,
        additional_fields,
        custom_fields
        );
}

void response_order_transaction_list_result_free(response_order_transaction_list_result_t *response_order_transaction_list_result) {
    if(NULL == response_order_transaction_list_result){
        return ;
    }
    if(response_order_transaction_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_order_transaction_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_order_transaction_list_result->transactions) {
        list_ForEach(listEntry, response_order_transaction_list_result->transactions) {
            order_transaction_free(listEntry->data);
        }
        list_freeList(response_order_transaction_list_result->transactions);
        response_order_transaction_list_result->transactions = NULL;
    }
    if (response_order_transaction_list_result->additional_fields) {
        object_free(response_order_transaction_list_result->additional_fields);
        response_order_transaction_list_result->additional_fields = NULL;
    }
    if (response_order_transaction_list_result->custom_fields) {
        object_free(response_order_transaction_list_result->custom_fields);
        response_order_transaction_list_result->custom_fields = NULL;
    }
    free(response_order_transaction_list_result);
}

cJSON *response_order_transaction_list_result_convertToJSON(response_order_transaction_list_result_t *response_order_transaction_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_order_transaction_list_result->transactions_count
    if(response_order_transaction_list_result->transactions_count) {
    if(cJSON_AddNumberToObject(item, "transactions_count", response_order_transaction_list_result->transactions_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_order_transaction_list_result->transactions
    if(response_order_transaction_list_result->transactions) {
    cJSON *transactions = cJSON_AddArrayToObject(item, "transactions");
    if(transactions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *transactionsListEntry;
    if (response_order_transaction_list_result->transactions) {
    list_ForEach(transactionsListEntry, response_order_transaction_list_result->transactions) {
    cJSON *itemLocal = order_transaction_convertToJSON(transactionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(transactions, itemLocal);
    }
    }
    }


    // response_order_transaction_list_result->additional_fields
    if(response_order_transaction_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_order_transaction_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_order_transaction_list_result->custom_fields
    if(response_order_transaction_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_order_transaction_list_result->custom_fields);
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

response_order_transaction_list_result_t *response_order_transaction_list_result_parseFromJSON(cJSON *response_order_transaction_list_resultJSON){

    response_order_transaction_list_result_t *response_order_transaction_list_result_local_var = NULL;

    // define the local list for response_order_transaction_list_result->transactions
    list_t *transactionsList = NULL;

    // response_order_transaction_list_result->transactions_count
    cJSON *transactions_count = cJSON_GetObjectItemCaseSensitive(response_order_transaction_list_resultJSON, "transactions_count");
    if (cJSON_IsNull(transactions_count)) {
        transactions_count = NULL;
    }
    if (transactions_count) { 
    if(!cJSON_IsNumber(transactions_count))
    {
    goto end; //Numeric
    }
    }

    // response_order_transaction_list_result->transactions
    cJSON *transactions = cJSON_GetObjectItemCaseSensitive(response_order_transaction_list_resultJSON, "transactions");
    if (cJSON_IsNull(transactions)) {
        transactions = NULL;
    }
    if (transactions) { 
    cJSON *transactions_local_nonprimitive = NULL;
    if(!cJSON_IsArray(transactions)){
        goto end; //nonprimitive container
    }

    transactionsList = list_createList();

    cJSON_ArrayForEach(transactions_local_nonprimitive,transactions )
    {
        if(!cJSON_IsObject(transactions_local_nonprimitive)){
            goto end;
        }
        order_transaction_t *transactionsItem = order_transaction_parseFromJSON(transactions_local_nonprimitive);

        list_addElement(transactionsList, transactionsItem);
    }
    }

    // response_order_transaction_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_order_transaction_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_order_transaction_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_order_transaction_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_order_transaction_list_result_local_var = response_order_transaction_list_result_create_internal (
        transactions_count ? transactions_count->valuedouble : 0,
        transactions ? transactionsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_order_transaction_list_result_local_var;
end:
    if (transactionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, transactionsList) {
            order_transaction_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(transactionsList);
        transactionsList = NULL;
    }
    return NULL;

}
