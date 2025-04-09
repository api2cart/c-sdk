#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_tax_class_info_result.h"



static response_tax_class_info_result_t *response_tax_class_info_result_create_internal(
    char *id,
    char *name,
    int avail,
    double tax,
    int tax_type,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    list_t *tax_rates,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_tax_class_info_result_t *response_tax_class_info_result_local_var = malloc(sizeof(response_tax_class_info_result_t));
    if (!response_tax_class_info_result_local_var) {
        return NULL;
    }
    response_tax_class_info_result_local_var->id = id;
    response_tax_class_info_result_local_var->name = name;
    response_tax_class_info_result_local_var->avail = avail;
    response_tax_class_info_result_local_var->tax = tax;
    response_tax_class_info_result_local_var->tax_type = tax_type;
    response_tax_class_info_result_local_var->created_at = created_at;
    response_tax_class_info_result_local_var->modified_at = modified_at;
    response_tax_class_info_result_local_var->tax_rates = tax_rates;
    response_tax_class_info_result_local_var->additional_fields = additional_fields;
    response_tax_class_info_result_local_var->custom_fields = custom_fields;

    response_tax_class_info_result_local_var->_library_owned = 1;
    return response_tax_class_info_result_local_var;
}

__attribute__((deprecated)) response_tax_class_info_result_t *response_tax_class_info_result_create(
    char *id,
    char *name,
    int avail,
    double tax,
    int tax_type,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    list_t *tax_rates,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_tax_class_info_result_create_internal (
        id,
        name,
        avail,
        tax,
        tax_type,
        created_at,
        modified_at,
        tax_rates,
        additional_fields,
        custom_fields
        );
}

void response_tax_class_info_result_free(response_tax_class_info_result_t *response_tax_class_info_result) {
    if(NULL == response_tax_class_info_result){
        return ;
    }
    if(response_tax_class_info_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_tax_class_info_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_tax_class_info_result->id) {
        free(response_tax_class_info_result->id);
        response_tax_class_info_result->id = NULL;
    }
    if (response_tax_class_info_result->name) {
        free(response_tax_class_info_result->name);
        response_tax_class_info_result->name = NULL;
    }
    if (response_tax_class_info_result->created_at) {
        a2_c_date_time_free(response_tax_class_info_result->created_at);
        response_tax_class_info_result->created_at = NULL;
    }
    if (response_tax_class_info_result->modified_at) {
        a2_c_date_time_free(response_tax_class_info_result->modified_at);
        response_tax_class_info_result->modified_at = NULL;
    }
    if (response_tax_class_info_result->tax_rates) {
        list_ForEach(listEntry, response_tax_class_info_result->tax_rates) {
            tax_class_rate_free(listEntry->data);
        }
        list_freeList(response_tax_class_info_result->tax_rates);
        response_tax_class_info_result->tax_rates = NULL;
    }
    if (response_tax_class_info_result->additional_fields) {
        object_free(response_tax_class_info_result->additional_fields);
        response_tax_class_info_result->additional_fields = NULL;
    }
    if (response_tax_class_info_result->custom_fields) {
        object_free(response_tax_class_info_result->custom_fields);
        response_tax_class_info_result->custom_fields = NULL;
    }
    free(response_tax_class_info_result);
}

