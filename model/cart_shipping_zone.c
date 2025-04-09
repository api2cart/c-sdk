#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_shipping_zone.h"



static cart_shipping_zone_t *cart_shipping_zone_create_internal(
    char *id,
    char *code,
    char *name,
    char *country,
    list_t *country_iso2_codes,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    cart_shipping_zone_t *cart_shipping_zone_local_var = malloc(sizeof(cart_shipping_zone_t));
    if (!cart_shipping_zone_local_var) {
        return NULL;
    }
    cart_shipping_zone_local_var->id = id;
    cart_shipping_zone_local_var->code = code;
    cart_shipping_zone_local_var->name = name;
    cart_shipping_zone_local_var->country = country;
    cart_shipping_zone_local_var->country_iso2_codes = country_iso2_codes;
    cart_shipping_zone_local_var->additional_fields = additional_fields;
    cart_shipping_zone_local_var->custom_fields = custom_fields;

    cart_shipping_zone_local_var->_library_owned = 1;
    return cart_shipping_zone_local_var;
}

__attribute__((deprecated)) cart_shipping_zone_t *cart_shipping_zone_create(
    char *id,
    char *code,
    char *name,
    char *country,
    list_t *country_iso2_codes,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return cart_shipping_zone_create_internal (
        id,
        code,
        name,
        country,
        country_iso2_codes,
        additional_fields,
        custom_fields
        );
}

void cart_shipping_zone_free(cart_shipping_zone_t *cart_shipping_zone) {
    if(NULL == cart_shipping_zone){
        return ;
    }
    if(cart_shipping_zone->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_shipping_zone_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_shipping_zone->id) {
        free(cart_shipping_zone->id);
        cart_shipping_zone->id = NULL;
    }
    if (cart_shipping_zone->code) {
        free(cart_shipping_zone->code);
        cart_shipping_zone->code = NULL;
    }
    if (cart_shipping_zone->name) {
        free(cart_shipping_zone->name);
        cart_shipping_zone->name = NULL;
    }
    if (cart_shipping_zone->country) {
        free(cart_shipping_zone->country);
        cart_shipping_zone->country = NULL;
    }
    if (cart_shipping_zone->country_iso2_codes) {
        list_ForEach(listEntry, cart_shipping_zone->country_iso2_codes) {
            free(listEntry->data);
        }
        list_freeList(cart_shipping_zone->country_iso2_codes);
        cart_shipping_zone->country_iso2_codes = NULL;
    }
    if (cart_shipping_zone->additional_fields) {
        object_free(cart_shipping_zone->additional_fields);
        cart_shipping_zone->additional_fields = NULL;
    }
    if (cart_shipping_zone->custom_fields) {
        object_free(cart_shipping_zone->custom_fields);
        cart_shipping_zone->custom_fields = NULL;
    }
    free(cart_shipping_zone);
}

cJSON *cart_shipping_zone_convertToJSON(cart_shipping_zone_t *cart_shipping_zone) {
    cJSON *item = cJSON_CreateObject();

    // cart_shipping_zone->id
    if(cart_shipping_zone->id) {
    if(cJSON_AddStringToObject(item, "id", cart_shipping_zone->id) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_zone->code
    if(cart_shipping_zone->code) {
    if(cJSON_AddStringToObject(item, "code", cart_shipping_zone->code) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_zone->name
    if(cart_shipping_zone->name) {
    if(cJSON_AddStringToObject(item, "name", cart_shipping_zone->name) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_zone->country
    if(cart_shipping_zone->country) {
    if(cJSON_AddStringToObject(item, "country", cart_shipping_zone->country) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_zone->country_iso2_codes
    if(cart_shipping_zone->country_iso2_codes) {
    cJSON *country_iso2_codes = cJSON_AddArrayToObject(item, "country_iso2_codes");
    if(country_iso2_codes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *country_iso2_codesListEntry;
    list_ForEach(country_iso2_codesListEntry, cart_shipping_zone->country_iso2_codes) {
    if(cJSON_AddStringToObject(country_iso2_codes, "", country_iso2_codesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // cart_shipping_zone->additional_fields
    if(cart_shipping_zone->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(cart_shipping_zone->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_shipping_zone->custom_fields
    if(cart_shipping_zone->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(cart_shipping_zone->custom_fields);
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

cart_shipping_zone_t *cart_shipping_zone_parseFromJSON(cJSON *cart_shipping_zoneJSON){

    cart_shipping_zone_t *cart_shipping_zone_local_var = NULL;

    // define the local list for cart_shipping_zone->country_iso2_codes
    list_t *country_iso2_codesList = NULL;

    // cart_shipping_zone->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cart_shipping_zoneJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cart_shipping_zone->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(cart_shipping_zoneJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // cart_shipping_zone->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cart_shipping_zoneJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cart_shipping_zone->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(cart_shipping_zoneJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }

    // cart_shipping_zone->country_iso2_codes
    cJSON *country_iso2_codes = cJSON_GetObjectItemCaseSensitive(cart_shipping_zoneJSON, "country_iso2_codes");
    if (cJSON_IsNull(country_iso2_codes)) {
        country_iso2_codes = NULL;
    }
    if (country_iso2_codes) { 
    cJSON *country_iso2_codes_local = NULL;
    if(!cJSON_IsArray(country_iso2_codes)) {
        goto end;//primitive container
    }
    country_iso2_codesList = list_createList();

    cJSON_ArrayForEach(country_iso2_codes_local, country_iso2_codes)
    {
        if(!cJSON_IsString(country_iso2_codes_local))
        {
            goto end;
        }
        list_addElement(country_iso2_codesList , strdup(country_iso2_codes_local->valuestring));
    }
    }

    // cart_shipping_zone->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(cart_shipping_zoneJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // cart_shipping_zone->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(cart_shipping_zoneJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    cart_shipping_zone_local_var = cart_shipping_zone_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        country && !cJSON_IsNull(country) ? strdup(country->valuestring) : NULL,
        country_iso2_codes ? country_iso2_codesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return cart_shipping_zone_local_var;
end:
    if (country_iso2_codesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, country_iso2_codesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(country_iso2_codesList);
        country_iso2_codesList = NULL;
    }
    return NULL;

}
