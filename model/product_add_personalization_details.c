#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_personalization_details.h"



static product_add_personalization_details_t *product_add_personalization_details_create_internal(
    int is_personalizable,
    int personalization_is_required,
    int personalization_char_count_max,
    char *personalization_instructions
    ) {
    product_add_personalization_details_t *product_add_personalization_details_local_var = malloc(sizeof(product_add_personalization_details_t));
    if (!product_add_personalization_details_local_var) {
        return NULL;
    }
    product_add_personalization_details_local_var->is_personalizable = is_personalizable;
    product_add_personalization_details_local_var->personalization_is_required = personalization_is_required;
    product_add_personalization_details_local_var->personalization_char_count_max = personalization_char_count_max;
    product_add_personalization_details_local_var->personalization_instructions = personalization_instructions;

    product_add_personalization_details_local_var->_library_owned = 1;
    return product_add_personalization_details_local_var;
}

__attribute__((deprecated)) product_add_personalization_details_t *product_add_personalization_details_create(
    int is_personalizable,
    int personalization_is_required,
    int personalization_char_count_max,
    char *personalization_instructions
    ) {
    return product_add_personalization_details_create_internal (
        is_personalizable,
        personalization_is_required,
        personalization_char_count_max,
        personalization_instructions
        );
}

void product_add_personalization_details_free(product_add_personalization_details_t *product_add_personalization_details) {
    if(NULL == product_add_personalization_details){
        return ;
    }
    if(product_add_personalization_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_personalization_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_personalization_details->personalization_instructions) {
        free(product_add_personalization_details->personalization_instructions);
        product_add_personalization_details->personalization_instructions = NULL;
    }
    free(product_add_personalization_details);
}

cJSON *product_add_personalization_details_convertToJSON(product_add_personalization_details_t *product_add_personalization_details) {
    cJSON *item = cJSON_CreateObject();

    // product_add_personalization_details->is_personalizable
    if (!product_add_personalization_details->is_personalizable) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "is_personalizable", product_add_personalization_details->is_personalizable) == NULL) {
    goto fail; //Bool
    }


    // product_add_personalization_details->personalization_is_required
    if(product_add_personalization_details->personalization_is_required) {
    if(cJSON_AddBoolToObject(item, "personalization_is_required", product_add_personalization_details->personalization_is_required) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_personalization_details->personalization_char_count_max
    if(product_add_personalization_details->personalization_char_count_max) {
    if(cJSON_AddNumberToObject(item, "personalization_char_count_max", product_add_personalization_details->personalization_char_count_max) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_personalization_details->personalization_instructions
    if(product_add_personalization_details->personalization_instructions) {
    if(cJSON_AddStringToObject(item, "personalization_instructions", product_add_personalization_details->personalization_instructions) == NULL) {
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

product_add_personalization_details_t *product_add_personalization_details_parseFromJSON(cJSON *product_add_personalization_detailsJSON){

    product_add_personalization_details_t *product_add_personalization_details_local_var = NULL;

    // product_add_personalization_details->is_personalizable
    cJSON *is_personalizable = cJSON_GetObjectItemCaseSensitive(product_add_personalization_detailsJSON, "is_personalizable");
    if (cJSON_IsNull(is_personalizable)) {
        is_personalizable = NULL;
    }
    if (!is_personalizable) {
        goto end;
    }

    
    if(!cJSON_IsBool(is_personalizable))
    {
    goto end; //Bool
    }

    // product_add_personalization_details->personalization_is_required
    cJSON *personalization_is_required = cJSON_GetObjectItemCaseSensitive(product_add_personalization_detailsJSON, "personalization_is_required");
    if (cJSON_IsNull(personalization_is_required)) {
        personalization_is_required = NULL;
    }
    if (personalization_is_required) { 
    if(!cJSON_IsBool(personalization_is_required))
    {
    goto end; //Bool
    }
    }

    // product_add_personalization_details->personalization_char_count_max
    cJSON *personalization_char_count_max = cJSON_GetObjectItemCaseSensitive(product_add_personalization_detailsJSON, "personalization_char_count_max");
    if (cJSON_IsNull(personalization_char_count_max)) {
        personalization_char_count_max = NULL;
    }
    if (personalization_char_count_max) { 
    if(!cJSON_IsNumber(personalization_char_count_max))
    {
    goto end; //Numeric
    }
    }

    // product_add_personalization_details->personalization_instructions
    cJSON *personalization_instructions = cJSON_GetObjectItemCaseSensitive(product_add_personalization_detailsJSON, "personalization_instructions");
    if (cJSON_IsNull(personalization_instructions)) {
        personalization_instructions = NULL;
    }
    if (personalization_instructions) { 
    if(!cJSON_IsString(personalization_instructions) && !cJSON_IsNull(personalization_instructions))
    {
    goto end; //String
    }
    }


    product_add_personalization_details_local_var = product_add_personalization_details_create_internal (
        is_personalizable->valueint,
        personalization_is_required ? personalization_is_required->valueint : 0,
        personalization_char_count_max ? personalization_char_count_max->valuedouble : 0,
        personalization_instructions && !cJSON_IsNull(personalization_instructions) ? strdup(personalization_instructions->valuestring) : NULL
        );

    return product_add_personalization_details_local_var;
end:
    return NULL;

}
