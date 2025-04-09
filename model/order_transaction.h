/*
 * order_transaction.h
 *
 * 
 */

#ifndef _order_transaction_H_
#define _order_transaction_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_transaction_t order_transaction_t;

#include "a2_c_date_time.h"
#include "object.h"



typedef struct order_transaction_t {
    char *id; // string
    char *transaction_id; // string
    char *order_id; // string
    char *parent_id; // string
    char *description; // string
    char *status; // string
    char *gateway; // string
    char *reference_number; // string
    char *currency; // string
    double amount; //numeric
    struct a2_c_date_time_t *created_time; //model
    char *settlement_currency; // string
    double settlement_amount; //numeric
    struct a2_c_date_time_t *settlement_created_time; //model
    char *card_brand; // string
    char *card_bin; // string
    char *card_last_four; // string
    char *avs_street_resp_code; // string
    char *avs_postal_resp_code; // string
    char *avs_message; // string
    char *cvv_code; // string
    char *cvv_message; // string
    int is_test_mode; //boolean
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_transaction_t;

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
);

void order_transaction_free(order_transaction_t *order_transaction);

order_transaction_t *order_transaction_parseFromJSON(cJSON *order_transactionJSON);

cJSON *order_transaction_convertToJSON(order_transaction_t *order_transaction);

#endif /* _order_transaction_H_ */

