/*
 * subscriber.h
 *
 * 
 */

#ifndef _subscriber_H_
#define _subscriber_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscriber_t subscriber_t;

#include "object.h"



typedef struct subscriber_t {
    char *id; // string
    char *customer_id; // string
    char *email; // string
    int subscribed; //boolean
    char *first_name; // string
    char *last_name; // string
    list_t *stores_ids; //primitive container
    char *created_time; // string
    char *modified_time; // string
    char *lang_id; // string
    char *gender; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} subscriber_t;

__attribute__((deprecated)) subscriber_t *subscriber_create(
    char *id,
    char *customer_id,
    char *email,
    int subscribed,
    char *first_name,
    char *last_name,
    list_t *stores_ids,
    char *created_time,
    char *modified_time,
    char *lang_id,
    char *gender,
    object_t *additional_fields,
    object_t *custom_fields
);

void subscriber_free(subscriber_t *subscriber);

subscriber_t *subscriber_parseFromJSON(cJSON *subscriberJSON);

cJSON *subscriber_convertToJSON(subscriber_t *subscriber);

#endif /* _subscriber_H_ */

