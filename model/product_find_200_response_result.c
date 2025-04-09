#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_find_200_response_result.h"



static product_find_200_response_result_t *product_find_200_response_result_create_internal(
    list_t *product
    ) {
    product_find_200_response_result_t *product_find_200_response_result_local_var = malloc(sizeof(product_find_200_response_result_t));
    if (!product_find_200_response_result_local_var) {
        return NULL;
    }
    product_find_200_response_result_local_var->product = product;

    product_find_200_response_result_local_var->_library_owned = 1;
    return product_find_200_response_result_local_var;
}

__attribute__((deprecated)) product_find_200_response_result_t *product_find_200_response_result_create(
    list_t *product
    ) {
    return product_find_200_response_result_create_internal (
        product
        );
}

void product_find_200_response_result_free(product_find_200_response_result_t *product_find_200_response_result) {
    if(NULL == product_find_200_response_result){
        return ;
    }
    if(product_find_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_find_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_find_200_response_result->product) {
        list_ForEach(listEntry, product_find_200_response_result->product) {
            product_find_200_response_result_product_inner_free(listEntry->data);
        }
        list_freeList(product_find_200_response_result->product);
        product_find_200_response_result->product = NULL;
    }
    free(product_find_200_response_result);
}

cJSON *product_find_200_response_result_convertToJSON(product_find_200_response_result_t *product_find_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_find_200_response_result->product
    if(product_find_200_response_result->product) {
    cJSON *product = cJSON_AddArrayToObject(item, "product");
    if(product == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *productListEntry;
    if (product_find_200_response_result->product) {
    list_ForEach(productListEntry, product_find_200_response_result->product) {
    cJSON *itemLocal = product_find_200_response_result_product_inner_convertToJSON(productListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(product, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_find_200_response_result_t *product_find_200_response_result_parseFromJSON(cJSON *product_find_200_response_resultJSON){

    product_find_200_response_result_t *product_find_200_response_result_local_var = NULL;

    // define the local list for product_find_200_response_result->product
    list_t *productList = NULL;

    // product_find_200_response_result->product
    cJSON *product = cJSON_GetObjectItemCaseSensitive(product_find_200_response_resultJSON, "product");
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
        product_find_200_response_result_product_inner_t *productItem = product_find_200_response_result_product_inner_parseFromJSON(product_local_nonprimitive);

        list_addElement(productList, productItem);
    }
    }


    product_find_200_response_result_local_var = product_find_200_response_result_create_internal (
        product ? productList : NULL
        );

    return product_find_200_response_result_local_var;
end:
    if (productList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, productList) {
            product_find_200_response_result_product_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(productList);
        productList = NULL;
    }
    return NULL;

}
