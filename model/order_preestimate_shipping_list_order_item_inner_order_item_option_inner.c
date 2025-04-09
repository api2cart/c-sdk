#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_preestimate_shipping_list_order_item_inner_order_item_option_inner.h"



static order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner_create_internal(
    char *order_item_option_name,
    char *order_item_option_id,
    char *order_item_option_value,
    char *order_item_option_value_id,
    int order_item_option_used_in_combinations
    ) {
    order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var = malloc(sizeof(order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t));
    if (!order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var) {
        return NULL;
    }
    order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var->order_item_option_name = order_item_option_name;
    order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var->order_item_option_id = order_item_option_id;
    order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var->order_item_option_value = order_item_option_value;
    order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var->order_item_option_value_id = order_item_option_value_id;
    order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var->order_item_option_used_in_combinations = order_item_option_used_in_combinations;

    order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var->_library_owned = 1;
    return order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var;
}

__attribute__((deprecated)) order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner_create(
    char *order_item_option_name,
    char *order_item_option_id,
    char *order_item_option_value,
    char *order_item_option_value_id,
    int order_item_option_used_in_combinations
    ) {
    return order_preestimate_shipping_list_order_item_inner_order_item_option_inner_create_internal (
        order_item_option_name,
        order_item_option_id,
        order_item_option_value,
        order_item_option_value_id,
        order_item_option_used_in_combinations
        );
}

void order_preestimate_shipping_list_order_item_inner_order_item_option_inner_free(order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner) {
    if(NULL == order_preestimate_shipping_list_order_item_inner_order_item_option_inner){
        return ;
    }
    if(order_preestimate_shipping_list_order_item_inner_order_item_option_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_preestimate_shipping_list_order_item_inner_order_item_option_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_name) {
        free(order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_name);
        order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_name = NULL;
    }
    if (order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_id) {
        free(order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_id);
        order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_id = NULL;
    }
    if (order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value) {
        free(order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value);
        order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value = NULL;
    }
    if (order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value_id) {
        free(order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value_id);
        order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value_id = NULL;
    }
    free(order_preestimate_shipping_list_order_item_inner_order_item_option_inner);
}

cJSON *order_preestimate_shipping_list_order_item_inner_order_item_option_inner_convertToJSON(order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_name
    if(order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_name) {
    if(cJSON_AddStringToObject(item, "order_item_option_name", order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_name) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_id
    if(order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_id) {
    if(cJSON_AddStringToObject(item, "order_item_option_id", order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_id) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value
    if(order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value) {
    if(cJSON_AddStringToObject(item, "order_item_option_value", order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value_id
    if(order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value_id) {
    if(cJSON_AddStringToObject(item, "order_item_option_value_id", order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value_id) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_used_in_combinations
    if(order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_used_in_combinations) {
    if(cJSON_AddBoolToObject(item, "order_item_option_used_in_combinations", order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_used_in_combinations) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner_parseFromJSON(cJSON *order_preestimate_shipping_list_order_item_inner_order_item_option_innerJSON){

    order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var = NULL;

    // order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_name
    cJSON *order_item_option_name = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_list_order_item_inner_order_item_option_innerJSON, "order_item_option_name");
    if (cJSON_IsNull(order_item_option_name)) {
        order_item_option_name = NULL;
    }
    if (order_item_option_name) { 
    if(!cJSON_IsString(order_item_option_name) && !cJSON_IsNull(order_item_option_name))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_id
    cJSON *order_item_option_id = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_list_order_item_inner_order_item_option_innerJSON, "order_item_option_id");
    if (cJSON_IsNull(order_item_option_id)) {
        order_item_option_id = NULL;
    }
    if (order_item_option_id) { 
    if(!cJSON_IsString(order_item_option_id) && !cJSON_IsNull(order_item_option_id))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value
    cJSON *order_item_option_value = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_list_order_item_inner_order_item_option_innerJSON, "order_item_option_value");
    if (cJSON_IsNull(order_item_option_value)) {
        order_item_option_value = NULL;
    }
    if (order_item_option_value) { 
    if(!cJSON_IsString(order_item_option_value) && !cJSON_IsNull(order_item_option_value))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_value_id
    cJSON *order_item_option_value_id = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_list_order_item_inner_order_item_option_innerJSON, "order_item_option_value_id");
    if (cJSON_IsNull(order_item_option_value_id)) {
        order_item_option_value_id = NULL;
    }
    if (order_item_option_value_id) { 
    if(!cJSON_IsString(order_item_option_value_id) && !cJSON_IsNull(order_item_option_value_id))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list_order_item_inner_order_item_option_inner->order_item_option_used_in_combinations
    cJSON *order_item_option_used_in_combinations = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_list_order_item_inner_order_item_option_innerJSON, "order_item_option_used_in_combinations");
    if (cJSON_IsNull(order_item_option_used_in_combinations)) {
        order_item_option_used_in_combinations = NULL;
    }
    if (order_item_option_used_in_combinations) { 
    if(!cJSON_IsBool(order_item_option_used_in_combinations))
    {
    goto end; //Bool
    }
    }


    order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var = order_preestimate_shipping_list_order_item_inner_order_item_option_inner_create_internal (
        order_item_option_name && !cJSON_IsNull(order_item_option_name) ? strdup(order_item_option_name->valuestring) : NULL,
        order_item_option_id && !cJSON_IsNull(order_item_option_id) ? strdup(order_item_option_id->valuestring) : NULL,
        order_item_option_value && !cJSON_IsNull(order_item_option_value) ? strdup(order_item_option_value->valuestring) : NULL,
        order_item_option_value_id && !cJSON_IsNull(order_item_option_value_id) ? strdup(order_item_option_value_id->valuestring) : NULL,
        order_item_option_used_in_combinations ? order_item_option_used_in_combinations->valueint : 0
        );

    return order_preestimate_shipping_list_order_item_inner_order_item_option_inner_local_var;
end:
    return NULL;

}
