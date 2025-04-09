/*
 * gift_card.h
 *
 * 
 */

#ifndef _gift_card_H_
#define _gift_card_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gift_card_t gift_card_t;

#include "coupon_history.h"
#include "object.h"



typedef struct gift_card_t {
    char *id; // string
    char *code; // string
    char *name; // string
    char *type; // string
    char *currency_code; // string
    double amount; //numeric
    double initial_amount; //numeric
    char *status; // string
    char *created_at; // string
    char *avail_to; // string
    char *free_product_ids; // string
    char *message; // string
    char *issuer_email; // string
    char *recipient_email; // string
    char *issuer_name; // string
    char *recipient_name; // string
    list_t *usage_history; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} gift_card_t;

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
);

void gift_card_free(gift_card_t *gift_card);

gift_card_t *gift_card_parseFromJSON(cJSON *gift_cardJSON);

cJSON *gift_card_convertToJSON(gift_card_t *gift_card);

#endif /* _gift_card_H_ */

