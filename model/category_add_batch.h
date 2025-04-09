/*
 * category_add_batch.h
 *
 * 
 */

#ifndef _category_add_batch_H_
#define _category_add_batch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_add_batch_t category_add_batch_t;

#include "category_add_batch_payload_inner.h"



typedef struct category_add_batch_t {
    list_t *payload; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} category_add_batch_t;

__attribute__((deprecated)) category_add_batch_t *category_add_batch_create(
    list_t *payload
);

void category_add_batch_free(category_add_batch_t *category_add_batch);

category_add_batch_t *category_add_batch_parseFromJSON(cJSON *category_add_batchJSON);

cJSON *category_add_batch_convertToJSON(category_add_batch_t *category_add_batch);

#endif /* _category_add_batch_H_ */

