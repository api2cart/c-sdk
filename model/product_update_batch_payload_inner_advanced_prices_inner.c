#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_update_batch_payload_inner_advanced_prices_inner.h"



static product_update_batch_payload_inner_advanced_prices_inner_t *product_update_batch_payload_inner_advanced_prices_inner_create_internal(
    double value,
    int group_id,
    double quantity
    ) {
    product_update_batch_payload_inner_advanced_prices_inner_t *product_update_batch_payload_inner_advanced_prices_inner_local_var = malloc(sizeof(product_update_batch_payload_inner_advanced_prices_inner_t));
    if (!product_update_batch_payload_inner_advanced_prices_inner_local_var) {
        return NULL;
    }
    product_update_batch_payload_inner_advanced_prices_inner_local_var->value = value;
    product_update_batch_payload_inner_advanced_prices_inner_local_var->group_id = group_id;
    product_update_batch_payload_inner_advanced_prices_inner_local_var->quantity = quantity;

    product_update_batch_payload_inner_advanced_prices_inner_local_var->_library_owned = 1;
    return product_update_batch_payload_inner_advanced_prices_inner_local_var;
}

__attribute__((deprecated)) product_update_batch_payload_inner_advanced_prices_inner_t *product_update_batch_payload_inner_advanced_prices_inner_create(
    double value,
    int group_id,
    double quantity
    ) {
    return product_update_batch_payload_inner_advanced_prices_inner_create_internal (
        value,
        group_id,
        quantity
        );
}

void product_update_batch_payload_inner_advanced_prices_inner_free(product_update_batch_payload_inner_advanced_prices_inner_t *product_update_batch_payload_inner_advanced_prices_inner) {
    if(NULL == product_update_batch_payload_inner_advanced_prices_inner){
        return ;
    }
    if(product_update_batch_payload_inner_advanced_prices_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_update_batch_payload_inner_advanced_prices_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    free(product_update_batch_payload_inner_advanced_prices_inner);
}

cJSON *product_update_batch_payload_inner_advanced_prices_inner_convertToJSON(product_update_batch_payload_inner_advanced_prices_inner_t *product_update_batch_payload_inner_advanced_prices_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_update_batch_payload_inner_advanced_prices_inner->value
    if (!product_update_batch_payload_inner_advanced_prices_inner->value) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "value", product_update_batch_payload_inner_advanced_prices_inner->value) == NULL) {
    goto fail; //Numeric
    }


    // product_update_batch_payload_inner_advanced_prices_inner->group_id
    if(product_update_batch_payload_inner_advanced_prices_inner->group_id) {
    if(cJSON_AddNumberToObject(item, "group_id", product_update_batch_payload_inner_advanced_prices_inner->group_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner_advanced_prices_inner->quantity
    if (!product_update_batch_payload_inner_advanced_prices_inner->quantity) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "quantity", product_update_batch_payload_inner_advanced_prices_inner->quantity) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_update_batch_payload_inner_advanced_prices_inner_t *product_update_batch_payload_inner_advanced_prices_inner_parseFromJSON(cJSON *product_update_batch_payload_inner_advanced_prices_innerJSON){

    product_update_batch_payload_inner_advanced_prices_inner_t *product_update_batch_payload_inner_advanced_prices_inner_local_var = NULL;

    // product_update_batch_payload_inner_advanced_prices_inner->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_inner_advanced_prices_innerJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (!value) {
        goto end;
    }

    
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }

    // product_update_batch_payload_inner_advanced_prices_inner->group_id
    cJSON *group_id = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_inner_advanced_prices_innerJSON, "group_id");
    if (cJSON_IsNull(group_id)) {
        group_id = NULL;
    }
    if (group_id) { 
    if(!cJSON_IsNumber(group_id))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner_advanced_prices_inner->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_inner_advanced_prices_innerJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (!quantity) {
        goto end;
    }

    
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }


    product_update_batch_payload_inner_advanced_prices_inner_local_var = product_update_batch_payload_inner_advanced_prices_inner_create_internal (
        value->valuedouble,
        group_id ? group_id->valuedouble : 0,
        quantity->valuedouble
        );

    return product_update_batch_payload_inner_advanced_prices_inner_local_var;
end:
    return NULL;

}
