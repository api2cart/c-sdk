#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_transaction.h"



static order_transaction_t *order_transaction_create_internal(
    char *id,
    char *transaction_id,
    char *order_id,
    char *parent_id,
    char *description,
    char *status,
    char *gateway,
    char *reference_number,
    char *currency,
    double amount,
    a2_c_date_time_t *created_time,
    char *settlement_currency,
    double settlement_amount,
    a2_c_date_time_t *settlement_created_time,
    char *card_brand,
    char *card_bin,
    char *card_last_four,
    char *avs_street_resp_code,
    char *avs_postal_resp_code,
    char *avs_message,
    char *cvv_code,
    char *cvv_message,
    int is_test_mode,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_transaction_t *order_transaction_local_var = malloc(sizeof(order_transaction_t));
    if (!order_transaction_local_var) {
        return NULL;
    }
    order_transaction_local_var->id = id;
    order_transaction_local_var->transaction_id = transaction_id;
    order_transaction_local_var->order_id = order_id;
    order_transaction_local_var->parent_id = parent_id;
    order_transaction_local_var->description = description;
    order_transaction_local_var->status = status;
    order_transaction_local_var->gateway = gateway;
    order_transaction_local_var->reference_number = reference_number;
    order_transaction_local_var->currency = currency;
    order_transaction_local_var->amount = amount;
    order_transaction_local_var->created_time = created_time;
    order_transaction_local_var->settlement_currency = settlement_currency;
    order_transaction_local_var->settlement_amount = settlement_amount;
    order_transaction_local_var->settlement_created_time = settlement_created_time;
    order_transaction_local_var->card_brand = card_brand;
    order_transaction_local_var->card_bin = card_bin;
    order_transaction_local_var->card_last_four = card_last_four;
    order_transaction_local_var->avs_street_resp_code = avs_street_resp_code;
    order_transaction_local_var->avs_postal_resp_code = avs_postal_resp_code;
    order_transaction_local_var->avs_message = avs_message;
    order_transaction_local_var->cvv_code = cvv_code;
    order_transaction_local_var->cvv_message = cvv_message;
    order_transaction_local_var->is_test_mode = is_test_mode;
    order_transaction_local_var->additional_fields = additional_fields;
    order_transaction_local_var->custom_fields = custom_fields;

    order_transaction_local_var->_library_owned = 1;
    return order_transaction_local_var;
}

__attribute__((deprecated)) order_transaction_t *order_transaction_create(
    char *id,
    char *transaction_id,
    char *order_id,
    char *parent_id,
    char *description,
    char *status,
    char *gateway,
    char *reference_number,
    char *currency,
    double amount,
    a2_c_date_time_t *created_time,
    char *settlement_currency,
    double settlement_amount,
    a2_c_date_time_t *settlement_created_time,
    char *card_brand,
    char *card_bin,
    char *card_last_four,
    char *avs_street_resp_code,
    char *avs_postal_resp_code,
    char *avs_message,
    char *cvv_code,
    char *cvv_message,
    int is_test_mode,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_transaction_create_internal (
        id,
        transaction_id,
        order_id,
        parent_id,
        description,
        status,
        gateway,
        reference_number,
        currency,
        amount,
        created_time,
        settlement_currency,
        settlement_amount,
        settlement_created_time,
        card_brand,
        card_bin,
        card_last_four,
        avs_street_resp_code,
        avs_postal_resp_code,
        avs_message,
        cvv_code,
        cvv_message,
        is_test_mode,
        additional_fields,
        custom_fields
        );
}

