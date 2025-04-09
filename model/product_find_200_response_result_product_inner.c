#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_find_200_response_result_product_inner.h"



static product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner_create_internal(
    char *id,
    char *name,
    char *description,
    double price
    ) {
    product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner_local_var = malloc(sizeof(product_find_200_response_result_product_inner_t));
    if (!product_find_200_response_result_product_inner_local_var) {
        return NULL;
    }
    product_find_200_response_result_product_inner_local_var->id = id;
    product_find_200_response_result_product_inner_local_var->name = name;
    product_find_200_response_result_product_inner_local_var->description = description;
    product_find_200_response_result_product_inner_local_var->price = price;

    product_find_200_response_result_product_inner_local_var->_library_owned = 1;
    return product_find_200_response_result_product_inner_local_var;
}

__attribute__((deprecated)) product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner_create(
    char *id,
    char *name,
    char *description,
    double price
    ) {
    return product_find_200_response_result_product_inner_create_internal (
        id,
        name,
        description,
        price
        );
}

void product_find_200_response_result_product_inner_free(product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner) {
    if(NULL == product_find_200_response_result_product_inner){
        return ;
    }
    if(product_find_200_response_result_product_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_find_200_response_result_product_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_find_200_response_result_product_inner->id) {
        free(product_find_200_response_result_product_inner->id);
        product_find_200_response_result_product_inner->id = NULL;
    }
    if (product_find_200_response_result_product_inner->name) {
        free(product_find_200_response_result_product_inner->name);
        product_find_200_response_result_product_inner->name = NULL;
    }
    if (product_find_200_response_result_product_inner->description) {
        free(product_find_200_response_result_product_inner->description);
        product_find_200_response_result_product_inner->description = NULL;
    }
    free(product_find_200_response_result_product_inner);
}

cJSON *product_find_200_response_result_product_inner_convertToJSON(product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_find_200_response_result_product_inner->id
    if(product_find_200_response_result_product_inner->id) {
    if(cJSON_AddStringToObject(item, "id", product_find_200_response_result_product_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // product_find_200_response_result_product_inner->name
    if(product_find_200_response_result_product_inner->name) {
    if(cJSON_AddStringToObject(item, "name", product_find_200_response_result_product_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // product_find_200_response_result_product_inner->description
    if(product_find_200_response_result_product_inner->description) {
    if(cJSON_AddStringToObject(item, "description", product_find_200_response_result_product_inner->description) == NULL) {
    goto fail; //String
    }
    }


    // product_find_200_response_result_product_inner->price
    if(product_find_200_response_result_product_inner->price) {
    if(cJSON_AddNumberToObject(item, "price", product_find_200_response_result_product_inner->price) == NULL) {
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

product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner_parseFromJSON(cJSON *product_find_200_response_result_product_innerJSON){

    product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner_local_var = NULL;

    // product_find_200_response_result_product_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_find_200_response_result_product_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_find_200_response_result_product_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_find_200_response_result_product_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_find_200_response_result_product_inner->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(product_find_200_response_result_product_innerJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // product_find_200_response_result_product_inner->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_find_200_response_result_product_innerJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }


    product_find_200_response_result_product_inner_local_var = product_find_200_response_result_product_inner_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        price ? price->valuedouble : 0
        );

    return product_find_200_response_result_product_inner_local_var;
end:
    return NULL;

}
