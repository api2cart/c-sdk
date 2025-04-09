#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_count_200_response_result.h"



static product_variant_count_200_response_result_t *product_variant_count_200_response_result_create_internal(
    char *variants_count
    ) {
    product_variant_count_200_response_result_t *product_variant_count_200_response_result_local_var = malloc(sizeof(product_variant_count_200_response_result_t));
    if (!product_variant_count_200_response_result_local_var) {
        return NULL;
    }
    product_variant_count_200_response_result_local_var->variants_count = variants_count;

    product_variant_count_200_response_result_local_var->_library_owned = 1;
    return product_variant_count_200_response_result_local_var;
}

__attribute__((deprecated)) product_variant_count_200_response_result_t *product_variant_count_200_response_result_create(
    char *variants_count
    ) {
    return product_variant_count_200_response_result_create_internal (
        variants_count
        );
}

void product_variant_count_200_response_result_free(product_variant_count_200_response_result_t *product_variant_count_200_response_result) {
    if(NULL == product_variant_count_200_response_result){
        return ;
    }
    if(product_variant_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_count_200_response_result->variants_count) {
        free(product_variant_count_200_response_result->variants_count);
        product_variant_count_200_response_result->variants_count = NULL;
    }
    free(product_variant_count_200_response_result);
}

cJSON *product_variant_count_200_response_result_convertToJSON(product_variant_count_200_response_result_t *product_variant_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_count_200_response_result->variants_count
    if(product_variant_count_200_response_result->variants_count) {
    if(cJSON_AddStringToObject(item, "variants_count", product_variant_count_200_response_result->variants_count) == NULL) {
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

product_variant_count_200_response_result_t *product_variant_count_200_response_result_parseFromJSON(cJSON *product_variant_count_200_response_resultJSON){

    product_variant_count_200_response_result_t *product_variant_count_200_response_result_local_var = NULL;

    // product_variant_count_200_response_result->variants_count
    cJSON *variants_count = cJSON_GetObjectItemCaseSensitive(product_variant_count_200_response_resultJSON, "variants_count");
    if (cJSON_IsNull(variants_count)) {
        variants_count = NULL;
    }
    if (variants_count) { 
    if(!cJSON_IsString(variants_count) && !cJSON_IsNull(variants_count))
    {
    goto end; //String
    }
    }


    product_variant_count_200_response_result_local_var = product_variant_count_200_response_result_create_internal (
        variants_count && !cJSON_IsNull(variants_count) ? strdup(variants_count->valuestring) : NULL
        );

    return product_variant_count_200_response_result_local_var;
end:
    return NULL;

}
