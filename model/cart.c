#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart.h"



static cart_t *cart_create_internal(
    char *name,
    char *url,
    char *version,
    char *bridge_version,
    char *db_prefix,
    list_t *stores_info,
    list_t *warehouses,
    list_t *shipping_zones,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    cart_t *cart_local_var = malloc(sizeof(cart_t));
    if (!cart_local_var) {
        return NULL;
    }
    cart_local_var->name = name;
    cart_local_var->url = url;
    cart_local_var->version = version;
    cart_local_var->bridge_version = bridge_version;
    cart_local_var->db_prefix = db_prefix;
    cart_local_var->stores_info = stores_info;
    cart_local_var->warehouses = warehouses;
    cart_local_var->shipping_zones = shipping_zones;
    cart_local_var->additional_fields = additional_fields;
    cart_local_var->custom_fields = custom_fields;

    cart_local_var->_library_owned = 1;
    return cart_local_var;
}

__attribute__((deprecated)) cart_t *cart_create(
    char *name,
    char *url,
    char *version,
    char *bridge_version,
    char *db_prefix,
    list_t *stores_info,
    list_t *warehouses,
    list_t *shipping_zones,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return cart_create_internal (
        name,
        url,
        version,
        bridge_version,
        db_prefix,
        stores_info,
        warehouses,
        shipping_zones,
        additional_fields,
        custom_fields
        );
}

void cart_free(cart_t *cart) {
    if(NULL == cart){
        return ;
    }
    if(cart->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart->name) {
        free(cart->name);
        cart->name = NULL;
    }
    if (cart->url) {
        free(cart->url);
        cart->url = NULL;
    }
    if (cart->version) {
        free(cart->version);
        cart->version = NULL;
    }
    if (cart->bridge_version) {
        free(cart->bridge_version);
        cart->bridge_version = NULL;
    }
    if (cart->db_prefix) {
        free(cart->db_prefix);
        cart->db_prefix = NULL;
    }
    if (cart->stores_info) {
        list_ForEach(listEntry, cart->stores_info) {
            cart_store_info_free(listEntry->data);
        }
        list_freeList(cart->stores_info);
        cart->stores_info = NULL;
    }
    if (cart->warehouses) {
        list_ForEach(listEntry, cart->warehouses) {
            cart_warehouse_free(listEntry->data);
        }
        list_freeList(cart->warehouses);
        cart->warehouses = NULL;
    }
    if (cart->shipping_zones) {
        list_ForEach(listEntry, cart->shipping_zones) {
            cart_shipping_zone_free(listEntry->data);
        }
        list_freeList(cart->shipping_zones);
        cart->shipping_zones = NULL;
    }
    if (cart->additional_fields) {
        object_free(cart->additional_fields);
        cart->additional_fields = NULL;
    }
    if (cart->custom_fields) {
        object_free(cart->custom_fields);
        cart->custom_fields = NULL;
    }
    free(cart);
}

