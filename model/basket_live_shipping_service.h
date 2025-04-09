/*
 * basket_live_shipping_service.h
 *
 * 
 */

#ifndef _basket_live_shipping_service_H_
#define _basket_live_shipping_service_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct basket_live_shipping_service_t basket_live_shipping_service_t;

#include "object.h"



typedef struct basket_live_shipping_service_t {
    char *id; // string
    char *name; // string
    char *callback; // string
    int callback_err_cnt; //numeric
    int enabled_on_store; //boolean
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} basket_live_shipping_service_t;

__attribute__((deprecated)) basket_live_shipping_service_t *basket_live_shipping_service_create(
    char *id,
    char *name,
    char *callback,
    int callback_err_cnt,
    int enabled_on_store,
    object_t *additional_fields,
    object_t *custom_fields
);

void basket_live_shipping_service_free(basket_live_shipping_service_t *basket_live_shipping_service);

basket_live_shipping_service_t *basket_live_shipping_service_parseFromJSON(cJSON *basket_live_shipping_serviceJSON);

cJSON *basket_live_shipping_service_convertToJSON(basket_live_shipping_service_t *basket_live_shipping_service);

#endif /* _basket_live_shipping_service_H_ */

