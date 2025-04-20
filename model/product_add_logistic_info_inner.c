#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_logistic_info_inner.h"



static product_add_logistic_info_inner_t *product_add_logistic_info_inner_create_internal(
    double logistic_id,
    int is_free,
    double shipping_fee,
    double size_id
    ) {
    product_add_logistic_info_inner_t *product_add_logistic_info_inner_local_var = malloc(sizeof(product_add_logistic_info_inner_t));
    if (!product_add_logistic_info_inner_local_var) {
        return NULL;
    }
    product_add_logistic_info_inner_local_var->logistic_id = logistic_id;
    product_add_logistic_info_inner_local_var->is_free = is_free;
    product_add_logistic_info_inner_local_var->shipping_fee = shipping_fee;
    product_add_logistic_info_inner_local_var->size_id = size_id;

    product_add_logistic_info_inner_local_var->_library_owned = 1;
    return product_add_logistic_info_inner_local_var;
}

__attribute__((deprecated)) product_add_logistic_info_inner_t *product_add_logistic_info_inner_create(
    double logistic_id,
    int is_free,
    double shipping_fee,
    double size_id
    ) {
    return product_add_logistic_info_inner_create_internal (
        logistic_id,
        is_free,
        shipping_fee,
        size_id
        );
}

void product_add_logistic_info_inner_free(product_add_logistic_info_inner_t *product_add_logistic_info_inner) {
    if(NULL == product_add_logistic_info_inner){
        return ;
    }
    if(product_add_logistic_info_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_logistic_info_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    free(product_add_logistic_info_inner);
}

cJSON *product_add_logistic_info_inner_convertToJSON(product_add_logistic_info_inner_t *product_add_logistic_info_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_logistic_info_inner->logistic_id
    if (!product_add_logistic_info_inner->logistic_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "logistic_id", product_add_logistic_info_inner->logistic_id) == NULL) {
    goto fail; //Numeric
    }


    // product_add_logistic_info_inner->is_free
    if(product_add_logistic_info_inner->is_free) {
    if(cJSON_AddBoolToObject(item, "is_free", product_add_logistic_info_inner->is_free) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_logistic_info_inner->shipping_fee
    if(product_add_logistic_info_inner->shipping_fee) {
    if(cJSON_AddNumberToObject(item, "shipping_fee", product_add_logistic_info_inner->shipping_fee) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_logistic_info_inner->size_id
    if(product_add_logistic_info_inner->size_id) {
    if(cJSON_AddNumberToObject(item, "size_id", product_add_logistic_info_inner->size_id) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_logistic_info_inner_t *product_add_logistic_info_inner_parseFromJSON(cJSON *product_add_logistic_info_innerJSON){

    product_add_logistic_info_inner_t *product_add_logistic_info_inner_local_var = NULL;

    // product_add_logistic_info_inner->logistic_id
    cJSON *logistic_id = cJSON_GetObjectItemCaseSensitive(product_add_logistic_info_innerJSON, "logistic_id");
    if (cJSON_IsNull(logistic_id)) {
        logistic_id = NULL;
    }
    if (!logistic_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(logistic_id))
    {
    goto end; //Numeric
    }

    // product_add_logistic_info_inner->is_free
    cJSON *is_free = cJSON_GetObjectItemCaseSensitive(product_add_logistic_info_innerJSON, "is_free");
    if (cJSON_IsNull(is_free)) {
        is_free = NULL;
    }
    if (is_free) { 
    if(!cJSON_IsBool(is_free))
    {
    goto end; //Bool
    }
    }

    // product_add_logistic_info_inner->shipping_fee
    cJSON *shipping_fee = cJSON_GetObjectItemCaseSensitive(product_add_logistic_info_innerJSON, "shipping_fee");
    if (cJSON_IsNull(shipping_fee)) {
        shipping_fee = NULL;
    }
    if (shipping_fee) { 
    if(!cJSON_IsNumber(shipping_fee))
    {
    goto end; //Numeric
    }
    }

    // product_add_logistic_info_inner->size_id
    cJSON *size_id = cJSON_GetObjectItemCaseSensitive(product_add_logistic_info_innerJSON, "size_id");
    if (cJSON_IsNull(size_id)) {
        size_id = NULL;
    }
    if (size_id) { 
    if(!cJSON_IsNumber(size_id))
    {
    goto end; //Numeric
    }
    }


    product_add_logistic_info_inner_local_var = product_add_logistic_info_inner_create_internal (
        logistic_id->valuedouble,
        is_free ? is_free->valueint : 0,
        shipping_fee ? shipping_fee->valuedouble : 0,
        size_id ? size_id->valuedouble : 0
        );

    return product_add_logistic_info_inner_local_var;
end:
    return NULL;

}
