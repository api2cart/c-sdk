#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_return_add_order_products_inner.h"



static order_return_add_order_products_inner_t *order_return_add_order_products_inner_create_internal(
    char *order_product_id,
    int order_product_quantity,
    char *order_product_reason_id,
    char *order_product_action_id,
    char *order_product_customer_comment,
    char *order_product_handling_status,
    char *order_product_condition,
    char *order_product_reason,
    char *order_product_status
    ) {
    order_return_add_order_products_inner_t *order_return_add_order_products_inner_local_var = malloc(sizeof(order_return_add_order_products_inner_t));
    if (!order_return_add_order_products_inner_local_var) {
        return NULL;
    }
    order_return_add_order_products_inner_local_var->order_product_id = order_product_id;
    order_return_add_order_products_inner_local_var->order_product_quantity = order_product_quantity;
    order_return_add_order_products_inner_local_var->order_product_reason_id = order_product_reason_id;
    order_return_add_order_products_inner_local_var->order_product_action_id = order_product_action_id;
    order_return_add_order_products_inner_local_var->order_product_customer_comment = order_product_customer_comment;
    order_return_add_order_products_inner_local_var->order_product_handling_status = order_product_handling_status;
    order_return_add_order_products_inner_local_var->order_product_condition = order_product_condition;
    order_return_add_order_products_inner_local_var->order_product_reason = order_product_reason;
    order_return_add_order_products_inner_local_var->order_product_status = order_product_status;

    order_return_add_order_products_inner_local_var->_library_owned = 1;
    return order_return_add_order_products_inner_local_var;
}

__attribute__((deprecated)) order_return_add_order_products_inner_t *order_return_add_order_products_inner_create(
    char *order_product_id,
    int order_product_quantity,
    char *order_product_reason_id,
    char *order_product_action_id,
    char *order_product_customer_comment,
    char *order_product_handling_status,
    char *order_product_condition,
    char *order_product_reason,
    char *order_product_status
    ) {
    return order_return_add_order_products_inner_create_internal (
        order_product_id,
        order_product_quantity,
        order_product_reason_id,
        order_product_action_id,
        order_product_customer_comment,
        order_product_handling_status,
        order_product_condition,
        order_product_reason,
        order_product_status
        );
}

void order_return_add_order_products_inner_free(order_return_add_order_products_inner_t *order_return_add_order_products_inner) {
    if(NULL == order_return_add_order_products_inner){
        return ;
    }
    if(order_return_add_order_products_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_return_add_order_products_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_return_add_order_products_inner->order_product_id) {
        free(order_return_add_order_products_inner->order_product_id);
        order_return_add_order_products_inner->order_product_id = NULL;
    }
    if (order_return_add_order_products_inner->order_product_reason_id) {
        free(order_return_add_order_products_inner->order_product_reason_id);
        order_return_add_order_products_inner->order_product_reason_id = NULL;
    }
    if (order_return_add_order_products_inner->order_product_action_id) {
        free(order_return_add_order_products_inner->order_product_action_id);
        order_return_add_order_products_inner->order_product_action_id = NULL;
    }
    if (order_return_add_order_products_inner->order_product_customer_comment) {
        free(order_return_add_order_products_inner->order_product_customer_comment);
        order_return_add_order_products_inner->order_product_customer_comment = NULL;
    }
    if (order_return_add_order_products_inner->order_product_handling_status) {
        free(order_return_add_order_products_inner->order_product_handling_status);
        order_return_add_order_products_inner->order_product_handling_status = NULL;
    }
    if (order_return_add_order_products_inner->order_product_condition) {
        free(order_return_add_order_products_inner->order_product_condition);
        order_return_add_order_products_inner->order_product_condition = NULL;
    }
    if (order_return_add_order_products_inner->order_product_reason) {
        free(order_return_add_order_products_inner->order_product_reason);
        order_return_add_order_products_inner->order_product_reason = NULL;
    }
    if (order_return_add_order_products_inner->order_product_status) {
        free(order_return_add_order_products_inner->order_product_status);
        order_return_add_order_products_inner->order_product_status = NULL;
    }
    free(order_return_add_order_products_inner);
}

