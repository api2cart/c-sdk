#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_review_rating.h"



static product_review_rating_t *product_review_rating_create_internal(
    char *id,
    char *name,
    int value,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_review_rating_t *product_review_rating_local_var = malloc(sizeof(product_review_rating_t));
    if (!product_review_rating_local_var) {
        return NULL;
    }
    product_review_rating_local_var->id = id;
    product_review_rating_local_var->name = name;
    product_review_rating_local_var->value = value;
    product_review_rating_local_var->additional_fields = additional_fields;
    product_review_rating_local_var->custom_fields = custom_fields;

    product_review_rating_local_var->_library_owned = 1;
    return product_review_rating_local_var;
}

__attribute__((deprecated)) product_review_rating_t *product_review_rating_create(
    char *id,
    char *name,
    int value,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_review_rating_create_internal (
        id,
        name,
        value,
        additional_fields,
        custom_fields
        );
}

void product_review_rating_free(product_review_rating_t *product_review_rating) {
    if(NULL == product_review_rating){
        return ;
    }
    if(product_review_rating->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_review_rating_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_review_rating->id) {
        free(product_review_rating->id);
        product_review_rating->id = NULL;
    }
    if (product_review_rating->name) {
        free(product_review_rating->name);
        product_review_rating->name = NULL;
    }
    if (product_review_rating->additional_fields) {
        object_free(product_review_rating->additional_fields);
        product_review_rating->additional_fields = NULL;
    }
    if (product_review_rating->custom_fields) {
        object_free(product_review_rating->custom_fields);
        product_review_rating->custom_fields = NULL;
    }
    free(product_review_rating);
}

cJSON *product_review_rating_convertToJSON(product_review_rating_t *product_review_rating) {
    cJSON *item = cJSON_CreateObject();

    // product_review_rating->id
    if(product_review_rating->id) {
    if(cJSON_AddStringToObject(item, "id", product_review_rating->id) == NULL) {
    goto fail; //String
    }
    }


    // product_review_rating->name
    if(product_review_rating->name) {
    if(cJSON_AddStringToObject(item, "name", product_review_rating->name) == NULL) {
    goto fail; //String
    }
    }


    // product_review_rating->value
    if(product_review_rating->value) {
    if(cJSON_AddNumberToObject(item, "value", product_review_rating->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_review_rating->additional_fields
    if(product_review_rating->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_review_rating->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_review_rating->custom_fields
    if(product_review_rating->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_review_rating->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_review_rating_t *product_review_rating_parseFromJSON(cJSON *product_review_ratingJSON){

    product_review_rating_t *product_review_rating_local_var = NULL;

    // product_review_rating->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_review_ratingJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_review_rating->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_review_ratingJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_review_rating->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(product_review_ratingJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // product_review_rating->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_review_ratingJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_review_rating->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_review_ratingJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_review_rating_local_var = product_review_rating_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        value ? value->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_review_rating_local_var;
end:
    return NULL;

}
