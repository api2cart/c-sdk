#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_add.h"



static customer_add_t *customer_add_create_internal(
    char *email,
    char *first_name,
    char *last_name,
    char *password,
    char *group,
    char *group_ids,
    char *status,
    char *created_time,
    char *modified_time,
    char *login,
    char *last_login,
    char *birth_day,
    int news_letter_subscription,
    list_t *consents,
    char *gender,
    char *website,
    char *fax,
    char *company,
    char *phone,
    char *note,
    char *country,
    char *store_id,
    list_t *address
    ) {
    customer_add_t *customer_add_local_var = malloc(sizeof(customer_add_t));
    if (!customer_add_local_var) {
        return NULL;
    }
    customer_add_local_var->email = email;
    customer_add_local_var->first_name = first_name;
    customer_add_local_var->last_name = last_name;
    customer_add_local_var->password = password;
    customer_add_local_var->group = group;
    customer_add_local_var->group_ids = group_ids;
    customer_add_local_var->status = status;
    customer_add_local_var->created_time = created_time;
    customer_add_local_var->modified_time = modified_time;
    customer_add_local_var->login = login;
    customer_add_local_var->last_login = last_login;
    customer_add_local_var->birth_day = birth_day;
    customer_add_local_var->news_letter_subscription = news_letter_subscription;
    customer_add_local_var->consents = consents;
    customer_add_local_var->gender = gender;
    customer_add_local_var->website = website;
    customer_add_local_var->fax = fax;
    customer_add_local_var->company = company;
    customer_add_local_var->phone = phone;
    customer_add_local_var->note = note;
    customer_add_local_var->country = country;
    customer_add_local_var->store_id = store_id;
    customer_add_local_var->address = address;

    customer_add_local_var->_library_owned = 1;
    return customer_add_local_var;
}

__attribute__((deprecated)) customer_add_t *customer_add_create(
    char *email,
    char *first_name,
    char *last_name,
    char *password,
    char *group,
    char *group_ids,
    char *status,
    char *created_time,
    char *modified_time,
    char *login,
    char *last_login,
    char *birth_day,
    int news_letter_subscription,
    list_t *consents,
    char *gender,
    char *website,
    char *fax,
    char *company,
    char *phone,
    char *note,
    char *country,
    char *store_id,
    list_t *address
    ) {
    return customer_add_create_internal (
        email,
        first_name,
        last_name,
        password,
        group,
        group_ids,
        status,
        created_time,
        modified_time,
        login,
        last_login,
        birth_day,
        news_letter_subscription,
        consents,
        gender,
        website,
        fax,
        company,
        phone,
        note,
        country,
        store_id,
        address
        );
}

void customer_add_free(customer_add_t *customer_add) {
    if(NULL == customer_add){
        return ;
    }
    if(customer_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_add->email) {
        free(customer_add->email);
        customer_add->email = NULL;
    }
    if (customer_add->first_name) {
        free(customer_add->first_name);
        customer_add->first_name = NULL;
    }
    if (customer_add->last_name) {
        free(customer_add->last_name);
        customer_add->last_name = NULL;
    }
    if (customer_add->password) {
        free(customer_add->password);
        customer_add->password = NULL;
    }
    if (customer_add->group) {
        free(customer_add->group);
        customer_add->group = NULL;
    }
    if (customer_add->group_ids) {
        free(customer_add->group_ids);
        customer_add->group_ids = NULL;
    }
    if (customer_add->status) {
        free(customer_add->status);
        customer_add->status = NULL;
    }
    if (customer_add->created_time) {
        free(customer_add->created_time);
        customer_add->created_time = NULL;
    }
    if (customer_add->modified_time) {
        free(customer_add->modified_time);
        customer_add->modified_time = NULL;
    }
    if (customer_add->login) {
        free(customer_add->login);
        customer_add->login = NULL;
    }
    if (customer_add->last_login) {
        free(customer_add->last_login);
        customer_add->last_login = NULL;
    }
    if (customer_add->birth_day) {
        free(customer_add->birth_day);
        customer_add->birth_day = NULL;
    }
    if (customer_add->consents) {
        list_ForEach(listEntry, customer_add->consents) {
            customer_add_consents_inner_free(listEntry->data);
        }
        list_freeList(customer_add->consents);
        customer_add->consents = NULL;
    }
    if (customer_add->gender) {
        free(customer_add->gender);
        customer_add->gender = NULL;
    }
    if (customer_add->website) {
        free(customer_add->website);
        customer_add->website = NULL;
    }
    if (customer_add->fax) {
        free(customer_add->fax);
        customer_add->fax = NULL;
    }
    if (customer_add->company) {
        free(customer_add->company);
        customer_add->company = NULL;
    }
    if (customer_add->phone) {
        free(customer_add->phone);
        customer_add->phone = NULL;
    }
    if (customer_add->note) {
        free(customer_add->note);
        customer_add->note = NULL;
    }
    if (customer_add->country) {
        free(customer_add->country);
        customer_add->country = NULL;
    }
    if (customer_add->store_id) {
        free(customer_add->store_id);
        customer_add->store_id = NULL;
    }
    if (customer_add->address) {
        list_ForEach(listEntry, customer_add->address) {
            customer_add_address_inner_free(listEntry->data);
        }
        list_freeList(customer_add->address);
        customer_add->address = NULL;
    }
    free(customer_add);
}

