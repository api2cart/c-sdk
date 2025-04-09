#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_return_update_order_products_inner.h"



static order_return_update_order_products_inner_t *order_return_update_order_products_inner_create_internal(
    char *order_product_id,
    int order_product_quantity,
    char *order_product_status,
    char *order_product_action_id
    ) {
    order_return_update_order_products_inner_t *order_return_update_order_products_inner_local_var = malloc(sizeof(order_return_update_order_products_inner_t));
    if (!order_return_update_order_products_inner_local_var) {
        return NULL;
    }
    order_return_update_order_products_inner_local_var->order_product_id = order_product_id;
    order_return_update_order_products_inner_local_var->order_product_quantity = order_product_quantity;
    order_return_update_order_products_inner_local_var->order_product_status = order_product_status;
    order_return_update_order_products_inner_local_var->order_product_action_id = order_product_action_id;

    order_return_update_order_products_inner_local_var->_library_owned = 1;
    return order_return_update_order_products_inner_local_var;
}

__attribute__((deprecated)) order_return_update_order_products_inner_t *order_return_update_order_products_inner_create(
    char *order_product_id,
    int order_product_quantity,
    char *order_product_status,
    char *order_product_action_id
    ) {
    return order_return_update_order_products_inner_create_internal (
        order_product_id,
        order_product_quantity,
        order_product_status,
        order_product_action_id
        );
}

void order_return_update_order_products_inner_free(order_return_update_order_products_inner_t *order_return_update_order_products_inner) {
    if(NULL == order_return_update_order_products_inner){
        return ;
    }
    if(order_return_update_order_products_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_return_update_order_products_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_return_update_order_products_inner->order_product_id) {
        free(order_return_update_order_products_inner->order_product_id);
        order_return_update_order_products_inner->order_product_id = NULL;
    }
    if (order_return_update_order_products_inner->order_product_status) {
        free(order_return_update_order_products_inner->order_product_status);
        order_return_update_order_products_inner->order_product_status = NULL;
    }
    if (order_return_update_order_products_inner->order_product_action_id) {
        free(order_return_update_order_products_inner->order_product_action_id);
        order_return_update_order_products_inner->order_product_action_id = NULL;
    }
    free(order_return_update_order_products_inner);
}

cJSON *order_return_update_order_products_inner_convertToJSON(order_return_update_order_products_inner_t *order_return_update_order_products_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_return_update_order_products_inner->order_product_id
    if (!order_return_update_order_products_inner->order_product_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_product_id", order_return_update_order_products_inner->order_product_id) == NULL) {
    goto fail; //String
    }


    // order_return_update_order_products_inner->order_product_quantity
    if (!order_return_update_order_products_inner->order_product_quantity) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "order_product_quantity", order_return_update_order_products_inner->order_product_quantity) == NULL) {
    goto fail; //Numeric
    }


    // order_return_update_order_products_inner->order_product_status
    if(order_return_update_order_products_inner->order_product_status) {
    if(cJSON_AddStringToObject(item, "order_product_status", order_return_update_order_products_inner->order_product_status) == NULL) {
    goto fail; //String
    }
    }


    // order_return_update_order_products_inner->order_product_action_id
    if (!order_return_update_order_products_inner->order_product_action_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_product_action_id", order_return_update_order_products_inner->order_product_action_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_return_update_order_products_inner_t *order_return_update_order_products_inner_parseFromJSON(cJSON *order_return_update_order_products_innerJSON){

    order_return_update_order_products_inner_t *order_return_update_order_products_inner_local_var = NULL;

    // order_return_update_order_products_inner->order_product_id
    cJSON *order_product_id = cJSON_GetObjectItemCaseSensitive(order_return_update_order_products_innerJSON, "order_product_id");
    if (cJSON_IsNull(order_product_id)) {
        order_product_id = NULL;
    }
    if (!order_product_id) {
        goto end;
    }

    
    if(!cJSON_IsString(order_product_id))
    {
    goto end; //String
    }

    // order_return_update_order_products_inner->order_product_quantity
    cJSON *order_product_quantity = cJSON_GetObjectItemCaseSensitive(order_return_update_order_products_innerJSON, "order_product_quantity");
    if (cJSON_IsNull(order_product_quantity)) {
        order_product_quantity = NULL;
    }
    if (!order_product_quantity) {
        goto end;
    }

    
    if(!cJSON_IsNumber(order_product_quantity))
    {
    goto end; //Numeric
    }

    // order_return_update_order_products_inner->order_product_status
    cJSON *order_product_status = cJSON_GetObjectItemCaseSensitive(order_return_update_order_products_innerJSON, "order_product_status");
    if (cJSON_IsNull(order_product_status)) {
        order_product_status = NULL;
    }
    if (order_product_status) { 
    if(!cJSON_IsString(order_product_status) && !cJSON_IsNull(order_product_status))
    {
    goto end; //String
    }
    }

    // order_return_update_order_products_inner->order_product_action_id
    cJSON *order_product_action_id = cJSON_GetObjectItemCaseSensitive(order_return_update_order_products_innerJSON, "order_product_action_id");
    if (cJSON_IsNull(order_product_action_id)) {
        order_product_action_id = NULL;
    }
    if (!order_product_action_id) {
        goto end;
    }

    
    if(!cJSON_IsString(order_product_action_id))
    {
    goto end; //String
    }


    order_return_update_order_products_inner_local_var = order_return_update_order_products_inner_create_internal (
        strdup(order_product_id->valuestring),
        order_product_quantity->valuedouble,
        order_product_status && !cJSON_IsNull(order_product_status) ? strdup(order_product_status->valuestring) : NULL,
        strdup(order_product_action_id->valuestring)
        );

    return order_return_update_order_products_inner_local_var;
end:
    return NULL;

}
