/*
 * customer_consent.h
 *
 * 
 */

#ifndef _customer_consent_H_
#define _customer_consent_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_consent_t customer_consent_t;

#include "object.h"



typedef struct customer_consent_t {
    char *id; // string
    char *type; // string
    char *status; // string
    char *source; // string
    char *opt_in_level; // string
    char *modified_time; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} customer_consent_t;

__attribute__((deprecated)) customer_consent_t *customer_consent_create(
    char *id,
    char *type,
    char *status,
    char *source,
    char *opt_in_level,
    char *modified_time,
    object_t *additional_fields,
    object_t *custom_fields
);

void customer_consent_free(customer_consent_t *customer_consent);

customer_consent_t *customer_consent_parseFromJSON(cJSON *customer_consentJSON);

cJSON *customer_consent_convertToJSON(customer_consent_t *customer_consent);

#endif /* _customer_consent_H_ */

