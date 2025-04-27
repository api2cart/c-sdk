#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_update.h"



static customer_update_t *customer_update_create_internal(
    char *id,
    char *group_id,
    char *group_ids,
    char *group,
    char *email,
    char *phone,
    char *first_name,
    char *last_name,
    char *birth_day,
    int news_letter_subscription,
    list_t *consents,
    char *tags,
    char *gender,
    char *note,
    char *status,
    char *store_id,
    list_t *address
    ) {
    customer_update_t *customer_update_local_var = malloc(sizeof(customer_update_t));
    if (!customer_update_local_var) {
        return NULL;
    }
    customer_update_local_var->id = id;
    customer_update_local_var->group_id = group_id;
    customer_update_local_var->group_ids = group_ids;
    customer_update_local_var->group = group;
    customer_update_local_var->email = email;
    customer_update_local_var->phone = phone;
    customer_update_local_var->first_name = first_name;
    customer_update_local_var->last_name = last_name;
    customer_update_local_var->birth_day = birth_day;
    customer_update_local_var->news_letter_subscription = news_letter_subscription;
    customer_update_local_var->consents = consents;
    customer_update_local_var->tags = tags;
    customer_update_local_var->gender = gender;
    customer_update_local_var->note = note;
    customer_update_local_var->status = status;
    customer_update_local_var->store_id = store_id;
    customer_update_local_var->address = address;

    customer_update_local_var->_library_owned = 1;
    return customer_update_local_var;
}

__attribute__((deprecated)) customer_update_t *customer_update_create(
    char *id,
    char *group_id,
    char *group_ids,
    char *group,
    char *email,
    char *phone,
    char *first_name,
    char *last_name,
    char *birth_day,
    int news_letter_subscription,
    list_t *consents,
    char *tags,
    char *gender,
    char *note,
    char *status,
    char *store_id,
    list_t *address
    ) {
    return customer_update_create_internal (
        id,
        group_id,
        group_ids,
        group,
        email,
        phone,
        first_name,
        last_name,
        birth_day,
        news_letter_subscription,
        consents,
        tags,
        gender,
        note,
        status,
        store_id,
        address
        );
}

void customer_update_free(customer_update_t *customer_update) {
    if(NULL == customer_update){
        return ;
    }
    if(customer_update->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_update_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_update->id) {
        free(customer_update->id);
        customer_update->id = NULL;
    }
    if (customer_update->group_id) {
        free(customer_update->group_id);
        customer_update->group_id = NULL;
    }
    if (customer_update->group_ids) {
        free(customer_update->group_ids);
        customer_update->group_ids = NULL;
    }
    if (customer_update->group) {
        free(customer_update->group);
        customer_update->group = NULL;
    }
    if (customer_update->email) {
        free(customer_update->email);
        customer_update->email = NULL;
    }
    if (customer_update->phone) {
        free(customer_update->phone);
        customer_update->phone = NULL;
    }
    if (customer_update->first_name) {
        free(customer_update->first_name);
        customer_update->first_name = NULL;
    }
    if (customer_update->last_name) {
        free(customer_update->last_name);
        customer_update->last_name = NULL;
    }
    if (customer_update->birth_day) {
        free(customer_update->birth_day);
        customer_update->birth_day = NULL;
    }
    if (customer_update->consents) {
        list_ForEach(listEntry, customer_update->consents) {
            customer_add_consents_inner_free(listEntry->data);
        }
        list_freeList(customer_update->consents);
        customer_update->consents = NULL;
    }
    if (customer_update->tags) {
        free(customer_update->tags);
        customer_update->tags = NULL;
    }
    if (customer_update->gender) {
        free(customer_update->gender);
        customer_update->gender = NULL;
    }
    if (customer_update->note) {
        free(customer_update->note);
        customer_update->note = NULL;
    }
    if (customer_update->status) {
        free(customer_update->status);
        customer_update->status = NULL;
    }
    if (customer_update->store_id) {
        free(customer_update->store_id);
        customer_update->store_id = NULL;
    }
    if (customer_update->address) {
        list_ForEach(listEntry, customer_update->address) {
            customer_update_address_inner_free(listEntry->data);
        }
        list_freeList(customer_update->address);
        customer_update->address = NULL;
    }
    free(customer_update);
}

