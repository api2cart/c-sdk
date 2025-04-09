/*
 * order_status.h
 *
 * 
 */

#ifndef _order_status_H_
#define _order_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_status_t order_status_t;

#include "object.h"
#include "order_status_history_item.h"
#include "order_status_refund.h"



typedef struct order_status_t {
    char *id; // string
    char *name; // string
    list_t *history; //nonprimitive container
    struct order_status_refund_t *refund_info; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_status_t;

__attribute__((deprecated)) order_status_t *order_status_create(
    char *id,
    char *name,
    list_t *history,
    order_status_refund_t *refund_info,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_status_free(order_status_t *order_status);

order_status_t *order_status_parseFromJSON(cJSON *order_statusJSON);

cJSON *order_status_convertToJSON(order_status_t *order_status);

#endif /* _order_status_H_ */

