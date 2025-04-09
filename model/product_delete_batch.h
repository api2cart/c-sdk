/*
 * product_delete_batch.h
 *
 * 
 */

#ifndef _product_delete_batch_H_
#define _product_delete_batch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_delete_batch_t product_delete_batch_t;

#include "product_delete_batch_payload_inner.h"



typedef struct product_delete_batch_t {
    list_t *payload; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_delete_batch_t;

__attribute__((deprecated)) product_delete_batch_t *product_delete_batch_create(
    list_t *payload
);

void product_delete_batch_free(product_delete_batch_t *product_delete_batch);

product_delete_batch_t *product_delete_batch_parseFromJSON(cJSON *product_delete_batchJSON);

cJSON *product_delete_batch_convertToJSON(product_delete_batch_t *product_delete_batch);

#endif /* _product_delete_batch_H_ */

