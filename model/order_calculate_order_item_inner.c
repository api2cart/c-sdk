#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_calculate_order_item_inner.h"



static order_calculate_order_item_inner_t *order_calculate_order_item_inner_create_internal(
    char *order_item_id,
    int order_item_quantity,
    char *order_item_variant_id,
    list_t *order_item_option
    ) {
    order_calculate_order_item_inner_t *order_calculate_order_item_inner_local_var = malloc(sizeof(order_calculate_order_item_inner_t));
    if (!order_calculate_order_item_inner_local_var) {
        return NULL;
    }
    order_calculate_order_item_inner_local_var->order_item_id = order_item_id;
    order_calculate_order_item_inner_local_var->order_item_quantity = order_item_quantity;
    order_calculate_order_item_inner_local_var->order_item_variant_id = order_item_variant_id;
    order_calculate_order_item_inner_local_var->order_item_option = order_item_option;

    order_calculate_order_item_inner_local_var->_library_owned = 1;
    return order_calculate_order_item_inner_local_var;
}

__attribute__((deprecated)) order_calculate_order_item_inner_t *order_calculate_order_item_inner_create(
    char *order_item_id,
    int order_item_quantity,
    char *order_item_variant_id,
    list_t *order_item_option
    ) {
    return order_calculate_order_item_inner_create_internal (
        order_item_id,
        order_item_quantity,
        order_item_variant_id,
        order_item_option
        );
}

void order_calculate_order_item_inner_free(order_calculate_order_item_inner_t *order_calculate_order_item_inner) {
    if(NULL == order_calculate_order_item_inner){
        return ;
    }
    if(order_calculate_order_item_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_calculate_order_item_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_calculate_order_item_inner->order_item_id) {
        free(order_calculate_order_item_inner->order_item_id);
        order_calculate_order_item_inner->order_item_id = NULL;
    }
    if (order_calculate_order_item_inner->order_item_variant_id) {
        free(order_calculate_order_item_inner->order_item_variant_id);
        order_calculate_order_item_inner->order_item_variant_id = NULL;
    }
    if (order_calculate_order_item_inner->order_item_option) {
        list_ForEach(listEntry, order_calculate_order_item_inner->order_item_option) {
            order_calculate_order_item_inner_order_item_option_inner_free(listEntry->data);
        }
        list_freeList(order_calculate_order_item_inner->order_item_option);
        order_calculate_order_item_inner->order_item_option = NULL;
    }
    free(order_calculate_order_item_inner);
}

cJSON *order_calculate_order_item_inner_convertToJSON(order_calculate_order_item_inner_t *order_calculate_order_item_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_calculate_order_item_inner->order_item_id
    if (!order_calculate_order_item_inner->order_item_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_item_id", order_calculate_order_item_inner->order_item_id) == NULL) {
    goto fail; //String
    }


    // order_calculate_order_item_inner->order_item_quantity
    if (!order_calculate_order_item_inner->order_item_quantity) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "order_item_quantity", order_calculate_order_item_inner->order_item_quantity) == NULL) {
    goto fail; //Numeric
    }


    // order_calculate_order_item_inner->order_item_variant_id
    if(order_calculate_order_item_inner->order_item_variant_id) {
    if(cJSON_AddStringToObject(item, "order_item_variant_id", order_calculate_order_item_inner->order_item_variant_id) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_order_item_inner->order_item_option
    if(order_calculate_order_item_inner->order_item_option) {
    cJSON *order_item_option = cJSON_AddArrayToObject(item, "order_item_option");
    if(order_item_option == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_item_optionListEntry;
    if (order_calculate_order_item_inner->order_item_option) {
    list_ForEach(order_item_optionListEntry, order_calculate_order_item_inner->order_item_option) {
    cJSON *itemLocal = order_calculate_order_item_inner_order_item_option_inner_convertToJSON(order_item_optionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_item_option, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_calculate_order_item_inner_t *order_calculate_order_item_inner_parseFromJSON(cJSON *order_calculate_order_item_innerJSON){

    order_calculate_order_item_inner_t *order_calculate_order_item_inner_local_var = NULL;

    // define the local list for order_calculate_order_item_inner->order_item_option
    list_t *order_item_optionList = NULL;

    // order_calculate_order_item_inner->order_item_id
    cJSON *order_item_id = cJSON_GetObjectItemCaseSensitive(order_calculate_order_item_innerJSON, "order_item_id");
    if (cJSON_IsNull(order_item_id)) {
        order_item_id = NULL;
    }
    if (!order_item_id) {
        goto end;
    }

    
    if(!cJSON_IsString(order_item_id))
    {
    goto end; //String
    }

    // order_calculate_order_item_inner->order_item_quantity
    cJSON *order_item_quantity = cJSON_GetObjectItemCaseSensitive(order_calculate_order_item_innerJSON, "order_item_quantity");
    if (cJSON_IsNull(order_item_quantity)) {
        order_item_quantity = NULL;
    }
    if (!order_item_quantity) {
        goto end;
    }

    
    if(!cJSON_IsNumber(order_item_quantity))
    {
    goto end; //Numeric
    }

    // order_calculate_order_item_inner->order_item_variant_id
    cJSON *order_item_variant_id = cJSON_GetObjectItemCaseSensitive(order_calculate_order_item_innerJSON, "order_item_variant_id");
    if (cJSON_IsNull(order_item_variant_id)) {
        order_item_variant_id = NULL;
    }
    if (order_item_variant_id) { 
    if(!cJSON_IsString(order_item_variant_id) && !cJSON_IsNull(order_item_variant_id))
    {
    goto end; //String
    }
    }

    // order_calculate_order_item_inner->order_item_option
    cJSON *order_item_option = cJSON_GetObjectItemCaseSensitive(order_calculate_order_item_innerJSON, "order_item_option");
    if (cJSON_IsNull(order_item_option)) {
        order_item_option = NULL;
    }
    if (order_item_option) { 
    cJSON *order_item_option_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order_item_option)){
        goto end; //nonprimitive container
    }

    order_item_optionList = list_createList();

    cJSON_ArrayForEach(order_item_option_local_nonprimitive,order_item_option )
    {
        if(!cJSON_IsObject(order_item_option_local_nonprimitive)){
            goto end;
        }
        order_calculate_order_item_inner_order_item_option_inner_t *order_item_optionItem = order_calculate_order_item_inner_order_item_option_inner_parseFromJSON(order_item_option_local_nonprimitive);

        list_addElement(order_item_optionList, order_item_optionItem);
    }
    }


    order_calculate_order_item_inner_local_var = order_calculate_order_item_inner_create_internal (
        strdup(order_item_id->valuestring),
        order_item_quantity->valuedouble,
        order_item_variant_id && !cJSON_IsNull(order_item_variant_id) ? strdup(order_item_variant_id->valuestring) : NULL,
        order_item_option ? order_item_optionList : NULL
        );

    return order_calculate_order_item_inner_local_var;
end:
    if (order_item_optionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_item_optionList) {
            order_calculate_order_item_inner_order_item_option_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_item_optionList);
        order_item_optionList = NULL;
    }
    return NULL;

}
