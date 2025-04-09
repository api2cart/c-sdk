#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_update_options_inner.h"



static product_variant_update_options_inner_t *product_variant_update_options_inner_create_internal(
    char *option_name,
    char *option_value
    ) {
    product_variant_update_options_inner_t *product_variant_update_options_inner_local_var = malloc(sizeof(product_variant_update_options_inner_t));
    if (!product_variant_update_options_inner_local_var) {
        return NULL;
    }
    product_variant_update_options_inner_local_var->option_name = option_name;
    product_variant_update_options_inner_local_var->option_value = option_value;

    product_variant_update_options_inner_local_var->_library_owned = 1;
    return product_variant_update_options_inner_local_var;
}

__attribute__((deprecated)) product_variant_update_options_inner_t *product_variant_update_options_inner_create(
    char *option_name,
    char *option_value
    ) {
    return product_variant_update_options_inner_create_internal (
        option_name,
        option_value
        );
}

void product_variant_update_options_inner_free(product_variant_update_options_inner_t *product_variant_update_options_inner) {
    if(NULL == product_variant_update_options_inner){
        return ;
    }
    if(product_variant_update_options_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_update_options_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_update_options_inner->option_name) {
        free(product_variant_update_options_inner->option_name);
        product_variant_update_options_inner->option_name = NULL;
    }
    if (product_variant_update_options_inner->option_value) {
        free(product_variant_update_options_inner->option_value);
        product_variant_update_options_inner->option_value = NULL;
    }
    free(product_variant_update_options_inner);
}

cJSON *product_variant_update_options_inner_convertToJSON(product_variant_update_options_inner_t *product_variant_update_options_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_update_options_inner->option_name
    if(product_variant_update_options_inner->option_name) {
    if(cJSON_AddStringToObject(item, "option_name", product_variant_update_options_inner->option_name) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update_options_inner->option_value
    if(product_variant_update_options_inner->option_value) {
    if(cJSON_AddStringToObject(item, "option_value", product_variant_update_options_inner->option_value) == NULL) {
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

product_variant_update_options_inner_t *product_variant_update_options_inner_parseFromJSON(cJSON *product_variant_update_options_innerJSON){

    product_variant_update_options_inner_t *product_variant_update_options_inner_local_var = NULL;

    // product_variant_update_options_inner->option_name
    cJSON *option_name = cJSON_GetObjectItemCaseSensitive(product_variant_update_options_innerJSON, "option_name");
    if (cJSON_IsNull(option_name)) {
        option_name = NULL;
    }
    if (option_name) { 
    if(!cJSON_IsString(option_name) && !cJSON_IsNull(option_name))
    {
    goto end; //String
    }
    }

    // product_variant_update_options_inner->option_value
    cJSON *option_value = cJSON_GetObjectItemCaseSensitive(product_variant_update_options_innerJSON, "option_value");
    if (cJSON_IsNull(option_value)) {
        option_value = NULL;
    }
    if (option_value) { 
    if(!cJSON_IsString(option_value) && !cJSON_IsNull(option_value))
    {
    goto end; //String
    }
    }


    product_variant_update_options_inner_local_var = product_variant_update_options_inner_create_internal (
        option_name && !cJSON_IsNull(option_name) ? strdup(option_name->valuestring) : NULL,
        option_value && !cJSON_IsNull(option_value) ? strdup(option_value->valuestring) : NULL
        );

    return product_variant_update_options_inner_local_var;
end:
    return NULL;

}
