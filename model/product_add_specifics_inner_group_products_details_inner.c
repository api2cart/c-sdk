#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_specifics_inner_group_products_details_inner.h"



static product_add_specifics_inner_group_products_details_inner_t *product_add_specifics_inner_group_products_details_inner_create_internal(
    char *id,
    int quantity
    ) {
    product_add_specifics_inner_group_products_details_inner_t *product_add_specifics_inner_group_products_details_inner_local_var = malloc(sizeof(product_add_specifics_inner_group_products_details_inner_t));
    if (!product_add_specifics_inner_group_products_details_inner_local_var) {
        return NULL;
    }
    product_add_specifics_inner_group_products_details_inner_local_var->id = id;
    product_add_specifics_inner_group_products_details_inner_local_var->quantity = quantity;

    product_add_specifics_inner_group_products_details_inner_local_var->_library_owned = 1;
    return product_add_specifics_inner_group_products_details_inner_local_var;
}

__attribute__((deprecated)) product_add_specifics_inner_group_products_details_inner_t *product_add_specifics_inner_group_products_details_inner_create(
    char *id,
    int quantity
    ) {
    return product_add_specifics_inner_group_products_details_inner_create_internal (
        id,
        quantity
        );
}

void product_add_specifics_inner_group_products_details_inner_free(product_add_specifics_inner_group_products_details_inner_t *product_add_specifics_inner_group_products_details_inner) {
    if(NULL == product_add_specifics_inner_group_products_details_inner){
        return ;
    }
    if(product_add_specifics_inner_group_products_details_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_specifics_inner_group_products_details_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_specifics_inner_group_products_details_inner->id) {
        free(product_add_specifics_inner_group_products_details_inner->id);
        product_add_specifics_inner_group_products_details_inner->id = NULL;
    }
    free(product_add_specifics_inner_group_products_details_inner);
}

cJSON *product_add_specifics_inner_group_products_details_inner_convertToJSON(product_add_specifics_inner_group_products_details_inner_t *product_add_specifics_inner_group_products_details_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_specifics_inner_group_products_details_inner->id
    if (!product_add_specifics_inner_group_products_details_inner->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", product_add_specifics_inner_group_products_details_inner->id) == NULL) {
    goto fail; //String
    }


    // product_add_specifics_inner_group_products_details_inner->quantity
    if (!product_add_specifics_inner_group_products_details_inner->quantity) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "quantity", product_add_specifics_inner_group_products_details_inner->quantity) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_specifics_inner_group_products_details_inner_t *product_add_specifics_inner_group_products_details_inner_parseFromJSON(cJSON *product_add_specifics_inner_group_products_details_innerJSON){

    product_add_specifics_inner_group_products_details_inner_t *product_add_specifics_inner_group_products_details_inner_local_var = NULL;

    // product_add_specifics_inner_group_products_details_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_group_products_details_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // product_add_specifics_inner_group_products_details_inner->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_group_products_details_innerJSON, "quantity");
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


    product_add_specifics_inner_group_products_details_inner_local_var = product_add_specifics_inner_group_products_details_inner_create_internal (
        strdup(id->valuestring),
        quantity->valuedouble
        );

    return product_add_specifics_inner_group_products_details_inner_local_var;
end:
    return NULL;

}
