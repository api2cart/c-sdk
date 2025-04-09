/*
 * customer_add_consents_inner.h
 *
 * 
 */

#ifndef _customer_add_consents_inner_H_
#define _customer_add_consents_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_add_consents_inner_t customer_add_consents_inner_t;


// Enum TYPE for customer_add_consents_inner

typedef enum  { api2cart_openapi_customer_add_consents_inner_TYPE_NULL = 0, api2cart_openapi_customer_add_consents_inner_TYPE_email, api2cart_openapi_customer_add_consents_inner_TYPE_sms } api2cart_openapi_customer_add_consents_inner_TYPE_e;

char* customer_add_consents_inner_type_ToString(api2cart_openapi_customer_add_consents_inner_TYPE_e type);

api2cart_openapi_customer_add_consents_inner_TYPE_e customer_add_consents_inner_type_FromString(char* type);



typedef struct customer_add_consents_inner_t {
    api2cart_openapi_customer_add_consents_inner_TYPE_e type; //enum
    char *status; // string
    char *opt_in_level; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_add_consents_inner_t;

__attribute__((deprecated)) customer_add_consents_inner_t *customer_add_consents_inner_create(
    api2cart_openapi_customer_add_consents_inner_TYPE_e type,
    char *status,
    char *opt_in_level
);

void customer_add_consents_inner_free(customer_add_consents_inner_t *customer_add_consents_inner);

customer_add_consents_inner_t *customer_add_consents_inner_parseFromJSON(cJSON *customer_add_consents_innerJSON);

cJSON *customer_add_consents_inner_convertToJSON(customer_add_consents_inner_t *customer_add_consents_inner);

#endif /* _customer_add_consents_inner_H_ */

