/*
 * order_payment_method.h
 *
 * 
 */

#ifndef _order_payment_method_H_
#define _order_payment_method_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_payment_method_t order_payment_method_t;

#include "object.h"



typedef struct order_payment_method_t {
    char *name; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_payment_method_t;

__attribute__((deprecated)) order_payment_method_t *order_payment_method_create(
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_payment_method_free(order_payment_method_t *order_payment_method);

order_payment_method_t *order_payment_method_parseFromJSON(cJSON *order_payment_methodJSON);

cJSON *order_payment_method_convertToJSON(order_payment_method_t *order_payment_method);

#endif /* _order_payment_method_H_ */

