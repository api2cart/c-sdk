/*
 * product_variant_delete_batch_payload_inner.h
 *
 * 
 */

#ifndef _product_variant_delete_batch_payload_inner_H_
#define _product_variant_delete_batch_payload_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_variant_delete_batch_payload_inner_t product_variant_delete_batch_payload_inner_t;




typedef struct product_variant_delete_batch_payload_inner_t {
    char *product_id; // string
    char *id; // string
    char *store_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_delete_batch_payload_inner_t;

__attribute__((deprecated)) product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner_create(
    char *product_id,
    char *id,
    char *store_id
);

void product_variant_delete_batch_payload_inner_free(product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner);

product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner_parseFromJSON(cJSON *product_variant_delete_batch_payload_innerJSON);

cJSON *product_variant_delete_batch_payload_inner_convertToJSON(product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner);

#endif /* _product_variant_delete_batch_payload_inner_H_ */