cJSON *customer_update_convertToJSON(customer_update_t *customer_update) {
    cJSON *item = cJSON_CreateObject();

    // customer_update->id
    if(customer_update->id) {
    if(cJSON_AddStringToObject(item, "id", customer_update->id) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->group_id
    if(customer_update->group_id) {
    if(cJSON_AddStringToObject(item, "group_id", customer_update->group_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->group_ids
    if(customer_update->group_ids) {
    if(cJSON_AddStringToObject(item, "group_ids", customer_update->group_ids) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->group
    if(customer_update->group) {
    if(cJSON_AddStringToObject(item, "group", customer_update->group) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->email
    if(customer_update->email) {
    if(cJSON_AddStringToObject(item, "email", customer_update->email) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->phone
    if(customer_update->phone) {
    if(cJSON_AddStringToObject(item, "phone", customer_update->phone) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->first_name
    if(customer_update->first_name) {
    if(cJSON_AddStringToObject(item, "first_name", customer_update->first_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->last_name
    if(customer_update->last_name) {
    if(cJSON_AddStringToObject(item, "last_name", customer_update->last_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->birth_day
    if(customer_update->birth_day) {
    if(cJSON_AddStringToObject(item, "birth_day", customer_update->birth_day) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->news_letter_subscription
    if(customer_update->news_letter_subscription) {
    if(cJSON_AddBoolToObject(item, "news_letter_subscription", customer_update->news_letter_subscription) == NULL) {
    goto fail; //Bool
    }
    }


    // customer_update->consents
    if(customer_update->consents) {
    cJSON *consents = cJSON_AddArrayToObject(item, "consents");
    if(consents == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *consentsListEntry;
    if (customer_update->consents) {
    list_ForEach(consentsListEntry, customer_update->consents) {
    cJSON *itemLocal = customer_add_consents_inner_convertToJSON(consentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(consents, itemLocal);
    }
    }
    }


    // customer_update->tags
    if(customer_update->tags) {
    if(cJSON_AddStringToObject(item, "tags", customer_update->tags) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->gender
    if(customer_update->gender) {
    if(cJSON_AddStringToObject(item, "gender", customer_update->gender) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->note
    if(customer_update->note) {
    if(cJSON_AddStringToObject(item, "note", customer_update->note) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->status
    if(customer_update->status) {
    if(cJSON_AddStringToObject(item, "status", customer_update->status) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->store_id
    if(customer_update->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", customer_update->store_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_update->address
    if(customer_update->address) {
    cJSON *address = cJSON_AddArrayToObject(item, "address");
    if(address == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *addressListEntry;
    if (customer_update->address) {
    list_ForEach(addressListEntry, customer_update->address) {
    cJSON *itemLocal = customer_update_address_inner_convertToJSON(addressListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(address, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_update_t *customer_update_parseFromJSON(cJSON *customer_updateJSON){

    customer_update_t *customer_update_local_var = NULL;

    // define the local list for customer_update->consents
    list_t *consentsList = NULL;

    // define the local list for customer_update->address
    list_t *addressList = NULL;

    // customer_update->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // customer_update->group_id
    cJSON *group_id = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "group_id");
    if (cJSON_IsNull(group_id)) {
        group_id = NULL;
    }
    if (group_id) { 
    if(!cJSON_IsString(group_id) && !cJSON_IsNull(group_id))
    {
    goto end; //String
    }
    }

    // customer_update->group_ids
    cJSON *group_ids = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "group_ids");
    if (cJSON_IsNull(group_ids)) {
        group_ids = NULL;
    }
    if (group_ids) { 
    if(!cJSON_IsString(group_ids) && !cJSON_IsNull(group_ids))
    {
    goto end; //String
    }
    }

    // customer_update->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "group");
    if (cJSON_IsNull(group)) {
        group = NULL;
    }
    if (group) { 
    if(!cJSON_IsString(group) && !cJSON_IsNull(group))
    {
    goto end; //String
    }
    }

    // customer_update->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // customer_update->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // customer_update->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "first_name");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // customer_update->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "last_name");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // customer_update->birth_day
    cJSON *birth_day = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "birth_day");
    if (cJSON_IsNull(birth_day)) {
        birth_day = NULL;
    }
    if (birth_day) { 
    if(!cJSON_IsString(birth_day) && !cJSON_IsNull(birth_day))
    {
    goto end; //String
    }
    }

    // customer_update->news_letter_subscription
    cJSON *news_letter_subscription = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "news_letter_subscription");
    if (cJSON_IsNull(news_letter_subscription)) {
        news_letter_subscription = NULL;
    }
    if (news_letter_subscription) { 
    if(!cJSON_IsBool(news_letter_subscription))
    {
    goto end; //Bool
    }
    }

    // customer_update->consents
    cJSON *consents = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "consents");
    if (cJSON_IsNull(consents)) {
        consents = NULL;
    }
    if (consents) { 
    cJSON *consents_local_nonprimitive = NULL;
    if(!cJSON_IsArray(consents)){
        goto end; //nonprimitive container
    }

    consentsList = list_createList();

    cJSON_ArrayForEach(consents_local_nonprimitive,consents )
    {
        if(!cJSON_IsObject(consents_local_nonprimitive)){
            goto end;
        }
        customer_add_consents_inner_t *consentsItem = customer_add_consents_inner_parseFromJSON(consents_local_nonprimitive);

        list_addElement(consentsList, consentsItem);
    }
    }

    // customer_update->tags
    cJSON *tags = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "tags");
    if (cJSON_IsNull(tags)) {
        tags = NULL;
    }
    if (tags) { 
    if(!cJSON_IsString(tags) && !cJSON_IsNull(tags))
    {
    goto end; //String
    }
    }

    // customer_update->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "gender");
    if (cJSON_IsNull(gender)) {
        gender = NULL;
    }
    if (gender) { 
    if(!cJSON_IsString(gender) && !cJSON_IsNull(gender))
    {
    goto end; //String
    }
    }

    // customer_update->note
    cJSON *note = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "note");
    if (cJSON_IsNull(note)) {
        note = NULL;
    }
    if (note) { 
    if(!cJSON_IsString(note) && !cJSON_IsNull(note))
    {
    goto end; //String
    }
    }

    // customer_update->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // customer_update->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // customer_update->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(customer_updateJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    cJSON *address_local_nonprimitive = NULL;
    if(!cJSON_IsArray(address)){
        goto end; //nonprimitive container
    }

    addressList = list_createList();

    cJSON_ArrayForEach(address_local_nonprimitive,address )
    {
        if(!cJSON_IsObject(address_local_nonprimitive)){
            goto end;
        }
        customer_update_address_inner_t *addressItem = customer_update_address_inner_parseFromJSON(address_local_nonprimitive);

        list_addElement(addressList, addressItem);
    }
    }


    customer_update_local_var = customer_update_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        group_id && !cJSON_IsNull(group_id) ? strdup(group_id->valuestring) : NULL,
        group_ids && !cJSON_IsNull(group_ids) ? strdup(group_ids->valuestring) : NULL,
        group && !cJSON_IsNull(group) ? strdup(group->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        birth_day && !cJSON_IsNull(birth_day) ? strdup(birth_day->valuestring) : NULL,
        news_letter_subscription ? news_letter_subscription->valueint : 0,
        consents ? consentsList : NULL,
        tags && !cJSON_IsNull(tags) ? strdup(tags->valuestring) : NULL,
        gender && !cJSON_IsNull(gender) ? strdup(gender->valuestring) : NULL,
        note && !cJSON_IsNull(note) ? strdup(note->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        address ? addressList : NULL
        );

    return customer_update_local_var;
end:
    if (consentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, consentsList) {
            customer_add_consents_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(consentsList);
        consentsList = NULL;
    }
    if (addressList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, addressList) {
            customer_update_address_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(addressList);
        addressList = NULL;
    }
    return NULL;

}
