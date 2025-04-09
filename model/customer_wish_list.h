/*
 * customer_wish_list.h
 *
 * 
 */

#ifndef _customer_wish_list_H_
#define _customer_wish_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_wish_list_t customer_wish_list_t;

#include "a2_c_date_time.h"
#include "customer_wish_list_item.h"
#include "object.h"



typedef struct customer_wish_list_t {
    char *id; // string
    char *name; // string
    char *description; // string
    char *is_public; // string
    struct a2_c_date_time_t *created_at; //model
    struct a2_c_date_time_t *modified_at; //model
    list_t *products; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} customer_wish_list_t;

__attribute__((deprecated)) customer_wish_list_t *customer_wish_list_create(
    char *id,
    char *name,
    char *description,
    char *is_public,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    list_t *products,
    object_t *additional_fields,
    object_t *custom_fields
);

void customer_wish_list_free(customer_wish_list_t *customer_wish_list);

customer_wish_list_t *customer_wish_list_parseFromJSON(cJSON *customer_wish_listJSON);

cJSON *customer_wish_list_convertToJSON(customer_wish_list_t *customer_wish_list);

#endif /* _customer_wish_list_H_ */

