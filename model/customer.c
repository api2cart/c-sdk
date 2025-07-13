#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer.h"



static customer_t *customer_create_internal(
    char *id,
    char *email,
    char *first_name,
    char *last_name,
    char *phone,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *modified_time,
    list_t *group,
    char *login,
    a2_c_date_time_t *last_login,
    a2_c_date_time_t *birth_day,
    char *status,
    int is_guest,
    int news_letter_subscription,
    list_t *consents,
    char *gender,
    list_t *stores_ids,
    char *website,
    char *fax,
    char *company,
    char *ip_address,
    list_t *address_book,
    char *lang_id,
    int orders_count,
    char *last_order_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    customer_t *customer_local_var = malloc(sizeof(customer_t));
    if (!customer_local_var) {
        return NULL;
    }
    customer_local_var->id = id;
    customer_local_var->email = email;
    customer_local_var->first_name = first_name;
    customer_local_var->last_name = last_name;
    customer_local_var->phone = phone;
    customer_local_var->created_time = created_time;
    customer_local_var->modified_time = modified_time;
    customer_local_var->group = group;
    customer_local_var->login = login;
    customer_local_var->last_login = last_login;
    customer_local_var->birth_day = birth_day;
    customer_local_var->status = status;
    customer_local_var->is_guest = is_guest;
    customer_local_var->news_letter_subscription = news_letter_subscription;
    customer_local_var->consents = consents;
    customer_local_var->gender = gender;
    customer_local_var->stores_ids = stores_ids;
    customer_local_var->website = website;
    customer_local_var->fax = fax;
    customer_local_var->company = company;
    customer_local_var->ip_address = ip_address;
    customer_local_var->address_book = address_book;
    customer_local_var->lang_id = lang_id;
    customer_local_var->orders_count = orders_count;
    customer_local_var->last_order_id = last_order_id;
    customer_local_var->additional_fields = additional_fields;
    customer_local_var->custom_fields = custom_fields;

    customer_local_var->_library_owned = 1;
    return customer_local_var;
}

__attribute__((deprecated)) customer_t *customer_create(
    char *id,
    char *email,
    char *first_name,
    char *last_name,
    char *phone,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *modified_time,
    list_t *group,
    char *login,
    a2_c_date_time_t *last_login,
    a2_c_date_time_t *birth_day,
    char *status,
    int is_guest,
    int news_letter_subscription,
    list_t *consents,
    char *gender,
    list_t *stores_ids,
    char *website,
    char *fax,
    char *company,
    char *ip_address,
    list_t *address_book,
    char *lang_id,
    int orders_count,
    char *last_order_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return customer_create_internal (
        id,
        email,
        first_name,
        last_name,
        phone,
        created_time,
        modified_time,
        group,
        login,
        last_login,
        birth_day,
        status,
        is_guest,
        news_letter_subscription,
        consents,
        gender,
        stores_ids,
        website,
        fax,
        company,
        ip_address,
        address_book,
        lang_id,
        orders_count,
        last_order_id,
        additional_fields,
        custom_fields
        );
}

