#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_tax_add.h"



static product_tax_add_t *product_tax_add_create_internal(
    char *product_id,
    char *name,
    list_t *tax_rates
    ) {
    product_tax_add_t *product_tax_add_local_var = malloc(sizeof(product_tax_add_t));
    if (!product_tax_add_local_var) {
        return NULL;
    }
    product_tax_add_local_var->product_id = product_id;
    product_tax_add_local_var->name = name;
    product_tax_add_local_var->tax_rates = tax_rates;

    product_tax_add_local_var->_library_owned = 1;
    return product_tax_add_local_var;
}

__attribute__((deprecated)) product_tax_add_t *product_tax_add_create(
    char *product_id,
    char *name,
    list_t *tax_rates
    ) {
    return product_tax_add_create_internal (
        product_id,
        name,
        tax_rates
        );
}

void product_tax_add_free(product_tax_add_t *product_tax_add) {
    if(NULL == product_tax_add){
        return ;
    }
    if(product_tax_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_tax_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_tax_add->product_id) {
        free(product_tax_add->product_id);
        product_tax_add->product_id = NULL;
    }
    if (product_tax_add->name) {
        free(product_tax_add->name);
        product_tax_add->name = NULL;
    }
    if (product_tax_add->tax_rates) {
        list_ForEach(listEntry, product_tax_add->tax_rates) {
            product_tax_add_tax_rates_inner_free(listEntry->data);
        }
        list_freeList(product_tax_add->tax_rates);
        product_tax_add->tax_rates = NULL;
    }
    free(product_tax_add);
}

cJSON *product_tax_add_convertToJSON(product_tax_add_t *product_tax_add) {
    cJSON *item = cJSON_CreateObject();

    // product_tax_add->product_id
    if(product_tax_add->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_tax_add->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_tax_add->name
    if (!product_tax_add->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", product_tax_add->name) == NULL) {
    goto fail; //String
    }


    // product_tax_add->tax_rates
    if (!product_tax_add->tax_rates) {
        goto fail;
    }
    cJSON *tax_rates = cJSON_AddArrayToObject(item, "tax_rates");
    if(tax_rates == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tax_ratesListEntry;
    if (product_tax_add->tax_rates) {
    list_ForEach(tax_ratesListEntry, product_tax_add->tax_rates) {
    cJSON *itemLocal = product_tax_add_tax_rates_inner_convertToJSON(tax_ratesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tax_rates, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_tax_add_t *product_tax_add_parseFromJSON(cJSON *product_tax_addJSON){

    product_tax_add_t *product_tax_add_local_var = NULL;

    // define the local list for product_tax_add->tax_rates
    list_t *tax_ratesList = NULL;

    // product_tax_add->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_tax_addJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_tax_add->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_tax_addJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // product_tax_add->tax_rates
    cJSON *tax_rates = cJSON_GetObjectItemCaseSensitive(product_tax_addJSON, "tax_rates");
    if (cJSON_IsNull(tax_rates)) {
        tax_rates = NULL;
    }
    if (!tax_rates) {
        goto end;
    }

    
    cJSON *tax_rates_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tax_rates)){
        goto end; //nonprimitive container
    }

    tax_ratesList = list_createList();

    cJSON_ArrayForEach(tax_rates_local_nonprimitive,tax_rates )
    {
        if(!cJSON_IsObject(tax_rates_local_nonprimitive)){
            goto end;
        }
        product_tax_add_tax_rates_inner_t *tax_ratesItem = product_tax_add_tax_rates_inner_parseFromJSON(tax_rates_local_nonprimitive);

        list_addElement(tax_ratesList, tax_ratesItem);
    }


    product_tax_add_local_var = product_tax_add_create_internal (
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        strdup(name->valuestring),
        tax_ratesList
        );

    return product_tax_add_local_var;
end:
    if (tax_ratesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tax_ratesList) {
            product_tax_add_tax_rates_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tax_ratesList);
        tax_ratesList = NULL;
    }
    return NULL;

}
