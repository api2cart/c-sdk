#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_product_review_list_result.h"



static response_product_review_list_result_t *response_product_review_list_result_create_internal(
    int total_count,
    list_t *reviews,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_product_review_list_result_t *response_product_review_list_result_local_var = malloc(sizeof(response_product_review_list_result_t));
    if (!response_product_review_list_result_local_var) {
        return NULL;
    }
    response_product_review_list_result_local_var->total_count = total_count;
    response_product_review_list_result_local_var->reviews = reviews;
    response_product_review_list_result_local_var->additional_fields = additional_fields;
    response_product_review_list_result_local_var->custom_fields = custom_fields;

    response_product_review_list_result_local_var->_library_owned = 1;
    return response_product_review_list_result_local_var;
}

__attribute__((deprecated)) response_product_review_list_result_t *response_product_review_list_result_create(
    int total_count,
    list_t *reviews,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_product_review_list_result_create_internal (
        total_count,
        reviews,
        additional_fields,
        custom_fields
        );
}

void response_product_review_list_result_free(response_product_review_list_result_t *response_product_review_list_result) {
    if(NULL == response_product_review_list_result){
        return ;
    }
    if(response_product_review_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_product_review_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_product_review_list_result->reviews) {
        list_ForEach(listEntry, response_product_review_list_result->reviews) {
            product_review_free(listEntry->data);
        }
        list_freeList(response_product_review_list_result->reviews);
        response_product_review_list_result->reviews = NULL;
    }
    if (response_product_review_list_result->additional_fields) {
        object_free(response_product_review_list_result->additional_fields);
        response_product_review_list_result->additional_fields = NULL;
    }
    if (response_product_review_list_result->custom_fields) {
        object_free(response_product_review_list_result->custom_fields);
        response_product_review_list_result->custom_fields = NULL;
    }
    free(response_product_review_list_result);
}

cJSON *response_product_review_list_result_convertToJSON(response_product_review_list_result_t *response_product_review_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_product_review_list_result->total_count
    if(response_product_review_list_result->total_count) {
    if(cJSON_AddNumberToObject(item, "total_count", response_product_review_list_result->total_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_product_review_list_result->reviews
    if(response_product_review_list_result->reviews) {
    cJSON *reviews = cJSON_AddArrayToObject(item, "reviews");
    if(reviews == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *reviewsListEntry;
    if (response_product_review_list_result->reviews) {
    list_ForEach(reviewsListEntry, response_product_review_list_result->reviews) {
    cJSON *itemLocal = product_review_convertToJSON(reviewsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(reviews, itemLocal);
    }
    }
    }


    // response_product_review_list_result->additional_fields
    if(response_product_review_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_product_review_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_product_review_list_result->custom_fields
    if(response_product_review_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_product_review_list_result->custom_fields);
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

response_product_review_list_result_t *response_product_review_list_result_parseFromJSON(cJSON *response_product_review_list_resultJSON){

    response_product_review_list_result_t *response_product_review_list_result_local_var = NULL;

    // define the local list for response_product_review_list_result->reviews
    list_t *reviewsList = NULL;

    // response_product_review_list_result->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(response_product_review_list_resultJSON, "total_count");
    if (cJSON_IsNull(total_count)) {
        total_count = NULL;
    }
    if (total_count) { 
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }
    }

    // response_product_review_list_result->reviews
    cJSON *reviews = cJSON_GetObjectItemCaseSensitive(response_product_review_list_resultJSON, "reviews");
    if (cJSON_IsNull(reviews)) {
        reviews = NULL;
    }
    if (reviews) { 
    cJSON *reviews_local_nonprimitive = NULL;
    if(!cJSON_IsArray(reviews)){
        goto end; //nonprimitive container
    }

    reviewsList = list_createList();

    cJSON_ArrayForEach(reviews_local_nonprimitive,reviews )
    {
        if(!cJSON_IsObject(reviews_local_nonprimitive)){
            goto end;
        }
        product_review_t *reviewsItem = product_review_parseFromJSON(reviews_local_nonprimitive);

        list_addElement(reviewsList, reviewsItem);
    }
    }

    // response_product_review_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_product_review_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_product_review_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_product_review_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_product_review_list_result_local_var = response_product_review_list_result_create_internal (
        total_count ? total_count->valuedouble : 0,
        reviews ? reviewsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_product_review_list_result_local_var;
end:
    if (reviewsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, reviewsList) {
            product_review_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(reviewsList);
        reviewsList = NULL;
    }
    return NULL;

}
