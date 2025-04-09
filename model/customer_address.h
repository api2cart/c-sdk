/*
 * customer_address.h
 *
 * 
 */

#ifndef _customer_address_H_
#define _customer_address_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_address_t customer_address_t;

#include "country.h"
#include "object.h"
#include "state.h"



typedef struct customer_address_t {
    char *id; // string
    char *type; // string
    char *first_name; // string
    char *last_name; // string
    char *postcode; // string
    char *address1; // string
    char *address2; // string
    char *phone; // string
    char *phone_mobile; // string
    char *city; // string
    struct country_t *country; //model
    struct state_t *state; //model
    char *company; // string
    char *fax; // string
    char *website; // string
    char *gender; // string
    char *region; // string
    int _default; //boolean
    char *tax_id; // string
    char *identification_number; // string
    char *alias; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} customer_address_t;

__attribute__((deprecated)) customer_address_t *customer_address_create(
    char *id,
    char *type,
    char *first_name,
    char *last_name,
    char *postcode,
    char *address1,
    char *address2,
    char *phone,
    char *phone_mobile,
    char *city,
    country_t *country,
    state_t *state,
    char *company,
    char *fax,
    char *website,
    char *gender,
    char *region,
    int _default,
    char *tax_id,
    char *identification_number,
    char *alias,
    object_t *additional_fields,
    object_t *custom_fields
);

void customer_address_free(customer_address_t *customer_address);

customer_address_t *customer_address_parseFromJSON(cJSON *customer_addressJSON);

cJSON *customer_address_convertToJSON(customer_address_t *customer_address);

#endif /* _customer_address_H_ */

