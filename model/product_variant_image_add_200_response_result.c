#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_image_add_200_response_result.h"



static product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result_create_internal(
    char *id,
    char *image_path
    ) {
    product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result_local_var = malloc(sizeof(product_variant_image_add_200_response_result_t));
    if (!product_variant_image_add_200_response_result_local_var) {
        return NULL;
    }
    product_variant_image_add_200_response_result_local_var->id = id;
    product_variant_image_add_200_response_result_local_var->image_path = image_path;

    product_variant_image_add_200_response_result_local_var->_library_owned = 1;
    return product_variant_image_add_200_response_result_local_var;
}

__attribute__((deprecated)) product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result_create(
    char *id,
    char *image_path
    ) {
    return product_variant_image_add_200_response_result_create_internal (
        id,
        image_path
        );
}

void product_variant_image_add_200_response_result_free(product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result) {
    if(NULL == product_variant_image_add_200_response_result){
        return ;
    }
    if(product_variant_image_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_image_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_image_add_200_response_result->id) {
        free(product_variant_image_add_200_response_result->id);
        product_variant_image_add_200_response_result->id = NULL;
    }
    if (product_variant_image_add_200_response_result->image_path) {
        free(product_variant_image_add_200_response_result->image_path);
        product_variant_image_add_200_response_result->image_path = NULL;
    }
    free(product_variant_image_add_200_response_result);
}

cJSON *product_variant_image_add_200_response_result_convertToJSON(product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_image_add_200_response_result->id
    if(product_variant_image_add_200_response_result->id) {
    if(cJSON_AddStringToObject(item, "id", product_variant_image_add_200_response_result->id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_image_add_200_response_result->image_path
    if(product_variant_image_add_200_response_result->image_path) {
    if(cJSON_AddStringToObject(item, "image_path", product_variant_image_add_200_response_result->image_path) == NULL) {
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

product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result_parseFromJSON(cJSON *product_variant_image_add_200_response_resultJSON){

    product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result_local_var = NULL;

    // product_variant_image_add_200_response_result->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_variant_image_add_200_response_resultJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_variant_image_add_200_response_result->image_path
    cJSON *image_path = cJSON_GetObjectItemCaseSensitive(product_variant_image_add_200_response_resultJSON, "image_path");
    if (cJSON_IsNull(image_path)) {
        image_path = NULL;
    }
    if (image_path) { 
    if(!cJSON_IsString(image_path) && !cJSON_IsNull(image_path))
    {
    goto end; //String
    }
    }


    product_variant_image_add_200_response_result_local_var = product_variant_image_add_200_response_result_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        image_path && !cJSON_IsNull(image_path) ? strdup(image_path->valuestring) : NULL
        );

    return product_variant_image_add_200_response_result_local_var;
end:
    return NULL;

}
