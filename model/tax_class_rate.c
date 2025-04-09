#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_class_rate.h"



static tax_class_rate_t *tax_class_rate_create_internal(
    char *id,
    char *name,
    double tax,
    int tax_type,
    char *tax_based_on,
    list_t *countries,
    list_t *cities,
    list_t *address,
    list_t *zip_codes,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    tax_class_rate_t *tax_class_rate_local_var = malloc(sizeof(tax_class_rate_t));
    if (!tax_class_rate_local_var) {
        return NULL;
    }
    tax_class_rate_local_var->id = id;
    tax_class_rate_local_var->name = name;
    tax_class_rate_local_var->tax = tax;
    tax_class_rate_local_var->tax_type = tax_type;
    tax_class_rate_local_var->tax_based_on = tax_based_on;
    tax_class_rate_local_var->countries = countries;
    tax_class_rate_local_var->cities = cities;
    tax_class_rate_local_var->address = address;
    tax_class_rate_local_var->zip_codes = zip_codes;
    tax_class_rate_local_var->additional_fields = additional_fields;
    tax_class_rate_local_var->custom_fields = custom_fields;

    tax_class_rate_local_var->_library_owned = 1;
    return tax_class_rate_local_var;
}

__attribute__((deprecated)) tax_class_rate_t *tax_class_rate_create(
    char *id,
    char *name,
    double tax,
    int tax_type,
    char *tax_based_on,
    list_t *countries,
    list_t *cities,
    list_t *address,
    list_t *zip_codes,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return tax_class_rate_create_internal (
        id,
        name,
        tax,
        tax_type,
        tax_based_on,
        countries,
        cities,
        address,
        zip_codes,
        additional_fields,
        custom_fields
        );
}

void tax_class_rate_free(tax_class_rate_t *tax_class_rate) {
    if(NULL == tax_class_rate){
        return ;
    }
    if(tax_class_rate->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "tax_class_rate_free");
        return ;
    }
    listEntry_t *listEntry;
    if (tax_class_rate->id) {
        free(tax_class_rate->id);
        tax_class_rate->id = NULL;
    }
    if (tax_class_rate->name) {
        free(tax_class_rate->name);
        tax_class_rate->name = NULL;
    }
    if (tax_class_rate->tax_based_on) {
        free(tax_class_rate->tax_based_on);
        tax_class_rate->tax_based_on = NULL;
    }
    if (tax_class_rate->countries) {
        list_ForEach(listEntry, tax_class_rate->countries) {
            tax_class_countries_free(listEntry->data);
        }
        list_freeList(tax_class_rate->countries);
        tax_class_rate->countries = NULL;
    }
    if (tax_class_rate->cities) {
        list_ForEach(listEntry, tax_class_rate->cities) {
            free(listEntry->data);
        }
        list_freeList(tax_class_rate->cities);
        tax_class_rate->cities = NULL;
    }
    if (tax_class_rate->address) {
        list_ForEach(listEntry, tax_class_rate->address) {
            free(listEntry->data);
        }
        list_freeList(tax_class_rate->address);
        tax_class_rate->address = NULL;
    }
    if (tax_class_rate->zip_codes) {
        list_ForEach(listEntry, tax_class_rate->zip_codes) {
            tax_class_zip_codes_free(listEntry->data);
        }
        list_freeList(tax_class_rate->zip_codes);
        tax_class_rate->zip_codes = NULL;
    }
    if (tax_class_rate->additional_fields) {
        object_free(tax_class_rate->additional_fields);
        tax_class_rate->additional_fields = NULL;
    }
    if (tax_class_rate->custom_fields) {
        object_free(tax_class_rate->custom_fields);
        tax_class_rate->custom_fields = NULL;
    }
    free(tax_class_rate);
}

