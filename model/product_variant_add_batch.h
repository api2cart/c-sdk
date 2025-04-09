/*
 * product_variant_add_batch.h
 *
 * 
 */

#ifndef _product_variant_add_batch_H_
#define _product_variant_add_batch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_variant_add_batch_t product_variant_add_batch_t;

#include "product_variant_add_batch_payload_inner.h"



typedef struct product_variant_add_batch_t {
    int clear_cache; //boolean
    int reindex; //boolean
    list_t *payload; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_add_batch_t;

__attribute__((deprecated)) product_variant_add_batch_t *product_variant_add_batch_create(
    int clear_cache,
    int reindex,
    list_t *payload
);

void product_variant_add_batch_free(product_variant_add_batch_t *product_variant_add_batch);

product_variant_add_batch_t *product_variant_add_batch_parseFromJSON(cJSON *product_variant_add_batchJSON);

cJSON *product_variant_add_batch_convertToJSON(product_variant_add_batch_t *product_variant_add_batch);

#endif /* _product_variant_add_batch_H_ */

