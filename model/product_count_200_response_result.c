#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_count_200_response_result.h"



static product_count_200_response_result_t *product_count_200_response_result_create_internal(
    int products_count
    ) {
    product_count_200_response_result_t *product_count_200_response_result_local_var = malloc(sizeof(product_count_200_response_result_t));
    if (!product_count_200_response_result_local_var) {
        return NULL;
    }
    product_count_200_response_result_local_var->products_count = products_count;

    product_count_200_response_result_local_var->_library_owned = 1;
    return product_count_200_response_result_local_var;
}

__attribute__((deprecated)) product_count_200_response_result_t *product_count_200_response_result_create(
    int products_count
    ) {
    return product_count_200_response_result_create_internal (
        products_count
        );
}

void product_count_200_response_result_free(product_count_200_response_result_t *product_count_200_response_result) {
    if(NULL == product_count_200_response_result){
        return ;
    }
    if(product_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(product_count_200_response_result);
}

cJSON *product_count_200_response_result_convertToJSON(product_count_200_response_result_t *product_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_count_200_response_result->products_count
    if(product_count_200_response_result->products_count) {
    if(cJSON_AddNumberToObject(item, "products_count", product_count_200_response_result->products_count) == NULL) {
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

product_count_200_response_result_t *product_count_200_response_result_parseFromJSON(cJSON *product_count_200_response_resultJSON){

    product_count_200_response_result_t *product_count_200_response_result_local_var = NULL;

    // product_count_200_response_result->products_count
    cJSON *products_count = cJSON_GetObjectItemCaseSensitive(product_count_200_response_resultJSON, "products_count");
    if (cJSON_IsNull(products_count)) {
        products_count = NULL;
    }
    if (products_count) { 
    if(!cJSON_IsNumber(products_count))
    {
    goto end; //Numeric
    }
    }


    product_count_200_response_result_local_var = product_count_200_response_result_create_internal (
        products_count ? products_count->valuedouble : 0
        );

    return product_count_200_response_result_local_var;
end:
    return NULL;

}
