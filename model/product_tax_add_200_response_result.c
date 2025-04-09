#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_tax_add_200_response_result.h"



static product_tax_add_200_response_result_t *product_tax_add_200_response_result_create_internal(
    char *tax_class_id
    ) {
    product_tax_add_200_response_result_t *product_tax_add_200_response_result_local_var = malloc(sizeof(product_tax_add_200_response_result_t));
    if (!product_tax_add_200_response_result_local_var) {
        return NULL;
    }
    product_tax_add_200_response_result_local_var->tax_class_id = tax_class_id;

    product_tax_add_200_response_result_local_var->_library_owned = 1;
    return product_tax_add_200_response_result_local_var;
}

__attribute__((deprecated)) product_tax_add_200_response_result_t *product_tax_add_200_response_result_create(
    char *tax_class_id
    ) {
    return product_tax_add_200_response_result_create_internal (
        tax_class_id
        );
}

void product_tax_add_200_response_result_free(product_tax_add_200_response_result_t *product_tax_add_200_response_result) {
    if(NULL == product_tax_add_200_response_result){
        return ;
    }
    if(product_tax_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_tax_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_tax_add_200_response_result->tax_class_id) {
        free(product_tax_add_200_response_result->tax_class_id);
        product_tax_add_200_response_result->tax_class_id = NULL;
    }
    free(product_tax_add_200_response_result);
}

cJSON *product_tax_add_200_response_result_convertToJSON(product_tax_add_200_response_result_t *product_tax_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_tax_add_200_response_result->tax_class_id
    if(product_tax_add_200_response_result->tax_class_id) {
    if(cJSON_AddStringToObject(item, "tax_class_id", product_tax_add_200_response_result->tax_class_id) == NULL) {
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

product_tax_add_200_response_result_t *product_tax_add_200_response_result_parseFromJSON(cJSON *product_tax_add_200_response_resultJSON){

    product_tax_add_200_response_result_t *product_tax_add_200_response_result_local_var = NULL;

    // product_tax_add_200_response_result->tax_class_id
    cJSON *tax_class_id = cJSON_GetObjectItemCaseSensitive(product_tax_add_200_response_resultJSON, "tax_class_id");
    if (cJSON_IsNull(tax_class_id)) {
        tax_class_id = NULL;
    }
    if (tax_class_id) { 
    if(!cJSON_IsString(tax_class_id) && !cJSON_IsNull(tax_class_id))
    {
    goto end; //String
    }
    }


    product_tax_add_200_response_result_local_var = product_tax_add_200_response_result_create_internal (
        tax_class_id && !cJSON_IsNull(tax_class_id) ? strdup(tax_class_id->valuestring) : NULL
        );

    return product_tax_add_200_response_result_local_var;
end:
    return NULL;

}
