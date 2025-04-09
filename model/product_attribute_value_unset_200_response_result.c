#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_attribute_value_unset_200_response_result.h"



static product_attribute_value_unset_200_response_result_t *product_attribute_value_unset_200_response_result_create_internal(
    int success
    ) {
    product_attribute_value_unset_200_response_result_t *product_attribute_value_unset_200_response_result_local_var = malloc(sizeof(product_attribute_value_unset_200_response_result_t));
    if (!product_attribute_value_unset_200_response_result_local_var) {
        return NULL;
    }
    product_attribute_value_unset_200_response_result_local_var->success = success;

    product_attribute_value_unset_200_response_result_local_var->_library_owned = 1;
    return product_attribute_value_unset_200_response_result_local_var;
}

__attribute__((deprecated)) product_attribute_value_unset_200_response_result_t *product_attribute_value_unset_200_response_result_create(
    int success
    ) {
    return product_attribute_value_unset_200_response_result_create_internal (
        success
        );
}

void product_attribute_value_unset_200_response_result_free(product_attribute_value_unset_200_response_result_t *product_attribute_value_unset_200_response_result) {
    if(NULL == product_attribute_value_unset_200_response_result){
        return ;
    }
    if(product_attribute_value_unset_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_attribute_value_unset_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(product_attribute_value_unset_200_response_result);
}

cJSON *product_attribute_value_unset_200_response_result_convertToJSON(product_attribute_value_unset_200_response_result_t *product_attribute_value_unset_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_attribute_value_unset_200_response_result->success
    if(product_attribute_value_unset_200_response_result->success) {
    if(cJSON_AddBoolToObject(item, "success", product_attribute_value_unset_200_response_result->success) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_attribute_value_unset_200_response_result_t *product_attribute_value_unset_200_response_result_parseFromJSON(cJSON *product_attribute_value_unset_200_response_resultJSON){

    product_attribute_value_unset_200_response_result_t *product_attribute_value_unset_200_response_result_local_var = NULL;

    // product_attribute_value_unset_200_response_result->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(product_attribute_value_unset_200_response_resultJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }


    product_attribute_value_unset_200_response_result_local_var = product_attribute_value_unset_200_response_result_create_internal (
        success ? success->valueint : 0
        );

    return product_attribute_value_unset_200_response_result_local_var;
end:
    return NULL;

}
