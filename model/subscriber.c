#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subscriber.h"



static subscriber_t *subscriber_create_internal(
    char *id,
    char *customer_id,
    char *email,
    int subscribed,
    char *first_name,
    char *last_name,
    list_t *stores_ids,
    char *created_time,
    char *modified_time,
    char *lang_id,
    char *gender,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    subscriber_t *subscriber_local_var = malloc(sizeof(subscriber_t));
    if (!subscriber_local_var) {
        return NULL;
    }
    subscriber_local_var->id = id;
    subscriber_local_var->customer_id = customer_id;
    subscriber_local_var->email = email;
    subscriber_local_var->subscribed = subscribed;
    subscriber_local_var->first_name = first_name;
    subscriber_local_var->last_name = last_name;
    subscriber_local_var->stores_ids = stores_ids;
    subscriber_local_var->created_time = created_time;
    subscriber_local_var->modified_time = modified_time;
    subscriber_local_var->lang_id = lang_id;
    subscriber_local_var->gender = gender;
    subscriber_local_var->additional_fields = additional_fields;
    subscriber_local_var->custom_fields = custom_fields;

    subscriber_local_var->_library_owned = 1;
    return subscriber_local_var;
}

__attribute__((deprecated)) subscriber_t *subscriber_create(
    char *id,
    char *customer_id,
    char *email,
    int subscribed,
    char *first_name,
    char *last_name,
    list_t *stores_ids,
    char *created_time,
    char *modified_time,
    char *lang_id,
    char *gender,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return subscriber_create_internal (
        id,
        customer_id,
        email,
        subscribed,
        first_name,
        last_name,
        stores_ids,
        created_time,
        modified_time,
        lang_id,
        gender,
        additional_fields,
        custom_fields
        );
}

void subscriber_free(subscriber_t *subscriber) {
    if(NULL == subscriber){
        return ;
    }
    if(subscriber->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "subscriber_free");
        return ;
    }
    listEntry_t *listEntry;
    if (subscriber->id) {
        free(subscriber->id);
        subscriber->id = NULL;
    }
    if (subscriber->customer_id) {
        free(subscriber->customer_id);
        subscriber->customer_id = NULL;
    }
    if (subscriber->email) {
        free(subscriber->email);
        subscriber->email = NULL;
    }
    if (subscriber->first_name) {
        free(subscriber->first_name);
        subscriber->first_name = NULL;
    }
    if (subscriber->last_name) {
        free(subscriber->last_name);
        subscriber->last_name = NULL;
    }
    if (subscriber->stores_ids) {
        list_ForEach(listEntry, subscriber->stores_ids) {
            free(listEntry->data);
        }
        list_freeList(subscriber->stores_ids);
        subscriber->stores_ids = NULL;
    }
    if (subscriber->created_time) {
        free(subscriber->created_time);
        subscriber->created_time = NULL;
    }
    if (subscriber->modified_time) {
        free(subscriber->modified_time);
        subscriber->modified_time = NULL;
    }
    if (subscriber->lang_id) {
        free(subscriber->lang_id);
        subscriber->lang_id = NULL;
    }
    if (subscriber->gender) {
        free(subscriber->gender);
        subscriber->gender = NULL;
    }
    if (subscriber->additional_fields) {
        object_free(subscriber->additional_fields);
        subscriber->additional_fields = NULL;
    }
    if (subscriber->custom_fields) {
        object_free(subscriber->custom_fields);
        subscriber->custom_fields = NULL;
    }
    free(subscriber);
}

