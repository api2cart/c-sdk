#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_add_attributes_inner.h"



static product_variant_add_attributes_inner_t *product_variant_add_attributes_inner_create_internal(
    char *attribute_name,
    char *attribute_value,
    double attribute_price
    ) {
    product_variant_add_attributes_inner_t *product_variant_add_attributes_inner_local_var = malloc(sizeof(product_variant_add_attributes_inner_t));
    if (!product_variant_add_attributes_inner_local_var) {
        return NULL;
    }
    product_variant_add_attributes_inner_local_var->attribute_name = attribute_name;
    product_variant_add_attributes_inner_local_var->attribute_value = attribute_value;
    product_variant_add_attributes_inner_local_var->attribute_price = attribute_price;

    product_variant_add_attributes_inner_local_var->_library_owned = 1;
    return product_variant_add_attributes_inner_local_var;
}

__attribute__((deprecated)) product_variant_add_attributes_inner_t *product_variant_add_attributes_inner_create(
    char *attribute_name,
    char *attribute_value,
    double attribute_price
    ) {
    return product_variant_add_attributes_inner_create_internal (
        attribute_name,
        attribute_value,
        attribute_price
        );
}

void product_variant_add_attributes_inner_free(product_variant_add_attributes_inner_t *product_variant_add_attributes_inner) {
    if(NULL == product_variant_add_attributes_inner){
        return ;
    }
    if(product_variant_add_attributes_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_add_attributes_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_add_attributes_inner->attribute_name) {
        free(product_variant_add_attributes_inner->attribute_name);
        product_variant_add_attributes_inner->attribute_name = NULL;
    }
    if (product_variant_add_attributes_inner->attribute_value) {
        free(product_variant_add_attributes_inner->attribute_value);
        product_variant_add_attributes_inner->attribute_value = NULL;
    }
    free(product_variant_add_attributes_inner);
}

cJSON *product_variant_add_attributes_inner_convertToJSON(product_variant_add_attributes_inner_t *product_variant_add_attributes_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_add_attributes_inner->attribute_name
    if(product_variant_add_attributes_inner->attribute_name) {
    if(cJSON_AddStringToObject(item, "attribute_name", product_variant_add_attributes_inner->attribute_name) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add_attributes_inner->attribute_value
    if(product_variant_add_attributes_inner->attribute_value) {
    if(cJSON_AddStringToObject(item, "attribute_value", product_variant_add_attributes_inner->attribute_value) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add_attributes_inner->attribute_price
    if(product_variant_add_attributes_inner->attribute_price) {
    if(cJSON_AddNumberToObject(item, "attribute_price", product_variant_add_attributes_inner->attribute_price) == NULL) {
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

product_variant_add_attributes_inner_t *product_variant_add_attributes_inner_parseFromJSON(cJSON *product_variant_add_attributes_innerJSON){

    product_variant_add_attributes_inner_t *product_variant_add_attributes_inner_local_var = NULL;

    // product_variant_add_attributes_inner->attribute_name
    cJSON *attribute_name = cJSON_GetObjectItemCaseSensitive(product_variant_add_attributes_innerJSON, "attribute_name");
    if (cJSON_IsNull(attribute_name)) {
        attribute_name = NULL;
    }
    if (attribute_name) { 
    if(!cJSON_IsString(attribute_name) && !cJSON_IsNull(attribute_name))
    {
    goto end; //String
    }
    }

    // product_variant_add_attributes_inner->attribute_value
    cJSON *attribute_value = cJSON_GetObjectItemCaseSensitive(product_variant_add_attributes_innerJSON, "attribute_value");
    if (cJSON_IsNull(attribute_value)) {
        attribute_value = NULL;
    }
    if (attribute_value) { 
    if(!cJSON_IsString(attribute_value) && !cJSON_IsNull(attribute_value))
    {
    goto end; //String
    }
    }

    // product_variant_add_attributes_inner->attribute_price
    cJSON *attribute_price = cJSON_GetObjectItemCaseSensitive(product_variant_add_attributes_innerJSON, "attribute_price");
    if (cJSON_IsNull(attribute_price)) {
        attribute_price = NULL;
    }
    if (attribute_price) { 
    if(!cJSON_IsNumber(attribute_price))
    {
    goto end; //Numeric
    }
    }


    product_variant_add_attributes_inner_local_var = product_variant_add_attributes_inner_create_internal (
        attribute_name && !cJSON_IsNull(attribute_name) ? strdup(attribute_name->valuestring) : NULL,
        attribute_value && !cJSON_IsNull(attribute_value) ? strdup(attribute_value->valuestring) : NULL,
        attribute_price ? attribute_price->valuedouble : 0
        );

    return product_variant_add_attributes_inner_local_var;
end:
    return NULL;

}
