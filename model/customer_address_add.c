#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_address_add.h"



static customer_address_add_t *customer_address_add_create_internal(
    char *customer_id,
    char *store_id,
    char *first_name,
    char *last_name,
    char *company,
    char *address1,
    char *address2,
    char *city,
    char *country,
    char *state,
    char *postcode,
    char *identification_number,
    list_t *types,
    int _default,
    char *phone,
    char *phone_mobile,
    char *fax,
    char *website,
    char *gender,
    char *tax_id,
    char *alias
    ) {
    customer_address_add_t *customer_address_add_local_var = malloc(sizeof(customer_address_add_t));
    if (!customer_address_add_local_var) {
        return NULL;
    }
    customer_address_add_local_var->customer_id = customer_id;
    customer_address_add_local_var->store_id = store_id;
    customer_address_add_local_var->first_name = first_name;
    customer_address_add_local_var->last_name = last_name;
    customer_address_add_local_var->company = company;
    customer_address_add_local_var->address1 = address1;
    customer_address_add_local_var->address2 = address2;
    customer_address_add_local_var->city = city;
    customer_address_add_local_var->country = country;
    customer_address_add_local_var->state = state;
    customer_address_add_local_var->postcode = postcode;
    customer_address_add_local_var->identification_number = identification_number;
    customer_address_add_local_var->types = types;
    customer_address_add_local_var->_default = _default;
    customer_address_add_local_var->phone = phone;
    customer_address_add_local_var->phone_mobile = phone_mobile;
    customer_address_add_local_var->fax = fax;
    customer_address_add_local_var->website = website;
    customer_address_add_local_var->gender = gender;
    customer_address_add_local_var->tax_id = tax_id;
    customer_address_add_local_var->alias = alias;

    customer_address_add_local_var->_library_owned = 1;
    return customer_address_add_local_var;
}

__attribute__((deprecated)) customer_address_add_t *customer_address_add_create(
    char *customer_id,
    char *store_id,
    char *first_name,
    char *last_name,
    char *company,
    char *address1,
    char *address2,
    char *city,
    char *country,
    char *state,
    char *postcode,
    char *identification_number,
    list_t *types,
    int _default,
    char *phone,
    char *phone_mobile,
    char *fax,
    char *website,
    char *gender,
    char *tax_id,
    char *alias
    ) {
    return customer_address_add_create_internal (
        customer_id,
        store_id,
        first_name,
        last_name,
        company,
        address1,
        address2,
        city,
        country,
        state,
        postcode,
        identification_number,
        types,
        _default,
        phone,
        phone_mobile,
        fax,
        website,
        gender,
        tax_id,
        alias
        );
}

void customer_address_add_free(customer_address_add_t *customer_address_add) {
    if(NULL == customer_address_add){
        return ;
    }
    if(customer_address_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_address_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_address_add->customer_id) {
        free(customer_address_add->customer_id);
        customer_address_add->customer_id = NULL;
    }
    if (customer_address_add->store_id) {
        free(customer_address_add->store_id);
        customer_address_add->store_id = NULL;
    }
    if (customer_address_add->first_name) {
        free(customer_address_add->first_name);
        customer_address_add->first_name = NULL;
    }
    if (customer_address_add->last_name) {
        free(customer_address_add->last_name);
        customer_address_add->last_name = NULL;
    }
    if (customer_address_add->company) {
        free(customer_address_add->company);
        customer_address_add->company = NULL;
    }
    if (customer_address_add->address1) {
        free(customer_address_add->address1);
        customer_address_add->address1 = NULL;
    }
    if (customer_address_add->address2) {
        free(customer_address_add->address2);
        customer_address_add->address2 = NULL;
    }
    if (customer_address_add->city) {
        free(customer_address_add->city);
        customer_address_add->city = NULL;
    }
    if (customer_address_add->country) {
        free(customer_address_add->country);
        customer_address_add->country = NULL;
    }
    if (customer_address_add->state) {
        free(customer_address_add->state);
        customer_address_add->state = NULL;
    }
    if (customer_address_add->postcode) {
        free(customer_address_add->postcode);
        customer_address_add->postcode = NULL;
    }
    if (customer_address_add->identification_number) {
        free(customer_address_add->identification_number);
        customer_address_add->identification_number = NULL;
    }
    if (customer_address_add->types) {
        list_ForEach(listEntry, customer_address_add->types) {
            free(listEntry->data);
        }
        list_freeList(customer_address_add->types);
        customer_address_add->types = NULL;
    }
    if (customer_address_add->phone) {
        free(customer_address_add->phone);
        customer_address_add->phone = NULL;
    }
    if (customer_address_add->phone_mobile) {
        free(customer_address_add->phone_mobile);
        customer_address_add->phone_mobile = NULL;
    }
    if (customer_address_add->fax) {
        free(customer_address_add->fax);
        customer_address_add->fax = NULL;
    }
    if (customer_address_add->website) {
        free(customer_address_add->website);
        customer_address_add->website = NULL;
    }
    if (customer_address_add->gender) {
        free(customer_address_add->gender);
        customer_address_add->gender = NULL;
    }
    if (customer_address_add->tax_id) {
        free(customer_address_add->tax_id);
        customer_address_add->tax_id = NULL;
    }
    if (customer_address_add->alias) {
        free(customer_address_add->alias);
        customer_address_add->alias = NULL;
    }
    free(customer_address_add);
}

