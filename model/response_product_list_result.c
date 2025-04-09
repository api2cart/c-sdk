#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_product_list_result.h"



static response_product_list_result_t *response_product_list_result_create_internal(
    int products_count,
    list_t *product,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_product_list_result_t *response_product_list_result_local_var = malloc(sizeof(response_product_list_result_t));
    if (!response_product_list_result_local_var) {
        return NULL;
    }
    response_product_list_result_local_var->products_count = products_count;
    response_product_list_result_local_var->product = product;
    response_product_list_result_local_var->additional_fields = additional_fields;
    response_product_list_result_local_var->custom_fields = custom_fields;

    response_product_list_result_local_var->_library_owned = 1;
    return response_product_list_result_local_var;
}

__attribute__((deprecated)) response_product_list_result_t *response_product_list_result_create(
    int products_count,
    list_t *product,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_product_list_result_create_internal (
        products_count,
        product,
        additional_fields,
        custom_fields
        );
}

void response_product_list_result_free(response_product_list_result_t *response_product_list_result) {
    if(NULL == response_product_list_result){
        return ;
    }
    if(response_product_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_product_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_product_list_result->product) {
        list_ForEach(listEntry, response_product_list_result->product) {
            product_free(listEntry->data);
        }
        list_freeList(response_product_list_result->product);
        response_product_list_result->product = NULL;
    }
    if (response_product_list_result->additional_fields) {
        object_free(response_product_list_result->additional_fields);
        response_product_list_result->additional_fields = NULL;
    }
    if (response_product_list_result->custom_fields) {
        object_free(response_product_list_result->custom_fields);
        response_product_list_result->custom_fields = NULL;
    }
    free(response_product_list_result);
}

cJSON *response_product_list_result_convertToJSON(response_product_list_result_t *response_product_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_product_list_result->products_count
    if(response_product_list_result->products_count) {
    if(cJSON_AddNumberToObject(item, "products_count", response_product_list_result->products_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_product_list_result->product
    if(response_product_list_result->product) {
    cJSON *product = cJSON_AddArrayToObject(item, "product");
    if(product == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *productListEntry;
    if (response_product_list_result->product) {
    list_ForEach(productListEntry, response_product_list_result->product) {
    cJSON *itemLocal = product_convertToJSON(productListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(product, itemLocal);
    }
    }
    }


    // response_product_list_result->additional_fields
    if(response_product_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_product_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_product_list_result->custom_fields
    if(response_product_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_product_list_result->custom_fields);
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

response_product_list_result_t *response_product_list_result_parseFromJSON(cJSON *response_product_list_resultJSON){

    response_product_list_result_t *response_product_list_result_local_var = NULL;

    // define the local list for response_product_list_result->product
    list_t *productList = NULL;

    // response_product_list_result->products_count
    cJSON *products_count = cJSON_GetObjectItemCaseSensitive(response_product_list_resultJSON, "products_count");
    if (cJSON_IsNull(products_count)) {
        products_count = NULL;
    }
    if (products_count) { 
    if(!cJSON_IsNumber(products_count))
    {
    goto end; //Numeric
    }
    }

    // response_product_list_result->product
    cJSON *product = cJSON_GetObjectItemCaseSensitive(response_product_list_resultJSON, "product");
    if (cJSON_IsNull(product)) {
        product = NULL;
    }
    if (product) { 
    cJSON *product_local_nonprimitive = NULL;
    if(!cJSON_IsArray(product)){
        goto end; //nonprimitive container
    }

    productList = list_createList();

    cJSON_ArrayForEach(product_local_nonprimitive,product )
    {
        if(!cJSON_IsObject(product_local_nonprimitive)){
            goto end;
        }
        product_t *productItem = product_parseFromJSON(product_local_nonprimitive);

        list_addElement(productList, productItem);
    }
    }

    // response_product_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_product_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_product_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_product_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_product_list_result_local_var = response_product_list_result_create_internal (
        products_count ? products_count->valuedouble : 0,
        product ? productList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_product_list_result_local_var;
end:
    if (productList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, productList) {
            product_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(productList);
        productList = NULL;
    }
    return NULL;

}
