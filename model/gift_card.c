#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gift_card.h"



static gift_card_t *gift_card_create_internal(
    char *id,
    char *code,
    char *name,
    char *type,
    char *currency_code,
    double amount,
    double initial_amount,
    char *status,
    char *created_at,
    char *avail_to,
    char *free_product_ids,
    char *message,
    char *issuer_email,
    char *recipient_email,
    char *issuer_name,
    char *recipient_name,
    list_t *usage_history,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    gift_card_t *gift_card_local_var = malloc(sizeof(gift_card_t));
    if (!gift_card_local_var) {
        return NULL;
    }
    gift_card_local_var->id = id;
    gift_card_local_var->code = code;
    gift_card_local_var->name = name;
    gift_card_local_var->type = type;
    gift_card_local_var->currency_code = currency_code;
    gift_card_local_var->amount = amount;
    gift_card_local_var->initial_amount = initial_amount;
    gift_card_local_var->status = status;
    gift_card_local_var->created_at = created_at;
    gift_card_local_var->avail_to = avail_to;
    gift_card_local_var->free_product_ids = free_product_ids;
    gift_card_local_var->message = message;
    gift_card_local_var->issuer_email = issuer_email;
    gift_card_local_var->recipient_email = recipient_email;
    gift_card_local_var->issuer_name = issuer_name;
    gift_card_local_var->recipient_name = recipient_name;
    gift_card_local_var->usage_history = usage_history;
    gift_card_local_var->additional_fields = additional_fields;
    gift_card_local_var->custom_fields = custom_fields;

    gift_card_local_var->_library_owned = 1;
    return gift_card_local_var;
}

__attribute__((deprecated)) gift_card_t *gift_card_create(
    char *id,
    char *code,
    char *name,
    char *type,
    char *currency_code,
    double amount,
    double initial_amount,
    char *status,
    char *created_at,
    char *avail_to,
    char *free_product_ids,
    char *message,
    char *issuer_email,
    char *recipient_email,
    char *issuer_name,
    char *recipient_name,
    list_t *usage_history,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return gift_card_create_internal (
        id,
        code,
        name,
        type,
        currency_code,
        amount,
        initial_amount,
        status,
        created_at,
        avail_to,
        free_product_ids,
        message,
        issuer_email,
        recipient_email,
        issuer_name,
        recipient_name,
        usage_history,
        additional_fields,
        custom_fields
        );
}

void gift_card_free(gift_card_t *gift_card) {
    if(NULL == gift_card){
        return ;
    }
    if(gift_card->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "gift_card_free");
        return ;
    }
    listEntry_t *listEntry;
    if (gift_card->id) {
        free(gift_card->id);
        gift_card->id = NULL;
    }
    if (gift_card->code) {
        free(gift_card->code);
        gift_card->code = NULL;
    }
    if (gift_card->name) {
        free(gift_card->name);
        gift_card->name = NULL;
    }
    if (gift_card->type) {
        free(gift_card->type);
        gift_card->type = NULL;
    }
    if (gift_card->currency_code) {
        free(gift_card->currency_code);
        gift_card->currency_code = NULL;
    }
    if (gift_card->status) {
        free(gift_card->status);
        gift_card->status = NULL;
    }
    if (gift_card->created_at) {
        free(gift_card->created_at);
        gift_card->created_at = NULL;
    }
    if (gift_card->avail_to) {
        free(gift_card->avail_to);
        gift_card->avail_to = NULL;
    }
    if (gift_card->free_product_ids) {
        free(gift_card->free_product_ids);
        gift_card->free_product_ids = NULL;
    }
    if (gift_card->message) {
        free(gift_card->message);
        gift_card->message = NULL;
    }
    if (gift_card->issuer_email) {
        free(gift_card->issuer_email);
        gift_card->issuer_email = NULL;
    }
    if (gift_card->recipient_email) {
        free(gift_card->recipient_email);
        gift_card->recipient_email = NULL;
    }
    if (gift_card->issuer_name) {
        free(gift_card->issuer_name);
        gift_card->issuer_name = NULL;
    }
    if (gift_card->recipient_name) {
        free(gift_card->recipient_name);
        gift_card->recipient_name = NULL;
    }
    if (gift_card->usage_history) {
        list_ForEach(listEntry, gift_card->usage_history) {
            coupon_history_free(listEntry->data);
        }
        list_freeList(gift_card->usage_history);
        gift_card->usage_history = NULL;
    }
    if (gift_card->additional_fields) {
        object_free(gift_card->additional_fields);
        gift_card->additional_fields = NULL;
    }
    if (gift_card->custom_fields) {
        object_free(gift_card->custom_fields);
        gift_card->custom_fields = NULL;
    }
    free(gift_card);
}

