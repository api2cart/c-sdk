#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_address.h"



static customer_address_t *customer_address_create_internal(
    char *id,
    char *type,
    char *first_name,
    char *last_name,
    char *postcode,
    char *address1,
    char *address2,
    char *phone,
    char *phone_mobile,
    char *city,
    country_t *country,
    state_t *state,
    char *company,
    char *fax,
    char *website,
    char *gender,
    char *region,
    int _default,
    char *tax_id,
    char *identification_number,
    char *alias,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    customer_address_t *customer_address_local_var = malloc(sizeof(customer_address_t));
    if (!customer_address_local_var) {
        return NULL;
    }
    customer_address_local_var->id = id;
    customer_address_local_var->type = type;
    customer_address_local_var->first_name = first_name;
    customer_address_local_var->last_name = last_name;
    customer_address_local_var->postcode = postcode;
    customer_address_local_var->address1 = address1;
    customer_address_local_var->address2 = address2;
    customer_address_local_var->phone = phone;
    customer_address_local_var->phone_mobile = phone_mobile;
    customer_address_local_var->city = city;
    customer_address_local_var->country = country;
    customer_address_local_var->state = state;
    customer_address_local_var->company = company;
    customer_address_local_var->fax = fax;
    customer_address_local_var->website = website;
    customer_address_local_var->gender = gender;
    customer_address_local_var->region = region;
    customer_address_local_var->_default = _default;
    customer_address_local_var->tax_id = tax_id;
    customer_address_local_var->identification_number = identification_number;
    customer_address_local_var->alias = alias;
    customer_address_local_var->additional_fields = additional_fields;
    customer_address_local_var->custom_fields = custom_fields;

    customer_address_local_var->_library_owned = 1;
    return customer_address_local_var;
}

__attribute__((deprecated)) customer_address_t *customer_address_create(
    char *id,
    char *type,
    char *first_name,
    char *last_name,
    char *postcode,
    char *address1,
    char *address2,
    char *phone,
    char *phone_mobile,
    char *city,
    country_t *country,
    state_t *state,
    char *company,
    char *fax,
    char *website,
    char *gender,
    char *region,
    int _default,
    char *tax_id,
    char *identification_number,
    char *alias,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return customer_address_create_internal (
        id,
        type,
        first_name,
        last_name,
        postcode,
        address1,
        address2,
        phone,
        phone_mobile,
        city,
        country,
        state,
        company,
        fax,
        website,
        gender,
        region,
        _default,
        tax_id,
        identification_number,
        alias,
        additional_fields,
        custom_fields
        );
}

void customer_address_free(customer_address_t *customer_address) {
    if(NULL == customer_address){
        return ;
    }
    if(customer_address->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_address_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_address->id) {
        free(customer_address->id);
        customer_address->id = NULL;
    }
    if (customer_address->type) {
        free(customer_address->type);
        customer_address->type = NULL;
    }
    if (customer_address->first_name) {
        free(customer_address->first_name);
        customer_address->first_name = NULL;
    }
    if (customer_address->last_name) {
        free(customer_address->last_name);
        customer_address->last_name = NULL;
    }
    if (customer_address->postcode) {
        free(customer_address->postcode);
        customer_address->postcode = NULL;
    }
    if (customer_address->address1) {
        free(customer_address->address1);
        customer_address->address1 = NULL;
    }
    if (customer_address->address2) {
        free(customer_address->address2);
        customer_address->address2 = NULL;
    }
    if (customer_address->phone) {
        free(customer_address->phone);
        customer_address->phone = NULL;
    }
    if (customer_address->phone_mobile) {
        free(customer_address->phone_mobile);
        customer_address->phone_mobile = NULL;
    }
    if (customer_address->city) {
        free(customer_address->city);
        customer_address->city = NULL;
    }
    if (customer_address->country) {
        country_free(customer_address->country);
        customer_address->country = NULL;
    }
    if (customer_address->state) {
        state_free(customer_address->state);
        customer_address->state = NULL;
    }
    if (customer_address->company) {
        free(customer_address->company);
        customer_address->company = NULL;
    }
    if (customer_address->fax) {
        free(customer_address->fax);
        customer_address->fax = NULL;
    }
    if (customer_address->website) {
        free(customer_address->website);
        customer_address->website = NULL;
    }
    if (customer_address->gender) {
        free(customer_address->gender);
        customer_address->gender = NULL;
    }
    if (customer_address->region) {
        free(customer_address->region);
        customer_address->region = NULL;
    }
    if (customer_address->tax_id) {
        free(customer_address->tax_id);
        customer_address->tax_id = NULL;
    }
    if (customer_address->identification_number) {
        free(customer_address->identification_number);
        customer_address->identification_number = NULL;
    }
    if (customer_address->alias) {
        free(customer_address->alias);
        customer_address->alias = NULL;
    }
    if (customer_address->additional_fields) {
        object_free(customer_address->additional_fields);
        customer_address->additional_fields = NULL;
    }
    if (customer_address->custom_fields) {
        object_free(customer_address->custom_fields);
        customer_address->custom_fields = NULL;
    }
    free(customer_address);
}