cJSON *subscriber_convertToJSON(subscriber_t *subscriber) {
    cJSON *item = cJSON_CreateObject();

    // subscriber->id
    if(subscriber->id) {
    if(cJSON_AddStringToObject(item, "id", subscriber->id) == NULL) {
    goto fail; //String
    }
    }


    // subscriber->customer_id
    if(subscriber->customer_id) {
    if(cJSON_AddStringToObject(item, "customer_id", subscriber->customer_id) == NULL) {
    goto fail; //String
    }
    }


    // subscriber->email
    if(subscriber->email) {
    if(cJSON_AddStringToObject(item, "email", subscriber->email) == NULL) {
    goto fail; //String
    }
    }


    // subscriber->subscribed
    if(subscriber->subscribed) {
    if(cJSON_AddBoolToObject(item, "subscribed", subscriber->subscribed) == NULL) {
    goto fail; //Bool
    }
    }


    // subscriber->first_name
    if(subscriber->first_name) {
    if(cJSON_AddStringToObject(item, "first_name", subscriber->first_name) == NULL) {
    goto fail; //String
    }
    }


    // subscriber->last_name
    if(subscriber->last_name) {
    if(cJSON_AddStringToObject(item, "last_name", subscriber->last_name) == NULL) {
    goto fail; //String
    }
    }


    // subscriber->stores_ids
    if(subscriber->stores_ids) {
    cJSON *stores_ids = cJSON_AddArrayToObject(item, "stores_ids");
    if(stores_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stores_idsListEntry;
    list_ForEach(stores_idsListEntry, subscriber->stores_ids) {
    if(cJSON_AddStringToObject(stores_ids, "", stores_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscriber->created_time
    if(subscriber->created_time) {
    if(cJSON_AddStringToObject(item, "created_time", subscriber->created_time) == NULL) {
    goto fail; //String
    }
    }


    // subscriber->modified_time
    if(subscriber->modified_time) {
    if(cJSON_AddStringToObject(item, "modified_time", subscriber->modified_time) == NULL) {
    goto fail; //String
    }
    }


    // subscriber->lang_id
    if(subscriber->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", subscriber->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // subscriber->gender
    if(subscriber->gender) {
    if(cJSON_AddStringToObject(item, "gender", subscriber->gender) == NULL) {
    goto fail; //String
    }
    }


    // subscriber->additional_fields
    if(subscriber->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(subscriber->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // subscriber->custom_fields
    if(subscriber->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(subscriber->custom_fields);
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

subscriber_t *subscriber_parseFromJSON(cJSON *subscriberJSON){

    subscriber_t *subscriber_local_var = NULL;

    // define the local list for subscriber->stores_ids
    list_t *stores_idsList = NULL;

    // subscriber->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // subscriber->customer_id
    cJSON *customer_id = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "customer_id");
    if (cJSON_IsNull(customer_id)) {
        customer_id = NULL;
    }
    if (customer_id) { 
    if(!cJSON_IsString(customer_id) && !cJSON_IsNull(customer_id))
    {
    goto end; //String
    }
    }

    // subscriber->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // subscriber->subscribed
    cJSON *subscribed = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "subscribed");
    if (cJSON_IsNull(subscribed)) {
        subscribed = NULL;
    }
    if (subscribed) { 
    if(!cJSON_IsBool(subscribed))
    {
    goto end; //Bool
    }
    }

    // subscriber->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "first_name");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // subscriber->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "last_name");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // subscriber->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "stores_ids");
    if (cJSON_IsNull(stores_ids)) {
        stores_ids = NULL;
    }
    if (stores_ids) { 
    cJSON *stores_ids_local = NULL;
    if(!cJSON_IsArray(stores_ids)) {
        goto end;//primitive container
    }
    stores_idsList = list_createList();

    cJSON_ArrayForEach(stores_ids_local, stores_ids)
    {
        if(!cJSON_IsString(stores_ids_local))
        {
            goto end;
        }
        list_addElement(stores_idsList , strdup(stores_ids_local->valuestring));
    }
    }

    // subscriber->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    if(!cJSON_IsString(created_time) && !cJSON_IsNull(created_time))
    {
    goto end; //String
    }
    }

    // subscriber->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    if(!cJSON_IsString(modified_time) && !cJSON_IsNull(modified_time))
    {
    goto end; //String
    }
    }

    // subscriber->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // subscriber->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "gender");
    if (cJSON_IsNull(gender)) {
        gender = NULL;
    }
    if (gender) { 
    if(!cJSON_IsString(gender) && !cJSON_IsNull(gender))
    {
    goto end; //String
    }
    }

    // subscriber->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // subscriber->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(subscriberJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    subscriber_local_var = subscriber_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        customer_id && !cJSON_IsNull(customer_id) ? strdup(customer_id->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        subscribed ? subscribed->valueint : 0,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        stores_ids ? stores_idsList : NULL,
        created_time && !cJSON_IsNull(created_time) ? strdup(created_time->valuestring) : NULL,
        modified_time && !cJSON_IsNull(modified_time) ? strdup(modified_time->valuestring) : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        gender && !cJSON_IsNull(gender) ? strdup(gender->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return subscriber_local_var;
end:
    if (stores_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, stores_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(stores_idsList);
        stores_idsList = NULL;
    }
    return NULL;

}