cJSON *customer_address_add_convertToJSON(customer_address_add_t *customer_address_add) {
    cJSON *item = cJSON_CreateObject();

    // customer_address_add->customer_id
    if (!customer_address_add->customer_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "customer_id", customer_address_add->customer_id) == NULL) {
    goto fail; //String
    }


    // customer_address_add->store_id
    if(customer_address_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", customer_address_add->store_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->first_name
    if(customer_address_add->first_name) {
    if(cJSON_AddStringToObject(item, "first_name", customer_address_add->first_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->last_name
    if(customer_address_add->last_name) {
    if(cJSON_AddStringToObject(item, "last_name", customer_address_add->last_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->company
    if(customer_address_add->company) {
    if(cJSON_AddStringToObject(item, "company", customer_address_add->company) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->address1
    if (!customer_address_add->address1) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "address1", customer_address_add->address1) == NULL) {
    goto fail; //String
    }


    // customer_address_add->address2
    if(customer_address_add->address2) {
    if(cJSON_AddStringToObject(item, "address2", customer_address_add->address2) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->city
    if (!customer_address_add->city) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "city", customer_address_add->city) == NULL) {
    goto fail; //String
    }


    // customer_address_add->country
    if (!customer_address_add->country) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "country", customer_address_add->country) == NULL) {
    goto fail; //String
    }


    // customer_address_add->state
    if(customer_address_add->state) {
    if(cJSON_AddStringToObject(item, "state", customer_address_add->state) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->postcode
    if (!customer_address_add->postcode) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "postcode", customer_address_add->postcode) == NULL) {
    goto fail; //String
    }


    // customer_address_add->identification_number
    if(customer_address_add->identification_number) {
    if(cJSON_AddStringToObject(item, "identification_number", customer_address_add->identification_number) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->types
    if(customer_address_add->types) {
    cJSON *types = cJSON_AddArrayToObject(item, "types");
    if(types == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *typesListEntry;
    list_ForEach(typesListEntry, customer_address_add->types) {
    if(cJSON_AddStringToObject(types, "", typesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // customer_address_add->_default
    if(customer_address_add->_default) {
    if(cJSON_AddBoolToObject(item, "default", customer_address_add->_default) == NULL) {
    goto fail; //Bool
    }
    }


    // customer_address_add->phone
    if(customer_address_add->phone) {
    if(cJSON_AddStringToObject(item, "phone", customer_address_add->phone) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->phone_mobile
    if(customer_address_add->phone_mobile) {
    if(cJSON_AddStringToObject(item, "phone_mobile", customer_address_add->phone_mobile) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->fax
    if(customer_address_add->fax) {
    if(cJSON_AddStringToObject(item, "fax", customer_address_add->fax) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->website
    if(customer_address_add->website) {
    if(cJSON_AddStringToObject(item, "website", customer_address_add->website) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->gender
    if(customer_address_add->gender) {
    if(cJSON_AddStringToObject(item, "gender", customer_address_add->gender) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->tax_id
    if(customer_address_add->tax_id) {
    if(cJSON_AddStringToObject(item, "tax_id", customer_address_add->tax_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_address_add->alias
    if(customer_address_add->alias) {
    if(cJSON_AddStringToObject(item, "alias", customer_address_add->alias) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_address_add_t *customer_address_add_parseFromJSON(cJSON *customer_address_addJSON){

    customer_address_add_t *customer_address_add_local_var = NULL;

    // define the local list for customer_address_add->types
    list_t *typesList = NULL;

    // customer_address_add->customer_id
    cJSON *customer_id = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "customer_id");
    if (cJSON_IsNull(customer_id)) {
        customer_id = NULL;
    }
    if (!customer_id) {
        goto end;
    }

    
    if(!cJSON_IsString(customer_id))
    {
    goto end; //String
    }

    // customer_address_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // customer_address_add->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "first_name");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // customer_address_add->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "last_name");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // customer_address_add->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "company");
    if (cJSON_IsNull(company)) {
        company = NULL;
    }
    if (company) { 
    if(!cJSON_IsString(company) && !cJSON_IsNull(company))
    {
    goto end; //String
    }
    }

    // customer_address_add->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "address1");
    if (cJSON_IsNull(address1)) {
        address1 = NULL;
    }
    if (!address1) {
        goto end;
    }

    
    if(!cJSON_IsString(address1))
    {
    goto end; //String
    }

    // customer_address_add->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "address2");
    if (cJSON_IsNull(address2)) {
        address2 = NULL;
    }
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // customer_address_add->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (!city) {
        goto end;
    }

    
    if(!cJSON_IsString(city))
    {
    goto end; //String
    }

    // customer_address_add->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (!country) {
        goto end;
    }

    
    if(!cJSON_IsString(country))
    {
    goto end; //String
    }

    // customer_address_add->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // customer_address_add->postcode
    cJSON *postcode = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "postcode");
    if (cJSON_IsNull(postcode)) {
        postcode = NULL;
    }
    if (!postcode) {
        goto end;
    }

    
    if(!cJSON_IsString(postcode))
    {
    goto end; //String
    }

    // customer_address_add->identification_number
    cJSON *identification_number = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "identification_number");
    if (cJSON_IsNull(identification_number)) {
        identification_number = NULL;
    }
    if (identification_number) { 
    if(!cJSON_IsString(identification_number) && !cJSON_IsNull(identification_number))
    {
    goto end; //String
    }
    }

    // customer_address_add->types
    cJSON *types = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "types");
    if (cJSON_IsNull(types)) {
        types = NULL;
    }
    if (types) { 
    cJSON *types_local = NULL;
    if(!cJSON_IsArray(types)) {
        goto end;//primitive container
    }
    typesList = list_createList();

    cJSON_ArrayForEach(types_local, types)
    {
        if(!cJSON_IsString(types_local))
        {
            goto end;
        }
        list_addElement(typesList , strdup(types_local->valuestring));
    }
    }

    // customer_address_add->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "default");
    if (cJSON_IsNull(_default)) {
        _default = NULL;
    }
    if (_default) { 
    if(!cJSON_IsBool(_default))
    {
    goto end; //Bool
    }
    }

    // customer_address_add->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // customer_address_add->phone_mobile
    cJSON *phone_mobile = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "phone_mobile");
    if (cJSON_IsNull(phone_mobile)) {
        phone_mobile = NULL;
    }
    if (phone_mobile) { 
    if(!cJSON_IsString(phone_mobile) && !cJSON_IsNull(phone_mobile))
    {
    goto end; //String
    }
    }

    // customer_address_add->fax
    cJSON *fax = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "fax");
    if (cJSON_IsNull(fax)) {
        fax = NULL;
    }
    if (fax) { 
    if(!cJSON_IsString(fax) && !cJSON_IsNull(fax))
    {
    goto end; //String
    }
    }

    // customer_address_add->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "website");
    if (cJSON_IsNull(website)) {
        website = NULL;
    }
    if (website) { 
    if(!cJSON_IsString(website) && !cJSON_IsNull(website))
    {
    goto end; //String
    }
    }

    // customer_address_add->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "gender");
    if (cJSON_IsNull(gender)) {
        gender = NULL;
    }
    if (gender) { 
    if(!cJSON_IsString(gender) && !cJSON_IsNull(gender))
    {
    goto end; //String
    }
    }

    // customer_address_add->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "tax_id");
    if (cJSON_IsNull(tax_id)) {
        tax_id = NULL;
    }
    if (tax_id) { 
    if(!cJSON_IsString(tax_id) && !cJSON_IsNull(tax_id))
    {
    goto end; //String
    }
    }

    // customer_address_add->alias
    cJSON *alias = cJSON_GetObjectItemCaseSensitive(customer_address_addJSON, "alias");
    if (cJSON_IsNull(alias)) {
        alias = NULL;
    }
    if (alias) { 
    if(!cJSON_IsString(alias) && !cJSON_IsNull(alias))
    {
    goto end; //String
    }
    }


    customer_address_add_local_var = customer_address_add_create_internal (
        strdup(customer_id->valuestring),
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        company && !cJSON_IsNull(company) ? strdup(company->valuestring) : NULL,
        strdup(address1->valuestring),
        address2 && !cJSON_IsNull(address2) ? strdup(address2->valuestring) : NULL,
        strdup(city->valuestring),
        strdup(country->valuestring),
        state && !cJSON_IsNull(state) ? strdup(state->valuestring) : NULL,
        strdup(postcode->valuestring),
        identification_number && !cJSON_IsNull(identification_number) ? strdup(identification_number->valuestring) : NULL,
        types ? typesList : NULL,
        _default ? _default->valueint : 0,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        phone_mobile && !cJSON_IsNull(phone_mobile) ? strdup(phone_mobile->valuestring) : NULL,
        fax && !cJSON_IsNull(fax) ? strdup(fax->valuestring) : NULL,
        website && !cJSON_IsNull(website) ? strdup(website->valuestring) : NULL,
        gender && !cJSON_IsNull(gender) ? strdup(gender->valuestring) : NULL,
        tax_id && !cJSON_IsNull(tax_id) ? strdup(tax_id->valuestring) : NULL,
        alias && !cJSON_IsNull(alias) ? strdup(alias->valuestring) : NULL
        );

    return customer_address_add_local_var;
end:
    if (typesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, typesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(typesList);
        typesList = NULL;
    }
    return NULL;

}
