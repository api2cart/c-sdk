#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_tax_add_tax_rates_inner.h"



static product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner_create_internal(
    char *name,
    char *type,
    double value
    ) {
    product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner_local_var = malloc(sizeof(product_tax_add_tax_rates_inner_t));
    if (!product_tax_add_tax_rates_inner_local_var) {
        return NULL;
    }
    product_tax_add_tax_rates_inner_local_var->name = name;
    product_tax_add_tax_rates_inner_local_var->type = type;
    product_tax_add_tax_rates_inner_local_var->value = value;

    product_tax_add_tax_rates_inner_local_var->_library_owned = 1;
    return product_tax_add_tax_rates_inner_local_var;
}

__attribute__((deprecated)) product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner_create(
    char *name,
    char *type,
    double value
    ) {
    return product_tax_add_tax_rates_inner_create_internal (
        name,
        type,
        value
        );
}

void product_tax_add_tax_rates_inner_free(product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner) {
    if(NULL == product_tax_add_tax_rates_inner){
        return ;
    }
    if(product_tax_add_tax_rates_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_tax_add_tax_rates_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_tax_add_tax_rates_inner->name) {
        free(product_tax_add_tax_rates_inner->name);
        product_tax_add_tax_rates_inner->name = NULL;
    }
    if (product_tax_add_tax_rates_inner->type) {
        free(product_tax_add_tax_rates_inner->type);
        product_tax_add_tax_rates_inner->type = NULL;
    }
    free(product_tax_add_tax_rates_inner);
}

cJSON *product_tax_add_tax_rates_inner_convertToJSON(product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_tax_add_tax_rates_inner->name
    if(product_tax_add_tax_rates_inner->name) {
    if(cJSON_AddStringToObject(item, "name", product_tax_add_tax_rates_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // product_tax_add_tax_rates_inner->type
    if(product_tax_add_tax_rates_inner->type) {
    if(cJSON_AddStringToObject(item, "type", product_tax_add_tax_rates_inner->type) == NULL) {
    goto fail; //String
    }
    }


    // product_tax_add_tax_rates_inner->value
    if(product_tax_add_tax_rates_inner->value) {
    if(cJSON_AddNumberToObject(item, "value", product_tax_add_tax_rates_inner->value) == NULL) {
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

product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner_parseFromJSON(cJSON *product_tax_add_tax_rates_innerJSON){

    product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner_local_var = NULL;

    // product_tax_add_tax_rates_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_tax_add_tax_rates_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_tax_add_tax_rates_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_tax_add_tax_rates_innerJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // product_tax_add_tax_rates_inner->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(product_tax_add_tax_rates_innerJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }


    product_tax_add_tax_rates_inner_local_var = product_tax_add_tax_rates_inner_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        value ? value->valuedouble : 0
        );

    return product_tax_add_tax_rates_inner_local_var;
end:
    return NULL;

}
