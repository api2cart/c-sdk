/*
 * order_shipping_method.h
 *
 * 
 */

#ifndef _order_shipping_method_H_
#define _order_shipping_method_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_shipping_method_t order_shipping_method_t;

#include "object.h"



typedef struct order_shipping_method_t {
    char *name; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_shipping_method_t;

__attribute__((deprecated)) order_shipping_method_t *order_shipping_method_create(
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_shipping_method_free(order_shipping_method_t *order_shipping_method);

order_shipping_method_t *order_shipping_method_parseFromJSON(cJSON *order_shipping_methodJSON);

cJSON *order_shipping_method_convertToJSON(order_shipping_method_t *order_shipping_method);

#endif /* _order_shipping_method_H_ */