void customer_free(customer_t *customer) {
    if(NULL == customer){
        return ;
    }
    if(customer->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer->id) {
        free(customer->id);
        customer->id = NULL;
    }
    if (customer->email) {
        free(customer->email);
        customer->email = NULL;
    }
    if (customer->first_name) {
        free(customer->first_name);
        customer->first_name = NULL;
    }
    if (customer->last_name) {
        free(customer->last_name);
        customer->last_name = NULL;
    }
    if (customer->phone) {
        free(customer->phone);
        customer->phone = NULL;
    }
    if (customer->created_time) {
        a2_c_date_time_free(customer->created_time);
        customer->created_time = NULL;
    }
    if (customer->modified_time) {
        a2_c_date_time_free(customer->modified_time);
        customer->modified_time = NULL;
    }
    if (customer->group) {
        list_ForEach(listEntry, customer->group) {
            customer_group_free(listEntry->data);
        }
        list_freeList(customer->group);
        customer->group = NULL;
    }
    if (customer->login) {
        free(customer->login);
        customer->login = NULL;
    }
    if (customer->last_login) {
        a2_c_date_time_free(customer->last_login);
        customer->last_login = NULL;
    }
    if (customer->birth_day) {
        a2_c_date_time_free(customer->birth_day);
        customer->birth_day = NULL;
    }
    if (customer->status) {
        free(customer->status);
        customer->status = NULL;
    }
    if (customer->consents) {
        list_ForEach(listEntry, customer->consents) {
            customer_consent_free(listEntry->data);
        }
        list_freeList(customer->consents);
        customer->consents = NULL;
    }
    if (customer->gender) {
        free(customer->gender);
        customer->gender = NULL;
    }
    if (customer->stores_ids) {
        list_ForEach(listEntry, customer->stores_ids) {
            free(listEntry->data);
        }
        list_freeList(customer->stores_ids);
        customer->stores_ids = NULL;
    }
    if (customer->website) {
        free(customer->website);
        customer->website = NULL;
    }
    if (customer->fax) {
        free(customer->fax);
        customer->fax = NULL;
    }
    if (customer->company) {
        free(customer->company);
        customer->company = NULL;
    }
    if (customer->ip_address) {
        free(customer->ip_address);
        customer->ip_address = NULL;
    }
    if (customer->address_book) {
        list_ForEach(listEntry, customer->address_book) {
            customer_address_free(listEntry->data);
        }
        list_freeList(customer->address_book);
        customer->address_book = NULL;
    }
    if (customer->lang_id) {
        free(customer->lang_id);
        customer->lang_id = NULL;
    }
    if (customer->last_order_id) {
        free(customer->last_order_id);
        customer->last_order_id = NULL;
    }
    if (customer->additional_fields) {
        object_free(customer->additional_fields);
        customer->additional_fields = NULL;
    }
    if (customer->custom_fields) {
        object_free(customer->custom_fields);
        customer->custom_fields = NULL;
    }
    free(customer);
}

