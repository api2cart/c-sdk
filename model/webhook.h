/*
 * webhook.h
 *
 * 
 */

#ifndef _webhook_H_
#define _webhook_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_t webhook_t;

#include "object.h"



typedef struct webhook_t {
    int id; //numeric
    char *label; // string
    char *store_id; // string
    char *lang_id; // string
    int active; //boolean
    char *callback; // string
    char *fields; // string
    char *response_fields; // string
    char *created_at; // string
    char *updated_at; // string
    char *entity; // string
    char *action; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_t;

__attribute__((deprecated)) webhook_t *webhook_create(
    int id,
    char *label,
    char *store_id,
    char *lang_id,
    int active,
    char *callback,
    char *fields,
    char *response_fields,
    char *created_at,
    char *updated_at,
    char *entity,
    char *action,
    object_t *additional_fields,
    object_t *custom_fields
);

void webhook_free(webhook_t *webhook);

webhook_t *webhook_parseFromJSON(cJSON *webhookJSON);

cJSON *webhook_convertToJSON(webhook_t *webhook);

#endif /* _webhook_H_ */

