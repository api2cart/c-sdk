#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "info.h"



static info_t *info_create_internal(
    char *owner,
    char *country,
    char *state,
    char *state_code,
    char *city,
    char *street_address,
    char *street_address_line_2,
    char *zip_code,
    char *email,
    char *phone,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    info_t *info_local_var = malloc(sizeof(info_t));
    if (!info_local_var) {
        return NULL;
    }
    info_local_var->owner = owner;
    info_local_var->country = country;
    info_local_var->state = state;
    info_local_var->state_code = state_code;
    info_local_var->city = city;
    info_local_var->street_address = street_address;
    info_local_var->street_address_line_2 = street_address_line_2;
    info_local_var->zip_code = zip_code;
    info_local_var->email = email;
    info_local_var->phone = phone;
    info_local_var->additional_fields = additional_fields;
    info_local_var->custom_fields = custom_fields;

    info_local_var->_library_owned = 1;
    return info_local_var;
}

__attribute__((deprecated)) info_t *info_create(
    char *owner,
    char *country,
    char *state,
    char *state_code,
    char *city,
    char *street_address,
    char *street_address_line_2,
    char *zip_code,
    char *email,
    char *phone,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return info_create_internal (
        owner,
        country,
        state,
        state_code,
        city,
        street_address,
        street_address_line_2,
        zip_code,
        email,
        phone,
        additional_fields,
        custom_fields
        );
}

void info_free(info_t *info) {
    if(NULL == info){
        return ;
    }
    if(info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (info->owner) {
        free(info->owner);
        info->owner = NULL;
    }
    if (info->country) {
        free(info->country);
        info->country = NULL;
    }
    if (info->state) {
        free(info->state);
        info->state = NULL;
    }
    if (info->state_code) {
        free(info->state_code);
        info->state_code = NULL;
    }
    if (info->city) {
        free(info->city);
        info->city = NULL;
    }
    if (info->street_address) {
        free(info->street_address);
        info->street_address = NULL;
    }
    if (info->street_address_line_2) {
        free(info->street_address_line_2);
        info->street_address_line_2 = NULL;
    }
    if (info->zip_code) {
        free(info->zip_code);
        info->zip_code = NULL;
    }
    if (info->email) {
        free(info->email);
        info->email = NULL;
    }
    if (info->phone) {
        free(info->phone);
        info->phone = NULL;
    }
    if (info->additional_fields) {
        object_free(info->additional_fields);
        info->additional_fields = NULL;
    }
    if (info->custom_fields) {
        object_free(info->custom_fields);
        info->custom_fields = NULL;
    }
    free(info);
}

cJSON *info_convertToJSON(info_t *info) {
    cJSON *item = cJSON_CreateObject();

    // info->owner
    if(info->owner) {
    if(cJSON_AddStringToObject(item, "owner", info->owner) == NULL) {
    goto fail; //String
    }
    }


    // info->country
    if(info->country) {
    if(cJSON_AddStringToObject(item, "country", info->country) == NULL) {
    goto fail; //String
    }
    }


    // info->state
    if(info->state) {
    if(cJSON_AddStringToObject(item, "state", info->state) == NULL) {
    goto fail; //String
    }
    }


    // info->state_code
    if(info->state_code) {
    if(cJSON_AddStringToObject(item, "state_code", info->state_code) == NULL) {
    goto fail; //String
    }
    }


    // info->city
    if(info->city) {
    if(cJSON_AddStringToObject(item, "city", info->city) == NULL) {
    goto fail; //String
    }
    }


    // info->street_address
    if(info->street_address) {
    if(cJSON_AddStringToObject(item, "street_address", info->street_address) == NULL) {
    goto fail; //String
    }
    }


    // info->street_address_line_2
    if(info->street_address_line_2) {
    if(cJSON_AddStringToObject(item, "street_address_line_2", info->street_address_line_2) == NULL) {
    goto fail; //String
    }
    }


    // info->zip_code
    if(info->zip_code) {
    if(cJSON_AddStringToObject(item, "zip_code", info->zip_code) == NULL) {
    goto fail; //String
    }
    }


    // info->email
    if(info->email) {
    if(cJSON_AddStringToObject(item, "email", info->email) == NULL) {
    goto fail; //String
    }
    }


    // info->phone
    if(info->phone) {
    if(cJSON_AddStringToObject(item, "phone", info->phone) == NULL) {
    goto fail; //String
    }
    }


    // info->additional_fields
    if(info->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(info->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // info->custom_fields
    if(info->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(info->custom_fields);
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

info_t *info_parseFromJSON(cJSON *infoJSON){

    info_t *info_local_var = NULL;

    // info->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(infoJSON, "owner");
    if (cJSON_IsNull(owner)) {
        owner = NULL;
    }
    if (owner) { 
    if(!cJSON_IsString(owner) && !cJSON_IsNull(owner))
    {
    goto end; //String
    }
    }

    // info->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(infoJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }

    // info->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(infoJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // info->state_code
    cJSON *state_code = cJSON_GetObjectItemCaseSensitive(infoJSON, "state_code");
    if (cJSON_IsNull(state_code)) {
        state_code = NULL;
    }
    if (state_code) { 
    if(!cJSON_IsString(state_code) && !cJSON_IsNull(state_code))
    {
    goto end; //String
    }
    }

    // info->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(infoJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }

    // info->street_address
    cJSON *street_address = cJSON_GetObjectItemCaseSensitive(infoJSON, "street_address");
    if (cJSON_IsNull(street_address)) {
        street_address = NULL;
    }
    if (street_address) { 
    if(!cJSON_IsString(street_address) && !cJSON_IsNull(street_address))
    {
    goto end; //String
    }
    }

    // info->street_address_line_2
    cJSON *street_address_line_2 = cJSON_GetObjectItemCaseSensitive(infoJSON, "street_address_line_2");
    if (cJSON_IsNull(street_address_line_2)) {
        street_address_line_2 = NULL;
    }
    if (street_address_line_2) { 
    if(!cJSON_IsString(street_address_line_2) && !cJSON_IsNull(street_address_line_2))
    {
    goto end; //String
    }
    }

    // info->zip_code
    cJSON *zip_code = cJSON_GetObjectItemCaseSensitive(infoJSON, "zip_code");
    if (cJSON_IsNull(zip_code)) {
        zip_code = NULL;
    }
    if (zip_code) { 
    if(!cJSON_IsString(zip_code) && !cJSON_IsNull(zip_code))
    {
    goto end; //String
    }
    }

    // info->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(infoJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // info->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(infoJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // info->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(infoJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // info->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(infoJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    info_local_var = info_create_internal (
        owner && !cJSON_IsNull(owner) ? strdup(owner->valuestring) : NULL,
        country && !cJSON_IsNull(country) ? strdup(country->valuestring) : NULL,
        state && !cJSON_IsNull(state) ? strdup(state->valuestring) : NULL,
        state_code && !cJSON_IsNull(state_code) ? strdup(state_code->valuestring) : NULL,
        city && !cJSON_IsNull(city) ? strdup(city->valuestring) : NULL,
        street_address && !cJSON_IsNull(street_address) ? strdup(street_address->valuestring) : NULL,
        street_address_line_2 && !cJSON_IsNull(street_address_line_2) ? strdup(street_address_line_2->valuestring) : NULL,
        zip_code && !cJSON_IsNull(zip_code) ? strdup(zip_code->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return info_local_var;
end:
    return NULL;

}
