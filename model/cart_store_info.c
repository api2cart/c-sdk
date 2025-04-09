#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_store_info.h"



static cart_store_info_t *cart_store_info_create_internal(
    char *store_id,
    char *name,
    char *language,
    list_t *store_languages,
    currency_t *currency,
    list_t *store_currencies,
    char *timezone,
    char *country,
    char *root_category_id,
    char *multi_store_url,
    int active,
    char *weight_unit,
    char *dimension_unit,
    int prices_include_tax,
    list_t *carrier_info,
    info_t *store_owner_info,
    char *default_warehouse_id,
    list_t *channels,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    cart_store_info_t *cart_store_info_local_var = malloc(sizeof(cart_store_info_t));
    if (!cart_store_info_local_var) {
        return NULL;
    }
    cart_store_info_local_var->store_id = store_id;
    cart_store_info_local_var->name = name;
    cart_store_info_local_var->language = language;
    cart_store_info_local_var->store_languages = store_languages;
    cart_store_info_local_var->currency = currency;
    cart_store_info_local_var->store_currencies = store_currencies;
    cart_store_info_local_var->timezone = timezone;
    cart_store_info_local_var->country = country;
    cart_store_info_local_var->root_category_id = root_category_id;
    cart_store_info_local_var->multi_store_url = multi_store_url;
    cart_store_info_local_var->active = active;
    cart_store_info_local_var->weight_unit = weight_unit;
    cart_store_info_local_var->dimension_unit = dimension_unit;
    cart_store_info_local_var->prices_include_tax = prices_include_tax;
    cart_store_info_local_var->carrier_info = carrier_info;
    cart_store_info_local_var->store_owner_info = store_owner_info;
    cart_store_info_local_var->default_warehouse_id = default_warehouse_id;
    cart_store_info_local_var->channels = channels;
    cart_store_info_local_var->additional_fields = additional_fields;
    cart_store_info_local_var->custom_fields = custom_fields;

    cart_store_info_local_var->_library_owned = 1;
    return cart_store_info_local_var;
}

__attribute__((deprecated)) cart_store_info_t *cart_store_info_create(
    char *store_id,
    char *name,
    char *language,
    list_t *store_languages,
    currency_t *currency,
    list_t *store_currencies,
    char *timezone,
    char *country,
    char *root_category_id,
    char *multi_store_url,
    int active,
    char *weight_unit,
    char *dimension_unit,
    int prices_include_tax,
    list_t *carrier_info,
    info_t *store_owner_info,
    char *default_warehouse_id,
    list_t *channels,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return cart_store_info_create_internal (
        store_id,
        name,
        language,
        store_languages,
        currency,
        store_currencies,
        timezone,
        country,
        root_category_id,
        multi_store_url,
        active,
        weight_unit,
        dimension_unit,
        prices_include_tax,
        carrier_info,
        store_owner_info,
        default_warehouse_id,
        channels,
        additional_fields,
        custom_fields
        );
}

