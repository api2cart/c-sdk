#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_batch_payload_inner_advanced_prices_inner.h"



static product_add_batch_payload_inner_advanced_prices_inner_t *product_add_batch_payload_inner_advanced_prices_inner_create_internal(
    double value,
    int group_id,
    double quantity,
    char *start_time,
    char *expire_time
    ) {
    product_add_batch_payload_inner_advanced_prices_inner_t *product_add_batch_payload_inner_advanced_prices_inner_local_var = malloc(sizeof(product_add_batch_payload_inner_advanced_prices_inner_t));
    if (!product_add_batch_payload_inner_advanced_prices_inner_local_var) {
        return NULL;
    }
    product_add_batch_payload_inner_advanced_prices_inner_local_var->value = value;
    product_add_batch_payload_inner_advanced_prices_inner_local_var->group_id = group_id;
    product_add_batch_payload_inner_advanced_prices_inner_local_var->quantity = quantity;
    product_add_batch_payload_inner_advanced_prices_inner_local_var->start_time = start_time;
    product_add_batch_payload_inner_advanced_prices_inner_local_var->expire_time = expire_time;

    product_add_batch_payload_inner_advanced_prices_inner_local_var->_library_owned = 1;
    return product_add_batch_payload_inner_advanced_prices_inner_local_var;
}

__attribute__((deprecated)) product_add_batch_payload_inner_advanced_prices_inner_t *product_add_batch_payload_inner_advanced_prices_inner_create(
    double value,
    int group_id,
    double quantity,
    char *start_time,
    char *expire_time
    ) {
    return product_add_batch_payload_inner_advanced_prices_inner_create_internal (
        value,
        group_id,
        quantity,
        start_time,
        expire_time
        );
}

void product_add_batch_payload_inner_advanced_prices_inner_free(product_add_batch_payload_inner_advanced_prices_inner_t *product_add_batch_payload_inner_advanced_prices_inner) {
    if(NULL == product_add_batch_payload_inner_advanced_prices_inner){
        return ;
    }
    if(product_add_batch_payload_inner_advanced_prices_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_batch_payload_inner_advanced_prices_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_batch_payload_inner_advanced_prices_inner->start_time) {
        free(product_add_batch_payload_inner_advanced_prices_inner->start_time);
        product_add_batch_payload_inner_advanced_prices_inner->start_time = NULL;
    }
    if (product_add_batch_payload_inner_advanced_prices_inner->expire_time) {
        free(product_add_batch_payload_inner_advanced_prices_inner->expire_time);
        product_add_batch_payload_inner_advanced_prices_inner->expire_time = NULL;
    }
    free(product_add_batch_payload_inner_advanced_prices_inner);
}

cJSON *product_add_batch_payload_inner_advanced_prices_inner_convertToJSON(product_add_batch_payload_inner_advanced_prices_inner_t *product_add_batch_payload_inner_advanced_prices_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_batch_payload_inner_advanced_prices_inner->value
    if (!product_add_batch_payload_inner_advanced_prices_inner->value) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "value", product_add_batch_payload_inner_advanced_prices_inner->value) == NULL) {
    goto fail; //Numeric
    }


    // product_add_batch_payload_inner_advanced_prices_inner->group_id
    if(product_add_batch_payload_inner_advanced_prices_inner->group_id) {
    if(cJSON_AddNumberToObject(item, "group_id", product_add_batch_payload_inner_advanced_prices_inner->group_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner_advanced_prices_inner->quantity
    if (!product_add_batch_payload_inner_advanced_prices_inner->quantity) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "quantity", product_add_batch_payload_inner_advanced_prices_inner->quantity) == NULL) {
    goto fail; //Numeric
    }


    // product_add_batch_payload_inner_advanced_prices_inner->start_time
    if(product_add_batch_payload_inner_advanced_prices_inner->start_time) {
    if(cJSON_AddStringToObject(item, "start_time", product_add_batch_payload_inner_advanced_prices_inner->start_time) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner_advanced_prices_inner->expire_time
    if(product_add_batch_payload_inner_advanced_prices_inner->expire_time) {
    if(cJSON_AddStringToObject(item, "expire_time", product_add_batch_payload_inner_advanced_prices_inner->expire_time) == NULL) {
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

product_add_batch_payload_inner_advanced_prices_inner_t *product_add_batch_payload_inner_advanced_prices_inner_parseFromJSON(cJSON *product_add_batch_payload_inner_advanced_prices_innerJSON){

    product_add_batch_payload_inner_advanced_prices_inner_t *product_add_batch_payload_inner_advanced_prices_inner_local_var = NULL;

    // product_add_batch_payload_inner_advanced_prices_inner->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_inner_advanced_prices_innerJSON, "value");
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

    // product_add_batch_payload_inner_advanced_prices_inner->group_id
    cJSON *group_id = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_inner_advanced_prices_innerJSON, "group_id");
    if (cJSON_IsNull(group_id)) {
        group_id = NULL;
    }
    if (group_id) { 
    if(!cJSON_IsNumber(group_id))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner_advanced_prices_inner->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_inner_advanced_prices_innerJSON, "quantity");
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

    // product_add_batch_payload_inner_advanced_prices_inner->start_time
    cJSON *start_time = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_inner_advanced_prices_innerJSON, "start_time");
    if (cJSON_IsNull(start_time)) {
        start_time = NULL;
    }
    if (start_time) { 
    if(!cJSON_IsString(start_time) && !cJSON_IsNull(start_time))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner_advanced_prices_inner->expire_time
    cJSON *expire_time = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_inner_advanced_prices_innerJSON, "expire_time");
    if (cJSON_IsNull(expire_time)) {
        expire_time = NULL;
    }
    if (expire_time) { 
    if(!cJSON_IsString(expire_time) && !cJSON_IsNull(expire_time))
    {
    goto end; //String
    }
    }


    product_add_batch_payload_inner_advanced_prices_inner_local_var = product_add_batch_payload_inner_advanced_prices_inner_create_internal (
        value->valuedouble,
        group_id ? group_id->valuedouble : 0,
        quantity->valuedouble,
        start_time && !cJSON_IsNull(start_time) ? strdup(start_time->valuestring) : NULL,
        expire_time && !cJSON_IsNull(expire_time) ? strdup(expire_time->valuestring) : NULL
        );

    return product_add_batch_payload_inner_advanced_prices_inner_local_var;
end:
    return NULL;

}