cJSON *tax_class_rate_convertToJSON(tax_class_rate_t *tax_class_rate) {
    cJSON *item = cJSON_CreateObject();

    // tax_class_rate->id
    if(tax_class_rate->id) {
    if(cJSON_AddStringToObject(item, "id", tax_class_rate->id) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_rate->name
    if(tax_class_rate->name) {
    if(cJSON_AddStringToObject(item, "name", tax_class_rate->name) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_rate->tax
    if(tax_class_rate->tax) {
    if(cJSON_AddNumberToObject(item, "tax", tax_class_rate->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_class_rate->tax_type
    if(tax_class_rate->tax_type) {
    if(cJSON_AddNumberToObject(item, "tax_type", tax_class_rate->tax_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_class_rate->tax_based_on
    if(tax_class_rate->tax_based_on) {
    if(cJSON_AddStringToObject(item, "tax_based_on", tax_class_rate->tax_based_on) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_rate->countries
    if(tax_class_rate->countries) {
    cJSON *countries = cJSON_AddArrayToObject(item, "countries");
    if(countries == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *countriesListEntry;
    if (tax_class_rate->countries) {
    list_ForEach(countriesListEntry, tax_class_rate->countries) {
    cJSON *itemLocal = tax_class_countries_convertToJSON(countriesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(countries, itemLocal);
    }
    }
    }


    // tax_class_rate->cities
    if(tax_class_rate->cities) {
    cJSON *cities = cJSON_AddArrayToObject(item, "cities");
    if(cities == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *citiesListEntry;
    list_ForEach(citiesListEntry, tax_class_rate->cities) {
    if(cJSON_AddStringToObject(cities, "", citiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // tax_class_rate->address
    if(tax_class_rate->address) {
    cJSON *address = cJSON_AddArrayToObject(item, "address");
    if(address == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *addressListEntry;
    list_ForEach(addressListEntry, tax_class_rate->address) {
    if(cJSON_AddStringToObject(address, "", addressListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // tax_class_rate->zip_codes
    if(tax_class_rate->zip_codes) {
    cJSON *zip_codes = cJSON_AddArrayToObject(item, "zip_codes");
    if(zip_codes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *zip_codesListEntry;
    if (tax_class_rate->zip_codes) {
    list_ForEach(zip_codesListEntry, tax_class_rate->zip_codes) {
    cJSON *itemLocal = tax_class_zip_codes_convertToJSON(zip_codesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(zip_codes, itemLocal);
    }
    }
    }


    // tax_class_rate->additional_fields
    if(tax_class_rate->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(tax_class_rate->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // tax_class_rate->custom_fields
    if(tax_class_rate->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(tax_class_rate->custom_fields);
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

tax_class_rate_t *tax_class_rate_parseFromJSON(cJSON *tax_class_rateJSON){

    tax_class_rate_t *tax_class_rate_local_var = NULL;

    // define the local list for tax_class_rate->countries
    list_t *countriesList = NULL;

    // define the local list for tax_class_rate->cities
    list_t *citiesList = NULL;

    // define the local list for tax_class_rate->address
    list_t *addressList = NULL;

    // define the local list for tax_class_rate->zip_codes
    list_t *zip_codesList = NULL;

    // tax_class_rate->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tax_class_rate->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tax_class_rate->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // tax_class_rate->tax_type
    cJSON *tax_type = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "tax_type");
    if (cJSON_IsNull(tax_type)) {
        tax_type = NULL;
    }
    if (tax_type) { 
    if(!cJSON_IsNumber(tax_type))
    {
    goto end; //Numeric
    }
    }

    // tax_class_rate->tax_based_on
    cJSON *tax_based_on = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "tax_based_on");
    if (cJSON_IsNull(tax_based_on)) {
        tax_based_on = NULL;
    }
    if (tax_based_on) { 
    if(!cJSON_IsString(tax_based_on) && !cJSON_IsNull(tax_based_on))
    {
    goto end; //String
    }
    }

    // tax_class_rate->countries
    cJSON *countries = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "countries");
    if (cJSON_IsNull(countries)) {
        countries = NULL;
    }
    if (countries) { 
    cJSON *countries_local_nonprimitive = NULL;
    if(!cJSON_IsArray(countries)){
        goto end; //nonprimitive container
    }

    countriesList = list_createList();

    cJSON_ArrayForEach(countries_local_nonprimitive,countries )
    {
        if(!cJSON_IsObject(countries_local_nonprimitive)){
            goto end;
        }
        tax_class_countries_t *countriesItem = tax_class_countries_parseFromJSON(countries_local_nonprimitive);

        list_addElement(countriesList, countriesItem);
    }
    }

    // tax_class_rate->cities
    cJSON *cities = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "cities");
    if (cJSON_IsNull(cities)) {
        cities = NULL;
    }
    if (cities) { 
    cJSON *cities_local = NULL;
    if(!cJSON_IsArray(cities)) {
        goto end;//primitive container
    }
    citiesList = list_createList();

    cJSON_ArrayForEach(cities_local, cities)
    {
        if(!cJSON_IsString(cities_local))
        {
            goto end;
        }
        list_addElement(citiesList , strdup(cities_local->valuestring));
    }
    }

    // tax_class_rate->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    cJSON *address_local = NULL;
    if(!cJSON_IsArray(address)) {
        goto end;//primitive container
    }
    addressList = list_createList();

    cJSON_ArrayForEach(address_local, address)
    {
        if(!cJSON_IsString(address_local))
        {
            goto end;
        }
        list_addElement(addressList , strdup(address_local->valuestring));
    }
    }

    // tax_class_rate->zip_codes
    cJSON *zip_codes = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "zip_codes");
    if (cJSON_IsNull(zip_codes)) {
        zip_codes = NULL;
    }
    if (zip_codes) { 
    cJSON *zip_codes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(zip_codes)){
        goto end; //nonprimitive container
    }

    zip_codesList = list_createList();

    cJSON_ArrayForEach(zip_codes_local_nonprimitive,zip_codes )
    {
        if(!cJSON_IsObject(zip_codes_local_nonprimitive)){
            goto end;
        }
        tax_class_zip_codes_t *zip_codesItem = tax_class_zip_codes_parseFromJSON(zip_codes_local_nonprimitive);

        list_addElement(zip_codesList, zip_codesItem);
    }
    }

    // tax_class_rate->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // tax_class_rate->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(tax_class_rateJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    tax_class_rate_local_var = tax_class_rate_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        tax ? tax->valuedouble : 0,
        tax_type ? tax_type->valuedouble : 0,
        tax_based_on && !cJSON_IsNull(tax_based_on) ? strdup(tax_based_on->valuestring) : NULL,
        countries ? countriesList : NULL,
        cities ? citiesList : NULL,
        address ? addressList : NULL,
        zip_codes ? zip_codesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return tax_class_rate_local_var;
end:
    if (countriesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, countriesList) {
            tax_class_countries_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(countriesList);
        countriesList = NULL;
    }
    if (citiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, citiesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(citiesList);
        citiesList = NULL;
    }
    if (addressList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, addressList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(addressList);
        addressList = NULL;
    }
    if (zip_codesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, zip_codesList) {
            tax_class_zip_codes_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(zip_codesList);
        zip_codesList = NULL;
    }
    return NULL;

}
