#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_cart_coupon_list_result.h"



static response_cart_coupon_list_result_t *response_cart_coupon_list_result_create_internal(
    int coupon_count,
    list_t *coupon,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_cart_coupon_list_result_t *response_cart_coupon_list_result_local_var = malloc(sizeof(response_cart_coupon_list_result_t));
    if (!response_cart_coupon_list_result_local_var) {
        return NULL;
    }
    response_cart_coupon_list_result_local_var->coupon_count = coupon_count;
    response_cart_coupon_list_result_local_var->coupon = coupon;
    response_cart_coupon_list_result_local_var->additional_fields = additional_fields;
    response_cart_coupon_list_result_local_var->custom_fields = custom_fields;

    response_cart_coupon_list_result_local_var->_library_owned = 1;
    return response_cart_coupon_list_result_local_var;
}

__attribute__((deprecated)) response_cart_coupon_list_result_t *response_cart_coupon_list_result_create(
    int coupon_count,
    list_t *coupon,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_cart_coupon_list_result_create_internal (
        coupon_count,
        coupon,
        additional_fields,
        custom_fields
        );
}

void response_cart_coupon_list_result_free(response_cart_coupon_list_result_t *response_cart_coupon_list_result) {
    if(NULL == response_cart_coupon_list_result){
        return ;
    }
    if(response_cart_coupon_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_cart_coupon_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_cart_coupon_list_result->coupon) {
        list_ForEach(listEntry, response_cart_coupon_list_result->coupon) {
            coupon_free(listEntry->data);
        }
        list_freeList(response_cart_coupon_list_result->coupon);
        response_cart_coupon_list_result->coupon = NULL;
    }
    if (response_cart_coupon_list_result->additional_fields) {
        object_free(response_cart_coupon_list_result->additional_fields);
        response_cart_coupon_list_result->additional_fields = NULL;
    }
    if (response_cart_coupon_list_result->custom_fields) {
        object_free(response_cart_coupon_list_result->custom_fields);
        response_cart_coupon_list_result->custom_fields = NULL;
    }
    free(response_cart_coupon_list_result);
}

cJSON *response_cart_coupon_list_result_convertToJSON(response_cart_coupon_list_result_t *response_cart_coupon_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_cart_coupon_list_result->coupon_count
    if(response_cart_coupon_list_result->coupon_count) {
    if(cJSON_AddNumberToObject(item, "coupon_count", response_cart_coupon_list_result->coupon_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_cart_coupon_list_result->coupon
    if(response_cart_coupon_list_result->coupon) {
    cJSON *coupon = cJSON_AddArrayToObject(item, "coupon");
    if(coupon == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *couponListEntry;
    if (response_cart_coupon_list_result->coupon) {
    list_ForEach(couponListEntry, response_cart_coupon_list_result->coupon) {
    cJSON *itemLocal = coupon_convertToJSON(couponListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(coupon, itemLocal);
    }
    }
    }


    // response_cart_coupon_list_result->additional_fields
    if(response_cart_coupon_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_cart_coupon_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_cart_coupon_list_result->custom_fields
    if(response_cart_coupon_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_cart_coupon_list_result->custom_fields);
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

response_cart_coupon_list_result_t *response_cart_coupon_list_result_parseFromJSON(cJSON *response_cart_coupon_list_resultJSON){

    response_cart_coupon_list_result_t *response_cart_coupon_list_result_local_var = NULL;

    // define the local list for response_cart_coupon_list_result->coupon
    list_t *couponList = NULL;

    // response_cart_coupon_list_result->coupon_count
    cJSON *coupon_count = cJSON_GetObjectItemCaseSensitive(response_cart_coupon_list_resultJSON, "coupon_count");
    if (cJSON_IsNull(coupon_count)) {
        coupon_count = NULL;
    }
    if (coupon_count) { 
    if(!cJSON_IsNumber(coupon_count))
    {
    goto end; //Numeric
    }
    }

    // response_cart_coupon_list_result->coupon
    cJSON *coupon = cJSON_GetObjectItemCaseSensitive(response_cart_coupon_list_resultJSON, "coupon");
    if (cJSON_IsNull(coupon)) {
        coupon = NULL;
    }
    if (coupon) { 
    cJSON *coupon_local_nonprimitive = NULL;
    if(!cJSON_IsArray(coupon)){
        goto end; //nonprimitive container
    }

    couponList = list_createList();

    cJSON_ArrayForEach(coupon_local_nonprimitive,coupon )
    {
        if(!cJSON_IsObject(coupon_local_nonprimitive)){
            goto end;
        }
        coupon_t *couponItem = coupon_parseFromJSON(coupon_local_nonprimitive);

        list_addElement(couponList, couponItem);
    }
    }

    // response_cart_coupon_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_cart_coupon_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_cart_coupon_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_cart_coupon_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_cart_coupon_list_result_local_var = response_cart_coupon_list_result_create_internal (
        coupon_count ? coupon_count->valuedouble : 0,
        coupon ? couponList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_cart_coupon_list_result_local_var;
end:
    if (couponList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, couponList) {
            coupon_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(couponList);
        couponList = NULL;
    }
    return NULL;

}