cJSON *customer_add_convertToJSON(customer_add_t *customer_add) {
    cJSON *item = cJSON_CreateObject();

    // customer_add->email
    if (!customer_add->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", customer_add->email) == NULL) {
    goto fail; //String
    }


    // customer_add->first_name
    if(customer_add->first_name) {
    if(cJSON_AddStringToObject(item, "first_name", customer_add->first_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->last_name
    if(customer_add->last_name) {
    if(cJSON_AddStringToObject(item, "last_name", customer_add->last_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->password
    if(customer_add->password) {
    if(cJSON_AddStringToObject(item, "password", customer_add->password) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->group
    if(customer_add->group) {
    if(cJSON_AddStringToObject(item, "group", customer_add->group) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->group_ids
    if(customer_add->group_ids) {
    if(cJSON_AddStringToObject(item, "group_ids", customer_add->group_ids) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->status
    if(customer_add->status) {
    if(cJSON_AddStringToObject(item, "status", customer_add->status) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->created_time
    if(customer_add->created_time) {
    if(cJSON_AddStringToObject(item, "created_time", customer_add->created_time) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->modified_time
    if(customer_add->modified_time) {
    if(cJSON_AddStringToObject(item, "modified_time", customer_add->modified_time) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->login
    if(customer_add->login) {
    if(cJSON_AddStringToObject(item, "login", customer_add->login) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->last_login
    if(customer_add->last_login) {
    if(cJSON_AddStringToObject(item, "last_login", customer_add->last_login) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->birth_day
    if(customer_add->birth_day) {
    if(cJSON_AddStringToObject(item, "birth_day", customer_add->birth_day) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->news_letter_subscription
    if(customer_add->news_letter_subscription) {
    if(cJSON_AddBoolToObject(item, "news_letter_subscription", customer_add->news_letter_subscription) == NULL) {
    goto fail; //Bool
    }
    }


    // customer_add->consents
    if(customer_add->consents) {
    cJSON *consents = cJSON_AddArrayToObject(item, "consents");
    if(consents == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *consentsListEntry;
    if (customer_add->consents) {
    list_ForEach(consentsListEntry, customer_add->consents) {
    cJSON *itemLocal = customer_add_consents_inner_convertToJSON(consentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(consents, itemLocal);
    }
    }
    }


    // customer_add->gender
    if(customer_add->gender) {
    if(cJSON_AddStringToObject(item, "gender", customer_add->gender) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->website
    if(customer_add->website) {
    if(cJSON_AddStringToObject(item, "website", customer_add->website) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->fax
    if(customer_add->fax) {
    if(cJSON_AddStringToObject(item, "fax", customer_add->fax) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->company
    if(customer_add->company) {
    if(cJSON_AddStringToObject(item, "company", customer_add->company) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->phone
    if(customer_add->phone) {
    if(cJSON_AddStringToObject(item, "phone", customer_add->phone) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->note
    if(customer_add->note) {
    if(cJSON_AddStringToObject(item, "note", customer_add->note) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->country
    if(customer_add->country) {
    if(cJSON_AddStringToObject(item, "country", customer_add->country) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->store_id
    if(customer_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", customer_add->store_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_add->address
    if(customer_add->address) {
    cJSON *address = cJSON_AddArrayToObject(item, "address");
    if(address == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *addressListEntry;
    if (customer_add->address) {
    list_ForEach(addressListEntry, customer_add->address) {
    cJSON *itemLocal = customer_add_address_inner_convertToJSON(addressListEntry->data);
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

customer_add_t *customer_add_parseFromJSON(cJSON *customer_addJSON){

    customer_add_t *customer_add_local_var = NULL;

    // define the local list for customer_add->consents
    list_t *consentsList = NULL;

    // define the local list for customer_add->address
    list_t *addressList = NULL;

    // customer_add->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // customer_add->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "first_name");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // customer_add->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "last_name");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // customer_add->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "password");
    if (cJSON_IsNull(password)) {
        password = NULL;
    }
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }

    // customer_add->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "group");
    if (cJSON_IsNull(group)) {
        group = NULL;
    }
    if (group) { 
    if(!cJSON_IsString(group) && !cJSON_IsNull(group))
    {
    goto end; //String
    }
    }

    // customer_add->group_ids
    cJSON *group_ids = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "group_ids");
    if (cJSON_IsNull(group_ids)) {
        group_ids = NULL;
    }
    if (group_ids) { 
    if(!cJSON_IsString(group_ids) && !cJSON_IsNull(group_ids))
    {
    goto end; //String
    }
    }

    // customer_add->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // customer_add->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    if(!cJSON_IsString(created_time) && !cJSON_IsNull(created_time))
    {
    goto end; //String
    }
    }

    // customer_add->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    if(!cJSON_IsString(modified_time) && !cJSON_IsNull(modified_time))
    {
    goto end; //String
    }
    }

    // customer_add->login
    cJSON *login = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "login");
    if (cJSON_IsNull(login)) {
        login = NULL;
    }
    if (login) { 
    if(!cJSON_IsString(login) && !cJSON_IsNull(login))
    {
    goto end; //String
    }
    }

    // customer_add->last_login
    cJSON *last_login = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "last_login");
    if (cJSON_IsNull(last_login)) {
        last_login = NULL;
    }
    if (last_login) { 
    if(!cJSON_IsString(last_login) && !cJSON_IsNull(last_login))
    {
    goto end; //String
    }
    }

    // customer_add->birth_day
    cJSON *birth_day = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "birth_day");
    if (cJSON_IsNull(birth_day)) {
        birth_day = NULL;
    }
    if (birth_day) { 
    if(!cJSON_IsString(birth_day) && !cJSON_IsNull(birth_day))
    {
    goto end; //String
    }
    }

    // customer_add->news_letter_subscription
    cJSON *news_letter_subscription = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "news_letter_subscription");
    if (cJSON_IsNull(news_letter_subscription)) {
        news_letter_subscription = NULL;
    }
    if (news_letter_subscription) { 
    if(!cJSON_IsBool(news_letter_subscription))
    {
    goto end; //Bool
    }
    }

    // customer_add->consents
    cJSON *consents = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "consents");
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

    // customer_add->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "gender");
    if (cJSON_IsNull(gender)) {
        gender = NULL;
    }
    if (gender) { 
    if(!cJSON_IsString(gender) && !cJSON_IsNull(gender))
    {
    goto end; //String
    }
    }

    // customer_add->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "website");
    if (cJSON_IsNull(website)) {
        website = NULL;
    }
    if (website) { 
    if(!cJSON_IsString(website) && !cJSON_IsNull(website))
    {
    goto end; //String
    }
    }

    // customer_add->fax
    cJSON *fax = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "fax");
    if (cJSON_IsNull(fax)) {
        fax = NULL;
    }
    if (fax) { 
    if(!cJSON_IsString(fax) && !cJSON_IsNull(fax))
    {
    goto end; //String
    }
    }

    // customer_add->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "company");
    if (cJSON_IsNull(company)) {
        company = NULL;
    }
    if (company) { 
    if(!cJSON_IsString(company) && !cJSON_IsNull(company))
    {
    goto end; //String
    }
    }

    // customer_add->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // customer_add->note
    cJSON *note = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "note");
    if (cJSON_IsNull(note)) {
        note = NULL;
    }
    if (note) { 
    if(!cJSON_IsString(note) && !cJSON_IsNull(note))
    {
    goto end; //String
    }
    }

    // customer_add->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }

    // customer_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // customer_add->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(customer_addJSON, "address");
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
        customer_add_address_inner_t *addressItem = customer_add_address_inner_parseFromJSON(address_local_nonprimitive);

        list_addElement(addressList, addressItem);
    }
    }


    customer_add_local_var = customer_add_create_internal (
        strdup(email->valuestring),
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        password && !cJSON_IsNull(password) ? strdup(password->valuestring) : NULL,
        group && !cJSON_IsNull(group) ? strdup(group->valuestring) : NULL,
        group_ids && !cJSON_IsNull(group_ids) ? strdup(group_ids->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        created_time && !cJSON_IsNull(created_time) ? strdup(created_time->valuestring) : NULL,
        modified_time && !cJSON_IsNull(modified_time) ? strdup(modified_time->valuestring) : NULL,
        login && !cJSON_IsNull(login) ? strdup(login->valuestring) : NULL,
        last_login && !cJSON_IsNull(last_login) ? strdup(last_login->valuestring) : NULL,
        birth_day && !cJSON_IsNull(birth_day) ? strdup(birth_day->valuestring) : NULL,
        news_letter_subscription ? news_letter_subscription->valueint : 0,
        consents ? consentsList : NULL,
        gender && !cJSON_IsNull(gender) ? strdup(gender->valuestring) : NULL,
        website && !cJSON_IsNull(website) ? strdup(website->valuestring) : NULL,
        fax && !cJSON_IsNull(fax) ? strdup(fax->valuestring) : NULL,
        company && !cJSON_IsNull(company) ? strdup(company->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        note && !cJSON_IsNull(note) ? strdup(note->valuestring) : NULL,
        country && !cJSON_IsNull(country) ? strdup(country->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        address ? addressList : NULL
        );

    return customer_add_local_var;
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
            customer_add_address_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(addressList);
        addressList = NULL;
    }
    return NULL;

}
