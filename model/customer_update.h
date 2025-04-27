/*
 * customer_update.h
 *
 * 
 */

#ifndef _customer_update_H_
#define _customer_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_update_t customer_update_t;

#include "customer_add_consents_inner.h"
#include "customer_update_address_inner.h"



typedef struct customer_update_t {
    char *id; // string
    char *group_id; // string
    char *group_ids; // string
    char *group; // string
    char *email; // string
    char *phone; // string
    char *first_name; // string
    char *last_name; // string
    char *birth_day; // string
    int news_letter_subscription; //boolean
    list_t *consents; //nonprimitive container
    char *tags; // string
    char *gender; // string
    char *note; // string
    char *status; // string
    char *store_id; // string
    list_t *address; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} customer_update_t;

__attribute__((deprecated)) customer_update_t *customer_update_create(
    char *id,
    char *group_id,
    char *group_ids,
    char *group,
    char *email,
    char *phone,
    char *first_name,
    char *last_name,
    char *birth_day,
    int news_letter_subscription,
    list_t *consents,
    char *tags,
    char *gender,
    char *note,
    char *status,
    char *store_id,
    list_t *address
);

void customer_update_free(customer_update_t *customer_update);

customer_update_t *customer_update_parseFromJSON(cJSON *customer_updateJSON);

cJSON *customer_update_convertToJSON(customer_update_t *customer_update);

#endif /* _customer_update_H_ */

