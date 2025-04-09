/*
 * model_return.h
 *
 * 
 */

#ifndef _ModelReturn_H_
#define _ModelReturn_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ModelReturn_t ModelReturn_t;

#include "object.h"
#include "return_order_product.h"
#include "return_status.h"



typedef struct ModelReturn_t {
    char *id; // string
    char *name; // string
    char *order_id; // string
    char *customer_id; // string
    char *store_id; // string
    char *created_at; // string
    char *modified_at; // string
    struct return_status_t *status; //model
    list_t *order_products; //nonprimitive container
    char *comment; // string
    char *staff_note; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} ModelReturn_t;

__attribute__((deprecated)) ModelReturn_t *ModelReturn_create(
    char *id,
    char *name,
    char *order_id,
    char *customer_id,
    char *store_id,
    char *created_at,
    char *modified_at,
    return_status_t *status,
    list_t *order_products,
    char *comment,
    char *staff_note,
    object_t *additional_fields,
    object_t *custom_fields
);

void ModelReturn_free(ModelReturn_t *ModelReturn);

ModelReturn_t *ModelReturn_parseFromJSON(cJSON *ModelReturnJSON);

cJSON *ModelReturn_convertToJSON(ModelReturn_t *ModelReturn);

#endif /* _ModelReturn_H_ */

