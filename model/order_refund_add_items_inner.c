#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_refund_add_items_inner.h"



static order_refund_add_items_inner_t *order_refund_add_items_inner_create_internal(
    char *order_product_id,
    int quantity,
    double price
    ) {
    order_refund_add_items_inner_t *order_refund_add_items_inner_local_var = malloc(sizeof(order_refund_add_items_inner_t));
    if (!order_refund_add_items_inner_local_var) {
        return NULL;
    }
    order_refund_add_items_inner_local_var->order_product_id = order_product_id;
    order_refund_add_items_inner_local_var->quantity = quantity;
    order_refund_add_items_inner_local_var->price = price;

    order_refund_add_items_inner_local_var->_library_owned = 1;
    return order_refund_add_items_inner_local_var;
}

__attribute__((deprecated)) order_refund_add_items_inner_t *order_refund_add_items_inner_create(
    char *order_product_id,
    int quantity,
    double price
    ) {
    return order_refund_add_items_inner_create_internal (
        order_product_id,
        quantity,
        price
        );
}

void order_refund_add_items_inner_free(order_refund_add_items_inner_t *order_refund_add_items_inner) {
    if(NULL == order_refund_add_items_inner){
        return ;
    }
    if(order_refund_add_items_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_refund_add_items_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_refund_add_items_inner->order_product_id) {
        free(order_refund_add_items_inner->order_product_id);
        order_refund_add_items_inner->order_product_id = NULL;
    }
    free(order_refund_add_items_inner);
}

cJSON *order_refund_add_items_inner_convertToJSON(order_refund_add_items_inner_t *order_refund_add_items_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_refund_add_items_inner->order_product_id
    if(order_refund_add_items_inner->order_product_id) {
    if(cJSON_AddStringToObject(item, "order_product_id", order_refund_add_items_inner->order_product_id) == NULL) {
    goto fail; //String
    }
    }


    // order_refund_add_items_inner->quantity
    if(order_refund_add_items_inner->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", order_refund_add_items_inner->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_refund_add_items_inner->price
    if(order_refund_add_items_inner->price) {
    if(cJSON_AddNumberToObject(item, "price", order_refund_add_items_inner->price) == NULL) {
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

order_refund_add_items_inner_t *order_refund_add_items_inner_parseFromJSON(cJSON *order_refund_add_items_innerJSON){

    order_refund_add_items_inner_t *order_refund_add_items_inner_local_var = NULL;

    // order_refund_add_items_inner->order_product_id
    cJSON *order_product_id = cJSON_GetObjectItemCaseSensitive(order_refund_add_items_innerJSON, "order_product_id");
    if (cJSON_IsNull(order_product_id)) {
        order_product_id = NULL;
    }
    if (order_product_id) { 
    if(!cJSON_IsString(order_product_id) && !cJSON_IsNull(order_product_id))
    {
    goto end; //String
    }
    }

    // order_refund_add_items_inner->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(order_refund_add_items_innerJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // order_refund_add_items_inner->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(order_refund_add_items_innerJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }


    order_refund_add_items_inner_local_var = order_refund_add_items_inner_create_internal (
        order_product_id && !cJSON_IsNull(order_product_id) ? strdup(order_product_id->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        price ? price->valuedouble : 0
        );

    return order_refund_add_items_inner_local_var;
end:
    return NULL;

}
