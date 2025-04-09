#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_price_add.h"



static product_price_add_t *product_price_add_create_internal(
    char *product_id,
    list_t *group_prices,
    char *store_id
    ) {
    product_price_add_t *product_price_add_local_var = malloc(sizeof(product_price_add_t));
    if (!product_price_add_local_var) {
        return NULL;
    }
    product_price_add_local_var->product_id = product_id;
    product_price_add_local_var->group_prices = group_prices;
    product_price_add_local_var->store_id = store_id;

    product_price_add_local_var->_library_owned = 1;
    return product_price_add_local_var;
}

__attribute__((deprecated)) product_price_add_t *product_price_add_create(
    char *product_id,
    list_t *group_prices,
    char *store_id
    ) {
    return product_price_add_create_internal (
        product_id,
        group_prices,
        store_id
        );
}

void product_price_add_free(product_price_add_t *product_price_add) {
    if(NULL == product_price_add){
        return ;
    }
    if(product_price_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_price_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_price_add->product_id) {
        free(product_price_add->product_id);
        product_price_add->product_id = NULL;
    }
    if (product_price_add->group_prices) {
        list_ForEach(listEntry, product_price_add->group_prices) {
            product_add_group_prices_inner_free(listEntry->data);
        }
        list_freeList(product_price_add->group_prices);
        product_price_add->group_prices = NULL;
    }
    if (product_price_add->store_id) {
        free(product_price_add->store_id);
        product_price_add->store_id = NULL;
    }
    free(product_price_add);
}

cJSON *product_price_add_convertToJSON(product_price_add_t *product_price_add) {
    cJSON *item = cJSON_CreateObject();

    // product_price_add->product_id
    if(product_price_add->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_price_add->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_price_add->group_prices
    if(product_price_add->group_prices) {
    cJSON *group_prices = cJSON_AddArrayToObject(item, "group_prices");
    if(group_prices == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *group_pricesListEntry;
    if (product_price_add->group_prices) {
    list_ForEach(group_pricesListEntry, product_price_add->group_prices) {
    cJSON *itemLocal = product_add_group_prices_inner_convertToJSON(group_pricesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(group_prices, itemLocal);
    }
    }
    }


    // product_price_add->store_id
    if(product_price_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_price_add->store_id) == NULL) {
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

product_price_add_t *product_price_add_parseFromJSON(cJSON *product_price_addJSON){

    product_price_add_t *product_price_add_local_var = NULL;

    // define the local list for product_price_add->group_prices
    list_t *group_pricesList = NULL;

    // product_price_add->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_price_addJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_price_add->group_prices
    cJSON *group_prices = cJSON_GetObjectItemCaseSensitive(product_price_addJSON, "group_prices");
    if (cJSON_IsNull(group_prices)) {
        group_prices = NULL;
    }
    if (group_prices) { 
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
        product_add_group_prices_inner_t *group_pricesItem = product_add_group_prices_inner_parseFromJSON(group_prices_local_nonprimitive);

        list_addElement(group_pricesList, group_pricesItem);
    }
    }

    // product_price_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_price_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }


    product_price_add_local_var = product_price_add_create_internal (
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        group_prices ? group_pricesList : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL
        );

    return product_price_add_local_var;
end:
    if (group_pricesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, group_pricesList) {
            product_add_group_prices_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(group_pricesList);
        group_pricesList = NULL;
    }
    return NULL;

}
