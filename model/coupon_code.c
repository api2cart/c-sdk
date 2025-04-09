#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "coupon_code.h"



static coupon_code_t *coupon_code_create_internal(
    char *id,
    char *code,
    int used_times,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    coupon_code_t *coupon_code_local_var = malloc(sizeof(coupon_code_t));
    if (!coupon_code_local_var) {
        return NULL;
    }
    coupon_code_local_var->id = id;
    coupon_code_local_var->code = code;
    coupon_code_local_var->used_times = used_times;
    coupon_code_local_var->additional_fields = additional_fields;
    coupon_code_local_var->custom_fields = custom_fields;

    coupon_code_local_var->_library_owned = 1;
    return coupon_code_local_var;
}

__attribute__((deprecated)) coupon_code_t *coupon_code_create(
    char *id,
    char *code,
    int used_times,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return coupon_code_create_internal (
        id,
        code,
        used_times,
        additional_fields,
        custom_fields
        );
}

void coupon_code_free(coupon_code_t *coupon_code) {
    if(NULL == coupon_code){
        return ;
    }
    if(coupon_code->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "coupon_code_free");
        return ;
    }
    listEntry_t *listEntry;
    if (coupon_code->id) {
        free(coupon_code->id);
        coupon_code->id = NULL;
    }
    if (coupon_code->code) {
        free(coupon_code->code);
        coupon_code->code = NULL;
    }
    if (coupon_code->additional_fields) {
        object_free(coupon_code->additional_fields);
        coupon_code->additional_fields = NULL;
    }
    if (coupon_code->custom_fields) {
        object_free(coupon_code->custom_fields);
        coupon_code->custom_fields = NULL;
    }
    free(coupon_code);
}

cJSON *coupon_code_convertToJSON(coupon_code_t *coupon_code) {
    cJSON *item = cJSON_CreateObject();

    // coupon_code->id
    if(coupon_code->id) {
    if(cJSON_AddStringToObject(item, "id", coupon_code->id) == NULL) {
    goto fail; //String
    }
    }


    // coupon_code->code
    if(coupon_code->code) {
    if(cJSON_AddStringToObject(item, "code", coupon_code->code) == NULL) {
    goto fail; //String
    }
    }


    // coupon_code->used_times
    if(coupon_code->used_times) {
    if(cJSON_AddNumberToObject(item, "used_times", coupon_code->used_times) == NULL) {
    goto fail; //Numeric
    }
    }


    // coupon_code->additional_fields
    if(coupon_code->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(coupon_code->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // coupon_code->custom_fields
    if(coupon_code->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(coupon_code->custom_fields);
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

coupon_code_t *coupon_code_parseFromJSON(cJSON *coupon_codeJSON){

    coupon_code_t *coupon_code_local_var = NULL;

    // coupon_code->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(coupon_codeJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // coupon_code->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(coupon_codeJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // coupon_code->used_times
    cJSON *used_times = cJSON_GetObjectItemCaseSensitive(coupon_codeJSON, "used_times");
    if (cJSON_IsNull(used_times)) {
        used_times = NULL;
    }
    if (used_times) { 
    if(!cJSON_IsNumber(used_times))
    {
    goto end; //Numeric
    }
    }

    // coupon_code->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(coupon_codeJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // coupon_code->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(coupon_codeJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    coupon_code_local_var = coupon_code_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        used_times ? used_times->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return coupon_code_local_var;
end:
    return NULL;

}