cJSON *gift_card_convertToJSON(gift_card_t *gift_card) {
    cJSON *item = cJSON_CreateObject();

    // gift_card->id
    if(gift_card->id) {
    if(cJSON_AddStringToObject(item, "id", gift_card->id) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->code
    if(gift_card->code) {
    if(cJSON_AddStringToObject(item, "code", gift_card->code) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->name
    if(gift_card->name) {
    if(cJSON_AddStringToObject(item, "name", gift_card->name) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->type
    if(gift_card->type) {
    if(cJSON_AddStringToObject(item, "type", gift_card->type) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->currency_code
    if(gift_card->currency_code) {
    if(cJSON_AddStringToObject(item, "currency_code", gift_card->currency_code) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->amount
    if(gift_card->amount) {
    if(cJSON_AddNumberToObject(item, "amount", gift_card->amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // gift_card->initial_amount
    if(gift_card->initial_amount) {
    if(cJSON_AddNumberToObject(item, "initial_amount", gift_card->initial_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // gift_card->status
    if(gift_card->status) {
    if(cJSON_AddStringToObject(item, "status", gift_card->status) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->created_at
    if(gift_card->created_at) {
    if(cJSON_AddStringToObject(item, "created_at", gift_card->created_at) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->avail_to
    if(gift_card->avail_to) {
    if(cJSON_AddStringToObject(item, "avail_to", gift_card->avail_to) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->free_product_ids
    if(gift_card->free_product_ids) {
    if(cJSON_AddStringToObject(item, "free_product_ids", gift_card->free_product_ids) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->message
    if(gift_card->message) {
    if(cJSON_AddStringToObject(item, "message", gift_card->message) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->issuer_email
    if(gift_card->issuer_email) {
    if(cJSON_AddStringToObject(item, "issuer_email", gift_card->issuer_email) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->recipient_email
    if(gift_card->recipient_email) {
    if(cJSON_AddStringToObject(item, "recipient_email", gift_card->recipient_email) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->issuer_name
    if(gift_card->issuer_name) {
    if(cJSON_AddStringToObject(item, "issuer_name", gift_card->issuer_name) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->recipient_name
    if(gift_card->recipient_name) {
    if(cJSON_AddStringToObject(item, "recipient_name", gift_card->recipient_name) == NULL) {
    goto fail; //String
    }
    }


    // gift_card->usage_history
    if(gift_card->usage_history) {
    cJSON *usage_history = cJSON_AddArrayToObject(item, "usage_history");
    if(usage_history == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *usage_historyListEntry;
    if (gift_card->usage_history) {
    list_ForEach(usage_historyListEntry, gift_card->usage_history) {
    cJSON *itemLocal = coupon_history_convertToJSON(usage_historyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(usage_history, itemLocal);
    }
    }
    }


    // gift_card->additional_fields
    if(gift_card->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(gift_card->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // gift_card->custom_fields
    if(gift_card->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(gift_card->custom_fields);
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

gift_card_t *gift_card_parseFromJSON(cJSON *gift_cardJSON){

    gift_card_t *gift_card_local_var = NULL;

    // define the local list for gift_card->usage_history
    list_t *usage_historyList = NULL;

    // gift_card->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // gift_card->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // gift_card->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // gift_card->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // gift_card->currency_code
    cJSON *currency_code = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "currency_code");
    if (cJSON_IsNull(currency_code)) {
        currency_code = NULL;
    }
    if (currency_code) { 
    if(!cJSON_IsString(currency_code) && !cJSON_IsNull(currency_code))
    {
    goto end; //String
    }
    }

    // gift_card->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "amount");
    if (cJSON_IsNull(amount)) {
        amount = NULL;
    }
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    }

    // gift_card->initial_amount
    cJSON *initial_amount = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "initial_amount");
    if (cJSON_IsNull(initial_amount)) {
        initial_amount = NULL;
    }
    if (initial_amount) { 
    if(!cJSON_IsNumber(initial_amount))
    {
    goto end; //Numeric
    }
    }

    // gift_card->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // gift_card->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    if(!cJSON_IsString(created_at) && !cJSON_IsNull(created_at))
    {
    goto end; //String
    }
    }

    // gift_card->avail_to
    cJSON *avail_to = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "avail_to");
    if (cJSON_IsNull(avail_to)) {
        avail_to = NULL;
    }
    if (avail_to) { 
    if(!cJSON_IsString(avail_to) && !cJSON_IsNull(avail_to))
    {
    goto end; //String
    }
    }

    // gift_card->free_product_ids
    cJSON *free_product_ids = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "free_product_ids");
    if (cJSON_IsNull(free_product_ids)) {
        free_product_ids = NULL;
    }
    if (free_product_ids) { 
    if(!cJSON_IsString(free_product_ids) && !cJSON_IsNull(free_product_ids))
    {
    goto end; //String
    }
    }

    // gift_card->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "message");
    if (cJSON_IsNull(message)) {
        message = NULL;
    }
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // gift_card->issuer_email
    cJSON *issuer_email = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "issuer_email");
    if (cJSON_IsNull(issuer_email)) {
        issuer_email = NULL;
    }
    if (issuer_email) { 
    if(!cJSON_IsString(issuer_email) && !cJSON_IsNull(issuer_email))
    {
    goto end; //String
    }
    }

    // gift_card->recipient_email
    cJSON *recipient_email = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "recipient_email");
    if (cJSON_IsNull(recipient_email)) {
        recipient_email = NULL;
    }
    if (recipient_email) { 
    if(!cJSON_IsString(recipient_email) && !cJSON_IsNull(recipient_email))
    {
    goto end; //String
    }
    }

    // gift_card->issuer_name
    cJSON *issuer_name = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "issuer_name");
    if (cJSON_IsNull(issuer_name)) {
        issuer_name = NULL;
    }
    if (issuer_name) { 
    if(!cJSON_IsString(issuer_name) && !cJSON_IsNull(issuer_name))
    {
    goto end; //String
    }
    }

    // gift_card->recipient_name
    cJSON *recipient_name = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "recipient_name");
    if (cJSON_IsNull(recipient_name)) {
        recipient_name = NULL;
    }
    if (recipient_name) { 
    if(!cJSON_IsString(recipient_name) && !cJSON_IsNull(recipient_name))
    {
    goto end; //String
    }
    }

    // gift_card->usage_history
    cJSON *usage_history = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "usage_history");
    if (cJSON_IsNull(usage_history)) {
        usage_history = NULL;
    }
    if (usage_history) { 
    cJSON *usage_history_local_nonprimitive = NULL;
    if(!cJSON_IsArray(usage_history)){
        goto end; //nonprimitive container
    }

    usage_historyList = list_createList();

    cJSON_ArrayForEach(usage_history_local_nonprimitive,usage_history )
    {
        if(!cJSON_IsObject(usage_history_local_nonprimitive)){
            goto end;
        }
        coupon_history_t *usage_historyItem = coupon_history_parseFromJSON(usage_history_local_nonprimitive);

        list_addElement(usage_historyList, usage_historyItem);
    }
    }

    // gift_card->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // gift_card->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(gift_cardJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    gift_card_local_var = gift_card_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        currency_code && !cJSON_IsNull(currency_code) ? strdup(currency_code->valuestring) : NULL,
        amount ? amount->valuedouble : 0,
        initial_amount ? initial_amount->valuedouble : 0,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        created_at && !cJSON_IsNull(created_at) ? strdup(created_at->valuestring) : NULL,
        avail_to && !cJSON_IsNull(avail_to) ? strdup(avail_to->valuestring) : NULL,
        free_product_ids && !cJSON_IsNull(free_product_ids) ? strdup(free_product_ids->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        issuer_email && !cJSON_IsNull(issuer_email) ? strdup(issuer_email->valuestring) : NULL,
        recipient_email && !cJSON_IsNull(recipient_email) ? strdup(recipient_email->valuestring) : NULL,
        issuer_name && !cJSON_IsNull(issuer_name) ? strdup(issuer_name->valuestring) : NULL,
        recipient_name && !cJSON_IsNull(recipient_name) ? strdup(recipient_name->valuestring) : NULL,
        usage_history ? usage_historyList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return gift_card_local_var;
end:
    if (usage_historyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, usage_historyList) {
            coupon_history_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(usage_historyList);
        usage_historyList = NULL;
    }
    return NULL;

}
