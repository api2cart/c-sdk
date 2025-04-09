#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "coupon_history.h"



static coupon_history_t *coupon_history_create_internal(
    char *order_id,
    double amount,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    coupon_history_t *coupon_history_local_var = malloc(sizeof(coupon_history_t));
    if (!coupon_history_local_var) {
        return NULL;
    }
    coupon_history_local_var->order_id = order_id;
    coupon_history_local_var->amount = amount;
    coupon_history_local_var->additional_fields = additional_fields;
    coupon_history_local_var->custom_fields = custom_fields;

    coupon_history_local_var->_library_owned = 1;
    return coupon_history_local_var;
}

__attribute__((deprecated)) coupon_history_t *coupon_history_create(
    char *order_id,
    double amount,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return coupon_history_create_internal (
        order_id,
        amount,
        additional_fields,
        custom_fields
        );
}

void coupon_history_free(coupon_history_t *coupon_history) {
    if(NULL == coupon_history){
        return ;
    }
    if(coupon_history->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "coupon_history_free");
        return ;
    }
    listEntry_t *listEntry;
    if (coupon_history->order_id) {
        free(coupon_history->order_id);
        coupon_history->order_id = NULL;
    }
    if (coupon_history->additional_fields) {
        object_free(coupon_history->additional_fields);
        coupon_history->additional_fields = NULL;
    }
    if (coupon_history->custom_fields) {
        object_free(coupon_history->custom_fields);
        coupon_history->custom_fields = NULL;
    }
    free(coupon_history);
}

cJSON *coupon_history_convertToJSON(coupon_history_t *coupon_history) {
    cJSON *item = cJSON_CreateObject();

    // coupon_history->order_id
    if(coupon_history->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", coupon_history->order_id) == NULL) {
    goto fail; //String
    }
    }


    // coupon_history->amount
    if(coupon_history->amount) {
    if(cJSON_AddNumberToObject(item, "amount", coupon_history->amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // coupon_history->additional_fields
    if(coupon_history->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(coupon_history->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // coupon_history->custom_fields
    if(coupon_history->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(coupon_history->custom_fields);
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

coupon_history_t *coupon_history_parseFromJSON(cJSON *coupon_historyJSON){

    coupon_history_t *coupon_history_local_var = NULL;

    // coupon_history->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(coupon_historyJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // coupon_history->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(coupon_historyJSON, "amount");
    if (cJSON_IsNull(amount)) {
        amount = NULL;
    }
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    }

    // coupon_history->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(coupon_historyJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // coupon_history->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(coupon_historyJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    coupon_history_local_var = coupon_history_create_internal (
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        amount ? amount->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return coupon_history_local_var;
end:
    return NULL;

}
