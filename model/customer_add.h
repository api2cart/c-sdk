/*
 * customer_add.h
 *
 * 
 */

#ifndef _customer_add_H_
#define _customer_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_add_t customer_add_t;

#include "customer_add_address_inner.h"
#include "customer_add_consents_inner.h"



typedef struct customer_add_t {
    char *email; // string
    char *first_name; // string
    char *last_name; // string
    char *password; // string
    char *group; // string
    char *group_id; // string
    char *group_ids; // string
    char *status; // string
    char *created_time; // string
    char *modified_time; // string
    char *login; // string
    char *last_login; // string
    char *birth_day; // string
    int news_letter_subscription; //boolean
    list_t *consents; //nonprimitive container
    char *gender; // string
    char *website; // string
    char *fax; // string
    char *company; // string
    char *phone; // string
    char *note; // string
    char *country; // string
    char *store_id; // string
    list_t *address; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} customer_add_t;

__attribute__((deprecated)) customer_add_t *customer_add_create(
    char *email,
    char *first_name,
    char *last_name,
    char *password,
    char *group,
    char *group_id,
    char *group_ids,
    char *status,
    char *created_time,
    char *modified_time,
    char *login,
    char *last_login,
    char *birth_day,
    int news_letter_subscription,
    list_t *consents,
    char *gender,
    char *website,
    char *fax,
    char *company,
    char *phone,
    char *note,
    char *country,
    char *store_id,
    list_t *address
);

void customer_add_free(customer_add_t *customer_add);

customer_add_t *customer_add_parseFromJSON(cJSON *customer_addJSON);

cJSON *customer_add_convertToJSON(customer_add_t *customer_add);

#endif /* _customer_add_H_ */

