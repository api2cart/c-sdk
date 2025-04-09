#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_shipping_zone2.h"



static cart_shipping_zone2_t *cart_shipping_zone2_create_internal(
    char *id,
    char *name,
    int enabled,
    list_t *countries,
    list_t *shipping_methods,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    cart_shipping_zone2_t *cart_shipping_zone2_local_var = malloc(sizeof(cart_shipping_zone2_t));
    if (!cart_shipping_zone2_local_var) {
        return NULL;
    }
    cart_shipping_zone2_local_var->id = id;
    cart_shipping_zone2_local_var->name = name;
    cart_shipping_zone2_local_var->enabled = enabled;
    cart_shipping_zone2_local_var->countries = countries;
    cart_shipping_zone2_local_var->shipping_methods = shipping_methods;
    cart_shipping_zone2_local_var->additional_fields = additional_fields;
    cart_shipping_zone2_local_var->custom_fields = custom_fields;

    cart_shipping_zone2_local_var->_library_owned = 1;
    return cart_shipping_zone2_local_var;
}

__attribute__((deprecated)) cart_shipping_zone2_t *cart_shipping_zone2_create(
    char *id,
    char *name,
    int enabled,
    list_t *countries,
    list_t *shipping_methods,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return cart_shipping_zone2_create_internal (
        id,
        name,
        enabled,
        countries,
        shipping_methods,
        additional_fields,
        custom_fields
        );
}

void cart_shipping_zone2_free(cart_shipping_zone2_t *cart_shipping_zone2) {
    if(NULL == cart_shipping_zone2){
        return ;
    }
    if(cart_shipping_zone2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_shipping_zone2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_shipping_zone2->id) {
        free(cart_shipping_zone2->id);
        cart_shipping_zone2->id = NULL;
    }
    if (cart_shipping_zone2->name) {
        free(cart_shipping_zone2->name);
        cart_shipping_zone2->name = NULL;
    }
    if (cart_shipping_zone2->countries) {
        list_ForEach(listEntry, cart_shipping_zone2->countries) {
            country_free(listEntry->data);
        }
        list_freeList(cart_shipping_zone2->countries);
        cart_shipping_zone2->countries = NULL;
    }
    if (cart_shipping_zone2->shipping_methods) {
        list_ForEach(listEntry, cart_shipping_zone2->shipping_methods) {
            cart_shipping_method_free(listEntry->data);
        }
        list_freeList(cart_shipping_zone2->shipping_methods);
        cart_shipping_zone2->shipping_methods = NULL;
    }
    if (cart_shipping_zone2->additional_fields) {
        object_free(cart_shipping_zone2->additional_fields);
        cart_shipping_zone2->additional_fields = NULL;
    }
    if (cart_shipping_zone2->custom_fields) {
        object_free(cart_shipping_zone2->custom_fields);
        cart_shipping_zone2->custom_fields = NULL;
    }
    free(cart_shipping_zone2);
}

cJSON *cart_shipping_zone2_convertToJSON(cart_shipping_zone2_t *cart_shipping_zone2) {
    cJSON *item = cJSON_CreateObject();

    // cart_shipping_zone2->id
    if(cart_shipping_zone2->id) {
    if(cJSON_AddStringToObject(item, "id", cart_shipping_zone2->id) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_zone2->name
    if(cart_shipping_zone2->name) {
    if(cJSON_AddStringToObject(item, "name", cart_shipping_zone2->name) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_zone2->enabled
    if(cart_shipping_zone2->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", cart_shipping_zone2->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_shipping_zone2->countries
    if(cart_shipping_zone2->countries) {
    cJSON *countries = cJSON_AddArrayToObject(item, "countries");
    if(countries == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *countriesListEntry;
    if (cart_shipping_zone2->countries) {
    list_ForEach(countriesListEntry, cart_shipping_zone2->countries) {
    cJSON *itemLocal = country_convertToJSON(countriesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(countries, itemLocal);
    }
    }
    }


    // cart_shipping_zone2->shipping_methods
    if(cart_shipping_zone2->shipping_methods) {
    cJSON *shipping_methods = cJSON_AddArrayToObject(item, "shipping_methods");
    if(shipping_methods == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *shipping_methodsListEntry;
    if (cart_shipping_zone2->shipping_methods) {
    list_ForEach(shipping_methodsListEntry, cart_shipping_zone2->shipping_methods) {
    cJSON *itemLocal = cart_shipping_method_convertToJSON(shipping_methodsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(shipping_methods, itemLocal);
    }
    }
    }


    // cart_shipping_zone2->additional_fields
    if(cart_shipping_zone2->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(cart_shipping_zone2->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_shipping_zone2->custom_fields
    if(cart_shipping_zone2->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(cart_shipping_zone2->custom_fields);
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

cart_shipping_zone2_t *cart_shipping_zone2_parseFromJSON(cJSON *cart_shipping_zone2JSON){

    cart_shipping_zone2_t *cart_shipping_zone2_local_var = NULL;

    // define the local list for cart_shipping_zone2->countries
    list_t *countriesList = NULL;

    // define the local list for cart_shipping_zone2->shipping_methods
    list_t *shipping_methodsList = NULL;

    // cart_shipping_zone2->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cart_shipping_zone2JSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cart_shipping_zone2->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cart_shipping_zone2JSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cart_shipping_zone2->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(cart_shipping_zone2JSON, "enabled");
    if (cJSON_IsNull(enabled)) {
        enabled = NULL;
    }
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // cart_shipping_zone2->countries
    cJSON *countries = cJSON_GetObjectItemCaseSensitive(cart_shipping_zone2JSON, "countries");
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
        country_t *countriesItem = country_parseFromJSON(countries_local_nonprimitive);

        list_addElement(countriesList, countriesItem);
    }
    }

    // cart_shipping_zone2->shipping_methods
    cJSON *shipping_methods = cJSON_GetObjectItemCaseSensitive(cart_shipping_zone2JSON, "shipping_methods");
    if (cJSON_IsNull(shipping_methods)) {
        shipping_methods = NULL;
    }
    if (shipping_methods) { 
    cJSON *shipping_methods_local_nonprimitive = NULL;
    if(!cJSON_IsArray(shipping_methods)){
        goto end; //nonprimitive container
    }

    shipping_methodsList = list_createList();

    cJSON_ArrayForEach(shipping_methods_local_nonprimitive,shipping_methods )
    {
        if(!cJSON_IsObject(shipping_methods_local_nonprimitive)){
            goto end;
        }
        cart_shipping_method_t *shipping_methodsItem = cart_shipping_method_parseFromJSON(shipping_methods_local_nonprimitive);

        list_addElement(shipping_methodsList, shipping_methodsItem);
    }
    }

    // cart_shipping_zone2->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(cart_shipping_zone2JSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // cart_shipping_zone2->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(cart_shipping_zone2JSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    cart_shipping_zone2_local_var = cart_shipping_zone2_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        enabled ? enabled->valueint : 0,
        countries ? countriesList : NULL,
        shipping_methods ? shipping_methodsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return cart_shipping_zone2_local_var;
end:
    if (countriesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, countriesList) {
            country_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(countriesList);
        countriesList = NULL;
    }
    if (shipping_methodsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, shipping_methodsList) {
            cart_shipping_method_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(shipping_methodsList);
        shipping_methodsList = NULL;
    }
    return NULL;

}
