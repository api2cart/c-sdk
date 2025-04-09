/*
 * carrier.h
 *
 * 
 */

#ifndef _carrier_H_
#define _carrier_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct carrier_t carrier_t;

#include "object.h"
#include "order_shipping_method.h"



typedef struct carrier_t {
    char *id; // string
    char *name; // string
    int active; //boolean
    list_t *shipping_methods; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} carrier_t;

__attribute__((deprecated)) carrier_t *carrier_create(
    char *id,
    char *name,
    int active,
    list_t *shipping_methods,
    object_t *additional_fields,
    object_t *custom_fields
);

void carrier_free(carrier_t *carrier);

carrier_t *carrier_parseFromJSON(cJSON *carrierJSON);

cJSON *carrier_convertToJSON(carrier_t *carrier);

#endif /* _carrier_H_ */

