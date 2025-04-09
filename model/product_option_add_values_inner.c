#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_option_add_values_inner.h"



static product_option_add_values_inner_t *product_option_add_values_inner_create_internal(
    char *value,
    char *display_value,
    int is_default
    ) {
    product_option_add_values_inner_t *product_option_add_values_inner_local_var = malloc(sizeof(product_option_add_values_inner_t));
    if (!product_option_add_values_inner_local_var) {
        return NULL;
    }
    product_option_add_values_inner_local_var->value = value;
    product_option_add_values_inner_local_var->display_value = display_value;
    product_option_add_values_inner_local_var->is_default = is_default;

    product_option_add_values_inner_local_var->_library_owned = 1;
    return product_option_add_values_inner_local_var;
}

__attribute__((deprecated)) product_option_add_values_inner_t *product_option_add_values_inner_create(
    char *value,
    char *display_value,
    int is_default
    ) {
    return product_option_add_values_inner_create_internal (
        value,
        display_value,
        is_default
        );
}

void product_option_add_values_inner_free(product_option_add_values_inner_t *product_option_add_values_inner) {
    if(NULL == product_option_add_values_inner){
        return ;
    }
    if(product_option_add_values_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_option_add_values_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_option_add_values_inner->value) {
        free(product_option_add_values_inner->value);
        product_option_add_values_inner->value = NULL;
    }
    if (product_option_add_values_inner->display_value) {
        free(product_option_add_values_inner->display_value);
        product_option_add_values_inner->display_value = NULL;
    }
    free(product_option_add_values_inner);
}

cJSON *product_option_add_values_inner_convertToJSON(product_option_add_values_inner_t *product_option_add_values_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_option_add_values_inner->value
    if (!product_option_add_values_inner->value) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "value", product_option_add_values_inner->value) == NULL) {
    goto fail; //String
    }


    // product_option_add_values_inner->display_value
    if(product_option_add_values_inner->display_value) {
    if(cJSON_AddStringToObject(item, "display_value", product_option_add_values_inner->display_value) == NULL) {
    goto fail; //String
    }
    }


    // product_option_add_values_inner->is_default
    if(product_option_add_values_inner->is_default) {
    if(cJSON_AddBoolToObject(item, "is_default", product_option_add_values_inner->is_default) == NULL) {
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

product_option_add_values_inner_t *product_option_add_values_inner_parseFromJSON(cJSON *product_option_add_values_innerJSON){

    product_option_add_values_inner_t *product_option_add_values_inner_local_var = NULL;

    // product_option_add_values_inner->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(product_option_add_values_innerJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (!value) {
        goto end;
    }

    
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }

    // product_option_add_values_inner->display_value
    cJSON *display_value = cJSON_GetObjectItemCaseSensitive(product_option_add_values_innerJSON, "display_value");
    if (cJSON_IsNull(display_value)) {
        display_value = NULL;
    }
    if (display_value) { 
    if(!cJSON_IsString(display_value) && !cJSON_IsNull(display_value))
    {
    goto end; //String
    }
    }

    // product_option_add_values_inner->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(product_option_add_values_innerJSON, "is_default");
    if (cJSON_IsNull(is_default)) {
        is_default = NULL;
    }
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }


    product_option_add_values_inner_local_var = product_option_add_values_inner_create_internal (
        strdup(value->valuestring),
        display_value && !cJSON_IsNull(display_value) ? strdup(display_value->valuestring) : NULL,
        is_default ? is_default->valueint : 0
        );

    return product_option_add_values_inner_local_var;
end:
    return NULL;

}
