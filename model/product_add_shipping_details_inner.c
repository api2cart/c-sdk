#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_shipping_details_inner.h"



static product_add_shipping_details_inner_t *product_add_shipping_details_inner_create_internal(
    char *shipping_type,
    char *shipping_service,
    double shipping_cost
    ) {
    product_add_shipping_details_inner_t *product_add_shipping_details_inner_local_var = malloc(sizeof(product_add_shipping_details_inner_t));
    if (!product_add_shipping_details_inner_local_var) {
        return NULL;
    }
    product_add_shipping_details_inner_local_var->shipping_type = shipping_type;
    product_add_shipping_details_inner_local_var->shipping_service = shipping_service;
    product_add_shipping_details_inner_local_var->shipping_cost = shipping_cost;

    product_add_shipping_details_inner_local_var->_library_owned = 1;
    return product_add_shipping_details_inner_local_var;
}

__attribute__((deprecated)) product_add_shipping_details_inner_t *product_add_shipping_details_inner_create(
    char *shipping_type,
    char *shipping_service,
    double shipping_cost
    ) {
    return product_add_shipping_details_inner_create_internal (
        shipping_type,
        shipping_service,
        shipping_cost
        );
}

void product_add_shipping_details_inner_free(product_add_shipping_details_inner_t *product_add_shipping_details_inner) {
    if(NULL == product_add_shipping_details_inner){
        return ;
    }
    if(product_add_shipping_details_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_shipping_details_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_shipping_details_inner->shipping_type) {
        free(product_add_shipping_details_inner->shipping_type);
        product_add_shipping_details_inner->shipping_type = NULL;
    }
    if (product_add_shipping_details_inner->shipping_service) {
        free(product_add_shipping_details_inner->shipping_service);
        product_add_shipping_details_inner->shipping_service = NULL;
    }
    free(product_add_shipping_details_inner);
}

cJSON *product_add_shipping_details_inner_convertToJSON(product_add_shipping_details_inner_t *product_add_shipping_details_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_shipping_details_inner->shipping_type
    if(product_add_shipping_details_inner->shipping_type) {
    if(cJSON_AddStringToObject(item, "shipping_type", product_add_shipping_details_inner->shipping_type) == NULL) {
    goto fail; //String
    }
    }


    // product_add_shipping_details_inner->shipping_service
    if(product_add_shipping_details_inner->shipping_service) {
    if(cJSON_AddStringToObject(item, "shipping_service", product_add_shipping_details_inner->shipping_service) == NULL) {
    goto fail; //String
    }
    }


    // product_add_shipping_details_inner->shipping_cost
    if(product_add_shipping_details_inner->shipping_cost) {
    if(cJSON_AddNumberToObject(item, "shipping_cost", product_add_shipping_details_inner->shipping_cost) == NULL) {
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

product_add_shipping_details_inner_t *product_add_shipping_details_inner_parseFromJSON(cJSON *product_add_shipping_details_innerJSON){

    product_add_shipping_details_inner_t *product_add_shipping_details_inner_local_var = NULL;

    // product_add_shipping_details_inner->shipping_type
    cJSON *shipping_type = cJSON_GetObjectItemCaseSensitive(product_add_shipping_details_innerJSON, "shipping_type");
    if (cJSON_IsNull(shipping_type)) {
        shipping_type = NULL;
    }
    if (shipping_type) { 
    if(!cJSON_IsString(shipping_type) && !cJSON_IsNull(shipping_type))
    {
    goto end; //String
    }
    }

    // product_add_shipping_details_inner->shipping_service
    cJSON *shipping_service = cJSON_GetObjectItemCaseSensitive(product_add_shipping_details_innerJSON, "shipping_service");
    if (cJSON_IsNull(shipping_service)) {
        shipping_service = NULL;
    }
    if (shipping_service) { 
    if(!cJSON_IsString(shipping_service) && !cJSON_IsNull(shipping_service))
    {
    goto end; //String
    }
    }

    // product_add_shipping_details_inner->shipping_cost
    cJSON *shipping_cost = cJSON_GetObjectItemCaseSensitive(product_add_shipping_details_innerJSON, "shipping_cost");
    if (cJSON_IsNull(shipping_cost)) {
        shipping_cost = NULL;
    }
    if (shipping_cost) { 
    if(!cJSON_IsNumber(shipping_cost))
    {
    goto end; //Numeric
    }
    }


    product_add_shipping_details_inner_local_var = product_add_shipping_details_inner_create_internal (
        shipping_type && !cJSON_IsNull(shipping_type) ? strdup(shipping_type->valuestring) : NULL,
        shipping_service && !cJSON_IsNull(shipping_service) ? strdup(shipping_service->valuestring) : NULL,
        shipping_cost ? shipping_cost->valuedouble : 0
        );

    return product_add_shipping_details_inner_local_var;
end:
    return NULL;

}