void cart_store_info_free(cart_store_info_t *cart_store_info) {
    if(NULL == cart_store_info){
        return ;
    }
    if(cart_store_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_store_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_store_info->store_id) {
        free(cart_store_info->store_id);
        cart_store_info->store_id = NULL;
    }
    if (cart_store_info->name) {
        free(cart_store_info->name);
        cart_store_info->name = NULL;
    }
    if (cart_store_info->language) {
        free(cart_store_info->language);
        cart_store_info->language = NULL;
    }
    if (cart_store_info->store_languages) {
        list_ForEach(listEntry, cart_store_info->store_languages) {
            language_free(listEntry->data);
        }
        list_freeList(cart_store_info->store_languages);
        cart_store_info->store_languages = NULL;
    }
    if (cart_store_info->currency) {
        currency_free(cart_store_info->currency);
        cart_store_info->currency = NULL;
    }
    if (cart_store_info->store_currencies) {
        list_ForEach(listEntry, cart_store_info->store_currencies) {
            currency_free(listEntry->data);
        }
        list_freeList(cart_store_info->store_currencies);
        cart_store_info->store_currencies = NULL;
    }
    if (cart_store_info->timezone) {
        free(cart_store_info->timezone);
        cart_store_info->timezone = NULL;
    }
    if (cart_store_info->country) {
        free(cart_store_info->country);
        cart_store_info->country = NULL;
    }
    if (cart_store_info->root_category_id) {
        free(cart_store_info->root_category_id);
        cart_store_info->root_category_id = NULL;
    }
    if (cart_store_info->multi_store_url) {
        free(cart_store_info->multi_store_url);
        cart_store_info->multi_store_url = NULL;
    }
    if (cart_store_info->weight_unit) {
        free(cart_store_info->weight_unit);
        cart_store_info->weight_unit = NULL;
    }
    if (cart_store_info->dimension_unit) {
        free(cart_store_info->dimension_unit);
        cart_store_info->dimension_unit = NULL;
    }
    if (cart_store_info->carrier_info) {
        list_ForEach(listEntry, cart_store_info->carrier_info) {
            carrier_free(listEntry->data);
        }
        list_freeList(cart_store_info->carrier_info);
        cart_store_info->carrier_info = NULL;
    }
    if (cart_store_info->store_owner_info) {
        info_free(cart_store_info->store_owner_info);
        cart_store_info->store_owner_info = NULL;
    }
    if (cart_store_info->default_warehouse_id) {
        free(cart_store_info->default_warehouse_id);
        cart_store_info->default_warehouse_id = NULL;
    }
    if (cart_store_info->channels) {
        list_ForEach(listEntry, cart_store_info->channels) {
            cart_channel_free(listEntry->data);
        }
        list_freeList(cart_store_info->channels);
        cart_store_info->channels = NULL;
    }
    if (cart_store_info->additional_fields) {
        object_free(cart_store_info->additional_fields);
        cart_store_info->additional_fields = NULL;
    }
    if (cart_store_info->custom_fields) {
        object_free(cart_store_info->custom_fields);
        cart_store_info->custom_fields = NULL;
    }
    free(cart_store_info);
}

