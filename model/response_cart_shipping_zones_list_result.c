#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_cart_shipping_zones_list_result.h"



static response_cart_shipping_zones_list_result_t *response_cart_shipping_zones_list_result_create_internal(
    list_t *shipping_zone,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_cart_shipping_zones_list_result_t *response_cart_shipping_zones_list_result_local_var = malloc(sizeof(response_cart_shipping_zones_list_result_t));
    if (!response_cart_shipping_zones_list_result_local_var) {
        return NULL;
    }
    response_cart_shipping_zones_list_result_local_var->shipping_zone = shipping_zone;
    response_cart_shipping_zones_list_result_local_var->additional_fields = additional_fields;
    response_cart_shipping_zones_list_result_local_var->custom_fields = custom_fields;

    response_cart_shipping_zones_list_result_local_var->_library_owned = 1;
    return response_cart_shipping_zones_list_result_local_var;
}

__attribute__((deprecated)) response_cart_shipping_zones_list_result_t *response_cart_shipping_zones_list_result_create(
    list_t *shipping_zone,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_cart_shipping_zones_list_result_create_internal (
        shipping_zone,
        additional_fields,
        custom_fields
        );
}

void response_cart_shipping_zones_list_result_free(response_cart_shipping_zones_list_result_t *response_cart_shipping_zones_list_result) {
    if(NULL == response_cart_shipping_zones_list_result){
        return ;
    }
    if(response_cart_shipping_zones_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_cart_shipping_zones_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_cart_shipping_zones_list_result->shipping_zone) {
        list_ForEach(listEntry, response_cart_shipping_zones_list_result->shipping_zone) {
            cart_shipping_zone2_free(listEntry->data);
        }
        list_freeList(response_cart_shipping_zones_list_result->shipping_zone);
        response_cart_shipping_zones_list_result->shipping_zone = NULL;
    }
    if (response_cart_shipping_zones_list_result->additional_fields) {
        object_free(response_cart_shipping_zones_list_result->additional_fields);
        response_cart_shipping_zones_list_result->additional_fields = NULL;
    }
    if (response_cart_shipping_zones_list_result->custom_fields) {
        object_free(response_cart_shipping_zones_list_result->custom_fields);
        response_cart_shipping_zones_list_result->custom_fields = NULL;
    }
    free(response_cart_shipping_zones_list_result);
}

cJSON *response_cart_shipping_zones_list_result_convertToJSON(response_cart_shipping_zones_list_result_t *response_cart_shipping_zones_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_cart_shipping_zones_list_result->shipping_zone
    if(response_cart_shipping_zones_list_result->shipping_zone) {
    cJSON *shipping_zone = cJSON_AddArrayToObject(item, "shipping_zone");
    if(shipping_zone == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *shipping_zoneListEntry;
    if (response_cart_shipping_zones_list_result->shipping_zone) {
    list_ForEach(shipping_zoneListEntry, response_cart_shipping_zones_list_result->shipping_zone) {
    cJSON *itemLocal = cart_shipping_zone2_convertToJSON(shipping_zoneListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(shipping_zone, itemLocal);
    }
    }
    }


    // response_cart_shipping_zones_list_result->additional_fields
    if(response_cart_shipping_zones_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_cart_shipping_zones_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_cart_shipping_zones_list_result->custom_fields
    if(response_cart_shipping_zones_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_cart_shipping_zones_list_result->custom_fields);
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

response_cart_shipping_zones_list_result_t *response_cart_shipping_zones_list_result_parseFromJSON(cJSON *response_cart_shipping_zones_list_resultJSON){

    response_cart_shipping_zones_list_result_t *response_cart_shipping_zones_list_result_local_var = NULL;

    // define the local list for response_cart_shipping_zones_list_result->shipping_zone
    list_t *shipping_zoneList = NULL;

    // response_cart_shipping_zones_list_result->shipping_zone
    cJSON *shipping_zone = cJSON_GetObjectItemCaseSensitive(response_cart_shipping_zones_list_resultJSON, "shipping_zone");
    if (cJSON_IsNull(shipping_zone)) {
        shipping_zone = NULL;
    }
    if (shipping_zone) { 
    cJSON *shipping_zone_local_nonprimitive = NULL;
    if(!cJSON_IsArray(shipping_zone)){
        goto end; //nonprimitive container
    }

    shipping_zoneList = list_createList();

    cJSON_ArrayForEach(shipping_zone_local_nonprimitive,shipping_zone )
    {
        if(!cJSON_IsObject(shipping_zone_local_nonprimitive)){
            goto end;
        }
        cart_shipping_zone2_t *shipping_zoneItem = cart_shipping_zone2_parseFromJSON(shipping_zone_local_nonprimitive);

        list_addElement(shipping_zoneList, shipping_zoneItem);
    }
    }

    // response_cart_shipping_zones_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_cart_shipping_zones_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_cart_shipping_zones_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_cart_shipping_zones_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_cart_shipping_zones_list_result_local_var = response_cart_shipping_zones_list_result_create_internal (
        shipping_zone ? shipping_zoneList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_cart_shipping_zones_list_result_local_var;
end:
    if (shipping_zoneList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, shipping_zoneList) {
            cart_shipping_zone2_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(shipping_zoneList);
        shipping_zoneList = NULL;
    }
    return NULL;

}
