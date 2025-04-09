/*
 * product_update_batch.h
 *
 * 
 */

#ifndef _product_update_batch_H_
#define _product_update_batch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_update_batch_t product_update_batch_t;

#include "product_update_batch_payload_inner.h"

// Enum NESTEDITEMSUPDATEBEHAVIOUR for product_update_batch

typedef enum  { api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_NULL = 0, api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_replace, api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_merge } api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_e;

char* product_update_batch_nested_items_update_behaviour_ToString(api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_e nested_items_update_behaviour);

api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_e product_update_batch_nested_items_update_behaviour_FromString(char* nested_items_update_behaviour);



typedef struct product_update_batch_t {
    api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_e nested_items_update_behaviour; //enum
    int clear_cache; //boolean
    int reindex; //boolean
    list_t *payload; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_update_batch_t;

__attribute__((deprecated)) product_update_batch_t *product_update_batch_create(
    api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_e nested_items_update_behaviour,
    int clear_cache,
    int reindex,
    list_t *payload
);

void product_update_batch_free(product_update_batch_t *product_update_batch);

product_update_batch_t *product_update_batch_parseFromJSON(cJSON *product_update_batchJSON);

cJSON *product_update_batch_convertToJSON(product_update_batch_t *product_update_batch);

#endif /* _product_update_batch_H_ */

