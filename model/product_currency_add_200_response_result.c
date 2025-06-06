#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_currency_add_200_response_result.h"



static product_currency_add_200_response_result_t *product_currency_add_200_response_result_create_internal(
    char *currency_id
    ) {
    product_currency_add_200_response_result_t *product_currency_add_200_response_result_local_var = malloc(sizeof(product_currency_add_200_response_result_t));
    if (!product_currency_add_200_response_result_local_var) {
        return NULL;
    }
    product_currency_add_200_response_result_local_var->currency_id = currency_id;

    product_currency_add_200_response_result_local_var->_library_owned = 1;
    return product_currency_add_200_response_result_local_var;
}

__attribute__((deprecated)) product_currency_add_200_response_result_t *product_currency_add_200_response_result_create(
    char *currency_id
    ) {
    return product_currency_add_200_response_result_create_internal (
        currency_id
        );
}

void product_currency_add_200_response_result_free(product_currency_add_200_response_result_t *product_currency_add_200_response_result) {
    if(NULL == product_currency_add_200_response_result){
        return ;
    }
    if(product_currency_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_currency_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_currency_add_200_response_result->currency_id) {
        free(product_currency_add_200_response_result->currency_id);
        product_currency_add_200_response_result->currency_id = NULL;
    }
    free(product_currency_add_200_response_result);
}

cJSON *product_currency_add_200_response_result_convertToJSON(product_currency_add_200_response_result_t *product_currency_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_currency_add_200_response_result->currency_id
    if(product_currency_add_200_response_result->currency_id) {
    if(cJSON_AddStringToObject(item, "currency_id", product_currency_add_200_response_result->currency_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_currency_add_200_response_result_t *product_currency_add_200_response_result_parseFromJSON(cJSON *product_currency_add_200_response_resultJSON){

    product_currency_add_200_response_result_t *product_currency_add_200_response_result_local_var = NULL;

    // product_currency_add_200_response_result->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(product_currency_add_200_response_resultJSON, "currency_id");
    if (cJSON_IsNull(currency_id)) {
        currency_id = NULL;
    }
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    product_currency_add_200_response_result_local_var = product_currency_add_200_response_result_create_internal (
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return product_currency_add_200_response_result_local_var;
end:
    return NULL;

}
