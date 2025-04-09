#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_delete_200_response_result.h"



static category_delete_200_response_result_t *category_delete_200_response_result_create_internal(
    int delete_items
    ) {
    category_delete_200_response_result_t *category_delete_200_response_result_local_var = malloc(sizeof(category_delete_200_response_result_t));
    if (!category_delete_200_response_result_local_var) {
        return NULL;
    }
    category_delete_200_response_result_local_var->delete_items = delete_items;

    category_delete_200_response_result_local_var->_library_owned = 1;
    return category_delete_200_response_result_local_var;
}

__attribute__((deprecated)) category_delete_200_response_result_t *category_delete_200_response_result_create(
    int delete_items
    ) {
    return category_delete_200_response_result_create_internal (
        delete_items
        );
}

void category_delete_200_response_result_free(category_delete_200_response_result_t *category_delete_200_response_result) {
    if(NULL == category_delete_200_response_result){
        return ;
    }
    if(category_delete_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_delete_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(category_delete_200_response_result);
}

cJSON *category_delete_200_response_result_convertToJSON(category_delete_200_response_result_t *category_delete_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // category_delete_200_response_result->delete_items
    if(category_delete_200_response_result->delete_items) {
    if(cJSON_AddBoolToObject(item, "delete_items", category_delete_200_response_result->delete_items) == NULL) {
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

category_delete_200_response_result_t *category_delete_200_response_result_parseFromJSON(cJSON *category_delete_200_response_resultJSON){

    category_delete_200_response_result_t *category_delete_200_response_result_local_var = NULL;

    // category_delete_200_response_result->delete_items
    cJSON *delete_items = cJSON_GetObjectItemCaseSensitive(category_delete_200_response_resultJSON, "delete_items");
    if (cJSON_IsNull(delete_items)) {
        delete_items = NULL;
    }
    if (delete_items) { 
    if(!cJSON_IsBool(delete_items))
    {
    goto end; //Bool
    }
    }


    category_delete_200_response_result_local_var = category_delete_200_response_result_create_internal (
        delete_items ? delete_items->valueint : 0
        );

    return category_delete_200_response_result_local_var;
end:
    return NULL;

}
