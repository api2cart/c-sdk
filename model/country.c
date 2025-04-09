#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country.h"



static country_t *country_create_internal(
    char *code2,
    char *code3,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    country_t *country_local_var = malloc(sizeof(country_t));
    if (!country_local_var) {
        return NULL;
    }
    country_local_var->code2 = code2;
    country_local_var->code3 = code3;
    country_local_var->name = name;
    country_local_var->additional_fields = additional_fields;
    country_local_var->custom_fields = custom_fields;

    country_local_var->_library_owned = 1;
    return country_local_var;
}

__attribute__((deprecated)) country_t *country_create(
    char *code2,
    char *code3,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return country_create_internal (
        code2,
        code3,
        name,
        additional_fields,
        custom_fields
        );
}

void country_free(country_t *country) {
    if(NULL == country){
        return ;
    }
    if(country->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "country_free");
        return ;
    }
    listEntry_t *listEntry;
    if (country->code2) {
        free(country->code2);
        country->code2 = NULL;
    }
    if (country->code3) {
        free(country->code3);
        country->code3 = NULL;
    }
    if (country->name) {
        free(country->name);
        country->name = NULL;
    }
    if (country->additional_fields) {
        object_free(country->additional_fields);
        country->additional_fields = NULL;
    }
    if (country->custom_fields) {
        object_free(country->custom_fields);
        country->custom_fields = NULL;
    }
    free(country);
}

cJSON *country_convertToJSON(country_t *country) {
    cJSON *item = cJSON_CreateObject();

    // country->code2
    if(country->code2) {
    if(cJSON_AddStringToObject(item, "code2", country->code2) == NULL) {
    goto fail; //String
    }
    }


    // country->code3
    if(country->code3) {
    if(cJSON_AddStringToObject(item, "code3", country->code3) == NULL) {
    goto fail; //String
    }
    }


    // country->name
    if(country->name) {
    if(cJSON_AddStringToObject(item, "name", country->name) == NULL) {
    goto fail; //String
    }
    }


    // country->additional_fields
    if(country->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(country->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // country->custom_fields
    if(country->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(country->custom_fields);
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

country_t *country_parseFromJSON(cJSON *countryJSON){

    country_t *country_local_var = NULL;

    // country->code2
    cJSON *code2 = cJSON_GetObjectItemCaseSensitive(countryJSON, "code2");
    if (cJSON_IsNull(code2)) {
        code2 = NULL;
    }
    if (code2) { 
    if(!cJSON_IsString(code2) && !cJSON_IsNull(code2))
    {
    goto end; //String
    }
    }

    // country->code3
    cJSON *code3 = cJSON_GetObjectItemCaseSensitive(countryJSON, "code3");
    if (cJSON_IsNull(code3)) {
        code3 = NULL;
    }
    if (code3) { 
    if(!cJSON_IsString(code3) && !cJSON_IsNull(code3))
    {
    goto end; //String
    }
    }

    // country->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(countryJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // country->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(countryJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // country->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(countryJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    country_local_var = country_create_internal (
        code2 && !cJSON_IsNull(code2) ? strdup(code2->valuestring) : NULL,
        code3 && !cJSON_IsNull(code3) ? strdup(code3->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return country_local_var;
end:
    return NULL;

}
