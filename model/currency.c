#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "currency.h"



static currency_t *currency_create_internal(
    char *id,
    char *name,
    char *iso3,
    char *symbol_left,
    char *symbol_right,
    double rate,
    int avail,
    int _default,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    currency_t *currency_local_var = malloc(sizeof(currency_t));
    if (!currency_local_var) {
        return NULL;
    }
    currency_local_var->id = id;
    currency_local_var->name = name;
    currency_local_var->iso3 = iso3;
    currency_local_var->symbol_left = symbol_left;
    currency_local_var->symbol_right = symbol_right;
    currency_local_var->rate = rate;
    currency_local_var->avail = avail;
    currency_local_var->_default = _default;
    currency_local_var->additional_fields = additional_fields;
    currency_local_var->custom_fields = custom_fields;

    currency_local_var->_library_owned = 1;
    return currency_local_var;
}

__attribute__((deprecated)) currency_t *currency_create(
    char *id,
    char *name,
    char *iso3,
    char *symbol_left,
    char *symbol_right,
    double rate,
    int avail,
    int _default,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return currency_create_internal (
        id,
        name,
        iso3,
        symbol_left,
        symbol_right,
        rate,
        avail,
        _default,
        additional_fields,
        custom_fields
        );
}

void currency_free(currency_t *currency) {
    if(NULL == currency){
        return ;
    }
    if(currency->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "currency_free");
        return ;
    }
    listEntry_t *listEntry;
    if (currency->id) {
        free(currency->id);
        currency->id = NULL;
    }
    if (currency->name) {
        free(currency->name);
        currency->name = NULL;
    }
    if (currency->iso3) {
        free(currency->iso3);
        currency->iso3 = NULL;
    }
    if (currency->symbol_left) {
        free(currency->symbol_left);
        currency->symbol_left = NULL;
    }
    if (currency->symbol_right) {
        free(currency->symbol_right);
        currency->symbol_right = NULL;
    }
    if (currency->additional_fields) {
        object_free(currency->additional_fields);
        currency->additional_fields = NULL;
    }
    if (currency->custom_fields) {
        object_free(currency->custom_fields);
        currency->custom_fields = NULL;
    }
    free(currency);
}

cJSON *currency_convertToJSON(currency_t *currency) {
    cJSON *item = cJSON_CreateObject();

    // currency->id
    if(currency->id) {
    if(cJSON_AddStringToObject(item, "id", currency->id) == NULL) {
    goto fail; //String
    }
    }


    // currency->name
    if(currency->name) {
    if(cJSON_AddStringToObject(item, "name", currency->name) == NULL) {
    goto fail; //String
    }
    }


    // currency->iso3
    if(currency->iso3) {
    if(cJSON_AddStringToObject(item, "iso3", currency->iso3) == NULL) {
    goto fail; //String
    }
    }


    // currency->symbol_left
    if(currency->symbol_left) {
    if(cJSON_AddStringToObject(item, "symbol_left", currency->symbol_left) == NULL) {
    goto fail; //String
    }
    }


    // currency->symbol_right
    if(currency->symbol_right) {
    if(cJSON_AddStringToObject(item, "symbol_right", currency->symbol_right) == NULL) {
    goto fail; //String
    }
    }


    // currency->rate
    if(currency->rate) {
    if(cJSON_AddNumberToObject(item, "rate", currency->rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // currency->avail
    if(currency->avail) {
    if(cJSON_AddBoolToObject(item, "avail", currency->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // currency->_default
    if(currency->_default) {
    if(cJSON_AddBoolToObject(item, "default", currency->_default) == NULL) {
    goto fail; //Bool
    }
    }


    // currency->additional_fields
    if(currency->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(currency->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // currency->custom_fields
    if(currency->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(currency->custom_fields);
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

currency_t *currency_parseFromJSON(cJSON *currencyJSON){

    currency_t *currency_local_var = NULL;

    // currency->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(currencyJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // currency->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(currencyJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // currency->iso3
    cJSON *iso3 = cJSON_GetObjectItemCaseSensitive(currencyJSON, "iso3");
    if (cJSON_IsNull(iso3)) {
        iso3 = NULL;
    }
    if (iso3) { 
    if(!cJSON_IsString(iso3) && !cJSON_IsNull(iso3))
    {
    goto end; //String
    }
    }

    // currency->symbol_left
    cJSON *symbol_left = cJSON_GetObjectItemCaseSensitive(currencyJSON, "symbol_left");
    if (cJSON_IsNull(symbol_left)) {
        symbol_left = NULL;
    }
    if (symbol_left) { 
    if(!cJSON_IsString(symbol_left) && !cJSON_IsNull(symbol_left))
    {
    goto end; //String
    }
    }

    // currency->symbol_right
    cJSON *symbol_right = cJSON_GetObjectItemCaseSensitive(currencyJSON, "symbol_right");
    if (cJSON_IsNull(symbol_right)) {
        symbol_right = NULL;
    }
    if (symbol_right) { 
    if(!cJSON_IsString(symbol_right) && !cJSON_IsNull(symbol_right))
    {
    goto end; //String
    }
    }

    // currency->rate
    cJSON *rate = cJSON_GetObjectItemCaseSensitive(currencyJSON, "rate");
    if (cJSON_IsNull(rate)) {
        rate = NULL;
    }
    if (rate) { 
    if(!cJSON_IsNumber(rate))
    {
    goto end; //Numeric
    }
    }

    // currency->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(currencyJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // currency->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(currencyJSON, "default");
    if (cJSON_IsNull(_default)) {
        _default = NULL;
    }
    if (_default) { 
    if(!cJSON_IsBool(_default))
    {
    goto end; //Bool
    }
    }

    // currency->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(currencyJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // currency->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(currencyJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    currency_local_var = currency_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        iso3 && !cJSON_IsNull(iso3) ? strdup(iso3->valuestring) : NULL,
        symbol_left && !cJSON_IsNull(symbol_left) ? strdup(symbol_left->valuestring) : NULL,
        symbol_right && !cJSON_IsNull(symbol_right) ? strdup(symbol_right->valuestring) : NULL,
        rate ? rate->valuedouble : 0,
        avail ? avail->valueint : 0,
        _default ? _default->valueint : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return currency_local_var;
end:
    return NULL;

}
