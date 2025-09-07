#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_review.h"



static product_review_t *product_review_create_internal(
    char *id,
    char *product_id,
    char *customer_id,
    char *nick_name,
    char *email,
    char *summary,
    char *message,
    double rating,
    list_t *ratings,
    char *status,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *modified_time,
    list_t *medias,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_review_t *product_review_local_var = malloc(sizeof(product_review_t));
    if (!product_review_local_var) {
        return NULL;
    }
    product_review_local_var->id = id;
    product_review_local_var->product_id = product_id;
    product_review_local_var->customer_id = customer_id;
    product_review_local_var->nick_name = nick_name;
    product_review_local_var->email = email;
    product_review_local_var->summary = summary;
    product_review_local_var->message = message;
    product_review_local_var->rating = rating;
    product_review_local_var->ratings = ratings;
    product_review_local_var->status = status;
    product_review_local_var->created_time = created_time;
    product_review_local_var->modified_time = modified_time;
    product_review_local_var->medias = medias;
    product_review_local_var->additional_fields = additional_fields;
    product_review_local_var->custom_fields = custom_fields;

    product_review_local_var->_library_owned = 1;
    return product_review_local_var;
}

__attribute__((deprecated)) product_review_t *product_review_create(
    char *id,
    char *product_id,
    char *customer_id,
    char *nick_name,
    char *email,
    char *summary,
    char *message,
    double rating,
    list_t *ratings,
    char *status,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *modified_time,
    list_t *medias,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_review_create_internal (
        id,
        product_id,
        customer_id,
        nick_name,
        email,
        summary,
        message,
        rating,
        ratings,
        status,
        created_time,
        modified_time,
        medias,
        additional_fields,
        custom_fields
        );
}

void product_review_free(product_review_t *product_review) {
    if(NULL == product_review){
        return ;
    }
    if(product_review->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_review_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_review->id) {
        free(product_review->id);
        product_review->id = NULL;
    }
    if (product_review->product_id) {
        free(product_review->product_id);
        product_review->product_id = NULL;
    }
    if (product_review->customer_id) {
        free(product_review->customer_id);
        product_review->customer_id = NULL;
    }
    if (product_review->nick_name) {
        free(product_review->nick_name);
        product_review->nick_name = NULL;
    }
    if (product_review->email) {
        free(product_review->email);
        product_review->email = NULL;
    }
    if (product_review->summary) {
        free(product_review->summary);
        product_review->summary = NULL;
    }
    if (product_review->message) {
        free(product_review->message);
        product_review->message = NULL;
    }
    if (product_review->ratings) {
        list_ForEach(listEntry, product_review->ratings) {
            product_review_rating_free(listEntry->data);
        }
        list_freeList(product_review->ratings);
        product_review->ratings = NULL;
    }
    if (product_review->status) {
        free(product_review->status);
        product_review->status = NULL;
    }
    if (product_review->created_time) {
        a2_c_date_time_free(product_review->created_time);
        product_review->created_time = NULL;
    }
    if (product_review->modified_time) {
        a2_c_date_time_free(product_review->modified_time);
        product_review->modified_time = NULL;
    }
    if (product_review->medias) {
        list_ForEach(listEntry, product_review->medias) {
            media_free(listEntry->data);
        }
        list_freeList(product_review->medias);
        product_review->medias = NULL;
    }
    if (product_review->additional_fields) {
        object_free(product_review->additional_fields);
        product_review->additional_fields = NULL;
    }
    if (product_review->custom_fields) {
        object_free(product_review->custom_fields);
        product_review->custom_fields = NULL;
    }
    free(product_review);
}

