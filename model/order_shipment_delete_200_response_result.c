#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_shipment_delete_200_response_result.h"



static order_shipment_delete_200_response_result_t *order_shipment_delete_200_response_result_create_internal(
    int deleted_items
    ) {
    order_shipment_delete_200_response_result_t *order_shipment_delete_200_response_result_local_var = malloc(sizeof(order_shipment_delete_200_response_result_t));
    if (!order_shipment_delete_200_response_result_local_var) {
        return NULL;
    }
    order_shipment_delete_200_response_result_local_var->deleted_items = deleted_items;

    order_shipment_delete_200_response_result_local_var->_library_owned = 1;
    return order_shipment_delete_200_response_result_local_var;
}

__attribute__((deprecated)) order_shipment_delete_200_response_result_t *order_shipment_delete_200_response_result_create(
    int deleted_items
    ) {
    return order_shipment_delete_200_response_result_create_internal (
        deleted_items
        );
}

void order_shipment_delete_200_response_result_free(order_shipment_delete_200_response_result_t *order_shipment_delete_200_response_result) {
    if(NULL == order_shipment_delete_200_response_result){
        return ;
    }
    if(order_shipment_delete_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_shipment_delete_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(order_shipment_delete_200_response_result);
}

cJSON *order_shipment_delete_200_response_result_convertToJSON(order_shipment_delete_200_response_result_t *order_shipment_delete_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // order_shipment_delete_200_response_result->deleted_items
    if(order_shipment_delete_200_response_result->deleted_items) {
    if(cJSON_AddNumberToObject(item, "deleted_items", order_shipment_delete_200_response_result->deleted_items) == NULL) {
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

order_shipment_delete_200_response_result_t *order_shipment_delete_200_response_result_parseFromJSON(cJSON *order_shipment_delete_200_response_resultJSON){

    order_shipment_delete_200_response_result_t *order_shipment_delete_200_response_result_local_var = NULL;

    // order_shipment_delete_200_response_result->deleted_items
    cJSON *deleted_items = cJSON_GetObjectItemCaseSensitive(order_shipment_delete_200_response_resultJSON, "deleted_items");
    if (cJSON_IsNull(deleted_items)) {
        deleted_items = NULL;
    }
    if (deleted_items) { 
    if(!cJSON_IsNumber(deleted_items))
    {
    goto end; //Numeric
    }
    }


    order_shipment_delete_200_response_result_local_var = order_shipment_delete_200_response_result_create_internal (
        deleted_items ? deleted_items->valuedouble : 0
        );

    return order_shipment_delete_200_response_result_local_var;
end:
    return NULL;

}