void order_transaction_free(order_transaction_t *order_transaction) {
    if(NULL == order_transaction){
        return ;
    }
    if(order_transaction->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_transaction_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_transaction->id) {
        free(order_transaction->id);
        order_transaction->id = NULL;
    }
    if (order_transaction->transaction_id) {
        free(order_transaction->transaction_id);
        order_transaction->transaction_id = NULL;
    }
    if (order_transaction->order_id) {
        free(order_transaction->order_id);
        order_transaction->order_id = NULL;
    }
    if (order_transaction->parent_id) {
        free(order_transaction->parent_id);
        order_transaction->parent_id = NULL;
    }
    if (order_transaction->description) {
        free(order_transaction->description);
        order_transaction->description = NULL;
    }
    if (order_transaction->status) {
        free(order_transaction->status);
        order_transaction->status = NULL;
    }
    if (order_transaction->gateway) {
        free(order_transaction->gateway);
        order_transaction->gateway = NULL;
    }
    if (order_transaction->reference_number) {
        free(order_transaction->reference_number);
        order_transaction->reference_number = NULL;
    }
    if (order_transaction->currency) {
        free(order_transaction->currency);
        order_transaction->currency = NULL;
    }
    if (order_transaction->created_time) {
        a2_c_date_time_free(order_transaction->created_time);
        order_transaction->created_time = NULL;
    }
    if (order_transaction->settlement_currency) {
        free(order_transaction->settlement_currency);
        order_transaction->settlement_currency = NULL;
    }
    if (order_transaction->settlement_created_time) {
        a2_c_date_time_free(order_transaction->settlement_created_time);
        order_transaction->settlement_created_time = NULL;
    }
    if (order_transaction->card_brand) {
        free(order_transaction->card_brand);
        order_transaction->card_brand = NULL;
    }
    if (order_transaction->card_bin) {
        free(order_transaction->card_bin);
        order_transaction->card_bin = NULL;
    }
    if (order_transaction->card_last_four) {
        free(order_transaction->card_last_four);
        order_transaction->card_last_four = NULL;
    }
    if (order_transaction->avs_street_resp_code) {
        free(order_transaction->avs_street_resp_code);
        order_transaction->avs_street_resp_code = NULL;
    }
    if (order_transaction->avs_postal_resp_code) {
        free(order_transaction->avs_postal_resp_code);
        order_transaction->avs_postal_resp_code = NULL;
    }
    if (order_transaction->avs_message) {
        free(order_transaction->avs_message);
        order_transaction->avs_message = NULL;
    }
    if (order_transaction->cvv_code) {
        free(order_transaction->cvv_code);
        order_transaction->cvv_code = NULL;
    }
    if (order_transaction->cvv_message) {
        free(order_transaction->cvv_message);
        order_transaction->cvv_message = NULL;
    }
    if (order_transaction->additional_fields) {
        object_free(order_transaction->additional_fields);
        order_transaction->additional_fields = NULL;
    }
    if (order_transaction->custom_fields) {
        object_free(order_transaction->custom_fields);
        order_transaction->custom_fields = NULL;
    }
    free(order_transaction);
}