cJSON *response_tax_class_info_result_convertToJSON(response_tax_class_info_result_t *response_tax_class_info_result) {
    cJSON *item = cJSON_CreateObject();

    // response_tax_class_info_result->id
    if(response_tax_class_info_result->id) {
    if(cJSON_AddStringToObject(item, "id", response_tax_class_info_result->id) == NULL) {
    goto fail; //String
    }
    }


    // response_tax_class_info_result->name
    if(response_tax_class_info_result->name) {
    if(cJSON_AddStringToObject(item, "name", response_tax_class_info_result->name) == NULL) {
    goto fail; //String
    }
    }


    // response_tax_class_info_result->avail
    if(response_tax_class_info_result->avail) {
    if(cJSON_AddBoolToObject(item, "avail", response_tax_class_info_result->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // response_tax_class_info_result->tax
    if(response_tax_class_info_result->tax) {
    if(cJSON_AddNumberToObject(item, "tax", response_tax_class_info_result->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_tax_class_info_result->tax_type
    if(response_tax_class_info_result->tax_type) {
    if(cJSON_AddNumberToObject(item, "tax_type", response_tax_class_info_result->tax_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_tax_class_info_result->created_at
    if(response_tax_class_info_result->created_at) {
    cJSON *created_at_local_JSON = a2_c_date_time_convertToJSON(response_tax_class_info_result->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_at", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_tax_class_info_result->modified_at
    if(response_tax_class_info_result->modified_at) {
    cJSON *modified_at_local_JSON = a2_c_date_time_convertToJSON(response_tax_class_info_result->modified_at);
    if(modified_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_at", modified_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_tax_class_info_result->tax_rates
    if(response_tax_class_info_result->tax_rates) {
    cJSON *tax_rates = cJSON_AddArrayToObject(item, "tax_rates");
    if(tax_rates == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tax_ratesListEntry;
    if (response_tax_class_info_result->tax_rates) {
    list_ForEach(tax_ratesListEntry, response_tax_class_info_result->tax_rates) {
    cJSON *itemLocal = tax_class_rate_convertToJSON(tax_ratesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tax_rates, itemLocal);
    }
    }
    }


    // response_tax_class_info_result->additional_fields
    if(response_tax_class_info_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_tax_class_info_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_tax_class_info_result->custom_fields
    if(response_tax_class_info_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_tax_class_info_result->custom_fields);
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

response_tax_class_info_result_t *response_tax_class_info_result_parseFromJSON(cJSON *response_tax_class_info_resultJSON){

    response_tax_class_info_result_t *response_tax_class_info_result_local_var = NULL;

    // define the local variable for response_tax_class_info_result->created_at
    a2_c_date_time_t *created_at_local_nonprim = NULL;

    // define the local variable for response_tax_class_info_result->modified_at
    a2_c_date_time_t *modified_at_local_nonprim = NULL;

    // define the local list for response_tax_class_info_result->tax_rates
    list_t *tax_ratesList = NULL;

    // response_tax_class_info_result->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(response_tax_class_info_resultJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // response_tax_class_info_result->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(response_tax_class_info_resultJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // response_tax_class_info_result->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(response_tax_class_info_resultJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // response_tax_class_info_result->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(response_tax_class_info_resultJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // response_tax_class_info_result->tax_type
    cJSON *tax_type = cJSON_GetObjectItemCaseSensitive(response_tax_class_info_resultJSON, "tax_type");
    if (cJSON_IsNull(tax_type)) {
        tax_type = NULL;
    }
    if (tax_type) { 
    if(!cJSON_IsNumber(tax_type))
    {
    goto end; //Numeric
    }
    }

    // response_tax_class_info_result->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(response_tax_class_info_resultJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    created_at_local_nonprim = a2_c_date_time_parseFromJSON(created_at); //nonprimitive
    }

    // response_tax_class_info_result->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(response_tax_class_info_resultJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    modified_at_local_nonprim = a2_c_date_time_parseFromJSON(modified_at); //nonprimitive
    }

    // response_tax_class_info_result->tax_rates
    cJSON *tax_rates = cJSON_GetObjectItemCaseSensitive(response_tax_class_info_resultJSON, "tax_rates");
    if (cJSON_IsNull(tax_rates)) {
        tax_rates = NULL;
    }
    if (tax_rates) { 
    cJSON *tax_rates_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tax_rates)){
        goto end; //nonprimitive container
    }

    tax_ratesList = list_createList();

    cJSON_ArrayForEach(tax_rates_local_nonprimitive,tax_rates )
    {
        if(!cJSON_IsObject(tax_rates_local_nonprimitive)){
            goto end;
        }
        tax_class_rate_t *tax_ratesItem = tax_class_rate_parseFromJSON(tax_rates_local_nonprimitive);

        list_addElement(tax_ratesList, tax_ratesItem);
    }
    }

    // response_tax_class_info_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_tax_class_info_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_tax_class_info_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_tax_class_info_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_tax_class_info_result_local_var = response_tax_class_info_result_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        avail ? avail->valueint : 0,
        tax ? tax->valuedouble : 0,
        tax_type ? tax_type->valuedouble : 0,
        created_at ? created_at_local_nonprim : NULL,
        modified_at ? modified_at_local_nonprim : NULL,
        tax_rates ? tax_ratesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_tax_class_info_result_local_var;
end:
    if (created_at_local_nonprim) {
        a2_c_date_time_free(created_at_local_nonprim);
        created_at_local_nonprim = NULL;
    }
    if (modified_at_local_nonprim) {
        a2_c_date_time_free(modified_at_local_nonprim);
        modified_at_local_nonprim = NULL;
    }
    if (tax_ratesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tax_ratesList) {
            tax_class_rate_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tax_ratesList);
        tax_ratesList = NULL;
    }
    return NULL;

}
