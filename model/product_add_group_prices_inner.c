#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_group_prices_inner.h"



static product_add_group_prices_inner_t *product_add_group_prices_inner_create_internal(
    char *group_id,
    double price
    ) {
    product_add_group_prices_inner_t *product_add_group_prices_inner_local_var = malloc(sizeof(product_add_group_prices_inner_t));
    if (!product_add_group_prices_inner_local_var) {
        return NULL;
    }
    product_add_group_prices_inner_local_var->group_id = group_id;
    product_add_group_prices_inner_local_var->price = price;

    product_add_group_prices_inner_local_var->_library_owned = 1;
    return product_add_group_prices_inner_local_var;
}

__attribute__((deprecated)) product_add_group_prices_inner_t *product_add_group_prices_inner_create(
    char *group_id,
    double price
    ) {
    return product_add_group_prices_inner_create_internal (
        group_id,
        price
        );
}

void product_add_group_prices_inner_free(product_add_group_prices_inner_t *product_add_group_prices_inner) {
    if(NULL == product_add_group_prices_inner){
        return ;
    }
    if(product_add_group_prices_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_group_prices_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_group_prices_inner->group_id) {
        free(product_add_group_prices_inner->group_id);
        product_add_group_prices_inner->group_id = NULL;
    }
    free(product_add_group_prices_inner);
}

cJSON *product_add_group_prices_inner_convertToJSON(product_add_group_prices_inner_t *product_add_group_prices_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_group_prices_inner->group_id
    if(product_add_group_prices_inner->group_id) {
    if(cJSON_AddStringToObject(item, "group_id", product_add_group_prices_inner->group_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add_group_prices_inner->price
    if(product_add_group_prices_inner->price) {
    if(cJSON_AddNumberToObject(item, "price", product_add_group_prices_inner->price) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_group_prices_inner_t *product_add_group_prices_inner_parseFromJSON(cJSON *product_add_group_prices_innerJSON){

    product_add_group_prices_inner_t *product_add_group_prices_inner_local_var = NULL;

    // product_add_group_prices_inner->group_id
    cJSON *group_id = cJSON_GetObjectItemCaseSensitive(product_add_group_prices_innerJSON, "group_id");
    if (cJSON_IsNull(group_id)) {
        group_id = NULL;
    }
    if (group_id) { 
    if(!cJSON_IsString(group_id) && !cJSON_IsNull(group_id))
    {
    goto end; //String
    }
    }

    // product_add_group_prices_inner->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_add_group_prices_innerJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }


    product_add_group_prices_inner_local_var = product_add_group_prices_inner_create_internal (
        group_id && !cJSON_IsNull(group_id) ? strdup(group_id->valuestring) : NULL,
        price ? price->valuedouble : 0
        );

    return product_add_group_prices_inner_local_var;
end:
    return NULL;

}
