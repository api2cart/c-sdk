#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_update_address_inner.h"



static customer_update_address_inner_t *customer_update_address_inner_create_internal(
    char *address_book_id,
    char *address_book_first_name,
    char *address_book_last_name,
    char *address_book_company,
    char *address_book_fax,
    char *address_book_phone,
    char *address_book_phone_mobile,
    char *address_book_address1,
    char *address_book_address2,
    char *address_book_city,
    char *address_book_country,
    char *address_book_state,
    char *address_book_postcode,
    char *address_book_tax_id,
    char *address_book_identification_number,
    char *address_book_gender,
    char *address_book_alias,
    char *address_book_type,
    int address_book_default
    ) {
    customer_update_address_inner_t *customer_update_address_inner_local_var = malloc(sizeof(customer_update_address_inner_t));
    if (!customer_update_address_inner_local_var) {
        return NULL;
    }
    customer_update_address_inner_local_var->address_book_id = address_book_id;
    customer_update_address_inner_local_var->address_book_first_name = address_book_first_name;
    customer_update_address_inner_local_var->address_book_last_name = address_book_last_name;
    customer_update_address_inner_local_var->address_book_company = address_book_company;
    customer_update_address_inner_local_var->address_book_fax = address_book_fax;
    customer_update_address_inner_local_var->address_book_phone = address_book_phone;
    customer_update_address_inner_local_var->address_book_phone_mobile = address_book_phone_mobile;
    customer_update_address_inner_local_var->address_book_address1 = address_book_address1;
    customer_update_address_inner_local_var->address_book_address2 = address_book_address2;
    customer_update_address_inner_local_var->address_book_city = address_book_city;
    customer_update_address_inner_local_var->address_book_country = address_book_country;
    customer_update_address_inner_local_var->address_book_state = address_book_state;
    customer_update_address_inner_local_var->address_book_postcode = address_book_postcode;
    customer_update_address_inner_local_var->address_book_tax_id = address_book_tax_id;
    customer_update_address_inner_local_var->address_book_identification_number = address_book_identification_number;
    customer_update_address_inner_local_var->address_book_gender = address_book_gender;
    customer_update_address_inner_local_var->address_book_alias = address_book_alias;
    customer_update_address_inner_local_var->address_book_type = address_book_type;
    customer_update_address_inner_local_var->address_book_default = address_book_default;

    customer_update_address_inner_local_var->_library_owned = 1;
    return customer_update_address_inner_local_var;
}

__attribute__((deprecated)) customer_update_address_inner_t *customer_update_address_inner_create(
    char *address_book_id,
    char *address_book_first_name,
    char *address_book_last_name,
    char *address_book_company,
    char *address_book_fax,
    char *address_book_phone,
    char *address_book_phone_mobile,
    char *address_book_address1,
    char *address_book_address2,
    char *address_book_city,
    char *address_book_country,
    char *address_book_state,
    char *address_book_postcode,
    char *address_book_tax_id,
    char *address_book_identification_number,
    char *address_book_gender,
    char *address_book_alias,
    char *address_book_type,
    int address_book_default
    ) {
    return customer_update_address_inner_create_internal (
        address_book_id,
        address_book_first_name,
        address_book_last_name,
        address_book_company,
        address_book_fax,
        address_book_phone,
        address_book_phone_mobile,
        address_book_address1,
        address_book_address2,
        address_book_city,
        address_book_country,
        address_book_state,
        address_book_postcode,
        address_book_tax_id,
        address_book_identification_number,
        address_book_gender,
        address_book_alias,
        address_book_type,
        address_book_default
        );
}

