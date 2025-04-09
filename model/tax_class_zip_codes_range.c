#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_class_zip_codes_range.h"



static tax_class_zip_codes_range_t *tax_class_zip_codes_range_create_internal(
    char *from,
    char *to,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    tax_class_zip_codes_range_t *tax_class_zip_codes_range_local_var = malloc(sizeof(tax_class_zip_codes_range_t));
    if (!tax_class_zip_codes_range_local_var) {
        return NULL;
    }
    tax_class_zip_codes_range_local_var->from = from;
    tax_class_zip_codes_range_local_var->to = to;
    tax_class_zip_codes_range_local_var->additional_fields = additional_fields;
    tax_class_zip_codes_range_local_var->custom_fields = custom_fields;

    tax_class_zip_codes_range_local_var->_library_owned = 1;
    return tax_class_zip_codes_range_local_var;
}

__attribute__((deprecated)) tax_class_zip_codes_range_t *tax_class_zip_codes_range_create(
    char *from,
    char *to,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return tax_class_zip_codes_range_create_internal (
        from,
        to,
        additional_fields,
        custom_fields
        );
}

void tax_class_zip_codes_range_free(tax_class_zip_codes_range_t *tax_class_zip_codes_range) {
    if(NULL == tax_class_zip_codes_range){
        return ;
    }
    if(tax_class_zip_codes_range->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "tax_class_zip_codes_range_free");
        return ;
    }
    listEntry_t *listEntry;
    if (tax_class_zip_codes_range->from) {
        free(tax_class_zip_codes_range->from);
        tax_class_zip_codes_range->from = NULL;
    }
    if (tax_class_zip_codes_range->to) {
        free(tax_class_zip_codes_range->to);
        tax_class_zip_codes_range->to = NULL;
    }
    if (tax_class_zip_codes_range->additional_fields) {
        object_free(tax_class_zip_codes_range->additional_fields);
        tax_class_zip_codes_range->additional_fields = NULL;
    }
    if (tax_class_zip_codes_range->custom_fields) {
        object_free(tax_class_zip_codes_range->custom_fields);
        tax_class_zip_codes_range->custom_fields = NULL;
    }
    free(tax_class_zip_codes_range);
}

cJSON *tax_class_zip_codes_range_convertToJSON(tax_class_zip_codes_range_t *tax_class_zip_codes_range) {
    cJSON *item = cJSON_CreateObject();

    // tax_class_zip_codes_range->from
    if(tax_class_zip_codes_range->from) {
    if(cJSON_AddStringToObject(item, "from", tax_class_zip_codes_range->from) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_zip_codes_range->to
    if(tax_class_zip_codes_range->to) {
    if(cJSON_AddStringToObject(item, "to", tax_class_zip_codes_range->to) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_zip_codes_range->additional_fields
    if(tax_class_zip_codes_range->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(tax_class_zip_codes_range->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // tax_class_zip_codes_range->custom_fields
    if(tax_class_zip_codes_range->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(tax_class_zip_codes_range->custom_fields);
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

tax_class_zip_codes_range_t *tax_class_zip_codes_range_parseFromJSON(cJSON *tax_class_zip_codes_rangeJSON){

    tax_class_zip_codes_range_t *tax_class_zip_codes_range_local_var = NULL;

    // tax_class_zip_codes_range->from
    cJSON *from = cJSON_GetObjectItemCaseSensitive(tax_class_zip_codes_rangeJSON, "from");
    if (cJSON_IsNull(from)) {
        from = NULL;
    }
    if (from) { 
    if(!cJSON_IsString(from) && !cJSON_IsNull(from))
    {
    goto end; //String
    }
    }

    // tax_class_zip_codes_range->to
    cJSON *to = cJSON_GetObjectItemCaseSensitive(tax_class_zip_codes_rangeJSON, "to");
    if (cJSON_IsNull(to)) {
        to = NULL;
    }
    if (to) { 
    if(!cJSON_IsString(to) && !cJSON_IsNull(to))
    {
    goto end; //String
    }
    }

    // tax_class_zip_codes_range->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(tax_class_zip_codes_rangeJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // tax_class_zip_codes_range->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(tax_class_zip_codes_rangeJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    tax_class_zip_codes_range_local_var = tax_class_zip_codes_range_create_internal (
        from && !cJSON_IsNull(from) ? strdup(from->valuestring) : NULL,
        to && !cJSON_IsNull(to) ? strdup(to->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return tax_class_zip_codes_range_local_var;
end:
    return NULL;

}
