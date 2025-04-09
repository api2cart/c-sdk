#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_manufacturer_add_200_response_result.h"



static product_manufacturer_add_200_response_result_t *product_manufacturer_add_200_response_result_create_internal(
    char *manufacturer_id
    ) {
    product_manufacturer_add_200_response_result_t *product_manufacturer_add_200_response_result_local_var = malloc(sizeof(product_manufacturer_add_200_response_result_t));
    if (!product_manufacturer_add_200_response_result_local_var) {
        return NULL;
    }
    product_manufacturer_add_200_response_result_local_var->manufacturer_id = manufacturer_id;

    product_manufacturer_add_200_response_result_local_var->_library_owned = 1;
    return product_manufacturer_add_200_response_result_local_var;
}

__attribute__((deprecated)) product_manufacturer_add_200_response_result_t *product_manufacturer_add_200_response_result_create(
    char *manufacturer_id
    ) {
    return product_manufacturer_add_200_response_result_create_internal (
        manufacturer_id
        );
}

void product_manufacturer_add_200_response_result_free(product_manufacturer_add_200_response_result_t *product_manufacturer_add_200_response_result) {
    if(NULL == product_manufacturer_add_200_response_result){
        return ;
    }
    if(product_manufacturer_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_manufacturer_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_manufacturer_add_200_response_result->manufacturer_id) {
        free(product_manufacturer_add_200_response_result->manufacturer_id);
        product_manufacturer_add_200_response_result->manufacturer_id = NULL;
    }
    free(product_manufacturer_add_200_response_result);
}

cJSON *product_manufacturer_add_200_response_result_convertToJSON(product_manufacturer_add_200_response_result_t *product_manufacturer_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_manufacturer_add_200_response_result->manufacturer_id
    if(product_manufacturer_add_200_response_result->manufacturer_id) {
    if(cJSON_AddStringToObject(item, "manufacturer_id", product_manufacturer_add_200_response_result->manufacturer_id) == NULL) {
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

product_manufacturer_add_200_response_result_t *product_manufacturer_add_200_response_result_parseFromJSON(cJSON *product_manufacturer_add_200_response_resultJSON){

    product_manufacturer_add_200_response_result_t *product_manufacturer_add_200_response_result_local_var = NULL;

    // product_manufacturer_add_200_response_result->manufacturer_id
    cJSON *manufacturer_id = cJSON_GetObjectItemCaseSensitive(product_manufacturer_add_200_response_resultJSON, "manufacturer_id");
    if (cJSON_IsNull(manufacturer_id)) {
        manufacturer_id = NULL;
    }
    if (manufacturer_id) { 
    if(!cJSON_IsString(manufacturer_id) && !cJSON_IsNull(manufacturer_id))
    {
    goto end; //String
    }
    }


    product_manufacturer_add_200_response_result_local_var = product_manufacturer_add_200_response_result_create_internal (
        manufacturer_id && !cJSON_IsNull(manufacturer_id) ? strdup(manufacturer_id->valuestring) : NULL
        );

    return product_manufacturer_add_200_response_result_local_var;
end:
    return NULL;

}