void customer_update_address_inner_free(customer_update_address_inner_t *customer_update_address_inner) {
    if(NULL == customer_update_address_inner){
        return ;
    }
    if(customer_update_address_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_update_address_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_update_address_inner->address_book_id) {
        free(customer_update_address_inner->address_book_id);
        customer_update_address_inner->address_book_id = NULL;
    }
    if (customer_update_address_inner->address_book_first_name) {
        free(customer_update_address_inner->address_book_first_name);
        customer_update_address_inner->address_book_first_name = NULL;
    }
    if (customer_update_address_inner->address_book_last_name) {
        free(customer_update_address_inner->address_book_last_name);
        customer_update_address_inner->address_book_last_name = NULL;
    }
    if (customer_update_address_inner->address_book_company) {
        free(customer_update_address_inner->address_book_company);
        customer_update_address_inner->address_book_company = NULL;
    }
    if (customer_update_address_inner->address_book_fax) {
        free(customer_update_address_inner->address_book_fax);
        customer_update_address_inner->address_book_fax = NULL;
    }
    if (customer_update_address_inner->address_book_phone) {
        free(customer_update_address_inner->address_book_phone);
        customer_update_address_inner->address_book_phone = NULL;
    }
    if (customer_update_address_inner->address_book_phone_mobile) {
        free(customer_update_address_inner->address_book_phone_mobile);
        customer_update_address_inner->address_book_phone_mobile = NULL;
    }
    if (customer_update_address_inner->address_book_address1) {
        free(customer_update_address_inner->address_book_address1);
        customer_update_address_inner->address_book_address1 = NULL;
    }
    if (customer_update_address_inner->address_book_address2) {
        free(customer_update_address_inner->address_book_address2);
        customer_update_address_inner->address_book_address2 = NULL;
    }
    if (customer_update_address_inner->address_book_city) {
        free(customer_update_address_inner->address_book_city);
        customer_update_address_inner->address_book_city = NULL;
    }
    if (customer_update_address_inner->address_book_country) {
        free(customer_update_address_inner->address_book_country);
        customer_update_address_inner->address_book_country = NULL;
    }
    if (customer_update_address_inner->address_book_state) {
        free(customer_update_address_inner->address_book_state);
        customer_update_address_inner->address_book_state = NULL;
    }
    if (customer_update_address_inner->address_book_postcode) {
        free(customer_update_address_inner->address_book_postcode);
        customer_update_address_inner->address_book_postcode = NULL;
    }
    if (customer_update_address_inner->address_book_tax_id) {
        free(customer_update_address_inner->address_book_tax_id);
        customer_update_address_inner->address_book_tax_id = NULL;
    }
    if (customer_update_address_inner->address_book_identification_number) {
        free(customer_update_address_inner->address_book_identification_number);
        customer_update_address_inner->address_book_identification_number = NULL;
    }
    if (customer_update_address_inner->address_book_gender) {
        free(customer_update_address_inner->address_book_gender);
        customer_update_address_inner->address_book_gender = NULL;
    }
    if (customer_update_address_inner->address_book_alias) {
        free(customer_update_address_inner->address_book_alias);
        customer_update_address_inner->address_book_alias = NULL;
    }
    if (customer_update_address_inner->address_book_type) {
        free(customer_update_address_inner->address_book_type);
        customer_update_address_inner->address_book_type = NULL;
    }
    free(customer_update_address_inner);
}

