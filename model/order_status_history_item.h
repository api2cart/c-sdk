/*
 * order_status_history_item.h
 *
 * 
 */

#ifndef _order_status_history_item_H_
#define _order_status_history_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_status_history_item_t order_status_history_item_t;

#include "a2_c_date_time.h"
#include "object.h"



typedef struct order_status_history_item_t {
    char *id; // string
    char *name; // string
    struct a2_c_date_time_t *modified_time; //model
    int notify; //boolean
    char *comment; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_status_history_item_t;

__attribute__((deprecated)) order_status_history_item_t *order_status_history_item_create(
    char *id,
    char *name,
    a2_c_date_time_t *modified_time,
    int notify,
    char *comment,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_status_history_item_free(order_status_history_item_t *order_status_history_item);

order_status_history_item_t *order_status_history_item_parseFromJSON(cJSON *order_status_history_itemJSON);

cJSON *order_status_history_item_convertToJSON(order_status_history_item_t *order_status_history_item);

#endif /* _order_status_history_item_H_ */