cJSON *order_return_add_order_products_inner_convertToJSON(order_return_add_order_products_inner_t *order_return_add_order_products_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_return_add_order_products_inner->order_product_id
    if (!order_return_add_order_products_inner->order_product_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_product_id", order_return_add_order_products_inner->order_product_id) == NULL) {
    goto fail; //String
    }


    // order_return_add_order_products_inner->order_product_quantity
    if (!order_return_add_order_products_inner->order_product_quantity) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "order_product_quantity", order_return_add_order_products_inner->order_product_quantity) == NULL) {
    goto fail; //Numeric
    }


    // order_return_add_order_products_inner->order_product_reason_id
    if (!order_return_add_order_products_inner->order_product_reason_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_product_reason_id", order_return_add_order_products_inner->order_product_reason_id) == NULL) {
    goto fail; //String
    }


    // order_return_add_order_products_inner->order_product_action_id
    if (!order_return_add_order_products_inner->order_product_action_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_product_action_id", order_return_add_order_products_inner->order_product_action_id) == NULL) {
    goto fail; //String
    }


    // order_return_add_order_products_inner->order_product_customer_comment
    if(order_return_add_order_products_inner->order_product_customer_comment) {
    if(cJSON_AddStringToObject(item, "order_product_customer_comment", order_return_add_order_products_inner->order_product_customer_comment) == NULL) {
    goto fail; //String
    }
    }


    // order_return_add_order_products_inner->order_product_handling_status
    if(order_return_add_order_products_inner->order_product_handling_status) {
    if(cJSON_AddStringToObject(item, "order_product_handling_status", order_return_add_order_products_inner->order_product_handling_status) == NULL) {
    goto fail; //String
    }
    }


    // order_return_add_order_products_inner->order_product_condition
    if(order_return_add_order_products_inner->order_product_condition) {
    if(cJSON_AddStringToObject(item, "order_product_condition", order_return_add_order_products_inner->order_product_condition) == NULL) {
    goto fail; //String
    }
    }


    // order_return_add_order_products_inner->order_product_reason
    if(order_return_add_order_products_inner->order_product_reason) {
    if(cJSON_AddStringToObject(item, "order_product_reason", order_return_add_order_products_inner->order_product_reason) == NULL) {
    goto fail; //String
    }
    }


    // order_return_add_order_products_inner->order_product_status
    if(order_return_add_order_products_inner->order_product_status) {
    if(cJSON_AddStringToObject(item, "order_product_status", order_return_add_order_products_inner->order_product_status) == NULL) {
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

order_return_add_order_products_inner_t *order_return_add_order_products_inner_parseFromJSON(cJSON *order_return_add_order_products_innerJSON){

    order_return_add_order_products_inner_t *order_return_add_order_products_inner_local_var = NULL;

    // order_return_add_order_products_inner->order_product_id
    cJSON *order_product_id = cJSON_GetObjectItemCaseSensitive(order_return_add_order_products_innerJSON, "order_product_id");
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

    // order_return_add_order_products_inner->order_product_quantity
    cJSON *order_product_quantity = cJSON_GetObjectItemCaseSensitive(order_return_add_order_products_innerJSON, "order_product_quantity");
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

    // order_return_add_order_products_inner->order_product_reason_id
    cJSON *order_product_reason_id = cJSON_GetObjectItemCaseSensitive(order_return_add_order_products_innerJSON, "order_product_reason_id");
    if (cJSON_IsNull(order_product_reason_id)) {
        order_product_reason_id = NULL;
    }
    if (!order_product_reason_id) {
        goto end;
    }

    
    if(!cJSON_IsString(order_product_reason_id))
    {
    goto end; //String
    }

    // order_return_add_order_products_inner->order_product_action_id
    cJSON *order_product_action_id = cJSON_GetObjectItemCaseSensitive(order_return_add_order_products_innerJSON, "order_product_action_id");
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

    // order_return_add_order_products_inner->order_product_customer_comment
    cJSON *order_product_customer_comment = cJSON_GetObjectItemCaseSensitive(order_return_add_order_products_innerJSON, "order_product_customer_comment");
    if (cJSON_IsNull(order_product_customer_comment)) {
        order_product_customer_comment = NULL;
    }
    if (order_product_customer_comment) { 
    if(!cJSON_IsString(order_product_customer_comment) && !cJSON_IsNull(order_product_customer_comment))
    {
    goto end; //String
    }
    }

    // order_return_add_order_products_inner->order_product_handling_status
    cJSON *order_product_handling_status = cJSON_GetObjectItemCaseSensitive(order_return_add_order_products_innerJSON, "order_product_handling_status");
    if (cJSON_IsNull(order_product_handling_status)) {
        order_product_handling_status = NULL;
    }
    if (order_product_handling_status) { 
    if(!cJSON_IsString(order_product_handling_status) && !cJSON_IsNull(order_product_handling_status))
    {
    goto end; //String
    }
    }

    // order_return_add_order_products_inner->order_product_condition
    cJSON *order_product_condition = cJSON_GetObjectItemCaseSensitive(order_return_add_order_products_innerJSON, "order_product_condition");
    if (cJSON_IsNull(order_product_condition)) {
        order_product_condition = NULL;
    }
    if (order_product_condition) { 
    if(!cJSON_IsString(order_product_condition) && !cJSON_IsNull(order_product_condition))
    {
    goto end; //String
    }
    }

    // order_return_add_order_products_inner->order_product_reason
    cJSON *order_product_reason = cJSON_GetObjectItemCaseSensitive(order_return_add_order_products_innerJSON, "order_product_reason");
    if (cJSON_IsNull(order_product_reason)) {
        order_product_reason = NULL;
    }
    if (order_product_reason) { 
    if(!cJSON_IsString(order_product_reason) && !cJSON_IsNull(order_product_reason))
    {
    goto end; //String
    }
    }

    // order_return_add_order_products_inner->order_product_status
    cJSON *order_product_status = cJSON_GetObjectItemCaseSensitive(order_return_add_order_products_innerJSON, "order_product_status");
    if (cJSON_IsNull(order_product_status)) {
        order_product_status = NULL;
    }
    if (order_product_status) { 
    if(!cJSON_IsString(order_product_status) && !cJSON_IsNull(order_product_status))
    {
    goto end; //String
    }
    }


    order_return_add_order_products_inner_local_var = order_return_add_order_products_inner_create_internal (
        strdup(order_product_id->valuestring),
        order_product_quantity->valuedouble,
        strdup(order_product_reason_id->valuestring),
        strdup(order_product_action_id->valuestring),
        order_product_customer_comment && !cJSON_IsNull(order_product_customer_comment) ? strdup(order_product_customer_comment->valuestring) : NULL,
        order_product_handling_status && !cJSON_IsNull(order_product_handling_status) ? strdup(order_product_handling_status->valuestring) : NULL,
        order_product_condition && !cJSON_IsNull(order_product_condition) ? strdup(order_product_condition->valuestring) : NULL,
        order_product_reason && !cJSON_IsNull(order_product_reason) ? strdup(order_product_reason->valuestring) : NULL,
        order_product_status && !cJSON_IsNull(order_product_status) ? strdup(order_product_status->valuestring) : NULL
        );

    return order_return_add_order_products_inner_local_var;
end:
    return NULL;

}