cJSON *product_review_convertToJSON(product_review_t *product_review) {
    cJSON *item = cJSON_CreateObject();

    // product_review->id
    if(product_review->id) {
    if(cJSON_AddStringToObject(item, "id", product_review->id) == NULL) {
    goto fail; //String
    }
    }


    // product_review->product_id
    if(product_review->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_review->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_review->customer_id
    if(product_review->customer_id) {
    if(cJSON_AddStringToObject(item, "customer_id", product_review->customer_id) == NULL) {
    goto fail; //String
    }
    }


    // product_review->nick_name
    if(product_review->nick_name) {
    if(cJSON_AddStringToObject(item, "nick_name", product_review->nick_name) == NULL) {
    goto fail; //String
    }
    }


    // product_review->email
    if(product_review->email) {
    if(cJSON_AddStringToObject(item, "email", product_review->email) == NULL) {
    goto fail; //String
    }
    }


    // product_review->summary
    if(product_review->summary) {
    if(cJSON_AddStringToObject(item, "summary", product_review->summary) == NULL) {
    goto fail; //String
    }
    }


    // product_review->message
    if(product_review->message) {
    if(cJSON_AddStringToObject(item, "message", product_review->message) == NULL) {
    goto fail; //String
    }
    }


    // product_review->rating
    if(product_review->rating) {
    if(cJSON_AddNumberToObject(item, "rating", product_review->rating) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_review->ratings
    if(product_review->ratings) {
    cJSON *ratings = cJSON_AddArrayToObject(item, "ratings");
    if(ratings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ratingsListEntry;
    if (product_review->ratings) {
    list_ForEach(ratingsListEntry, product_review->ratings) {
    cJSON *itemLocal = product_review_rating_convertToJSON(ratingsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ratings, itemLocal);
    }
    }
    }


    // product_review->status
    if(product_review->status) {
    if(cJSON_AddStringToObject(item, "status", product_review->status) == NULL) {
    goto fail; //String
    }
    }


    // product_review->created_time
    if(product_review->created_time) {
    cJSON *created_time_local_JSON = a2_c_date_time_convertToJSON(product_review->created_time);
    if(created_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_time", created_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_review->modified_time
    if(product_review->modified_time) {
    cJSON *modified_time_local_JSON = a2_c_date_time_convertToJSON(product_review->modified_time);
    if(modified_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_time", modified_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_review->medias
    if(product_review->medias) {
    cJSON *medias = cJSON_AddArrayToObject(item, "medias");
    if(medias == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *mediasListEntry;
    if (product_review->medias) {
    list_ForEach(mediasListEntry, product_review->medias) {
    cJSON *itemLocal = media_convertToJSON(mediasListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(medias, itemLocal);
    }
    }
    }


    // product_review->additional_fields
    if(product_review->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_review->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_review->custom_fields
    if(product_review->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_review->custom_fields);
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

product_review_t *product_review_parseFromJSON(cJSON *product_reviewJSON){

    product_review_t *product_review_local_var = NULL;

    // define the local list for product_review->ratings
    list_t *ratingsList = NULL;

    // define the local variable for product_review->created_time
    a2_c_date_time_t *created_time_local_nonprim = NULL;

    // define the local variable for product_review->modified_time
    a2_c_date_time_t *modified_time_local_nonprim = NULL;

    // define the local list for product_review->medias
    list_t *mediasList = NULL;

    // product_review->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_review->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_review->customer_id
    cJSON *customer_id = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "customer_id");
    if (cJSON_IsNull(customer_id)) {
        customer_id = NULL;
    }
    if (customer_id) { 
    if(!cJSON_IsString(customer_id) && !cJSON_IsNull(customer_id))
    {
    goto end; //String
    }
    }

    // product_review->nick_name
    cJSON *nick_name = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "nick_name");
    if (cJSON_IsNull(nick_name)) {
        nick_name = NULL;
    }
    if (nick_name) { 
    if(!cJSON_IsString(nick_name) && !cJSON_IsNull(nick_name))
    {
    goto end; //String
    }
    }

    // product_review->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // product_review->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "summary");
    if (cJSON_IsNull(summary)) {
        summary = NULL;
    }
    if (summary) { 
    if(!cJSON_IsString(summary) && !cJSON_IsNull(summary))
    {
    goto end; //String
    }
    }

    // product_review->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "message");
    if (cJSON_IsNull(message)) {
        message = NULL;
    }
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // product_review->rating
    cJSON *rating = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "rating");
    if (cJSON_IsNull(rating)) {
        rating = NULL;
    }
    if (rating) { 
    if(!cJSON_IsNumber(rating))
    {
    goto end; //Numeric
    }
    }

    // product_review->ratings
    cJSON *ratings = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "ratings");
    if (cJSON_IsNull(ratings)) {
        ratings = NULL;
    }
    if (ratings) { 
    cJSON *ratings_local_nonprimitive = NULL;
    if(!cJSON_IsArray(ratings)){
        goto end; //nonprimitive container
    }

    ratingsList = list_createList();

    cJSON_ArrayForEach(ratings_local_nonprimitive,ratings )
    {
        if(!cJSON_IsObject(ratings_local_nonprimitive)){
            goto end;
        }
        product_review_rating_t *ratingsItem = product_review_rating_parseFromJSON(ratings_local_nonprimitive);

        list_addElement(ratingsList, ratingsItem);
    }
    }

    // product_review->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // product_review->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    created_time_local_nonprim = a2_c_date_time_parseFromJSON(created_time); //nonprimitive
    }

    // product_review->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    modified_time_local_nonprim = a2_c_date_time_parseFromJSON(modified_time); //nonprimitive
    }

    // product_review->medias
    cJSON *medias = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "medias");
    if (cJSON_IsNull(medias)) {
        medias = NULL;
    }
    if (medias) { 
    cJSON *medias_local_nonprimitive = NULL;
    if(!cJSON_IsArray(medias)){
        goto end; //nonprimitive container
    }

    mediasList = list_createList();

    cJSON_ArrayForEach(medias_local_nonprimitive,medias )
    {
        if(!cJSON_IsObject(medias_local_nonprimitive)){
            goto end;
        }
        media_t *mediasItem = media_parseFromJSON(medias_local_nonprimitive);

        list_addElement(mediasList, mediasItem);
    }
    }

    // product_review->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_review->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_reviewJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_review_local_var = product_review_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        customer_id && !cJSON_IsNull(customer_id) ? strdup(customer_id->valuestring) : NULL,
        nick_name && !cJSON_IsNull(nick_name) ? strdup(nick_name->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        summary && !cJSON_IsNull(summary) ? strdup(summary->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        rating ? rating->valuedouble : 0,
        ratings ? ratingsList : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        created_time ? created_time_local_nonprim : NULL,
        modified_time ? modified_time_local_nonprim : NULL,
        medias ? mediasList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_review_local_var;
end:
    if (ratingsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ratingsList) {
            product_review_rating_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ratingsList);
        ratingsList = NULL;
    }
    if (created_time_local_nonprim) {
        a2_c_date_time_free(created_time_local_nonprim);
        created_time_local_nonprim = NULL;
    }
    if (modified_time_local_nonprim) {
        a2_c_date_time_free(modified_time_local_nonprim);
        modified_time_local_nonprim = NULL;
    }
    if (mediasList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, mediasList) {
            media_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(mediasList);
        mediasList = NULL;
    }
    return NULL;

}
