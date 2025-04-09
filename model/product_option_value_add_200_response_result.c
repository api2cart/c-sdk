#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_option_value_add_200_response_result.h"



static product_option_value_add_200_response_result_t *product_option_value_add_200_response_result_create_internal(
    char *option_value_id
    ) {
    product_option_value_add_200_response_result_t *product_option_value_add_200_response_result_local_var = malloc(sizeof(product_option_value_add_200_response_result_t));
    if (!product_option_value_add_200_response_result_local_var) {
        return NULL;
    }
    product_option_value_add_200_response_result_local_var->option_value_id = option_value_id;

    product_option_value_add_200_response_result_local_var->_library_owned = 1;
    return product_option_value_add_200_response_result_local_var;
}

__attribute__((deprecated)) product_option_value_add_200_response_result_t *product_option_value_add_200_response_result_create(
    char *option_value_id
    ) {
    return product_option_value_add_200_response_result_create_internal (
        option_value_id
        );
}

void product_option_value_add_200_response_result_free(product_option_value_add_200_response_result_t *product_option_value_add_200_response_result) {
    if(NULL == product_option_value_add_200_response_result){
        return ;
    }
    if(product_option_value_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_option_value_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_option_value_add_200_response_result->option_value_id) {
        free(product_option_value_add_200_response_result->option_value_id);
        product_option_value_add_200_response_result->option_value_id = NULL;
    }
    free(product_option_value_add_200_response_result);
}

cJSON *product_option_value_add_200_response_result_convertToJSON(product_option_value_add_200_response_result_t *product_option_value_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_option_value_add_200_response_result->option_value_id
    if(product_option_value_add_200_response_result->option_value_id) {
    if(cJSON_AddStringToObject(item, "option_value_id", product_option_value_add_200_response_result->option_value_id) == NULL) {
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

product_option_value_add_200_response_result_t *product_option_value_add_200_response_result_parseFromJSON(cJSON *product_option_value_add_200_response_resultJSON){

    product_option_value_add_200_response_result_t *product_option_value_add_200_response_result_local_var = NULL;

    // product_option_value_add_200_response_result->option_value_id
    cJSON *option_value_id = cJSON_GetObjectItemCaseSensitive(product_option_value_add_200_response_resultJSON, "option_value_id");
    if (cJSON_IsNull(option_value_id)) {
        option_value_id = NULL;
    }
    if (option_value_id) { 
    if(!cJSON_IsString(option_value_id) && !cJSON_IsNull(option_value_id))
    {
    goto end; //String
    }
    }


    product_option_value_add_200_response_result_local_var = product_option_value_add_200_response_result_create_internal (
        option_value_id && !cJSON_IsNull(option_value_id) ? strdup(option_value_id->valuestring) : NULL
        );

    return product_option_value_add_200_response_result_local_var;
end:
    return NULL;

}
