/*
 * customer.h
 *
 * 
 */

#ifndef _customer_H_
#define _customer_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_t customer_t;

#include "a2_c_date_time.h"
#include "customer_address.h"
#include "customer_consent.h"
#include "customer_group.h"
#include "object.h"



typedef struct customer_t {
    char *id; // string
    char *email; // string
    char *first_name; // string
    char *last_name; // string
    char *phone; // string
    struct a2_c_date_time_t *created_time; //model
    struct a2_c_date_time_t *modified_time; //model
    list_t *group; //nonprimitive container
    char *login; // string
    struct a2_c_date_time_t *last_login; //model
    struct a2_c_date_time_t *birth_day; //model
    char *status; // string
    int news_letter_subscription; //boolean
    list_t *consents; //nonprimitive container
    char *gender; // string
    list_t *stores_ids; //primitive container
    char *website; // string
    char *fax; // string
    char *company; // string
    char *ip_address; // string
    list_t *address_book; //nonprimitive container
    char *lang_id; // string
    int orders_count; //numeric
    char *last_order_id; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} customer_t;

__attribute__((deprecated)) customer_t *customer_create(
    char *id,
    char *email,
    char *first_name,
    char *last_name,
    char *phone,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *modified_time,
    list_t *group,
    char *login,
    a2_c_date_time_t *last_login,
    a2_c_date_time_t *birth_day,
    char *status,
    int news_letter_subscription,
    list_t *consents,
    char *gender,
    list_t *stores_ids,
    char *website,
    char *fax,
    char *company,
    char *ip_address,
    list_t *address_book,
    char *lang_id,
    int orders_count,
    char *last_order_id,
    object_t *additional_fields,
    object_t *custom_fields
);

void customer_free(customer_t *customer);

customer_t *customer_parseFromJSON(cJSON *customerJSON);

cJSON *customer_convertToJSON(customer_t *customer);

#endif /* _customer_H_ */

