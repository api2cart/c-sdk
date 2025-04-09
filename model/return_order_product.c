#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_order_product.h"



static return_order_product_t *return_order_product_create_internal(
    char *product_id,
    char *order_product_id,
    char *sku,
    char *name,
    int quantity,
    return_reason_t *reason,
    return_action_t *action,
    char *condition,
    char *customer_comment,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return_order_product_t *return_order_product_local_var = malloc(sizeof(return_order_product_t));
    if (!return_order_product_local_var) {
        return NULL;
    }
    return_order_product_local_var->product_id = product_id;
    return_order_product_local_var->order_product_id = order_product_id;
    return_order_product_local_var->sku = sku;
    return_order_product_local_var->name = name;
    return_order_product_local_var->quantity = quantity;
    return_order_product_local_var->reason = reason;
    return_order_product_local_var->action = action;
    return_order_product_local_var->condition = condition;
    return_order_product_local_var->customer_comment = customer_comment;
    return_order_product_local_var->additional_fields = additional_fields;
    return_order_product_local_var->custom_fields = custom_fields;

    return_order_product_local_var->_library_owned = 1;
    return return_order_product_local_var;
}

__attribute__((deprecated)) return_order_product_t *return_order_product_create(
    char *product_id,
    char *order_product_id,
    char *sku,
    char *name,
    int quantity,
    return_reason_t *reason,
    return_action_t *action,
    char *condition,
    char *customer_comment,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return return_order_product_create_internal (
        product_id,
        order_product_id,
        sku,
        name,
        quantity,
        reason,
        action,
        condition,
        customer_comment,
        additional_fields,
        custom_fields
        );
}

void return_order_product_free(return_order_product_t *return_order_product) {
    if(NULL == return_order_product){
        return ;
    }
    if(return_order_product->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "return_order_product_free");
        return ;
    }
    listEntry_t *listEntry;
    if (return_order_product->product_id) {
        free(return_order_product->product_id);
        return_order_product->product_id = NULL;
    }
    if (return_order_product->order_product_id) {
        free(return_order_product->order_product_id);
        return_order_product->order_product_id = NULL;
    }
    if (return_order_product->sku) {
        free(return_order_product->sku);
        return_order_product->sku = NULL;
    }
    if (return_order_product->name) {
        free(return_order_product->name);
        return_order_product->name = NULL;
    }
    if (return_order_product->reason) {
        return_reason_free(return_order_product->reason);
        return_order_product->reason = NULL;
    }
    if (return_order_product->action) {
        return_action_free(return_order_product->action);
        return_order_product->action = NULL;
    }
    if (return_order_product->condition) {
        free(return_order_product->condition);
        return_order_product->condition = NULL;
    }
    if (return_order_product->customer_comment) {
        free(return_order_product->customer_comment);
        return_order_product->customer_comment = NULL;
    }
    if (return_order_product->additional_fields) {
        object_free(return_order_product->additional_fields);
        return_order_product->additional_fields = NULL;
    }
    if (return_order_product->custom_fields) {
        object_free(return_order_product->custom_fields);
        return_order_product->custom_fields = NULL;
    }
    free(return_order_product);
}

