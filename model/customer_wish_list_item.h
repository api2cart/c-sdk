/*
 * customer_wish_list_item.h
 *
 * 
 */

#ifndef _customer_wish_list_item_H_
#define _customer_wish_list_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_wish_list_item_t customer_wish_list_item_t;

#include "a2_c_date_time.h"
#include "object.h"



typedef struct customer_wish_list_item_t {
    char *id; // string
    char *product_id; // string
    char *child_id; // string
    struct a2_c_date_time_t *created_time; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} customer_wish_list_item_t;

__attribute__((deprecated)) customer_wish_list_item_t *customer_wish_list_item_create(
    char *id,
    char *product_id,
    char *child_id,
    a2_c_date_time_t *created_time,
    object_t *additional_fields,
    object_t *custom_fields
);

void customer_wish_list_item_free(customer_wish_list_item_t *customer_wish_list_item);

customer_wish_list_item_t *customer_wish_list_item_parseFromJSON(cJSON *customer_wish_list_itemJSON);

cJSON *customer_wish_list_item_convertToJSON(customer_wish_list_item_t *customer_wish_list_item);

#endif /* _customer_wish_list_item_H_ */

