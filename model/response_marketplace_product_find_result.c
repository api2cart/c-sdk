#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_marketplace_product_find_result.h"



static response_marketplace_product_find_result_t *response_marketplace_product_find_result_create_internal(
    int marketplace_products_count,
    list_t *marketplace_product,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_marketplace_product_find_result_t *response_marketplace_product_find_result_local_var = malloc(sizeof(response_marketplace_product_find_result_t));
    if (!response_marketplace_product_find_result_local_var) {
        return NULL;
    }
    response_marketplace_product_find_result_local_var->marketplace_products_count = marketplace_products_count;
    response_marketplace_product_find_result_local_var->marketplace_product = marketplace_product;
    response_marketplace_product_find_result_local_var->additional_fields = additional_fields;
    response_marketplace_product_find_result_local_var->custom_fields = custom_fields;

    response_marketplace_product_find_result_local_var->_library_owned = 1;
    return response_marketplace_product_find_result_local_var;
}

__attribute__((deprecated)) response_marketplace_product_find_result_t *response_marketplace_product_find_result_create(
    int marketplace_products_count,
    list_t *marketplace_product,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_marketplace_product_find_result_create_internal (
        marketplace_products_count,
        marketplace_product,
        additional_fields,
        custom_fields
        );
}

void response_marketplace_product_find_result_free(response_marketplace_product_find_result_t *response_marketplace_product_find_result) {
    if(NULL == response_marketplace_product_find_result){
        return ;
    }
    if(response_marketplace_product_find_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_marketplace_product_find_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_marketplace_product_find_result->marketplace_product) {
        list_ForEach(listEntry, response_marketplace_product_find_result->marketplace_product) {
            marketplace_product_free(listEntry->data);
        }
        list_freeList(response_marketplace_product_find_result->marketplace_product);
        response_marketplace_product_find_result->marketplace_product = NULL;
    }
    if (response_marketplace_product_find_result->additional_fields) {
        object_free(response_marketplace_product_find_result->additional_fields);
        response_marketplace_product_find_result->additional_fields = NULL;
    }
    if (response_marketplace_product_find_result->custom_fields) {
        object_free(response_marketplace_product_find_result->custom_fields);
        response_marketplace_product_find_result->custom_fields = NULL;
    }
    free(response_marketplace_product_find_result);
}

cJSON *response_marketplace_product_find_result_convertToJSON(response_marketplace_product_find_result_t *response_marketplace_product_find_result) {
    cJSON *item = cJSON_CreateObject();

    // response_marketplace_product_find_result->marketplace_products_count
    if(response_marketplace_product_find_result->marketplace_products_count) {
    if(cJSON_AddNumberToObject(item, "marketplace_products_count", response_marketplace_product_find_result->marketplace_products_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_marketplace_product_find_result->marketplace_product
    if(response_marketplace_product_find_result->marketplace_product) {
    cJSON *marketplace_product = cJSON_AddArrayToObject(item, "marketplace_product");
    if(marketplace_product == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *marketplace_productListEntry;
    if (response_marketplace_product_find_result->marketplace_product) {
    list_ForEach(marketplace_productListEntry, response_marketplace_product_find_result->marketplace_product) {
    cJSON *itemLocal = marketplace_product_convertToJSON(marketplace_productListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(marketplace_product, itemLocal);
    }
    }
    }


    // response_marketplace_product_find_result->additional_fields
    if(response_marketplace_product_find_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_marketplace_product_find_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_marketplace_product_find_result->custom_fields
    if(response_marketplace_product_find_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_marketplace_product_find_result->custom_fields);
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

response_marketplace_product_find_result_t *response_marketplace_product_find_result_parseFromJSON(cJSON *response_marketplace_product_find_resultJSON){

    response_marketplace_product_find_result_t *response_marketplace_product_find_result_local_var = NULL;

    // define the local list for response_marketplace_product_find_result->marketplace_product
    list_t *marketplace_productList = NULL;

    // response_marketplace_product_find_result->marketplace_products_count
    cJSON *marketplace_products_count = cJSON_GetObjectItemCaseSensitive(response_marketplace_product_find_resultJSON, "marketplace_products_count");
    if (cJSON_IsNull(marketplace_products_count)) {
        marketplace_products_count = NULL;
    }
    if (marketplace_products_count) { 
    if(!cJSON_IsNumber(marketplace_products_count))
    {
    goto end; //Numeric
    }
    }

    // response_marketplace_product_find_result->marketplace_product
    cJSON *marketplace_product = cJSON_GetObjectItemCaseSensitive(response_marketplace_product_find_resultJSON, "marketplace_product");
    if (cJSON_IsNull(marketplace_product)) {
        marketplace_product = NULL;
    }
    if (marketplace_product) { 
    cJSON *marketplace_product_local_nonprimitive = NULL;
    if(!cJSON_IsArray(marketplace_product)){
        goto end; //nonprimitive container
    }

    marketplace_productList = list_createList();

    cJSON_ArrayForEach(marketplace_product_local_nonprimitive,marketplace_product )
    {
        if(!cJSON_IsObject(marketplace_product_local_nonprimitive)){
            goto end;
        }
        marketplace_product_t *marketplace_productItem = marketplace_product_parseFromJSON(marketplace_product_local_nonprimitive);

        list_addElement(marketplace_productList, marketplace_productItem);
    }
    }

    // response_marketplace_product_find_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_marketplace_product_find_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_marketplace_product_find_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_marketplace_product_find_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_marketplace_product_find_result_local_var = response_marketplace_product_find_result_create_internal (
        marketplace_products_count ? marketplace_products_count->valuedouble : 0,
        marketplace_product ? marketplace_productList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_marketplace_product_find_result_local_var;
end:
    if (marketplace_productList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, marketplace_productList) {
            marketplace_product_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(marketplace_productList);
        marketplace_productList = NULL;
    }
    return NULL;

}
