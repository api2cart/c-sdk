#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "basket_item_add_200_response_result.h"



static basket_item_add_200_response_result_t *basket_item_add_200_response_result_create_internal(
    int added
    ) {
    basket_item_add_200_response_result_t *basket_item_add_200_response_result_local_var = malloc(sizeof(basket_item_add_200_response_result_t));
    if (!basket_item_add_200_response_result_local_var) {
        return NULL;
    }
    basket_item_add_200_response_result_local_var->added = added;

    basket_item_add_200_response_result_local_var->_library_owned = 1;
    return basket_item_add_200_response_result_local_var;
}

__attribute__((deprecated)) basket_item_add_200_response_result_t *basket_item_add_200_response_result_create(
    int added
    ) {
    return basket_item_add_200_response_result_create_internal (
        added
        );
}

void basket_item_add_200_response_result_free(basket_item_add_200_response_result_t *basket_item_add_200_response_result) {
    if(NULL == basket_item_add_200_response_result){
        return ;
    }
    if(basket_item_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "basket_item_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(basket_item_add_200_response_result);
}

cJSON *basket_item_add_200_response_result_convertToJSON(basket_item_add_200_response_result_t *basket_item_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // basket_item_add_200_response_result->added
    if(basket_item_add_200_response_result->added) {
    if(cJSON_AddBoolToObject(item, "added", basket_item_add_200_response_result->added) == NULL) {
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

basket_item_add_200_response_result_t *basket_item_add_200_response_result_parseFromJSON(cJSON *basket_item_add_200_response_resultJSON){

    basket_item_add_200_response_result_t *basket_item_add_200_response_result_local_var = NULL;

    // basket_item_add_200_response_result->added
    cJSON *added = cJSON_GetObjectItemCaseSensitive(basket_item_add_200_response_resultJSON, "added");
    if (cJSON_IsNull(added)) {
        added = NULL;
    }
    if (added) { 
    if(!cJSON_IsBool(added))
    {
    goto end; //Bool
    }
    }


    basket_item_add_200_response_result_local_var = basket_item_add_200_response_result_create_internal (
        added ? added->valueint : 0
        );

    return basket_item_add_200_response_result_local_var;
end:
    return NULL;

}