cJSON *customer_update_address_inner_convertToJSON(customer_update_address_inner_t *customer_update_address_inner) {
    cJSON *item = cJSON_CreateObject();

    // customer_update_address_inner->address_book_id
    if(customer_update_address_inner->address_book_id) {
    if(cJSON_AddStringToObject(item, "address_book_id", customer_update_address_inner->address_book_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_first_name
    if(customer_update_address_inner->address_book_first_name) {
    if(cJSON_AddStringToObject(item, "address_book_first_name", customer_update_address_inner->address_book_first_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_last_name
    if(customer_update_address_inner->address_book_last_name) {
    if(cJSON_AddStringToObject(item, "address_book_last_name", customer_update_address_inner->address_book_last_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_company
    if(customer_update_address_inner->address_book_company) {
    if(cJSON_AddStringToObject(item, "address_book_company", customer_update_address_inner->address_book_company) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_fax
    if(customer_update_address_inner->address_book_fax) {
    if(cJSON_AddStringToObject(item, "address_book_fax", customer_update_address_inner->address_book_fax) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_phone
    if(customer_update_address_inner->address_book_phone) {
    if(cJSON_AddStringToObject(item, "address_book_phone", customer_update_address_inner->address_book_phone) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_phone_mobile
    if(customer_update_address_inner->address_book_phone_mobile) {
    if(cJSON_AddStringToObject(item, "address_book_phone_mobile", customer_update_address_inner->address_book_phone_mobile) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_address1
    if(customer_update_address_inner->address_book_address1) {
    if(cJSON_AddStringToObject(item, "address_book_address1", customer_update_address_inner->address_book_address1) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_address2
    if(customer_update_address_inner->address_book_address2) {
    if(cJSON_AddStringToObject(item, "address_book_address2", customer_update_address_inner->address_book_address2) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_city
    if(customer_update_address_inner->address_book_city) {
    if(cJSON_AddStringToObject(item, "address_book_city", customer_update_address_inner->address_book_city) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_country
    if(customer_update_address_inner->address_book_country) {
    if(cJSON_AddStringToObject(item, "address_book_country", customer_update_address_inner->address_book_country) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_state
    if(customer_update_address_inner->address_book_state) {
    if(cJSON_AddStringToObject(item, "address_book_state", customer_update_address_inner->address_book_state) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_postcode
    if(customer_update_address_inner->address_book_postcode) {
    if(cJSON_AddStringToObject(item, "address_book_postcode", customer_update_address_inner->address_book_postcode) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_tax_id
    if(customer_update_address_inner->address_book_tax_id) {
    if(cJSON_AddStringToObject(item, "address_book_tax_id", customer_update_address_inner->address_book_tax_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_identification_number
    if(customer_update_address_inner->address_book_identification_number) {
    if(cJSON_AddStringToObject(item, "address_book_identification_number", customer_update_address_inner->address_book_identification_number) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_gender
    if(customer_update_address_inner->address_book_gender) {
    if(cJSON_AddStringToObject(item, "address_book_gender", customer_update_address_inner->address_book_gender) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_alias
    if(customer_update_address_inner->address_book_alias) {
    if(cJSON_AddStringToObject(item, "address_book_alias", customer_update_address_inner->address_book_alias) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_type
    if(customer_update_address_inner->address_book_type) {
    if(cJSON_AddStringToObject(item, "address_book_type", customer_update_address_inner->address_book_type) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_address_inner->address_book_default
    if(customer_update_address_inner->address_book_default) {
    if(cJSON_AddBoolToObject(item, "address_book_default", customer_update_address_inner->address_book_default) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_update_address_inner_t *customer_update_address_inner_parseFromJSON(cJSON *customer_update_address_innerJSON){

    customer_update_address_inner_t *customer_update_address_inner_local_var = NULL;

    // customer_update_address_inner->address_book_id
    cJSON *address_book_id = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_id");
    if (cJSON_IsNull(address_book_id)) {
        address_book_id = NULL;
    }
    if (address_book_id) { 
    if(!cJSON_IsString(address_book_id) && !cJSON_IsNull(address_book_id))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_first_name
    cJSON *address_book_first_name = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_first_name");
    if (cJSON_IsNull(address_book_first_name)) {
        address_book_first_name = NULL;
    }
    if (address_book_first_name) { 
    if(!cJSON_IsString(address_book_first_name) && !cJSON_IsNull(address_book_first_name))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_last_name
    cJSON *address_book_last_name = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_last_name");
    if (cJSON_IsNull(address_book_last_name)) {
        address_book_last_name = NULL;
    }
    if (address_book_last_name) { 
    if(!cJSON_IsString(address_book_last_name) && !cJSON_IsNull(address_book_last_name))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_company
    cJSON *address_book_company = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_company");
    if (cJSON_IsNull(address_book_company)) {
        address_book_company = NULL;
    }
    if (address_book_company) { 
    if(!cJSON_IsString(address_book_company) && !cJSON_IsNull(address_book_company))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_fax
    cJSON *address_book_fax = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_fax");
    if (cJSON_IsNull(address_book_fax)) {
        address_book_fax = NULL;
    }
    if (address_book_fax) { 
    if(!cJSON_IsString(address_book_fax) && !cJSON_IsNull(address_book_fax))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_phone
    cJSON *address_book_phone = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_phone");
    if (cJSON_IsNull(address_book_phone)) {
        address_book_phone = NULL;
    }
    if (address_book_phone) { 
    if(!cJSON_IsString(address_book_phone) && !cJSON_IsNull(address_book_phone))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_phone_mobile
    cJSON *address_book_phone_mobile = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_phone_mobile");
    if (cJSON_IsNull(address_book_phone_mobile)) {
        address_book_phone_mobile = NULL;
    }
    if (address_book_phone_mobile) { 
    if(!cJSON_IsString(address_book_phone_mobile) && !cJSON_IsNull(address_book_phone_mobile))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_address1
    cJSON *address_book_address1 = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_address1");
    if (cJSON_IsNull(address_book_address1)) {
        address_book_address1 = NULL;
    }
    if (address_book_address1) { 
    if(!cJSON_IsString(address_book_address1) && !cJSON_IsNull(address_book_address1))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_address2
    cJSON *address_book_address2 = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_address2");
    if (cJSON_IsNull(address_book_address2)) {
        address_book_address2 = NULL;
    }
    if (address_book_address2) { 
    if(!cJSON_IsString(address_book_address2) && !cJSON_IsNull(address_book_address2))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_city
    cJSON *address_book_city = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_city");
    if (cJSON_IsNull(address_book_city)) {
        address_book_city = NULL;
    }
    if (address_book_city) { 
    if(!cJSON_IsString(address_book_city) && !cJSON_IsNull(address_book_city))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_country
    cJSON *address_book_country = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_country");
    if (cJSON_IsNull(address_book_country)) {
        address_book_country = NULL;
    }
    if (address_book_country) { 
    if(!cJSON_IsString(address_book_country) && !cJSON_IsNull(address_book_country))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_state
    cJSON *address_book_state = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_state");
    if (cJSON_IsNull(address_book_state)) {
        address_book_state = NULL;
    }
    if (address_book_state) { 
    if(!cJSON_IsString(address_book_state) && !cJSON_IsNull(address_book_state))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_postcode
    cJSON *address_book_postcode = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_postcode");
    if (cJSON_IsNull(address_book_postcode)) {
        address_book_postcode = NULL;
    }
    if (address_book_postcode) { 
    if(!cJSON_IsString(address_book_postcode) && !cJSON_IsNull(address_book_postcode))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_tax_id
    cJSON *address_book_tax_id = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_tax_id");
    if (cJSON_IsNull(address_book_tax_id)) {
        address_book_tax_id = NULL;
    }
    if (address_book_tax_id) { 
    if(!cJSON_IsString(address_book_tax_id) && !cJSON_IsNull(address_book_tax_id))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_identification_number
    cJSON *address_book_identification_number = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_identification_number");
    if (cJSON_IsNull(address_book_identification_number)) {
        address_book_identification_number = NULL;
    }
    if (address_book_identification_number) { 
    if(!cJSON_IsString(address_book_identification_number) && !cJSON_IsNull(address_book_identification_number))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_gender
    cJSON *address_book_gender = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_gender");
    if (cJSON_IsNull(address_book_gender)) {
        address_book_gender = NULL;
    }
    if (address_book_gender) { 
    if(!cJSON_IsString(address_book_gender) && !cJSON_IsNull(address_book_gender))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_alias
    cJSON *address_book_alias = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_alias");
    if (cJSON_IsNull(address_book_alias)) {
        address_book_alias = NULL;
    }
    if (address_book_alias) { 
    if(!cJSON_IsString(address_book_alias) && !cJSON_IsNull(address_book_alias))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_type
    cJSON *address_book_type = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_type");
    if (cJSON_IsNull(address_book_type)) {
        address_book_type = NULL;
    }
    if (address_book_type) { 
    if(!cJSON_IsString(address_book_type) && !cJSON_IsNull(address_book_type))
    {
    goto end; //String
    }
    }

    // customer_update_address_inner->address_book_default
    cJSON *address_book_default = cJSON_GetObjectItemCaseSensitive(customer_update_address_innerJSON, "address_book_default");
    if (cJSON_IsNull(address_book_default)) {
        address_book_default = NULL;
    }
    if (address_book_default) { 
    if(!cJSON_IsBool(address_book_default))
    {
    goto end; //Bool
    }
    }


    customer_update_address_inner_local_var = customer_update_address_inner_create_internal (
        address_book_id && !cJSON_IsNull(address_book_id) ? strdup(address_book_id->valuestring) : NULL,
        address_book_first_name && !cJSON_IsNull(address_book_first_name) ? strdup(address_book_first_name->valuestring) : NULL,
        address_book_last_name && !cJSON_IsNull(address_book_last_name) ? strdup(address_book_last_name->valuestring) : NULL,
        address_book_company && !cJSON_IsNull(address_book_company) ? strdup(address_book_company->valuestring) : NULL,
        address_book_fax && !cJSON_IsNull(address_book_fax) ? strdup(address_book_fax->valuestring) : NULL,
        address_book_phone && !cJSON_IsNull(address_book_phone) ? strdup(address_book_phone->valuestring) : NULL,
        address_book_phone_mobile && !cJSON_IsNull(address_book_phone_mobile) ? strdup(address_book_phone_mobile->valuestring) : NULL,
        address_book_address1 && !cJSON_IsNull(address_book_address1) ? strdup(address_book_address1->valuestring) : NULL,
        address_book_address2 && !cJSON_IsNull(address_book_address2) ? strdup(address_book_address2->valuestring) : NULL,
        address_book_city && !cJSON_IsNull(address_book_city) ? strdup(address_book_city->valuestring) : NULL,
        address_book_country && !cJSON_IsNull(address_book_country) ? strdup(address_book_country->valuestring) : NULL,
        address_book_state && !cJSON_IsNull(address_book_state) ? strdup(address_book_state->valuestring) : NULL,
        address_book_postcode && !cJSON_IsNull(address_book_postcode) ? strdup(address_book_postcode->valuestring) : NULL,
        address_book_tax_id && !cJSON_IsNull(address_book_tax_id) ? strdup(address_book_tax_id->valuestring) : NULL,
        address_book_identification_number && !cJSON_IsNull(address_book_identification_number) ? strdup(address_book_identification_number->valuestring) : NULL,
        address_book_gender && !cJSON_IsNull(address_book_gender) ? strdup(address_book_gender->valuestring) : NULL,
        address_book_alias && !cJSON_IsNull(address_book_alias) ? strdup(address_book_alias->valuestring) : NULL,
        address_book_type && !cJSON_IsNull(address_book_type) ? strdup(address_book_type->valuestring) : NULL,
        address_book_default ? address_book_default->valueint : 0
        );

    return customer_update_address_inner_local_var;
end:
    return NULL;

}
