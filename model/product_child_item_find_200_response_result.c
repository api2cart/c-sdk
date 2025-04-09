#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_child_item_find_200_response_result.h"



static product_child_item_find_200_response_result_t *product_child_item_find_200_response_result_create_internal(
    any_type_t *children
    ) {
    product_child_item_find_200_response_result_t *product_child_item_find_200_response_result_local_var = malloc(sizeof(product_child_item_find_200_response_result_t));
    if (!product_child_item_find_200_response_result_local_var) {
        return NULL;
    }
    product_child_item_find_200_response_result_local_var->children = children;

    product_child_item_find_200_response_result_local_var->_library_owned = 1;
    return product_child_item_find_200_response_result_local_var;
}

__attribute__((deprecated)) product_child_item_find_200_response_result_t *product_child_item_find_200_response_result_create(
    any_type_t *children
    ) {
    return product_child_item_find_200_response_result_create_internal (
        children
        );
}

void product_child_item_find_200_response_result_free(product_child_item_find_200_response_result_t *product_child_item_find_200_response_result) {
    if(NULL == product_child_item_find_200_response_result){
        return ;
    }
    if(product_child_item_find_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_child_item_find_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_child_item_find_200_response_result->children) {
        _free(product_child_item_find_200_response_result->children);
        product_child_item_find_200_response_result->children = NULL;
    }
    free(product_child_item_find_200_response_result);
}

cJSON *product_child_item_find_200_response_result_convertToJSON(product_child_item_find_200_response_result_t *product_child_item_find_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_child_item_find_200_response_result->children
    if(product_child_item_find_200_response_result->children) {
    cJSON *children_local_JSON = _convertToJSON(product_child_item_find_200_response_result->children);
    if(children_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "children", children_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_child_item_find_200_response_result_t *product_child_item_find_200_response_result_parseFromJSON(cJSON *product_child_item_find_200_response_resultJSON){

    product_child_item_find_200_response_result_t *product_child_item_find_200_response_result_local_var = NULL;

    // define the local variable for product_child_item_find_200_response_result->children
    _t *children_local_nonprim = NULL;

    // product_child_item_find_200_response_result->children
    cJSON *children = cJSON_GetObjectItemCaseSensitive(product_child_item_find_200_response_resultJSON, "children");
    if (cJSON_IsNull(children)) {
        children = NULL;
    }
    if (children) { 
    children_local_nonprim = _parseFromJSON(children); //custom
    }


    product_child_item_find_200_response_result_local_var = product_child_item_find_200_response_result_create_internal (
        children ? children_local_nonprim : NULL
        );

    return product_child_item_find_200_response_result_local_var;
end:
    if (children_local_nonprim) {
        _free(children_local_nonprim);
        children_local_nonprim = NULL;
    }
    return NULL;

}
