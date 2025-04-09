#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_shipment_add_batch_payload_inner_items_inner.h"



static order_shipment_add_batch_payload_inner_items_inner_t *order_shipment_add_batch_payload_inner_items_inner_create_internal(
    char *order_product_id,
    double quantity
    ) {
    order_shipment_add_batch_payload_inner_items_inner_t *order_shipment_add_batch_payload_inner_items_inner_local_var = malloc(sizeof(order_shipment_add_batch_payload_inner_items_inner_t));
    if (!order_shipment_add_batch_payload_inner_items_inner_local_var) {
        return NULL;
    }
    order_shipment_add_batch_payload_inner_items_inner_local_var->order_product_id = order_product_id;
    order_shipment_add_batch_payload_inner_items_inner_local_var->quantity = quantity;

    order_shipment_add_batch_payload_inner_items_inner_local_var->_library_owned = 1;
    return order_shipment_add_batch_payload_inner_items_inner_local_var;
}

__attribute__((deprecated)) order_shipment_add_batch_payload_inner_items_inner_t *order_shipment_add_batch_payload_inner_items_inner_create(
    char *order_product_id,
    double quantity
    ) {
    return order_shipment_add_batch_payload_inner_items_inner_create_internal (
        order_product_id,
        quantity
        );
}

void order_shipment_add_batch_payload_inner_items_inner_free(order_shipment_add_batch_payload_inner_items_inner_t *order_shipment_add_batch_payload_inner_items_inner) {
    if(NULL == order_shipment_add_batch_payload_inner_items_inner){
        return ;
    }
    if(order_shipment_add_batch_payload_inner_items_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_shipment_add_batch_payload_inner_items_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_shipment_add_batch_payload_inner_items_inner->order_product_id) {
        free(order_shipment_add_batch_payload_inner_items_inner->order_product_id);
        order_shipment_add_batch_payload_inner_items_inner->order_product_id = NULL;
    }
    free(order_shipment_add_batch_payload_inner_items_inner);
}

cJSON *order_shipment_add_batch_payload_inner_items_inner_convertToJSON(order_shipment_add_batch_payload_inner_items_inner_t *order_shipment_add_batch_payload_inner_items_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_shipment_add_batch_payload_inner_items_inner->order_product_id
    if (!order_shipment_add_batch_payload_inner_items_inner->order_product_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_product_id", order_shipment_add_batch_payload_inner_items_inner->order_product_id) == NULL) {
    goto fail; //String
    }


    // order_shipment_add_batch_payload_inner_items_inner->quantity
    if (!order_shipment_add_batch_payload_inner_items_inner->quantity) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "quantity", order_shipment_add_batch_payload_inner_items_inner->quantity) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_shipment_add_batch_payload_inner_items_inner_t *order_shipment_add_batch_payload_inner_items_inner_parseFromJSON(cJSON *order_shipment_add_batch_payload_inner_items_innerJSON){

    order_shipment_add_batch_payload_inner_items_inner_t *order_shipment_add_batch_payload_inner_items_inner_local_var = NULL;

    // order_shipment_add_batch_payload_inner_items_inner->order_product_id
    cJSON *order_product_id = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_inner_items_innerJSON, "order_product_id");
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

    // order_shipment_add_batch_payload_inner_items_inner->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_inner_items_innerJSON, "quantity");
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


    order_shipment_add_batch_payload_inner_items_inner_local_var = order_shipment_add_batch_payload_inner_items_inner_create_internal (
        strdup(order_product_id->valuestring),
        quantity->valuedouble
        );

    return order_shipment_add_batch_payload_inner_items_inner_local_var;
end:
    return NULL;

}