cJSON *cart_convertToJSON(cart_t *cart) {
    cJSON *item = cJSON_CreateObject();

    // cart->name
    if(cart->name) {
    if(cJSON_AddStringToObject(item, "name", cart->name) == NULL) {
    goto fail; //String
    }
    }


    // cart->url
    if(cart->url) {
    if(cJSON_AddStringToObject(item, "url", cart->url) == NULL) {
    goto fail; //String
    }
    }


    // cart->version
    if(cart->version) {
    if(cJSON_AddStringToObject(item, "version", cart->version) == NULL) {
    goto fail; //String
    }
    }


    // cart->bridge_version
    if(cart->bridge_version) {
    if(cJSON_AddStringToObject(item, "bridge_version", cart->bridge_version) == NULL) {
    goto fail; //String
    }
    }


    // cart->db_prefix
    if(cart->db_prefix) {
    if(cJSON_AddStringToObject(item, "db_prefix", cart->db_prefix) == NULL) {
    goto fail; //String
    }
    }


    // cart->stores_info
    if(cart->stores_info) {
    cJSON *stores_info = cJSON_AddArrayToObject(item, "stores_info");
    if(stores_info == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *stores_infoListEntry;
    if (cart->stores_info) {
    list_ForEach(stores_infoListEntry, cart->stores_info) {
    cJSON *itemLocal = cart_store_info_convertToJSON(stores_infoListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(stores_info, itemLocal);
    }
    }
    }


    // cart->warehouses
    if(cart->warehouses) {
    cJSON *warehouses = cJSON_AddArrayToObject(item, "warehouses");
    if(warehouses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warehousesListEntry;
    if (cart->warehouses) {
    list_ForEach(warehousesListEntry, cart->warehouses) {
    cJSON *itemLocal = cart_warehouse_convertToJSON(warehousesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warehouses, itemLocal);
    }
    }
    }


    // cart->shipping_zones
    if(cart->shipping_zones) {
    cJSON *shipping_zones = cJSON_AddArrayToObject(item, "shipping_zones");
    if(shipping_zones == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *shipping_zonesListEntry;
    if (cart->shipping_zones) {
    list_ForEach(shipping_zonesListEntry, cart->shipping_zones) {
    cJSON *itemLocal = cart_shipping_zone_convertToJSON(shipping_zonesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(shipping_zones, itemLocal);
    }
    }
    }


    // cart->additional_fields
    if(cart->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(cart->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart->custom_fields
    if(cart->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(cart->custom_fields);
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

cart_t *cart_parseFromJSON(cJSON *cartJSON){

    cart_t *cart_local_var = NULL;

    // define the local list for cart->stores_info
    list_t *stores_infoList = NULL;

    // define the local list for cart->warehouses
    list_t *warehousesList = NULL;

    // define the local list for cart->shipping_zones
    list_t *shipping_zonesList = NULL;

    // cart->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cartJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cart->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(cartJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // cart->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(cartJSON, "version");
    if (cJSON_IsNull(version)) {
        version = NULL;
    }
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // cart->bridge_version
    cJSON *bridge_version = cJSON_GetObjectItemCaseSensitive(cartJSON, "bridge_version");
    if (cJSON_IsNull(bridge_version)) {
        bridge_version = NULL;
    }
    if (bridge_version) { 
    if(!cJSON_IsString(bridge_version) && !cJSON_IsNull(bridge_version))
    {
    goto end; //String
    }
    }

    // cart->db_prefix
    cJSON *db_prefix = cJSON_GetObjectItemCaseSensitive(cartJSON, "db_prefix");
    if (cJSON_IsNull(db_prefix)) {
        db_prefix = NULL;
    }
    if (db_prefix) { 
    if(!cJSON_IsString(db_prefix) && !cJSON_IsNull(db_prefix))
    {
    goto end; //String
    }
    }

    // cart->stores_info
    cJSON *stores_info = cJSON_GetObjectItemCaseSensitive(cartJSON, "stores_info");
    if (cJSON_IsNull(stores_info)) {
        stores_info = NULL;
    }
    if (stores_info) { 
    cJSON *stores_info_local_nonprimitive = NULL;
    if(!cJSON_IsArray(stores_info)){
        goto end; //nonprimitive container
    }

    stores_infoList = list_createList();

    cJSON_ArrayForEach(stores_info_local_nonprimitive,stores_info )
    {
        if(!cJSON_IsObject(stores_info_local_nonprimitive)){
            goto end;
        }
        cart_store_info_t *stores_infoItem = cart_store_info_parseFromJSON(stores_info_local_nonprimitive);

        list_addElement(stores_infoList, stores_infoItem);
    }
    }

    // cart->warehouses
    cJSON *warehouses = cJSON_GetObjectItemCaseSensitive(cartJSON, "warehouses");
    if (cJSON_IsNull(warehouses)) {
        warehouses = NULL;
    }
    if (warehouses) { 
    cJSON *warehouses_local_nonprimitive = NULL;
    if(!cJSON_IsArray(warehouses)){
        goto end; //nonprimitive container
    }

    warehousesList = list_createList();

    cJSON_ArrayForEach(warehouses_local_nonprimitive,warehouses )
    {
        if(!cJSON_IsObject(warehouses_local_nonprimitive)){
            goto end;
        }
        cart_warehouse_t *warehousesItem = cart_warehouse_parseFromJSON(warehouses_local_nonprimitive);

        list_addElement(warehousesList, warehousesItem);
    }
    }

    // cart->shipping_zones
    cJSON *shipping_zones = cJSON_GetObjectItemCaseSensitive(cartJSON, "shipping_zones");
    if (cJSON_IsNull(shipping_zones)) {
        shipping_zones = NULL;
    }
    if (shipping_zones) { 
    cJSON *shipping_zones_local_nonprimitive = NULL;
    if(!cJSON_IsArray(shipping_zones)){
        goto end; //nonprimitive container
    }

    shipping_zonesList = list_createList();

    cJSON_ArrayForEach(shipping_zones_local_nonprimitive,shipping_zones )
    {
        if(!cJSON_IsObject(shipping_zones_local_nonprimitive)){
            goto end;
        }
        cart_shipping_zone_t *shipping_zonesItem = cart_shipping_zone_parseFromJSON(shipping_zones_local_nonprimitive);

        list_addElement(shipping_zonesList, shipping_zonesItem);
    }
    }

    // cart->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(cartJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // cart->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(cartJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    cart_local_var = cart_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        bridge_version && !cJSON_IsNull(bridge_version) ? strdup(bridge_version->valuestring) : NULL,
        db_prefix && !cJSON_IsNull(db_prefix) ? strdup(db_prefix->valuestring) : NULL,
        stores_info ? stores_infoList : NULL,
        warehouses ? warehousesList : NULL,
        shipping_zones ? shipping_zonesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return cart_local_var;
end:
    if (stores_infoList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, stores_infoList) {
            cart_store_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(stores_infoList);
        stores_infoList = NULL;
    }
    if (warehousesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, warehousesList) {
            cart_warehouse_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(warehousesList);
        warehousesList = NULL;
    }
    if (shipping_zonesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, shipping_zonesList) {
            cart_shipping_zone_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(shipping_zonesList);
        shipping_zonesList = NULL;
    }
    return NULL;

}
