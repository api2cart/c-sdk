#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_image_update_200_response_result.h"



static product_image_update_200_response_result_t *product_image_update_200_response_result_create_internal(
    char *updated
    ) {
    product_image_update_200_response_result_t *product_image_update_200_response_result_local_var = malloc(sizeof(product_image_update_200_response_result_t));
    if (!product_image_update_200_response_result_local_var) {
        return NULL;
    }
    product_image_update_200_response_result_local_var->updated = updated;

    product_image_update_200_response_result_local_var->_library_owned = 1;
    return product_image_update_200_response_result_local_var;
}

__attribute__((deprecated)) product_image_update_200_response_result_t *product_image_update_200_response_result_create(
    char *updated
    ) {
    return product_image_update_200_response_result_create_internal (
        updated
        );
}

void product_image_update_200_response_result_free(product_image_update_200_response_result_t *product_image_update_200_response_result) {
    if(NULL == product_image_update_200_response_result){
        return ;
    }
    if(product_image_update_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_image_update_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_image_update_200_response_result->updated) {
        free(product_image_update_200_response_result->updated);
        product_image_update_200_response_result->updated = NULL;
    }
    free(product_image_update_200_response_result);
}

cJSON *product_image_update_200_response_result_convertToJSON(product_image_update_200_response_result_t *product_image_update_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_image_update_200_response_result->updated
    if(product_image_update_200_response_result->updated) {
    if(cJSON_AddStringToObject(item, "updated", product_image_update_200_response_result->updated) == NULL) {
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

product_image_update_200_response_result_t *product_image_update_200_response_result_parseFromJSON(cJSON *product_image_update_200_response_resultJSON){

    product_image_update_200_response_result_t *product_image_update_200_response_result_local_var = NULL;

    // product_image_update_200_response_result->updated
    cJSON *updated = cJSON_GetObjectItemCaseSensitive(product_image_update_200_response_resultJSON, "updated");
    if (cJSON_IsNull(updated)) {
        updated = NULL;
    }
    if (updated) { 
    if(!cJSON_IsString(updated) && !cJSON_IsNull(updated))
    {
    goto end; //String
    }
    }


    product_image_update_200_response_result_local_var = product_image_update_200_response_result_create_internal (
        updated && !cJSON_IsNull(updated) ? strdup(updated->valuestring) : NULL
        );

    return product_image_update_200_response_result_local_var;
end:
    return NULL;

}
