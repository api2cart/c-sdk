#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_calculate_order_item_inner_order_item_option_inner.h"



static order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner_create_internal(
    char *order_item_option_name,
    char *order_item_option_value
    ) {
    order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner_local_var = malloc(sizeof(order_calculate_order_item_inner_order_item_option_inner_t));
    if (!order_calculate_order_item_inner_order_item_option_inner_local_var) {
        return NULL;
    }
    order_calculate_order_item_inner_order_item_option_inner_local_var->order_item_option_name = order_item_option_name;
    order_calculate_order_item_inner_order_item_option_inner_local_var->order_item_option_value = order_item_option_value;

    order_calculate_order_item_inner_order_item_option_inner_local_var->_library_owned = 1;
    return order_calculate_order_item_inner_order_item_option_inner_local_var;
}

__attribute__((deprecated)) order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner_create(
    char *order_item_option_name,
    char *order_item_option_value
    ) {
    return order_calculate_order_item_inner_order_item_option_inner_create_internal (
        order_item_option_name,
        order_item_option_value
        );
}

void order_calculate_order_item_inner_order_item_option_inner_free(order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner) {
    if(NULL == order_calculate_order_item_inner_order_item_option_inner){
        return ;
    }
    if(order_calculate_order_item_inner_order_item_option_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_calculate_order_item_inner_order_item_option_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_calculate_order_item_inner_order_item_option_inner->order_item_option_name) {
        free(order_calculate_order_item_inner_order_item_option_inner->order_item_option_name);
        order_calculate_order_item_inner_order_item_option_inner->order_item_option_name = NULL;
    }
    if (order_calculate_order_item_inner_order_item_option_inner->order_item_option_value) {
        free(order_calculate_order_item_inner_order_item_option_inner->order_item_option_value);
        order_calculate_order_item_inner_order_item_option_inner->order_item_option_value = NULL;
    }
    free(order_calculate_order_item_inner_order_item_option_inner);
}

cJSON *order_calculate_order_item_inner_order_item_option_inner_convertToJSON(order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_calculate_order_item_inner_order_item_option_inner->order_item_option_name
    if(order_calculate_order_item_inner_order_item_option_inner->order_item_option_name) {
    if(cJSON_AddStringToObject(item, "order_item_option_name", order_calculate_order_item_inner_order_item_option_inner->order_item_option_name) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_order_item_inner_order_item_option_inner->order_item_option_value
    if(order_calculate_order_item_inner_order_item_option_inner->order_item_option_value) {
    if(cJSON_AddStringToObject(item, "order_item_option_value", order_calculate_order_item_inner_order_item_option_inner->order_item_option_value) == NULL) {
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

order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner_parseFromJSON(cJSON *order_calculate_order_item_inner_order_item_option_innerJSON){

    order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner_local_var = NULL;

    // order_calculate_order_item_inner_order_item_option_inner->order_item_option_name
    cJSON *order_item_option_name = cJSON_GetObjectItemCaseSensitive(order_calculate_order_item_inner_order_item_option_innerJSON, "order_item_option_name");
    if (cJSON_IsNull(order_item_option_name)) {
        order_item_option_name = NULL;
    }
    if (order_item_option_name) { 
    if(!cJSON_IsString(order_item_option_name) && !cJSON_IsNull(order_item_option_name))
    {
    goto end; //String
    }
    }

    // order_calculate_order_item_inner_order_item_option_inner->order_item_option_value
    cJSON *order_item_option_value = cJSON_GetObjectItemCaseSensitive(order_calculate_order_item_inner_order_item_option_innerJSON, "order_item_option_value");
    if (cJSON_IsNull(order_item_option_value)) {
        order_item_option_value = NULL;
    }
    if (order_item_option_value) { 
    if(!cJSON_IsString(order_item_option_value) && !cJSON_IsNull(order_item_option_value))
    {
    goto end; //String
    }
    }


    order_calculate_order_item_inner_order_item_option_inner_local_var = order_calculate_order_item_inner_order_item_option_inner_create_internal (
        order_item_option_name && !cJSON_IsNull(order_item_option_name) ? strdup(order_item_option_name->valuestring) : NULL,
        order_item_option_value && !cJSON_IsNull(order_item_option_value) ? strdup(order_item_option_value->valuestring) : NULL
        );

    return order_calculate_order_item_inner_order_item_option_inner_local_var;
end:
    return NULL;

}
