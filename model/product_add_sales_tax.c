#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_sales_tax.h"



static product_add_sales_tax_t *product_add_sales_tax_create_internal(
    double tax_percent,
    char *tax_state,
    int shipping_inc_in_tax
    ) {
    product_add_sales_tax_t *product_add_sales_tax_local_var = malloc(sizeof(product_add_sales_tax_t));
    if (!product_add_sales_tax_local_var) {
        return NULL;
    }
    product_add_sales_tax_local_var->tax_percent = tax_percent;
    product_add_sales_tax_local_var->tax_state = tax_state;
    product_add_sales_tax_local_var->shipping_inc_in_tax = shipping_inc_in_tax;

    product_add_sales_tax_local_var->_library_owned = 1;
    return product_add_sales_tax_local_var;
}

__attribute__((deprecated)) product_add_sales_tax_t *product_add_sales_tax_create(
    double tax_percent,
    char *tax_state,
    int shipping_inc_in_tax
    ) {
    return product_add_sales_tax_create_internal (
        tax_percent,
        tax_state,
        shipping_inc_in_tax
        );
}

void product_add_sales_tax_free(product_add_sales_tax_t *product_add_sales_tax) {
    if(NULL == product_add_sales_tax){
        return ;
    }
    if(product_add_sales_tax->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_sales_tax_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_sales_tax->tax_state) {
        free(product_add_sales_tax->tax_state);
        product_add_sales_tax->tax_state = NULL;
    }
    free(product_add_sales_tax);
}

cJSON *product_add_sales_tax_convertToJSON(product_add_sales_tax_t *product_add_sales_tax) {
    cJSON *item = cJSON_CreateObject();

    // product_add_sales_tax->tax_percent
    if(product_add_sales_tax->tax_percent) {
    if(cJSON_AddNumberToObject(item, "tax_percent", product_add_sales_tax->tax_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_sales_tax->tax_state
    if(product_add_sales_tax->tax_state) {
    if(cJSON_AddStringToObject(item, "tax_state", product_add_sales_tax->tax_state) == NULL) {
    goto fail; //String
    }
    }


    // product_add_sales_tax->shipping_inc_in_tax
    if(product_add_sales_tax->shipping_inc_in_tax) {
    if(cJSON_AddBoolToObject(item, "shipping_inc_in_tax", product_add_sales_tax->shipping_inc_in_tax) == NULL) {
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

product_add_sales_tax_t *product_add_sales_tax_parseFromJSON(cJSON *product_add_sales_taxJSON){

    product_add_sales_tax_t *product_add_sales_tax_local_var = NULL;

    // product_add_sales_tax->tax_percent
    cJSON *tax_percent = cJSON_GetObjectItemCaseSensitive(product_add_sales_taxJSON, "tax_percent");
    if (cJSON_IsNull(tax_percent)) {
        tax_percent = NULL;
    }
    if (tax_percent) { 
    if(!cJSON_IsNumber(tax_percent))
    {
    goto end; //Numeric
    }
    }

    // product_add_sales_tax->tax_state
    cJSON *tax_state = cJSON_GetObjectItemCaseSensitive(product_add_sales_taxJSON, "tax_state");
    if (cJSON_IsNull(tax_state)) {
        tax_state = NULL;
    }
    if (tax_state) { 
    if(!cJSON_IsString(tax_state) && !cJSON_IsNull(tax_state))
    {
    goto end; //String
    }
    }

    // product_add_sales_tax->shipping_inc_in_tax
    cJSON *shipping_inc_in_tax = cJSON_GetObjectItemCaseSensitive(product_add_sales_taxJSON, "shipping_inc_in_tax");
    if (cJSON_IsNull(shipping_inc_in_tax)) {
        shipping_inc_in_tax = NULL;
    }
    if (shipping_inc_in_tax) { 
    if(!cJSON_IsBool(shipping_inc_in_tax))
    {
    goto end; //Bool
    }
    }


    product_add_sales_tax_local_var = product_add_sales_tax_create_internal (
        tax_percent ? tax_percent->valuedouble : 0,
        tax_state && !cJSON_IsNull(tax_state) ? strdup(tax_state->valuestring) : NULL,
        shipping_inc_in_tax ? shipping_inc_in_tax->valueint : 0
        );

    return product_add_sales_tax_local_var;
end:
    return NULL;

}
