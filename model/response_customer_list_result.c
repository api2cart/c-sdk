#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_customer_list_result.h"



static response_customer_list_result_t *response_customer_list_result_create_internal(
    int customers_count,
    list_t *customer,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_customer_list_result_t *response_customer_list_result_local_var = malloc(sizeof(response_customer_list_result_t));
    if (!response_customer_list_result_local_var) {
        return NULL;
    }
    response_customer_list_result_local_var->customers_count = customers_count;
    response_customer_list_result_local_var->customer = customer;
    response_customer_list_result_local_var->additional_fields = additional_fields;
    response_customer_list_result_local_var->custom_fields = custom_fields;

    response_customer_list_result_local_var->_library_owned = 1;
    return response_customer_list_result_local_var;
}

__attribute__((deprecated)) response_customer_list_result_t *response_customer_list_result_create(
    int customers_count,
    list_t *customer,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_customer_list_result_create_internal (
        customers_count,
        customer,
        additional_fields,
        custom_fields
        );
}

void response_customer_list_result_free(response_customer_list_result_t *response_customer_list_result) {
    if(NULL == response_customer_list_result){
        return ;
    }
    if(response_customer_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_customer_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_customer_list_result->customer) {
        list_ForEach(listEntry, response_customer_list_result->customer) {
            customer_free(listEntry->data);
        }
        list_freeList(response_customer_list_result->customer);
        response_customer_list_result->customer = NULL;
    }
    if (response_customer_list_result->additional_fields) {
        object_free(response_customer_list_result->additional_fields);
        response_customer_list_result->additional_fields = NULL;
    }
    if (response_customer_list_result->custom_fields) {
        object_free(response_customer_list_result->custom_fields);
        response_customer_list_result->custom_fields = NULL;
    }
    free(response_customer_list_result);
}

cJSON *response_customer_list_result_convertToJSON(response_customer_list_result_t *response_customer_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_customer_list_result->customers_count
    if(response_customer_list_result->customers_count) {
    if(cJSON_AddNumberToObject(item, "customers_count", response_customer_list_result->customers_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_customer_list_result->customer
    if(response_customer_list_result->customer) {
    cJSON *customer = cJSON_AddArrayToObject(item, "customer");
    if(customer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *customerListEntry;
    if (response_customer_list_result->customer) {
    list_ForEach(customerListEntry, response_customer_list_result->customer) {
    cJSON *itemLocal = customer_convertToJSON(customerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(customer, itemLocal);
    }
    }
    }


    // response_customer_list_result->additional_fields
    if(response_customer_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_customer_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_customer_list_result->custom_fields
    if(response_customer_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_customer_list_result->custom_fields);
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

response_customer_list_result_t *response_customer_list_result_parseFromJSON(cJSON *response_customer_list_resultJSON){

    response_customer_list_result_t *response_customer_list_result_local_var = NULL;

    // define the local list for response_customer_list_result->customer
    list_t *customerList = NULL;

    // response_customer_list_result->customers_count
    cJSON *customers_count = cJSON_GetObjectItemCaseSensitive(response_customer_list_resultJSON, "customers_count");
    if (cJSON_IsNull(customers_count)) {
        customers_count = NULL;
    }
    if (customers_count) { 
    if(!cJSON_IsNumber(customers_count))
    {
    goto end; //Numeric
    }
    }

    // response_customer_list_result->customer
    cJSON *customer = cJSON_GetObjectItemCaseSensitive(response_customer_list_resultJSON, "customer");
    if (cJSON_IsNull(customer)) {
        customer = NULL;
    }
    if (customer) { 
    cJSON *customer_local_nonprimitive = NULL;
    if(!cJSON_IsArray(customer)){
        goto end; //nonprimitive container
    }

    customerList = list_createList();

    cJSON_ArrayForEach(customer_local_nonprimitive,customer )
    {
        if(!cJSON_IsObject(customer_local_nonprimitive)){
            goto end;
        }
        customer_t *customerItem = customer_parseFromJSON(customer_local_nonprimitive);

        list_addElement(customerList, customerItem);
    }
    }

    // response_customer_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_customer_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_customer_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_customer_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_customer_list_result_local_var = response_customer_list_result_create_internal (
        customers_count ? customers_count->valuedouble : 0,
        customer ? customerList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_customer_list_result_local_var;
end:
    if (customerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, customerList) {
            customer_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(customerList);
        customerList = NULL;
    }
    return NULL;

}
