#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_add_order_item_inner_order_item_option_inner.h"



static order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner_create_internal(
    char *order_item_option_name,
    char *order_item_option_value,
    double order_item_option_price
    ) {
    order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner_local_var = malloc(sizeof(order_add_order_item_inner_order_item_option_inner_t));
    if (!order_add_order_item_inner_order_item_option_inner_local_var) {
        return NULL;
    }
    order_add_order_item_inner_order_item_option_inner_local_var->order_item_option_name = order_item_option_name;
    order_add_order_item_inner_order_item_option_inner_local_var->order_item_option_value = order_item_option_value;
    order_add_order_item_inner_order_item_option_inner_local_var->order_item_option_price = order_item_option_price;

    order_add_order_item_inner_order_item_option_inner_local_var->_library_owned = 1;
    return order_add_order_item_inner_order_item_option_inner_local_var;
}

__attribute__((deprecated)) order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner_create(
    char *order_item_option_name,
    char *order_item_option_value,
    double order_item_option_price
    ) {
    return order_add_order_item_inner_order_item_option_inner_create_internal (
        order_item_option_name,
        order_item_option_value,
        order_item_option_price
        );
}

void order_add_order_item_inner_order_item_option_inner_free(order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner) {
    if(NULL == order_add_order_item_inner_order_item_option_inner){
        return ;
    }
    if(order_add_order_item_inner_order_item_option_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_add_order_item_inner_order_item_option_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_add_order_item_inner_order_item_option_inner->order_item_option_name) {
        free(order_add_order_item_inner_order_item_option_inner->order_item_option_name);
        order_add_order_item_inner_order_item_option_inner->order_item_option_name = NULL;
    }
    if (order_add_order_item_inner_order_item_option_inner->order_item_option_value) {
        free(order_add_order_item_inner_order_item_option_inner->order_item_option_value);
        order_add_order_item_inner_order_item_option_inner->order_item_option_value = NULL;
    }
    free(order_add_order_item_inner_order_item_option_inner);
}

cJSON *order_add_order_item_inner_order_item_option_inner_convertToJSON(order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_add_order_item_inner_order_item_option_inner->order_item_option_name
    if(order_add_order_item_inner_order_item_option_inner->order_item_option_name) {
    if(cJSON_AddStringToObject(item, "order_item_option_name", order_add_order_item_inner_order_item_option_inner->order_item_option_name) == NULL) {
    goto fail; //String
    }
    }


    // order_add_order_item_inner_order_item_option_inner->order_item_option_value
    if(order_add_order_item_inner_order_item_option_inner->order_item_option_value) {
    if(cJSON_AddStringToObject(item, "order_item_option_value", order_add_order_item_inner_order_item_option_inner->order_item_option_value) == NULL) {
    goto fail; //String
    }
    }


    // order_add_order_item_inner_order_item_option_inner->order_item_option_price
    if(order_add_order_item_inner_order_item_option_inner->order_item_option_price) {
    if(cJSON_AddNumberToObject(item, "order_item_option_price", order_add_order_item_inner_order_item_option_inner->order_item_option_price) == NULL) {
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

order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner_parseFromJSON(cJSON *order_add_order_item_inner_order_item_option_innerJSON){

    order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner_local_var = NULL;

    // order_add_order_item_inner_order_item_option_inner->order_item_option_name
    cJSON *order_item_option_name = cJSON_GetObjectItemCaseSensitive(order_add_order_item_inner_order_item_option_innerJSON, "order_item_option_name");
    if (cJSON_IsNull(order_item_option_name)) {
        order_item_option_name = NULL;
    }
    if (order_item_option_name) { 
    if(!cJSON_IsString(order_item_option_name) && !cJSON_IsNull(order_item_option_name))
    {
    goto end; //String
    }
    }

    // order_add_order_item_inner_order_item_option_inner->order_item_option_value
    cJSON *order_item_option_value = cJSON_GetObjectItemCaseSensitive(order_add_order_item_inner_order_item_option_innerJSON, "order_item_option_value");
    if (cJSON_IsNull(order_item_option_value)) {
        order_item_option_value = NULL;
    }
    if (order_item_option_value) { 
    if(!cJSON_IsString(order_item_option_value) && !cJSON_IsNull(order_item_option_value))
    {
    goto end; //String
    }
    }

    // order_add_order_item_inner_order_item_option_inner->order_item_option_price
    cJSON *order_item_option_price = cJSON_GetObjectItemCaseSensitive(order_add_order_item_inner_order_item_option_innerJSON, "order_item_option_price");
    if (cJSON_IsNull(order_item_option_price)) {
        order_item_option_price = NULL;
    }
    if (order_item_option_price) { 
    if(!cJSON_IsNumber(order_item_option_price))
    {
    goto end; //Numeric
    }
    }


    order_add_order_item_inner_order_item_option_inner_local_var = order_add_order_item_inner_order_item_option_inner_create_internal (
        order_item_option_name && !cJSON_IsNull(order_item_option_name) ? strdup(order_item_option_name->valuestring) : NULL,
        order_item_option_value && !cJSON_IsNull(order_item_option_value) ? strdup(order_item_option_value->valuestring) : NULL,
        order_item_option_price ? order_item_option_price->valuedouble : 0
        );

    return order_add_order_item_inner_order_item_option_inner_local_var;
end:
    return NULL;

}
