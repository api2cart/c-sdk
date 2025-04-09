#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_specifics_inner_food_details.h"



static product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details_create_internal(
    double calories
    ) {
    product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details_local_var = malloc(sizeof(product_add_specifics_inner_food_details_t));
    if (!product_add_specifics_inner_food_details_local_var) {
        return NULL;
    }
    product_add_specifics_inner_food_details_local_var->calories = calories;

    product_add_specifics_inner_food_details_local_var->_library_owned = 1;
    return product_add_specifics_inner_food_details_local_var;
}

__attribute__((deprecated)) product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details_create(
    double calories
    ) {
    return product_add_specifics_inner_food_details_create_internal (
        calories
        );
}

void product_add_specifics_inner_food_details_free(product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details) {
    if(NULL == product_add_specifics_inner_food_details){
        return ;
    }
    if(product_add_specifics_inner_food_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_specifics_inner_food_details_free");
        return ;
    }
    listEntry_t *listEntry;
    free(product_add_specifics_inner_food_details);
}

cJSON *product_add_specifics_inner_food_details_convertToJSON(product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details) {
    cJSON *item = cJSON_CreateObject();

    // product_add_specifics_inner_food_details->calories
    if (!product_add_specifics_inner_food_details->calories) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "calories", product_add_specifics_inner_food_details->calories) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details_parseFromJSON(cJSON *product_add_specifics_inner_food_detailsJSON){

    product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details_local_var = NULL;

    // product_add_specifics_inner_food_details->calories
    cJSON *calories = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_food_detailsJSON, "calories");
    if (cJSON_IsNull(calories)) {
        calories = NULL;
    }
    if (!calories) {
        goto end;
    }

    
    if(!cJSON_IsNumber(calories))
    {
    goto end; //Numeric
    }


    product_add_specifics_inner_food_details_local_var = product_add_specifics_inner_food_details_create_internal (
        calories->valuedouble
        );

    return product_add_specifics_inner_food_details_local_var;
end:
    return NULL;

}
