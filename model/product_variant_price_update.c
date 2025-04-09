#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_price_update.h"



static product_variant_price_update_t *product_variant_price_update_create_internal(
    char *id,
    char *product_id,
    list_t *group_prices
    ) {
    product_variant_price_update_t *product_variant_price_update_local_var = malloc(sizeof(product_variant_price_update_t));
    if (!product_variant_price_update_local_var) {
        return NULL;
    }
    product_variant_price_update_local_var->id = id;
    product_variant_price_update_local_var->product_id = product_id;
    product_variant_price_update_local_var->group_prices = group_prices;

    product_variant_price_update_local_var->_library_owned = 1;
    return product_variant_price_update_local_var;
}

__attribute__((deprecated)) product_variant_price_update_t *product_variant_price_update_create(
    char *id,
    char *product_id,
    list_t *group_prices
    ) {
    return product_variant_price_update_create_internal (
        id,
        product_id,
        group_prices
        );
}

void product_variant_price_update_free(product_variant_price_update_t *product_variant_price_update) {
    if(NULL == product_variant_price_update){
        return ;
    }
    if(product_variant_price_update->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_price_update_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_price_update->id) {
        free(product_variant_price_update->id);
        product_variant_price_update->id = NULL;
    }
    if (product_variant_price_update->product_id) {
        free(product_variant_price_update->product_id);
        product_variant_price_update->product_id = NULL;
    }
    if (product_variant_price_update->group_prices) {
        list_ForEach(listEntry, product_variant_price_update->group_prices) {
            product_price_update_group_prices_inner_free(listEntry->data);
        }
        list_freeList(product_variant_price_update->group_prices);
        product_variant_price_update->group_prices = NULL;
    }
    free(product_variant_price_update);
}

cJSON *product_variant_price_update_convertToJSON(product_variant_price_update_t *product_variant_price_update) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_price_update->id
    if(product_variant_price_update->id) {
    if(cJSON_AddStringToObject(item, "id", product_variant_price_update->id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_price_update->product_id
    if(product_variant_price_update->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_variant_price_update->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_price_update->group_prices
    if (!product_variant_price_update->group_prices) {
        goto fail;
    }
    cJSON *group_prices = cJSON_AddArrayToObject(item, "group_prices");
    if(group_prices == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *group_pricesListEntry;
    if (product_variant_price_update->group_prices) {
    list_ForEach(group_pricesListEntry, product_variant_price_update->group_prices) {
    cJSON *itemLocal = product_price_update_group_prices_inner_convertToJSON(group_pricesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(group_prices, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_variant_price_update_t *product_variant_price_update_parseFromJSON(cJSON *product_variant_price_updateJSON){

    product_variant_price_update_t *product_variant_price_update_local_var = NULL;

    // define the local list for product_variant_price_update->group_prices
    list_t *group_pricesList = NULL;

    // product_variant_price_update->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_variant_price_updateJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_variant_price_update->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_variant_price_updateJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_variant_price_update->group_prices
    cJSON *group_prices = cJSON_GetObjectItemCaseSensitive(product_variant_price_updateJSON, "group_prices");
    if (cJSON_IsNull(group_prices)) {
        group_prices = NULL;
    }
    if (!group_prices) {
        goto end;
    }

    
    cJSON *group_prices_local_nonprimitive = NULL;
    if(!cJSON_IsArray(group_prices)){
        goto end; //nonprimitive container
    }

    group_pricesList = list_createList();

    cJSON_ArrayForEach(group_prices_local_nonprimitive,group_prices )
    {
        if(!cJSON_IsObject(group_prices_local_nonprimitive)){
            goto end;
        }
        product_price_update_group_prices_inner_t *group_pricesItem = product_price_update_group_prices_inner_parseFromJSON(group_prices_local_nonprimitive);

        list_addElement(group_pricesList, group_pricesItem);
    }


    product_variant_price_update_local_var = product_variant_price_update_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        group_pricesList
        );

    return product_variant_price_update_local_var;
end:
    if (group_pricesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, group_pricesList) {
            product_price_update_group_prices_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(group_pricesList);
        group_pricesList = NULL;
    }
    return NULL;

}
