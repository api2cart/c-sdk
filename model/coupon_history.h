/*
 * coupon_history.h
 *
 * 
 */

#ifndef _coupon_history_H_
#define _coupon_history_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct coupon_history_t coupon_history_t;

#include "object.h"



typedef struct coupon_history_t {
    char *order_id; // string
    double amount; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} coupon_history_t;

__attribute__((deprecated)) coupon_history_t *coupon_history_create(
    char *order_id,
    double amount,
    object_t *additional_fields,
    object_t *custom_fields
);

void coupon_history_free(coupon_history_t *coupon_history);

coupon_history_t *coupon_history_parseFromJSON(cJSON *coupon_historyJSON);

cJSON *coupon_history_convertToJSON(coupon_history_t *coupon_history);

#endif /* _coupon_history_H_ */

