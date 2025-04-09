#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_add_200_response_result.h"



static product_variant_add_200_response_result_t *product_variant_add_200_response_result_create_internal(
    char *product_variant_id
    ) {
    product_variant_add_200_response_result_t *product_variant_add_200_response_result_local_var = malloc(sizeof(product_variant_add_200_response_result_t));
    if (!product_variant_add_200_response_result_local_var) {
        return NULL;
    }
    product_variant_add_200_response_result_local_var->product_variant_id = product_variant_id;

    product_variant_add_200_response_result_local_var->_library_owned = 1;
    return product_variant_add_200_response_result_local_var;
}

__attribute__((deprecated)) product_variant_add_200_response_result_t *product_variant_add_200_response_result_create(
    char *product_variant_id
    ) {
    return product_variant_add_200_response_result_create_internal (
        product_variant_id
        );
}

void product_variant_add_200_response_result_free(product_variant_add_200_response_result_t *product_variant_add_200_response_result) {
    if(NULL == product_variant_add_200_response_result){
        return ;
    }
    if(product_variant_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_add_200_response_result->product_variant_id) {
        free(product_variant_add_200_response_result->product_variant_id);
        product_variant_add_200_response_result->product_variant_id = NULL;
    }
    free(product_variant_add_200_response_result);
}

cJSON *product_variant_add_200_response_result_convertToJSON(product_variant_add_200_response_result_t *product_variant_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_add_200_response_result->product_variant_id
    if(product_variant_add_200_response_result->product_variant_id) {
    if(cJSON_AddStringToObject(item, "product_variant_id", product_variant_add_200_response_result->product_variant_id) == NULL) {
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

product_variant_add_200_response_result_t *product_variant_add_200_response_result_parseFromJSON(cJSON *product_variant_add_200_response_resultJSON){

    product_variant_add_200_response_result_t *product_variant_add_200_response_result_local_var = NULL;

    // product_variant_add_200_response_result->product_variant_id
    cJSON *product_variant_id = cJSON_GetObjectItemCaseSensitive(product_variant_add_200_response_resultJSON, "product_variant_id");
    if (cJSON_IsNull(product_variant_id)) {
        product_variant_id = NULL;
    }
    if (product_variant_id) { 
    if(!cJSON_IsString(product_variant_id) && !cJSON_IsNull(product_variant_id))
    {
    goto end; //String
    }
    }


    product_variant_add_200_response_result_local_var = product_variant_add_200_response_result_create_internal (
        product_variant_id && !cJSON_IsNull(product_variant_id) ? strdup(product_variant_id->valuestring) : NULL
        );

    return product_variant_add_200_response_result_local_var;
end:
    return NULL;

}