cJSON *order_transaction_convertToJSON(order_transaction_t *order_transaction) {
    cJSON *item = cJSON_CreateObject();

    // order_transaction->id
    if(order_transaction->id) {
    if(cJSON_AddStringToObject(item, "id", order_transaction->id) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->transaction_id
    if(order_transaction->transaction_id) {
    if(cJSON_AddStringToObject(item, "transaction_id", order_transaction->transaction_id) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->order_id
    if(order_transaction->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", order_transaction->order_id) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->parent_id
    if(order_transaction->parent_id) {
    if(cJSON_AddStringToObject(item, "parent_id", order_transaction->parent_id) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->description
    if(order_transaction->description) {
    if(cJSON_AddStringToObject(item, "description", order_transaction->description) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->status
    if(order_transaction->status) {
    if(cJSON_AddStringToObject(item, "status", order_transaction->status) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->gateway
    if(order_transaction->gateway) {
    if(cJSON_AddStringToObject(item, "gateway", order_transaction->gateway) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->reference_number
    if(order_transaction->reference_number) {
    if(cJSON_AddStringToObject(item, "reference_number", order_transaction->reference_number) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->currency
    if(order_transaction->currency) {
    if(cJSON_AddStringToObject(item, "currency", order_transaction->currency) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->amount
    if(order_transaction->amount) {
    if(cJSON_AddNumberToObject(item, "amount", order_transaction->amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_transaction->created_time
    if(order_transaction->created_time) {
    cJSON *created_time_local_JSON = a2_c_date_time_convertToJSON(order_transaction->created_time);
    if(created_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_time", created_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_transaction->settlement_currency
    if(order_transaction->settlement_currency) {
    if(cJSON_AddStringToObject(item, "settlement_currency", order_transaction->settlement_currency) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->settlement_amount
    if(order_transaction->settlement_amount) {
    if(cJSON_AddNumberToObject(item, "settlement_amount", order_transaction->settlement_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_transaction->settlement_created_time
    if(order_transaction->settlement_created_time) {
    cJSON *settlement_created_time_local_JSON = a2_c_date_time_convertToJSON(order_transaction->settlement_created_time);
    if(settlement_created_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "settlement_created_time", settlement_created_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_transaction->card_brand
    if(order_transaction->card_brand) {
    if(cJSON_AddStringToObject(item, "card_brand", order_transaction->card_brand) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->card_bin
    if(order_transaction->card_bin) {
    if(cJSON_AddStringToObject(item, "card_bin", order_transaction->card_bin) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->card_last_four
    if(order_transaction->card_last_four) {
    if(cJSON_AddStringToObject(item, "card_last_four", order_transaction->card_last_four) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->avs_street_resp_code
    if(order_transaction->avs_street_resp_code) {
    if(cJSON_AddStringToObject(item, "avs_street_resp_code", order_transaction->avs_street_resp_code) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->avs_postal_resp_code
    if(order_transaction->avs_postal_resp_code) {
    if(cJSON_AddStringToObject(item, "avs_postal_resp_code", order_transaction->avs_postal_resp_code) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->avs_message
    if(order_transaction->avs_message) {
    if(cJSON_AddStringToObject(item, "avs_message", order_transaction->avs_message) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->cvv_code
    if(order_transaction->cvv_code) {
    if(cJSON_AddStringToObject(item, "cvv_code", order_transaction->cvv_code) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->cvv_message
    if(order_transaction->cvv_message) {
    if(cJSON_AddStringToObject(item, "cvv_message", order_transaction->cvv_message) == NULL) {
    goto fail; //String
    }
    }


    // order_transaction->is_test_mode
    if(order_transaction->is_test_mode) {
    if(cJSON_AddBoolToObject(item, "is_test_mode", order_transaction->is_test_mode) == NULL) {
    goto fail; //Bool
    }
    }


    // order_transaction->additional_fields
    if(order_transaction->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_transaction->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_transaction->custom_fields
    if(order_transaction->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_transaction->custom_fields);
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

order_transaction_t *order_transaction_parseFromJSON(cJSON *order_transactionJSON){

    order_transaction_t *order_transaction_local_var = NULL;

    // define the local variable for order_transaction->created_time
    a2_c_date_time_t *created_time_local_nonprim = NULL;

    // define the local variable for order_transaction->settlement_created_time
    a2_c_date_time_t *settlement_created_time_local_nonprim = NULL;

    // order_transaction->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // order_transaction->transaction_id
    cJSON *transaction_id = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "transaction_id");
    if (cJSON_IsNull(transaction_id)) {
        transaction_id = NULL;
    }
    if (transaction_id) { 
    if(!cJSON_IsString(transaction_id) && !cJSON_IsNull(transaction_id))
    {
    goto end; //String
    }
    }

    // order_transaction->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // order_transaction->parent_id
    cJSON *parent_id = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "parent_id");
    if (cJSON_IsNull(parent_id)) {
        parent_id = NULL;
    }
    if (parent_id) { 
    if(!cJSON_IsString(parent_id) && !cJSON_IsNull(parent_id))
    {
    goto end; //String
    }
    }

    // order_transaction->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // order_transaction->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // order_transaction->gateway
    cJSON *gateway = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "gateway");
    if (cJSON_IsNull(gateway)) {
        gateway = NULL;
    }
    if (gateway) { 
    if(!cJSON_IsString(gateway) && !cJSON_IsNull(gateway))
    {
    goto end; //String
    }
    }

    // order_transaction->reference_number
    cJSON *reference_number = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "reference_number");
    if (cJSON_IsNull(reference_number)) {
        reference_number = NULL;
    }
    if (reference_number) { 
    if(!cJSON_IsString(reference_number) && !cJSON_IsNull(reference_number))
    {
    goto end; //String
    }
    }

    // order_transaction->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    if(!cJSON_IsString(currency) && !cJSON_IsNull(currency))
    {
    goto end; //String
    }
    }

    // order_transaction->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "amount");
    if (cJSON_IsNull(amount)) {
        amount = NULL;
    }
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    }

    // order_transaction->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    created_time_local_nonprim = a2_c_date_time_parseFromJSON(created_time); //nonprimitive
    }

    // order_transaction->settlement_currency
    cJSON *settlement_currency = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "settlement_currency");
    if (cJSON_IsNull(settlement_currency)) {
        settlement_currency = NULL;
    }
    if (settlement_currency) { 
    if(!cJSON_IsString(settlement_currency) && !cJSON_IsNull(settlement_currency))
    {
    goto end; //String
    }
    }

    // order_transaction->settlement_amount
    cJSON *settlement_amount = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "settlement_amount");
    if (cJSON_IsNull(settlement_amount)) {
        settlement_amount = NULL;
    }
    if (settlement_amount) { 
    if(!cJSON_IsNumber(settlement_amount))
    {
    goto end; //Numeric
    }
    }

    // order_transaction->settlement_created_time
    cJSON *settlement_created_time = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "settlement_created_time");
    if (cJSON_IsNull(settlement_created_time)) {
        settlement_created_time = NULL;
    }
    if (settlement_created_time) { 
    settlement_created_time_local_nonprim = a2_c_date_time_parseFromJSON(settlement_created_time); //nonprimitive
    }

    // order_transaction->card_brand
    cJSON *card_brand = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "card_brand");
    if (cJSON_IsNull(card_brand)) {
        card_brand = NULL;
    }
    if (card_brand) { 
    if(!cJSON_IsString(card_brand) && !cJSON_IsNull(card_brand))
    {
    goto end; //String
    }
    }

    // order_transaction->card_bin
    cJSON *card_bin = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "card_bin");
    if (cJSON_IsNull(card_bin)) {
        card_bin = NULL;
    }
    if (card_bin) { 
    if(!cJSON_IsString(card_bin) && !cJSON_IsNull(card_bin))
    {
    goto end; //String
    }
    }

    // order_transaction->card_last_four
    cJSON *card_last_four = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "card_last_four");
    if (cJSON_IsNull(card_last_four)) {
        card_last_four = NULL;
    }
    if (card_last_four) { 
    if(!cJSON_IsString(card_last_four) && !cJSON_IsNull(card_last_four))
    {
    goto end; //String
    }
    }

    // order_transaction->avs_street_resp_code
    cJSON *avs_street_resp_code = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "avs_street_resp_code");
    if (cJSON_IsNull(avs_street_resp_code)) {
        avs_street_resp_code = NULL;
    }
    if (avs_street_resp_code) { 
    if(!cJSON_IsString(avs_street_resp_code) && !cJSON_IsNull(avs_street_resp_code))
    {
    goto end; //String
    }
    }

    // order_transaction->avs_postal_resp_code
    cJSON *avs_postal_resp_code = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "avs_postal_resp_code");
    if (cJSON_IsNull(avs_postal_resp_code)) {
        avs_postal_resp_code = NULL;
    }
    if (avs_postal_resp_code) { 
    if(!cJSON_IsString(avs_postal_resp_code) && !cJSON_IsNull(avs_postal_resp_code))
    {
    goto end; //String
    }
    }

    // order_transaction->avs_message
    cJSON *avs_message = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "avs_message");
    if (cJSON_IsNull(avs_message)) {
        avs_message = NULL;
    }
    if (avs_message) { 
    if(!cJSON_IsString(avs_message) && !cJSON_IsNull(avs_message))
    {
    goto end; //String
    }
    }

    // order_transaction->cvv_code
    cJSON *cvv_code = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "cvv_code");
    if (cJSON_IsNull(cvv_code)) {
        cvv_code = NULL;
    }
    if (cvv_code) { 
    if(!cJSON_IsString(cvv_code) && !cJSON_IsNull(cvv_code))
    {
    goto end; //String
    }
    }

    // order_transaction->cvv_message
    cJSON *cvv_message = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "cvv_message");
    if (cJSON_IsNull(cvv_message)) {
        cvv_message = NULL;
    }
    if (cvv_message) { 
    if(!cJSON_IsString(cvv_message) && !cJSON_IsNull(cvv_message))
    {
    goto end; //String
    }
    }

    // order_transaction->is_test_mode
    cJSON *is_test_mode = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "is_test_mode");
    if (cJSON_IsNull(is_test_mode)) {
        is_test_mode = NULL;
    }
    if (is_test_mode) { 
    if(!cJSON_IsBool(is_test_mode))
    {
    goto end; //Bool
    }
    }

    // order_transaction->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_transaction->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_transactionJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_transaction_local_var = order_transaction_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        transaction_id && !cJSON_IsNull(transaction_id) ? strdup(transaction_id->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        parent_id && !cJSON_IsNull(parent_id) ? strdup(parent_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        gateway && !cJSON_IsNull(gateway) ? strdup(gateway->valuestring) : NULL,
        reference_number && !cJSON_IsNull(reference_number) ? strdup(reference_number->valuestring) : NULL,
        currency && !cJSON_IsNull(currency) ? strdup(currency->valuestring) : NULL,
        amount ? amount->valuedouble : 0,
        created_time ? created_time_local_nonprim : NULL,
        settlement_currency && !cJSON_IsNull(settlement_currency) ? strdup(settlement_currency->valuestring) : NULL,
        settlement_amount ? settlement_amount->valuedouble : 0,
        settlement_created_time ? settlement_created_time_local_nonprim : NULL,
        card_brand && !cJSON_IsNull(card_brand) ? strdup(card_brand->valuestring) : NULL,
        card_bin && !cJSON_IsNull(card_bin) ? strdup(card_bin->valuestring) : NULL,
        card_last_four && !cJSON_IsNull(card_last_four) ? strdup(card_last_four->valuestring) : NULL,
        avs_street_resp_code && !cJSON_IsNull(avs_street_resp_code) ? strdup(avs_street_resp_code->valuestring) : NULL,
        avs_postal_resp_code && !cJSON_IsNull(avs_postal_resp_code) ? strdup(avs_postal_resp_code->valuestring) : NULL,
        avs_message && !cJSON_IsNull(avs_message) ? strdup(avs_message->valuestring) : NULL,
        cvv_code && !cJSON_IsNull(cvv_code) ? strdup(cvv_code->valuestring) : NULL,
        cvv_message && !cJSON_IsNull(cvv_message) ? strdup(cvv_message->valuestring) : NULL,
        is_test_mode ? is_test_mode->valueint : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_transaction_local_var;
end:
    if (created_time_local_nonprim) {
        a2_c_date_time_free(created_time_local_nonprim);
        created_time_local_nonprim = NULL;
    }
    if (settlement_created_time_local_nonprim) {
        a2_c_date_time_free(settlement_created_time_local_nonprim);
        settlement_created_time_local_nonprim = NULL;
    }
    return NULL;

}