cJSON *return_order_product_convertToJSON(return_order_product_t *return_order_product) {
    cJSON *item = cJSON_CreateObject();

    // return_order_product->product_id
    if(return_order_product->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", return_order_product->product_id) == NULL) {
    goto fail; //String
    }
    }


    // return_order_product->order_product_id
    if(return_order_product->order_product_id) {
    if(cJSON_AddStringToObject(item, "order_product_id", return_order_product->order_product_id) == NULL) {
    goto fail; //String
    }
    }


    // return_order_product->sku
    if(return_order_product->sku) {
    if(cJSON_AddStringToObject(item, "sku", return_order_product->sku) == NULL) {
    goto fail; //String
    }
    }


    // return_order_product->name
    if(return_order_product->name) {
    if(cJSON_AddStringToObject(item, "name", return_order_product->name) == NULL) {
    goto fail; //String
    }
    }


    // return_order_product->quantity
    if(return_order_product->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", return_order_product->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // return_order_product->reason
    if(return_order_product->reason) {
    cJSON *reason_local_JSON = return_reason_convertToJSON(return_order_product->reason);
    if(reason_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reason", reason_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // return_order_product->action
    if(return_order_product->action) {
    cJSON *action_local_JSON = return_action_convertToJSON(return_order_product->action);
    if(action_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "action", action_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // return_order_product->condition
    if(return_order_product->condition) {
    if(cJSON_AddStringToObject(item, "condition", return_order_product->condition) == NULL) {
    goto fail; //String
    }
    }


    // return_order_product->customer_comment
    if(return_order_product->customer_comment) {
    if(cJSON_AddStringToObject(item, "customer_comment", return_order_product->customer_comment) == NULL) {
    goto fail; //String
    }
    }


    // return_order_product->additional_fields
    if(return_order_product->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(return_order_product->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // return_order_product->custom_fields
    if(return_order_product->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(return_order_product->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
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

return_order_product_t *return_order_product_parseFromJSON(cJSON *return_order_productJSON){

    return_order_product_t *return_order_product_local_var = NULL;

    // define the local variable for return_order_product->reason
    return_reason_t *reason_local_nonprim = NULL;

    // define the local variable for return_order_product->action
    return_action_t *action_local_nonprim = NULL;

    // return_order_product->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // return_order_product->order_product_id
    cJSON *order_product_id = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "order_product_id");
    if (cJSON_IsNull(order_product_id)) {
        order_product_id = NULL;
    }
    if (order_product_id) { 
    if(!cJSON_IsString(order_product_id) && !cJSON_IsNull(order_product_id))
    {
    goto end; //String
    }
    }

    // return_order_product->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // return_order_product->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // return_order_product->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // return_order_product->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "reason");
    if (cJSON_IsNull(reason)) {
        reason = NULL;
    }
    if (reason) { 
    reason_local_nonprim = return_reason_parseFromJSON(reason); //nonprimitive
    }

    // return_order_product->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "action");
    if (cJSON_IsNull(action)) {
        action = NULL;
    }
    if (action) { 
    action_local_nonprim = return_action_parseFromJSON(action); //nonprimitive
    }

    // return_order_product->condition
    cJSON *condition = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "condition");
    if (cJSON_IsNull(condition)) {
        condition = NULL;
    }
    if (condition) { 
    if(!cJSON_IsString(condition) && !cJSON_IsNull(condition))
    {
    goto end; //String
    }
    }

    // return_order_product->customer_comment
    cJSON *customer_comment = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "customer_comment");
    if (cJSON_IsNull(customer_comment)) {
        customer_comment = NULL;
    }
    if (customer_comment) { 
    if(!cJSON_IsString(customer_comment) && !cJSON_IsNull(customer_comment))
    {
    goto end; //String
    }
    }

    // return_order_product->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // return_order_product->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(return_order_productJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    return_order_product_local_var = return_order_product_create_internal (
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        order_product_id && !cJSON_IsNull(order_product_id) ? strdup(order_product_id->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        reason ? reason_local_nonprim : NULL,
        action ? action_local_nonprim : NULL,
        condition && !cJSON_IsNull(condition) ? strdup(condition->valuestring) : NULL,
        customer_comment && !cJSON_IsNull(customer_comment) ? strdup(customer_comment->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return return_order_product_local_var;
end:
    if (reason_local_nonprim) {
        return_reason_free(reason_local_nonprim);
        reason_local_nonprim = NULL;
    }
    if (action_local_nonprim) {
        return_action_free(action_local_nonprim);
        action_local_nonprim = NULL;
    }
    return NULL;

}
