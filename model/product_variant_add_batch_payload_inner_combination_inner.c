#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_add_batch_payload_inner_combination_inner.h"



static product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner_create_internal(
    char *option_name,
    char *option_value_name
    ) {
    product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner_local_var = malloc(sizeof(product_variant_add_batch_payload_inner_combination_inner_t));
    if (!product_variant_add_batch_payload_inner_combination_inner_local_var) {
        return NULL;
    }
    product_variant_add_batch_payload_inner_combination_inner_local_var->option_name = option_name;
    product_variant_add_batch_payload_inner_combination_inner_local_var->option_value_name = option_value_name;

    product_variant_add_batch_payload_inner_combination_inner_local_var->_library_owned = 1;
    return product_variant_add_batch_payload_inner_combination_inner_local_var;
}

__attribute__((deprecated)) product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner_create(
    char *option_name,
    char *option_value_name
    ) {
    return product_variant_add_batch_payload_inner_combination_inner_create_internal (
        option_name,
        option_value_name
        );
}

void product_variant_add_batch_payload_inner_combination_inner_free(product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner) {
    if(NULL == product_variant_add_batch_payload_inner_combination_inner){
        return ;
    }
    if(product_variant_add_batch_payload_inner_combination_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_add_batch_payload_inner_combination_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_add_batch_payload_inner_combination_inner->option_name) {
        free(product_variant_add_batch_payload_inner_combination_inner->option_name);
        product_variant_add_batch_payload_inner_combination_inner->option_name = NULL;
    }
    if (product_variant_add_batch_payload_inner_combination_inner->option_value_name) {
        free(product_variant_add_batch_payload_inner_combination_inner->option_value_name);
        product_variant_add_batch_payload_inner_combination_inner->option_value_name = NULL;
    }
    free(product_variant_add_batch_payload_inner_combination_inner);
}

cJSON *product_variant_add_batch_payload_inner_combination_inner_convertToJSON(product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_add_batch_payload_inner_combination_inner->option_name
    if (!product_variant_add_batch_payload_inner_combination_inner->option_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "option_name", product_variant_add_batch_payload_inner_combination_inner->option_name) == NULL) {
    goto fail; //String
    }


    // product_variant_add_batch_payload_inner_combination_inner->option_value_name
    if (!product_variant_add_batch_payload_inner_combination_inner->option_value_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "option_value_name", product_variant_add_batch_payload_inner_combination_inner->option_value_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner_parseFromJSON(cJSON *product_variant_add_batch_payload_inner_combination_innerJSON){

    product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner_local_var = NULL;

    // product_variant_add_batch_payload_inner_combination_inner->option_name
    cJSON *option_name = cJSON_GetObjectItemCaseSensitive(product_variant_add_batch_payload_inner_combination_innerJSON, "option_name");
    if (cJSON_IsNull(option_name)) {
        option_name = NULL;
    }
    if (!option_name) {
        goto end;
    }

    
    if(!cJSON_IsString(option_name))
    {
    goto end; //String
    }

    // product_variant_add_batch_payload_inner_combination_inner->option_value_name
    cJSON *option_value_name = cJSON_GetObjectItemCaseSensitive(product_variant_add_batch_payload_inner_combination_innerJSON, "option_value_name");
    if (cJSON_IsNull(option_value_name)) {
        option_value_name = NULL;
    }
    if (!option_value_name) {
        goto end;
    }

    
    if(!cJSON_IsString(option_value_name))
    {
    goto end; //String
    }


    product_variant_add_batch_payload_inner_combination_inner_local_var = product_variant_add_batch_payload_inner_combination_inner_create_internal (
        strdup(option_name->valuestring),
        strdup(option_value_name->valuestring)
        );

    return product_variant_add_batch_payload_inner_combination_inner_local_var;
end:
    return NULL;

}
