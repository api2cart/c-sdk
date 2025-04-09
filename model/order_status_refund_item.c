#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_status_refund_item.h"



static order_status_refund_item_t *order_status_refund_item_create_internal(
    char *product_id,
    char *variant_id,
    char *order_product_id,
    double qty,
    double refund,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_status_refund_item_t *order_status_refund_item_local_var = malloc(sizeof(order_status_refund_item_t));
    if (!order_status_refund_item_local_var) {
        return NULL;
    }
    order_status_refund_item_local_var->product_id = product_id;
    order_status_refund_item_local_var->variant_id = variant_id;
    order_status_refund_item_local_var->order_product_id = order_product_id;
    order_status_refund_item_local_var->qty = qty;
    order_status_refund_item_local_var->refund = refund;
    order_status_refund_item_local_var->additional_fields = additional_fields;
    order_status_refund_item_local_var->custom_fields = custom_fields;

    order_status_refund_item_local_var->_library_owned = 1;
    return order_status_refund_item_local_var;
}

__attribute__((deprecated)) order_status_refund_item_t *order_status_refund_item_create(
    char *product_id,
    char *variant_id,
    char *order_product_id,
    double qty,
    double refund,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_status_refund_item_create_internal (
        product_id,
        variant_id,
        order_product_id,
        qty,
        refund,
        additional_fields,
        custom_fields
        );
}

void order_status_refund_item_free(order_status_refund_item_t *order_status_refund_item) {
    if(NULL == order_status_refund_item){
        return ;
    }
    if(order_status_refund_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_status_refund_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_status_refund_item->product_id) {
        free(order_status_refund_item->product_id);
        order_status_refund_item->product_id = NULL;
    }
    if (order_status_refund_item->variant_id) {
        free(order_status_refund_item->variant_id);
        order_status_refund_item->variant_id = NULL;
    }
    if (order_status_refund_item->order_product_id) {
        free(order_status_refund_item->order_product_id);
        order_status_refund_item->order_product_id = NULL;
    }
    if (order_status_refund_item->additional_fields) {
        object_free(order_status_refund_item->additional_fields);
        order_status_refund_item->additional_fields = NULL;
    }
    if (order_status_refund_item->custom_fields) {
        object_free(order_status_refund_item->custom_fields);
        order_status_refund_item->custom_fields = NULL;
    }
    free(order_status_refund_item);
}

cJSON *order_status_refund_item_convertToJSON(order_status_refund_item_t *order_status_refund_item) {
    cJSON *item = cJSON_CreateObject();

    // order_status_refund_item->product_id
    if(order_status_refund_item->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", order_status_refund_item->product_id) == NULL) {
    goto fail; //String
    }
    }


    // order_status_refund_item->variant_id
    if(order_status_refund_item->variant_id) {
    if(cJSON_AddStringToObject(item, "variant_id", order_status_refund_item->variant_id) == NULL) {
    goto fail; //String
    }
    }


    // order_status_refund_item->order_product_id
    if(order_status_refund_item->order_product_id) {
    if(cJSON_AddStringToObject(item, "order_product_id", order_status_refund_item->order_product_id) == NULL) {
    goto fail; //String
    }
    }


    // order_status_refund_item->qty
    if(order_status_refund_item->qty) {
    if(cJSON_AddNumberToObject(item, "qty", order_status_refund_item->qty) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_status_refund_item->refund
    if(order_status_refund_item->refund) {
    if(cJSON_AddNumberToObject(item, "refund", order_status_refund_item->refund) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_status_refund_item->additional_fields
    if(order_status_refund_item->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_status_refund_item->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_status_refund_item->custom_fields
    if(order_status_refund_item->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_status_refund_item->custom_fields);
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

order_status_refund_item_t *order_status_refund_item_parseFromJSON(cJSON *order_status_refund_itemJSON){

    order_status_refund_item_t *order_status_refund_item_local_var = NULL;

    // order_status_refund_item->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(order_status_refund_itemJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // order_status_refund_item->variant_id
    cJSON *variant_id = cJSON_GetObjectItemCaseSensitive(order_status_refund_itemJSON, "variant_id");
    if (cJSON_IsNull(variant_id)) {
        variant_id = NULL;
    }
    if (variant_id) { 
    if(!cJSON_IsString(variant_id) && !cJSON_IsNull(variant_id))
    {
    goto end; //String
    }
    }

    // order_status_refund_item->order_product_id
    cJSON *order_product_id = cJSON_GetObjectItemCaseSensitive(order_status_refund_itemJSON, "order_product_id");
    if (cJSON_IsNull(order_product_id)) {
        order_product_id = NULL;
    }
    if (order_product_id) { 
    if(!cJSON_IsString(order_product_id) && !cJSON_IsNull(order_product_id))
    {
    goto end; //String
    }
    }

    // order_status_refund_item->qty
    cJSON *qty = cJSON_GetObjectItemCaseSensitive(order_status_refund_itemJSON, "qty");
    if (cJSON_IsNull(qty)) {
        qty = NULL;
    }
    if (qty) { 
    if(!cJSON_IsNumber(qty))
    {
    goto end; //Numeric
    }
    }

    // order_status_refund_item->refund
    cJSON *refund = cJSON_GetObjectItemCaseSensitive(order_status_refund_itemJSON, "refund");
    if (cJSON_IsNull(refund)) {
        refund = NULL;
    }
    if (refund) { 
    if(!cJSON_IsNumber(refund))
    {
    goto end; //Numeric
    }
    }

    // order_status_refund_item->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_status_refund_itemJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_status_refund_item->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_status_refund_itemJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_status_refund_item_local_var = order_status_refund_item_create_internal (
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        variant_id && !cJSON_IsNull(variant_id) ? strdup(variant_id->valuestring) : NULL,
        order_product_id && !cJSON_IsNull(order_product_id) ? strdup(order_product_id->valuestring) : NULL,
        qty ? qty->valuedouble : 0,
        refund ? refund->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_status_refund_item_local_var;
end:
    return NULL;

}
