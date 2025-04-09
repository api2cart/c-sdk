#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_image_add_200_response_result.h"



static category_image_add_200_response_result_t *category_image_add_200_response_result_create_internal(
    char *image_path
    ) {
    category_image_add_200_response_result_t *category_image_add_200_response_result_local_var = malloc(sizeof(category_image_add_200_response_result_t));
    if (!category_image_add_200_response_result_local_var) {
        return NULL;
    }
    category_image_add_200_response_result_local_var->image_path = image_path;

    category_image_add_200_response_result_local_var->_library_owned = 1;
    return category_image_add_200_response_result_local_var;
}

__attribute__((deprecated)) category_image_add_200_response_result_t *category_image_add_200_response_result_create(
    char *image_path
    ) {
    return category_image_add_200_response_result_create_internal (
        image_path
        );
}

void category_image_add_200_response_result_free(category_image_add_200_response_result_t *category_image_add_200_response_result) {
    if(NULL == category_image_add_200_response_result){
        return ;
    }
    if(category_image_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_image_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (category_image_add_200_response_result->image_path) {
        free(category_image_add_200_response_result->image_path);
        category_image_add_200_response_result->image_path = NULL;
    }
    free(category_image_add_200_response_result);
}

cJSON *category_image_add_200_response_result_convertToJSON(category_image_add_200_response_result_t *category_image_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // category_image_add_200_response_result->image_path
    if(category_image_add_200_response_result->image_path) {
    if(cJSON_AddStringToObject(item, "image_path", category_image_add_200_response_result->image_path) == NULL) {
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

category_image_add_200_response_result_t *category_image_add_200_response_result_parseFromJSON(cJSON *category_image_add_200_response_resultJSON){

    category_image_add_200_response_result_t *category_image_add_200_response_result_local_var = NULL;

    // category_image_add_200_response_result->image_path
    cJSON *image_path = cJSON_GetObjectItemCaseSensitive(category_image_add_200_response_resultJSON, "image_path");
    if (cJSON_IsNull(image_path)) {
        image_path = NULL;
    }
    if (image_path) { 
    if(!cJSON_IsString(image_path) && !cJSON_IsNull(image_path))
    {
    goto end; //String
    }
    }


    category_image_add_200_response_result_local_var = category_image_add_200_response_result_create_internal (
        image_path && !cJSON_IsNull(image_path) ? strdup(image_path->valuestring) : NULL
        );

    return category_image_add_200_response_result_local_var;
end:
    return NULL;

}