cJSON *cart_store_info_convertToJSON(cart_store_info_t *cart_store_info) {
    cJSON *item = cJSON_CreateObject();

    // cart_store_info->store_id
    if(cart_store_info->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", cart_store_info->store_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_store_info->name
    if(cart_store_info->name) {
    if(cJSON_AddStringToObject(item, "name", cart_store_info->name) == NULL) {
    goto fail; //String
    }
    }


    // cart_store_info->language
    if(cart_store_info->language) {
    if(cJSON_AddStringToObject(item, "language", cart_store_info->language) == NULL) {
    goto fail; //String
    }
    }


    // cart_store_info->store_languages
    if(cart_store_info->store_languages) {
    cJSON *store_languages = cJSON_AddArrayToObject(item, "store_languages");
    if(store_languages == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *store_languagesListEntry;
    if (cart_store_info->store_languages) {
    list_ForEach(store_languagesListEntry, cart_store_info->store_languages) {
    cJSON *itemLocal = language_convertToJSON(store_languagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(store_languages, itemLocal);
    }
    }
    }


    // cart_store_info->currency
    if(cart_store_info->currency) {
    cJSON *currency_local_JSON = currency_convertToJSON(cart_store_info->currency);
    if(currency_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currency", currency_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_store_info->store_currencies
    if(cart_store_info->store_currencies) {
    cJSON *store_currencies = cJSON_AddArrayToObject(item, "store_currencies");
    if(store_currencies == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *store_currenciesListEntry;
    if (cart_store_info->store_currencies) {
    list_ForEach(store_currenciesListEntry, cart_store_info->store_currencies) {
    cJSON *itemLocal = currency_convertToJSON(store_currenciesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(store_currencies, itemLocal);
    }
    }
    }


    // cart_store_info->timezone
    if(cart_store_info->timezone) {
    if(cJSON_AddStringToObject(item, "timezone", cart_store_info->timezone) == NULL) {
    goto fail; //String
    }
    }


    // cart_store_info->country
    if(cart_store_info->country) {
    if(cJSON_AddStringToObject(item, "country", cart_store_info->country) == NULL) {
    goto fail; //String
    }
    }


    // cart_store_info->root_category_id
    if(cart_store_info->root_category_id) {
    if(cJSON_AddStringToObject(item, "root_category_id", cart_store_info->root_category_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_store_info->multi_store_url
    if(cart_store_info->multi_store_url) {
    if(cJSON_AddStringToObject(item, "multi_store_url", cart_store_info->multi_store_url) == NULL) {
    goto fail; //String
    }
    }


    // cart_store_info->active
    if(cart_store_info->active) {
    if(cJSON_AddBoolToObject(item, "active", cart_store_info->active) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_store_info->weight_unit
    if(cart_store_info->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", cart_store_info->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // cart_store_info->dimension_unit
    if(cart_store_info->dimension_unit) {
    if(cJSON_AddStringToObject(item, "dimension_unit", cart_store_info->dimension_unit) == NULL) {
    goto fail; //String
    }
    }


    // cart_store_info->prices_include_tax
    if(cart_store_info->prices_include_tax) {
    if(cJSON_AddBoolToObject(item, "prices_include_tax", cart_store_info->prices_include_tax) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_store_info->carrier_info
    if(cart_store_info->carrier_info) {
    cJSON *carrier_info = cJSON_AddArrayToObject(item, "carrier_info");
    if(carrier_info == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *carrier_infoListEntry;
    if (cart_store_info->carrier_info) {
    list_ForEach(carrier_infoListEntry, cart_store_info->carrier_info) {
    cJSON *itemLocal = carrier_convertToJSON(carrier_infoListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(carrier_info, itemLocal);
    }
    }
    }


    // cart_store_info->store_owner_info
    if(cart_store_info->store_owner_info) {
    cJSON *store_owner_info_local_JSON = info_convertToJSON(cart_store_info->store_owner_info);
    if(store_owner_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "store_owner_info", store_owner_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_store_info->default_warehouse_id
    if(cart_store_info->default_warehouse_id) {
    if(cJSON_AddStringToObject(item, "default_warehouse_id", cart_store_info->default_warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_store_info->channels
    if(cart_store_info->channels) {
    cJSON *channels = cJSON_AddArrayToObject(item, "channels");
    if(channels == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *channelsListEntry;
    if (cart_store_info->channels) {
    list_ForEach(channelsListEntry, cart_store_info->channels) {
    cJSON *itemLocal = cart_channel_convertToJSON(channelsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(channels, itemLocal);
    }
    }
    }


    // cart_store_info->additional_fields
    if(cart_store_info->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(cart_store_info->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_store_info->custom_fields
    if(cart_store_info->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(cart_store_info->custom_fields);
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

cart_store_info_t *cart_store_info_parseFromJSON(cJSON *cart_store_infoJSON){

    cart_store_info_t *cart_store_info_local_var = NULL;

    // define the local list for cart_store_info->store_languages
    list_t *store_languagesList = NULL;

    // define the local variable for cart_store_info->currency
    currency_t *currency_local_nonprim = NULL;

    // define the local list for cart_store_info->store_currencies
    list_t *store_currenciesList = NULL;

    // define the local list for cart_store_info->carrier_info
    list_t *carrier_infoList = NULL;

    // define the local variable for cart_store_info->store_owner_info
    info_t *store_owner_info_local_nonprim = NULL;

    // define the local list for cart_store_info->channels
    list_t *channelsList = NULL;

    // cart_store_info->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // cart_store_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cart_store_info->language
    cJSON *language = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "language");
    if (cJSON_IsNull(language)) {
        language = NULL;
    }
    if (language) { 
    if(!cJSON_IsString(language) && !cJSON_IsNull(language))
    {
    goto end; //String
    }
    }

    // cart_store_info->store_languages
    cJSON *store_languages = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "store_languages");
    if (cJSON_IsNull(store_languages)) {
        store_languages = NULL;
    }
    if (store_languages) { 
    cJSON *store_languages_local_nonprimitive = NULL;
    if(!cJSON_IsArray(store_languages)){
        goto end; //nonprimitive container
    }

    store_languagesList = list_createList();

    cJSON_ArrayForEach(store_languages_local_nonprimitive,store_languages )
    {
        if(!cJSON_IsObject(store_languages_local_nonprimitive)){
            goto end;
        }
        language_t *store_languagesItem = language_parseFromJSON(store_languages_local_nonprimitive);

        list_addElement(store_languagesList, store_languagesItem);
    }
    }

    // cart_store_info->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    currency_local_nonprim = currency_parseFromJSON(currency); //nonprimitive
    }

    // cart_store_info->store_currencies
    cJSON *store_currencies = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "store_currencies");
    if (cJSON_IsNull(store_currencies)) {
        store_currencies = NULL;
    }
    if (store_currencies) { 
    cJSON *store_currencies_local_nonprimitive = NULL;
    if(!cJSON_IsArray(store_currencies)){
        goto end; //nonprimitive container
    }

    store_currenciesList = list_createList();

    cJSON_ArrayForEach(store_currencies_local_nonprimitive,store_currencies )
    {
        if(!cJSON_IsObject(store_currencies_local_nonprimitive)){
            goto end;
        }
        currency_t *store_currenciesItem = currency_parseFromJSON(store_currencies_local_nonprimitive);

        list_addElement(store_currenciesList, store_currenciesItem);
    }
    }

    // cart_store_info->timezone
    cJSON *timezone = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "timezone");
    if (cJSON_IsNull(timezone)) {
        timezone = NULL;
    }
    if (timezone) { 
    if(!cJSON_IsString(timezone) && !cJSON_IsNull(timezone))
    {
    goto end; //String
    }
    }

    // cart_store_info->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }

    // cart_store_info->root_category_id
    cJSON *root_category_id = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "root_category_id");
    if (cJSON_IsNull(root_category_id)) {
        root_category_id = NULL;
    }
    if (root_category_id) { 
    if(!cJSON_IsString(root_category_id) && !cJSON_IsNull(root_category_id))
    {
    goto end; //String
    }
    }

    // cart_store_info->multi_store_url
    cJSON *multi_store_url = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "multi_store_url");
    if (cJSON_IsNull(multi_store_url)) {
        multi_store_url = NULL;
    }
    if (multi_store_url) { 
    if(!cJSON_IsString(multi_store_url) && !cJSON_IsNull(multi_store_url))
    {
    goto end; //String
    }
    }

    // cart_store_info->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }
    }

    // cart_store_info->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // cart_store_info->dimension_unit
    cJSON *dimension_unit = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "dimension_unit");
    if (cJSON_IsNull(dimension_unit)) {
        dimension_unit = NULL;
    }
    if (dimension_unit) { 
    if(!cJSON_IsString(dimension_unit) && !cJSON_IsNull(dimension_unit))
    {
    goto end; //String
    }
    }

    // cart_store_info->prices_include_tax
    cJSON *prices_include_tax = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "prices_include_tax");
    if (cJSON_IsNull(prices_include_tax)) {
        prices_include_tax = NULL;
    }
    if (prices_include_tax) { 
    if(!cJSON_IsBool(prices_include_tax))
    {
    goto end; //Bool
    }
    }

    // cart_store_info->carrier_info
    cJSON *carrier_info = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "carrier_info");
    if (cJSON_IsNull(carrier_info)) {
        carrier_info = NULL;
    }
    if (carrier_info) { 
    cJSON *carrier_info_local_nonprimitive = NULL;
    if(!cJSON_IsArray(carrier_info)){
        goto end; //nonprimitive container
    }

    carrier_infoList = list_createList();

    cJSON_ArrayForEach(carrier_info_local_nonprimitive,carrier_info )
    {
        if(!cJSON_IsObject(carrier_info_local_nonprimitive)){
            goto end;
        }
        carrier_t *carrier_infoItem = carrier_parseFromJSON(carrier_info_local_nonprimitive);

        list_addElement(carrier_infoList, carrier_infoItem);
    }
    }

    // cart_store_info->store_owner_info
    cJSON *store_owner_info = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "store_owner_info");
    if (cJSON_IsNull(store_owner_info)) {
        store_owner_info = NULL;
    }
    if (store_owner_info) { 
    store_owner_info_local_nonprim = info_parseFromJSON(store_owner_info); //nonprimitive
    }

    // cart_store_info->default_warehouse_id
    cJSON *default_warehouse_id = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "default_warehouse_id");
    if (cJSON_IsNull(default_warehouse_id)) {
        default_warehouse_id = NULL;
    }
    if (default_warehouse_id) { 
    if(!cJSON_IsString(default_warehouse_id) && !cJSON_IsNull(default_warehouse_id))
    {
    goto end; //String
    }
    }

    // cart_store_info->channels
    cJSON *channels = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "channels");
    if (cJSON_IsNull(channels)) {
        channels = NULL;
    }
    if (channels) { 
    cJSON *channels_local_nonprimitive = NULL;
    if(!cJSON_IsArray(channels)){
        goto end; //nonprimitive container
    }

    channelsList = list_createList();

    cJSON_ArrayForEach(channels_local_nonprimitive,channels )
    {
        if(!cJSON_IsObject(channels_local_nonprimitive)){
            goto end;
        }
        cart_channel_t *channelsItem = cart_channel_parseFromJSON(channels_local_nonprimitive);

        list_addElement(channelsList, channelsItem);
    }
    }

    // cart_store_info->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // cart_store_info->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(cart_store_infoJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    cart_store_info_local_var = cart_store_info_create_internal (
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        language && !cJSON_IsNull(language) ? strdup(language->valuestring) : NULL,
        store_languages ? store_languagesList : NULL,
        currency ? currency_local_nonprim : NULL,
        store_currencies ? store_currenciesList : NULL,
        timezone && !cJSON_IsNull(timezone) ? strdup(timezone->valuestring) : NULL,
        country && !cJSON_IsNull(country) ? strdup(country->valuestring) : NULL,
        root_category_id && !cJSON_IsNull(root_category_id) ? strdup(root_category_id->valuestring) : NULL,
        multi_store_url && !cJSON_IsNull(multi_store_url) ? strdup(multi_store_url->valuestring) : NULL,
        active ? active->valueint : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        dimension_unit && !cJSON_IsNull(dimension_unit) ? strdup(dimension_unit->valuestring) : NULL,
        prices_include_tax ? prices_include_tax->valueint : 0,
        carrier_info ? carrier_infoList : NULL,
        store_owner_info ? store_owner_info_local_nonprim : NULL,
        default_warehouse_id && !cJSON_IsNull(default_warehouse_id) ? strdup(default_warehouse_id->valuestring) : NULL,
        channels ? channelsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return cart_store_info_local_var;
end:
    if (store_languagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, store_languagesList) {
            language_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(store_languagesList);
        store_languagesList = NULL;
    }
    if (currency_local_nonprim) {
        currency_free(currency_local_nonprim);
        currency_local_nonprim = NULL;
    }
    if (store_currenciesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, store_currenciesList) {
            currency_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(store_currenciesList);
        store_currenciesList = NULL;
    }
    if (carrier_infoList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, carrier_infoList) {
            carrier_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(carrier_infoList);
        carrier_infoList = NULL;
    }
    if (store_owner_info_local_nonprim) {
        info_free(store_owner_info_local_nonprim);
        store_owner_info_local_nonprim = NULL;
    }
    if (channelsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, channelsList) {
            cart_channel_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(channelsList);
        channelsList = NULL;
    }
    return NULL;

}
