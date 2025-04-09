#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_order_preestimate_shipping_list_result.h"



static response_order_preestimate_shipping_list_result_t *response_order_preestimate_shipping_list_result_create_internal(
    int preestimate_shippings_count,
    list_t *preestimate_shippings,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_order_preestimate_shipping_list_result_t *response_order_preestimate_shipping_list_result_local_var = malloc(sizeof(response_order_preestimate_shipping_list_result_t));
    if (!response_order_preestimate_shipping_list_result_local_var) {
        return NULL;
    }
    response_order_preestimate_shipping_list_result_local_var->preestimate_shippings_count = preestimate_shippings_count;
    response_order_preestimate_shipping_list_result_local_var->preestimate_shippings = preestimate_shippings;
    response_order_preestimate_shipping_list_result_local_var->additional_fields = additional_fields;
    response_order_preestimate_shipping_list_result_local_var->custom_fields = custom_fields;

    response_order_preestimate_shipping_list_result_local_var->_library_owned = 1;
    return response_order_preestimate_shipping_list_result_local_var;
}

__attribute__((deprecated)) response_order_preestimate_shipping_list_result_t *response_order_preestimate_shipping_list_result_create(
    int preestimate_shippings_count,
    list_t *preestimate_shippings,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_order_preestimate_shipping_list_result_create_internal (
        preestimate_shippings_count,
        preestimate_shippings,
        additional_fields,
        custom_fields
        );
}

void response_order_preestimate_shipping_list_result_free(response_order_preestimate_shipping_list_result_t *response_order_preestimate_shipping_list_result) {
    if(NULL == response_order_preestimate_shipping_list_result){
        return ;
    }
    if(response_order_preestimate_shipping_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_order_preestimate_shipping_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_order_preestimate_shipping_list_result->preestimate_shippings) {
        list_ForEach(listEntry, response_order_preestimate_shipping_list_result->preestimate_shippings) {
            order_preestimate_shipping_free(listEntry->data);
        }
        list_freeList(response_order_preestimate_shipping_list_result->preestimate_shippings);
        response_order_preestimate_shipping_list_result->preestimate_shippings = NULL;
    }
    if (response_order_preestimate_shipping_list_result->additional_fields) {
        object_free(response_order_preestimate_shipping_list_result->additional_fields);
        response_order_preestimate_shipping_list_result->additional_fields = NULL;
    }
    if (response_order_preestimate_shipping_list_result->custom_fields) {
        object_free(response_order_preestimate_shipping_list_result->custom_fields);
        response_order_preestimate_shipping_list_result->custom_fields = NULL;
    }
    free(response_order_preestimate_shipping_list_result);
}

cJSON *response_order_preestimate_shipping_list_result_convertToJSON(response_order_preestimate_shipping_list_result_t *response_order_preestimate_shipping_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_order_preestimate_shipping_list_result->preestimate_shippings_count
    if(response_order_preestimate_shipping_list_result->preestimate_shippings_count) {
    if(cJSON_AddNumberToObject(item, "preestimate_shippings_count", response_order_preestimate_shipping_list_result->preestimate_shippings_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_order_preestimate_shipping_list_result->preestimate_shippings
    if(response_order_preestimate_shipping_list_result->preestimate_shippings) {
    cJSON *preestimate_shippings = cJSON_AddArrayToObject(item, "preestimate_shippings");
    if(preestimate_shippings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *preestimate_shippingsListEntry;
    if (response_order_preestimate_shipping_list_result->preestimate_shippings) {
    list_ForEach(preestimate_shippingsListEntry, response_order_preestimate_shipping_list_result->preestimate_shippings) {
    cJSON *itemLocal = order_preestimate_shipping_convertToJSON(preestimate_shippingsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(preestimate_shippings, itemLocal);
    }
    }
    }


    // response_order_preestimate_shipping_list_result->additional_fields
    if(response_order_preestimate_shipping_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_order_preestimate_shipping_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_order_preestimate_shipping_list_result->custom_fields
    if(response_order_preestimate_shipping_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_order_preestimate_shipping_list_result->custom_fields);
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

response_order_preestimate_shipping_list_result_t *response_order_preestimate_shipping_list_result_parseFromJSON(cJSON *response_order_preestimate_shipping_list_resultJSON){

    response_order_preestimate_shipping_list_result_t *response_order_preestimate_shipping_list_result_local_var = NULL;

    // define the local list for response_order_preestimate_shipping_list_result->preestimate_shippings
    list_t *preestimate_shippingsList = NULL;

    // response_order_preestimate_shipping_list_result->preestimate_shippings_count
    cJSON *preestimate_shippings_count = cJSON_GetObjectItemCaseSensitive(response_order_preestimate_shipping_list_resultJSON, "preestimate_shippings_count");
    if (cJSON_IsNull(preestimate_shippings_count)) {
        preestimate_shippings_count = NULL;
    }
    if (preestimate_shippings_count) { 
    if(!cJSON_IsNumber(preestimate_shippings_count))
    {
    goto end; //Numeric
    }
    }

    // response_order_preestimate_shipping_list_result->preestimate_shippings
    cJSON *preestimate_shippings = cJSON_GetObjectItemCaseSensitive(response_order_preestimate_shipping_list_resultJSON, "preestimate_shippings");
    if (cJSON_IsNull(preestimate_shippings)) {
        preestimate_shippings = NULL;
    }
    if (preestimate_shippings) { 
    cJSON *preestimate_shippings_local_nonprimitive = NULL;
    if(!cJSON_IsArray(preestimate_shippings)){
        goto end; //nonprimitive container
    }

    preestimate_shippingsList = list_createList();

    cJSON_ArrayForEach(preestimate_shippings_local_nonprimitive,preestimate_shippings )
    {
        if(!cJSON_IsObject(preestimate_shippings_local_nonprimitive)){
            goto end;
        }
        order_preestimate_shipping_t *preestimate_shippingsItem = order_preestimate_shipping_parseFromJSON(preestimate_shippings_local_nonprimitive);

        list_addElement(preestimate_shippingsList, preestimate_shippingsItem);
    }
    }

    // response_order_preestimate_shipping_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_order_preestimate_shipping_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_order_preestimate_shipping_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_order_preestimate_shipping_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_order_preestimate_shipping_list_result_local_var = response_order_preestimate_shipping_list_result_create_internal (
        preestimate_shippings_count ? preestimate_shippings_count->valuedouble : 0,
        preestimate_shippings ? preestimate_shippingsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_order_preestimate_shipping_list_result_local_var;
end:
    if (preestimate_shippingsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, preestimate_shippingsList) {
            order_preestimate_shipping_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(preestimate_shippingsList);
        preestimate_shippingsList = NULL;
    }
    return NULL;

}
