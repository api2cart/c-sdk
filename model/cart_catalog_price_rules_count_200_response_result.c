#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_catalog_price_rules_count_200_response_result.h"



static cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result_create_internal(
    char *catalog_price_rules_count
    ) {
    cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result_local_var = malloc(sizeof(cart_catalog_price_rules_count_200_response_result_t));
    if (!cart_catalog_price_rules_count_200_response_result_local_var) {
        return NULL;
    }
    cart_catalog_price_rules_count_200_response_result_local_var->catalog_price_rules_count = catalog_price_rules_count;

    cart_catalog_price_rules_count_200_response_result_local_var->_library_owned = 1;
    return cart_catalog_price_rules_count_200_response_result_local_var;
}

__attribute__((deprecated)) cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result_create(
    char *catalog_price_rules_count
    ) {
    return cart_catalog_price_rules_count_200_response_result_create_internal (
        catalog_price_rules_count
        );
}

void cart_catalog_price_rules_count_200_response_result_free(cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result) {
    if(NULL == cart_catalog_price_rules_count_200_response_result){
        return ;
    }
    if(cart_catalog_price_rules_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_catalog_price_rules_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_catalog_price_rules_count_200_response_result->catalog_price_rules_count) {
        free(cart_catalog_price_rules_count_200_response_result->catalog_price_rules_count);
        cart_catalog_price_rules_count_200_response_result->catalog_price_rules_count = NULL;
    }
    free(cart_catalog_price_rules_count_200_response_result);
}

cJSON *cart_catalog_price_rules_count_200_response_result_convertToJSON(cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_catalog_price_rules_count_200_response_result->catalog_price_rules_count
    if(cart_catalog_price_rules_count_200_response_result->catalog_price_rules_count) {
    if(cJSON_AddStringToObject(item, "catalog_price_rules_count", cart_catalog_price_rules_count_200_response_result->catalog_price_rules_count) == NULL) {
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

cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result_parseFromJSON(cJSON *cart_catalog_price_rules_count_200_response_resultJSON){

    cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result_local_var = NULL;

    // cart_catalog_price_rules_count_200_response_result->catalog_price_rules_count
    cJSON *catalog_price_rules_count = cJSON_GetObjectItemCaseSensitive(cart_catalog_price_rules_count_200_response_resultJSON, "catalog_price_rules_count");
    if (cJSON_IsNull(catalog_price_rules_count)) {
        catalog_price_rules_count = NULL;
    }
    if (catalog_price_rules_count) { 
    if(!cJSON_IsString(catalog_price_rules_count) && !cJSON_IsNull(catalog_price_rules_count))
    {
    goto end; //String
    }
    }


    cart_catalog_price_rules_count_200_response_result_local_var = cart_catalog_price_rules_count_200_response_result_create_internal (
        catalog_price_rules_count && !cJSON_IsNull(catalog_price_rules_count) ? strdup(catalog_price_rules_count->valuestring) : NULL
        );

    return cart_catalog_price_rules_count_200_response_result_local_var;
end:
    return NULL;

}