cJSON *customer_convertToJSON(customer_t *customer) {
    cJSON *item = cJSON_CreateObject();

    // customer->id
    if(customer->id) {
    if(cJSON_AddStringToObject(item, "id", customer->id) == NULL) {
    goto fail; //String
    }
    }


    // customer->email
    if(customer->email) {
    if(cJSON_AddStringToObject(item, "email", customer->email) == NULL) {
    goto fail; //String
    }
    }


    // customer->first_name
    if(customer->first_name) {
    if(cJSON_AddStringToObject(item, "first_name", customer->first_name) == NULL) {
    goto fail; //String
    }
    }


    // customer->last_name
    if(customer->last_name) {
    if(cJSON_AddStringToObject(item, "last_name", customer->last_name) == NULL) {
    goto fail; //String
    }
    }


    // customer->phone
    if(customer->phone) {
    if(cJSON_AddStringToObject(item, "phone", customer->phone) == NULL) {
    goto fail; //String
    }
    }


    // customer->created_time
    if(customer->created_time) {
    cJSON *created_time_local_JSON = a2_c_date_time_convertToJSON(customer->created_time);
    if(created_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_time", created_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer->modified_time
    if(customer->modified_time) {
    cJSON *modified_time_local_JSON = a2_c_date_time_convertToJSON(customer->modified_time);
    if(modified_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_time", modified_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer->group
    if(customer->group) {
    cJSON *group = cJSON_AddArrayToObject(item, "group");
    if(group == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *groupListEntry;
    if (customer->group) {
    list_ForEach(groupListEntry, customer->group) {
    cJSON *itemLocal = customer_group_convertToJSON(groupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(group, itemLocal);
    }
    }
    }


    // customer->login
    if(customer->login) {
    if(cJSON_AddStringToObject(item, "login", customer->login) == NULL) {
    goto fail; //String
    }
    }


    // customer->last_login
    if(customer->last_login) {
    cJSON *last_login_local_JSON = a2_c_date_time_convertToJSON(customer->last_login);
    if(last_login_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "last_login", last_login_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer->birth_day
    if(customer->birth_day) {
    cJSON *birth_day_local_JSON = a2_c_date_time_convertToJSON(customer->birth_day);
    if(birth_day_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "birth_day", birth_day_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer->status
    if(customer->status) {
    if(cJSON_AddStringToObject(item, "status", customer->status) == NULL) {
    goto fail; //String
    }
    }


    // customer->is_guest
    if(customer->is_guest) {
    if(cJSON_AddBoolToObject(item, "is_guest", customer->is_guest) == NULL) {
    goto fail; //Bool
    }
    }


    // customer->news_letter_subscription
    if(customer->news_letter_subscription) {
    if(cJSON_AddBoolToObject(item, "news_letter_subscription", customer->news_letter_subscription) == NULL) {
    goto fail; //Bool
    }
    }


    // customer->consents
    if(customer->consents) {
    cJSON *consents = cJSON_AddArrayToObject(item, "consents");
    if(consents == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *consentsListEntry;
    if (customer->consents) {
    list_ForEach(consentsListEntry, customer->consents) {
    cJSON *itemLocal = customer_consent_convertToJSON(consentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(consents, itemLocal);
    }
    }
    }


    // customer->gender
    if(customer->gender) {
    if(cJSON_AddStringToObject(item, "gender", customer->gender) == NULL) {
    goto fail; //String
    }
    }


    // customer->stores_ids
    if(customer->stores_ids) {
    cJSON *stores_ids = cJSON_AddArrayToObject(item, "stores_ids");
    if(stores_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stores_idsListEntry;
    list_ForEach(stores_idsListEntry, customer->stores_ids) {
    if(cJSON_AddStringToObject(stores_ids, "", stores_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // customer->website
    if(customer->website) {
    if(cJSON_AddStringToObject(item, "website", customer->website) == NULL) {
    goto fail; //String
    }
    }


    // customer->fax
    if(customer->fax) {
    if(cJSON_AddStringToObject(item, "fax", customer->fax) == NULL) {
    goto fail; //String
    }
    }


    // customer->company
    if(customer->company) {
    if(cJSON_AddStringToObject(item, "company", customer->company) == NULL) {
    goto fail; //String
    }
    }


    // customer->ip_address
    if(customer->ip_address) {
    if(cJSON_AddStringToObject(item, "ip_address", customer->ip_address) == NULL) {
    goto fail; //String
    }
    }


    // customer->address_book
    if(customer->address_book) {
    cJSON *address_book = cJSON_AddArrayToObject(item, "address_book");
    if(address_book == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *address_bookListEntry;
    if (customer->address_book) {
    list_ForEach(address_bookListEntry, customer->address_book) {
    cJSON *itemLocal = customer_address_convertToJSON(address_bookListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(address_book, itemLocal);
    }
    }
    }


    // customer->lang_id
    if(customer->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", customer->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // customer->orders_count
    if(customer->orders_count) {
    if(cJSON_AddNumberToObject(item, "orders_count", customer->orders_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // customer->last_order_id
    if(customer->last_order_id) {
    if(cJSON_AddStringToObject(item, "last_order_id", customer->last_order_id) == NULL) {
    goto fail; //String
    }
    }


    // customer->additional_fields
    if(customer->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(customer->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer->custom_fields
    if(customer->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(customer->custom_fields);
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

customer_t *customer_parseFromJSON(cJSON *customerJSON){

    customer_t *customer_local_var = NULL;

    // define the local variable for customer->created_time
    a2_c_date_time_t *created_time_local_nonprim = NULL;

    // define the local variable for customer->modified_time
    a2_c_date_time_t *modified_time_local_nonprim = NULL;

    // define the local list for customer->group
    list_t *groupList = NULL;

    // define the local variable for customer->last_login
    a2_c_date_time_t *last_login_local_nonprim = NULL;

    // define the local variable for customer->birth_day
    a2_c_date_time_t *birth_day_local_nonprim = NULL;

    // define the local list for customer->consents
    list_t *consentsList = NULL;

    // define the local list for customer->stores_ids
    list_t *stores_idsList = NULL;

    // define the local list for customer->address_book
    list_t *address_bookList = NULL;

    // customer->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // customer->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(customerJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // customer->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(customerJSON, "first_name");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // customer->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(customerJSON, "last_name");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // customer->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(customerJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // customer->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(customerJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    created_time_local_nonprim = a2_c_date_time_parseFromJSON(created_time); //nonprimitive
    }

    // customer->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(customerJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    modified_time_local_nonprim = a2_c_date_time_parseFromJSON(modified_time); //nonprimitive
    }

    // customer->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(customerJSON, "group");
    if (cJSON_IsNull(group)) {
        group = NULL;
    }
    if (group) { 
    cJSON *group_local_nonprimitive = NULL;
    if(!cJSON_IsArray(group)){
        goto end; //nonprimitive container
    }

    groupList = list_createList();

    cJSON_ArrayForEach(group_local_nonprimitive,group )
    {
        if(!cJSON_IsObject(group_local_nonprimitive)){
            goto end;
        }
        customer_group_t *groupItem = customer_group_parseFromJSON(group_local_nonprimitive);

        list_addElement(groupList, groupItem);
    }
    }

    // customer->login
    cJSON *login = cJSON_GetObjectItemCaseSensitive(customerJSON, "login");
    if (cJSON_IsNull(login)) {
        login = NULL;
    }
    if (login) { 
    if(!cJSON_IsString(login) && !cJSON_IsNull(login))
    {
    goto end; //String
    }
    }

    // customer->last_login
    cJSON *last_login = cJSON_GetObjectItemCaseSensitive(customerJSON, "last_login");
    if (cJSON_IsNull(last_login)) {
        last_login = NULL;
    }
    if (last_login) { 
    last_login_local_nonprim = a2_c_date_time_parseFromJSON(last_login); //nonprimitive
    }

    // customer->birth_day
    cJSON *birth_day = cJSON_GetObjectItemCaseSensitive(customerJSON, "birth_day");
    if (cJSON_IsNull(birth_day)) {
        birth_day = NULL;
    }
    if (birth_day) { 
    birth_day_local_nonprim = a2_c_date_time_parseFromJSON(birth_day); //nonprimitive
    }

    // customer->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(customerJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // customer->is_guest
    cJSON *is_guest = cJSON_GetObjectItemCaseSensitive(customerJSON, "is_guest");
    if (cJSON_IsNull(is_guest)) {
        is_guest = NULL;
    }
    if (is_guest) { 
    if(!cJSON_IsBool(is_guest))
    {
    goto end; //Bool
    }
    }

    // customer->news_letter_subscription
    cJSON *news_letter_subscription = cJSON_GetObjectItemCaseSensitive(customerJSON, "news_letter_subscription");
    if (cJSON_IsNull(news_letter_subscription)) {
        news_letter_subscription = NULL;
    }
    if (news_letter_subscription) { 
    if(!cJSON_IsBool(news_letter_subscription))
    {
    goto end; //Bool
    }
    }

    // customer->consents
    cJSON *consents = cJSON_GetObjectItemCaseSensitive(customerJSON, "consents");
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
        customer_consent_t *consentsItem = customer_consent_parseFromJSON(consents_local_nonprimitive);

        list_addElement(consentsList, consentsItem);
    }
    }

    // customer->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(customerJSON, "gender");
    if (cJSON_IsNull(gender)) {
        gender = NULL;
    }
    if (gender) { 
    if(!cJSON_IsString(gender) && !cJSON_IsNull(gender))
    {
    goto end; //String
    }
    }

    // customer->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(customerJSON, "stores_ids");
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

    // customer->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(customerJSON, "website");
    if (cJSON_IsNull(website)) {
        website = NULL;
    }
    if (website) { 
    if(!cJSON_IsString(website) && !cJSON_IsNull(website))
    {
    goto end; //String
    }
    }

    // customer->fax
    cJSON *fax = cJSON_GetObjectItemCaseSensitive(customerJSON, "fax");
    if (cJSON_IsNull(fax)) {
        fax = NULL;
    }
    if (fax) { 
    if(!cJSON_IsString(fax) && !cJSON_IsNull(fax))
    {
    goto end; //String
    }
    }

    // customer->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(customerJSON, "company");
    if (cJSON_IsNull(company)) {
        company = NULL;
    }
    if (company) { 
    if(!cJSON_IsString(company) && !cJSON_IsNull(company))
    {
    goto end; //String
    }
    }

    // customer->ip_address
    cJSON *ip_address = cJSON_GetObjectItemCaseSensitive(customerJSON, "ip_address");
    if (cJSON_IsNull(ip_address)) {
        ip_address = NULL;
    }
    if (ip_address) { 
    if(!cJSON_IsString(ip_address) && !cJSON_IsNull(ip_address))
    {
    goto end; //String
    }
    }

    // customer->address_book
    cJSON *address_book = cJSON_GetObjectItemCaseSensitive(customerJSON, "address_book");
    if (cJSON_IsNull(address_book)) {
        address_book = NULL;
    }
    if (address_book) { 
    cJSON *address_book_local_nonprimitive = NULL;
    if(!cJSON_IsArray(address_book)){
        goto end; //nonprimitive container
    }

    address_bookList = list_createList();

    cJSON_ArrayForEach(address_book_local_nonprimitive,address_book )
    {
        if(!cJSON_IsObject(address_book_local_nonprimitive)){
            goto end;
        }
        customer_address_t *address_bookItem = customer_address_parseFromJSON(address_book_local_nonprimitive);

        list_addElement(address_bookList, address_bookItem);
    }
    }

    // customer->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(customerJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // customer->orders_count
    cJSON *orders_count = cJSON_GetObjectItemCaseSensitive(customerJSON, "orders_count");
    if (cJSON_IsNull(orders_count)) {
        orders_count = NULL;
    }
    if (orders_count) { 
    if(!cJSON_IsNumber(orders_count))
    {
    goto end; //Numeric
    }
    }

    // customer->last_order_id
    cJSON *last_order_id = cJSON_GetObjectItemCaseSensitive(customerJSON, "last_order_id");
    if (cJSON_IsNull(last_order_id)) {
        last_order_id = NULL;
    }
    if (last_order_id) { 
    if(!cJSON_IsString(last_order_id) && !cJSON_IsNull(last_order_id))
    {
    goto end; //String
    }
    }

    // customer->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(customerJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // customer->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(customerJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    customer_local_var = customer_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        created_time ? created_time_local_nonprim : NULL,
        modified_time ? modified_time_local_nonprim : NULL,
        group ? groupList : NULL,
        login && !cJSON_IsNull(login) ? strdup(login->valuestring) : NULL,
        last_login ? last_login_local_nonprim : NULL,
        birth_day ? birth_day_local_nonprim : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        is_guest ? is_guest->valueint : 0,
        news_letter_subscription ? news_letter_subscription->valueint : 0,
        consents ? consentsList : NULL,
        gender && !cJSON_IsNull(gender) ? strdup(gender->valuestring) : NULL,
        stores_ids ? stores_idsList : NULL,
        website && !cJSON_IsNull(website) ? strdup(website->valuestring) : NULL,
        fax && !cJSON_IsNull(fax) ? strdup(fax->valuestring) : NULL,
        company && !cJSON_IsNull(company) ? strdup(company->valuestring) : NULL,
        ip_address && !cJSON_IsNull(ip_address) ? strdup(ip_address->valuestring) : NULL,
        address_book ? address_bookList : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        orders_count ? orders_count->valuedouble : 0,
        last_order_id && !cJSON_IsNull(last_order_id) ? strdup(last_order_id->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return customer_local_var;
end:
    if (created_time_local_nonprim) {
        a2_c_date_time_free(created_time_local_nonprim);
        created_time_local_nonprim = NULL;
    }
    if (modified_time_local_nonprim) {
        a2_c_date_time_free(modified_time_local_nonprim);
        modified_time_local_nonprim = NULL;
    }
    if (groupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, groupList) {
            customer_group_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(groupList);
        groupList = NULL;
    }
    if (last_login_local_nonprim) {
        a2_c_date_time_free(last_login_local_nonprim);
        last_login_local_nonprim = NULL;
    }
    if (birth_day_local_nonprim) {
        a2_c_date_time_free(birth_day_local_nonprim);
        birth_day_local_nonprim = NULL;
    }
    if (consentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, consentsList) {
            customer_consent_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(consentsList);
        consentsList = NULL;
    }
    if (stores_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, stores_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(stores_idsList);
        stores_idsList = NULL;
    }
    if (address_bookList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, address_bookList) {
            customer_address_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(address_bookList);
        address_bookList = NULL;
    }
    return NULL;

}
