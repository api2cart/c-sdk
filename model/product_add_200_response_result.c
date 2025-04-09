#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_200_response_result.h"



static product_add_200_response_result_t *product_add_200_response_result_create_internal(
    char *product_id
    ) {
    product_add_200_response_result_t *product_add_200_response_result_local_var = malloc(sizeof(product_add_200_response_result_t));
    if (!product_add_200_response_result_local_var) {
        return NULL;
    }
    product_add_200_response_result_local_var->product_id = product_id;

    product_add_200_response_result_local_var->_library_owned = 1;
    return product_add_200_response_result_local_var;
}

__attribute__((deprecated)) product_add_200_response_result_t *product_add_200_response_result_create(
    char *product_id
    ) {
    return product_add_200_response_result_create_internal (
        product_id
        );
}

void product_add_200_response_result_free(product_add_200_response_result_t *product_add_200_response_result) {
    if(NULL == product_add_200_response_result){
        return ;
    }
    if(product_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_200_response_result->product_id) {
        free(product_add_200_response_result->product_id);
        product_add_200_response_result->product_id = NULL;
    }
    free(product_add_200_response_result);
}

cJSON *product_add_200_response_result_convertToJSON(product_add_200_response_result_t *product_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_add_200_response_result->product_id
    if(product_add_200_response_result->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_add_200_response_result->product_id) == NULL) {
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

product_add_200_response_result_t *product_add_200_response_result_parseFromJSON(cJSON *product_add_200_response_resultJSON){

    product_add_200_response_result_t *product_add_200_response_result_local_var = NULL;

    // product_add_200_response_result->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_add_200_response_resultJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }


    product_add_200_response_result_local_var = product_add_200_response_result_create_internal (
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL
        );

    return product_add_200_response_result_local_var;
end:
    return NULL;

}