cJSON *customer_address_convertToJSON(customer_address_t *customer_address) {
    cJSON *item = cJSON_CreateObject();

    // customer_address->id
    if(customer_address->id) {
    if(cJSON_AddStringToObject(item, "id", customer_address->id) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->type
    if(customer_address->type) {
    if(cJSON_AddStringToObject(item, "type", customer_address->type) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->first_name
    if(customer_address->first_name) {
    if(cJSON_AddStringToObject(item, "first_name", customer_address->first_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->last_name
    if(customer_address->last_name) {
    if(cJSON_AddStringToObject(item, "last_name", customer_address->last_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->postcode
    if(customer_address->postcode) {
    if(cJSON_AddStringToObject(item, "postcode", customer_address->postcode) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->address1
    if(customer_address->address1) {
    if(cJSON_AddStringToObject(item, "address1", customer_address->address1) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->address2
    if(customer_address->address2) {
    if(cJSON_AddStringToObject(item, "address2", customer_address->address2) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->phone
    if(customer_address->phone) {
    if(cJSON_AddStringToObject(item, "phone", customer_address->phone) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->phone_mobile
    if(customer_address->phone_mobile) {
    if(cJSON_AddStringToObject(item, "phone_mobile", customer_address->phone_mobile) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->city
    if(customer_address->city) {
    if(cJSON_AddStringToObject(item, "city", customer_address->city) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->country
    if(customer_address->country) {
    cJSON *country_local_JSON = country_convertToJSON(customer_address->country);
    if(country_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "country", country_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_address->state
    if(customer_address->state) {
    cJSON *state_local_JSON = state_convertToJSON(customer_address->state);
    if(state_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "state", state_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_address->company
    if(customer_address->company) {
    if(cJSON_AddStringToObject(item, "company", customer_address->company) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->fax
    if(customer_address->fax) {
    if(cJSON_AddStringToObject(item, "fax", customer_address->fax) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->website
    if(customer_address->website) {
    if(cJSON_AddStringToObject(item, "website", customer_address->website) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->gender
    if(customer_address->gender) {
    if(cJSON_AddStringToObject(item, "gender", customer_address->gender) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->region
    if(customer_address->region) {
    if(cJSON_AddStringToObject(item, "region", customer_address->region) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->_default
    if(customer_address->_default) {
    if(cJSON_AddBoolToObject(item, "default", customer_address->_default) == NULL) {
    goto fail; //Bool
    }
    }


    // customer_address->tax_id
    if(customer_address->tax_id) {
    if(cJSON_AddStringToObject(item, "tax_id", customer_address->tax_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->identification_number
    if(customer_address->identification_number) {
    if(cJSON_AddStringToObject(item, "identification_number", customer_address->identification_number) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->alias
    if(customer_address->alias) {
    if(cJSON_AddStringToObject(item, "alias", customer_address->alias) == NULL) {
    goto fail; //String
    }
    }


    // customer_address->additional_fields
    if(customer_address->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(customer_address->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_address->custom_fields
    if(customer_address->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(customer_address->custom_fields);
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

customer_address_t *customer_address_parseFromJSON(cJSON *customer_addressJSON){

    customer_address_t *customer_address_local_var = NULL;

    // define the local variable for customer_address->country
    country_t *country_local_nonprim = NULL;

    // define the local variable for customer_address->state
    state_t *state_local_nonprim = NULL;

    // customer_address->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // customer_address->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // customer_address->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "first_name");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // customer_address->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "last_name");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // customer_address->postcode
    cJSON *postcode = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "postcode");
    if (cJSON_IsNull(postcode)) {
        postcode = NULL;
    }
    if (postcode) { 
    if(!cJSON_IsString(postcode) && !cJSON_IsNull(postcode))
    {
    goto end; //String
    }
    }

    // customer_address->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "address1");
    if (cJSON_IsNull(address1)) {
        address1 = NULL;
    }
    if (address1) { 
    if(!cJSON_IsString(address1) && !cJSON_IsNull(address1))
    {
    goto end; //String
    }
    }

    // customer_address->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "address2");
    if (cJSON_IsNull(address2)) {
        address2 = NULL;
    }
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // customer_address->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // customer_address->phone_mobile
    cJSON *phone_mobile = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "phone_mobile");
    if (cJSON_IsNull(phone_mobile)) {
        phone_mobile = NULL;
    }
    if (phone_mobile) { 
    if(!cJSON_IsString(phone_mobile) && !cJSON_IsNull(phone_mobile))
    {
    goto end; //String
    }
    }

    // customer_address->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }

    // customer_address->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    country_local_nonprim = country_parseFromJSON(country); //nonprimitive
    }

    // customer_address->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    state_local_nonprim = state_parseFromJSON(state); //nonprimitive
    }

    // customer_address->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "company");
    if (cJSON_IsNull(company)) {
        company = NULL;
    }
    if (company) { 
    if(!cJSON_IsString(company) && !cJSON_IsNull(company))
    {
    goto end; //String
    }
    }

    // customer_address->fax
    cJSON *fax = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "fax");
    if (cJSON_IsNull(fax)) {
        fax = NULL;
    }
    if (fax) { 
    if(!cJSON_IsString(fax) && !cJSON_IsNull(fax))
    {
    goto end; //String
    }
    }

    // customer_address->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "website");
    if (cJSON_IsNull(website)) {
        website = NULL;
    }
    if (website) { 
    if(!cJSON_IsString(website) && !cJSON_IsNull(website))
    {
    goto end; //String
    }
    }

    // customer_address->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "gender");
    if (cJSON_IsNull(gender)) {
        gender = NULL;
    }
    if (gender) { 
    if(!cJSON_IsString(gender) && !cJSON_IsNull(gender))
    {
    goto end; //String
    }
    }

    // customer_address->region
    cJSON *region = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "region");
    if (cJSON_IsNull(region)) {
        region = NULL;
    }
    if (region) { 
    if(!cJSON_IsString(region) && !cJSON_IsNull(region))
    {
    goto end; //String
    }
    }

    // customer_address->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "default");
    if (cJSON_IsNull(_default)) {
        _default = NULL;
    }
    if (_default) { 
    if(!cJSON_IsBool(_default))
    {
    goto end; //Bool
    }
    }

    // customer_address->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "tax_id");
    if (cJSON_IsNull(tax_id)) {
        tax_id = NULL;
    }
    if (tax_id) { 
    if(!cJSON_IsString(tax_id) && !cJSON_IsNull(tax_id))
    {
    goto end; //String
    }
    }

    // customer_address->identification_number
    cJSON *identification_number = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "identification_number");
    if (cJSON_IsNull(identification_number)) {
        identification_number = NULL;
    }
    if (identification_number) { 
    if(!cJSON_IsString(identification_number) && !cJSON_IsNull(identification_number))
    {
    goto end; //String
    }
    }

    // customer_address->alias
    cJSON *alias = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "alias");
    if (cJSON_IsNull(alias)) {
        alias = NULL;
    }
    if (alias) { 
    if(!cJSON_IsString(alias) && !cJSON_IsNull(alias))
    {
    goto end; //String
    }
    }

    // customer_address->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // customer_address->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(customer_addressJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    customer_address_local_var = customer_address_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        postcode && !cJSON_IsNull(postcode) ? strdup(postcode->valuestring) : NULL,
        address1 && !cJSON_IsNull(address1) ? strdup(address1->valuestring) : NULL,
        address2 && !cJSON_IsNull(address2) ? strdup(address2->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        phone_mobile && !cJSON_IsNull(phone_mobile) ? strdup(phone_mobile->valuestring) : NULL,
        city && !cJSON_IsNull(city) ? strdup(city->valuestring) : NULL,
        country ? country_local_nonprim : NULL,
        state ? state_local_nonprim : NULL,
        company && !cJSON_IsNull(company) ? strdup(company->valuestring) : NULL,
        fax && !cJSON_IsNull(fax) ? strdup(fax->valuestring) : NULL,
        website && !cJSON_IsNull(website) ? strdup(website->valuestring) : NULL,
        gender && !cJSON_IsNull(gender) ? strdup(gender->valuestring) : NULL,
        region && !cJSON_IsNull(region) ? strdup(region->valuestring) : NULL,
        _default ? _default->valueint : 0,
        tax_id && !cJSON_IsNull(tax_id) ? strdup(tax_id->valuestring) : NULL,
        identification_number && !cJSON_IsNull(identification_number) ? strdup(identification_number->valuestring) : NULL,
        alias && !cJSON_IsNull(alias) ? strdup(alias->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return customer_address_local_var;
end:
    if (country_local_nonprim) {
        country_free(country_local_nonprim);
        country_local_nonprim = NULL;
    }
    if (state_local_nonprim) {
        state_free(state_local_nonprim);
        state_local_nonprim = NULL;
    }
    return NULL;

}
