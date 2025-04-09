#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "special_price.h"



static special_price_t *special_price_create_internal(
    double value,
    int avail,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    a2_c_date_time_t *expired_at,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    special_price_t *special_price_local_var = malloc(sizeof(special_price_t));
    if (!special_price_local_var) {
        return NULL;
    }
    special_price_local_var->value = value;
    special_price_local_var->avail = avail;
    special_price_local_var->created_at = created_at;
    special_price_local_var->modified_at = modified_at;
    special_price_local_var->expired_at = expired_at;
    special_price_local_var->additional_fields = additional_fields;
    special_price_local_var->custom_fields = custom_fields;

    special_price_local_var->_library_owned = 1;
    return special_price_local_var;
}

__attribute__((deprecated)) special_price_t *special_price_create(
    double value,
    int avail,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    a2_c_date_time_t *expired_at,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return special_price_create_internal (
        value,
        avail,
        created_at,
        modified_at,
        expired_at,
        additional_fields,
        custom_fields
        );
}

void special_price_free(special_price_t *special_price) {
    if(NULL == special_price){
        return ;
    }
    if(special_price->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "special_price_free");
        return ;
    }
    listEntry_t *listEntry;
    if (special_price->created_at) {
        a2_c_date_time_free(special_price->created_at);
        special_price->created_at = NULL;
    }
    if (special_price->modified_at) {
        a2_c_date_time_free(special_price->modified_at);
        special_price->modified_at = NULL;
    }
    if (special_price->expired_at) {
        a2_c_date_time_free(special_price->expired_at);
        special_price->expired_at = NULL;
    }
    if (special_price->additional_fields) {
        object_free(special_price->additional_fields);
        special_price->additional_fields = NULL;
    }
    if (special_price->custom_fields) {
        object_free(special_price->custom_fields);
        special_price->custom_fields = NULL;
    }
    free(special_price);
}

cJSON *special_price_convertToJSON(special_price_t *special_price) {
    cJSON *item = cJSON_CreateObject();

    // special_price->value
    if(special_price->value) {
    if(cJSON_AddNumberToObject(item, "value", special_price->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // special_price->avail
    if(special_price->avail) {
    if(cJSON_AddBoolToObject(item, "avail", special_price->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // special_price->created_at
    if(special_price->created_at) {
    cJSON *created_at_local_JSON = a2_c_date_time_convertToJSON(special_price->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_at", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // special_price->modified_at
    if(special_price->modified_at) {
    cJSON *modified_at_local_JSON = a2_c_date_time_convertToJSON(special_price->modified_at);
    if(modified_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_at", modified_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // special_price->expired_at
    if(special_price->expired_at) {
    cJSON *expired_at_local_JSON = a2_c_date_time_convertToJSON(special_price->expired_at);
    if(expired_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expired_at", expired_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // special_price->additional_fields
    if(special_price->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(special_price->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // special_price->custom_fields
    if(special_price->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(special_price->custom_fields);
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

special_price_t *special_price_parseFromJSON(cJSON *special_priceJSON){

    special_price_t *special_price_local_var = NULL;

    // define the local variable for special_price->created_at
    a2_c_date_time_t *created_at_local_nonprim = NULL;

    // define the local variable for special_price->modified_at
    a2_c_date_time_t *modified_at_local_nonprim = NULL;

    // define the local variable for special_price->expired_at
    a2_c_date_time_t *expired_at_local_nonprim = NULL;

    // special_price->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(special_priceJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // special_price->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(special_priceJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // special_price->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(special_priceJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    created_at_local_nonprim = a2_c_date_time_parseFromJSON(created_at); //nonprimitive
    }

    // special_price->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(special_priceJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    modified_at_local_nonprim = a2_c_date_time_parseFromJSON(modified_at); //nonprimitive
    }

    // special_price->expired_at
    cJSON *expired_at = cJSON_GetObjectItemCaseSensitive(special_priceJSON, "expired_at");
    if (cJSON_IsNull(expired_at)) {
        expired_at = NULL;
    }
    if (expired_at) { 
    expired_at_local_nonprim = a2_c_date_time_parseFromJSON(expired_at); //nonprimitive
    }

    // special_price->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(special_priceJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // special_price->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(special_priceJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    special_price_local_var = special_price_create_internal (
        value ? value->valuedouble : 0,
        avail ? avail->valueint : 0,
        created_at ? created_at_local_nonprim : NULL,
        modified_at ? modified_at_local_nonprim : NULL,
        expired_at ? expired_at_local_nonprim : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return special_price_local_var;
end:
    if (created_at_local_nonprim) {
        a2_c_date_time_free(created_at_local_nonprim);
        created_at_local_nonprim = NULL;
    }
    if (modified_at_local_nonprim) {
        a2_c_date_time_free(modified_at_local_nonprim);
        modified_at_local_nonprim = NULL;
    }
    if (expired_at_local_nonprim) {
        a2_c_date_time_free(expired_at_local_nonprim);
        expired_at_local_nonprim = NULL;
    }
    return NULL;

}
