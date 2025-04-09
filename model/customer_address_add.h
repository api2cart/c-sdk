/*
 * customer_address_add.h
 *
 * 
 */

#ifndef _customer_address_add_H_
#define _customer_address_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_address_add_t customer_address_add_t;




typedef struct customer_address_add_t {
    char *customer_id; // string
    char *store_id; // string
    char *first_name; // string
    char *last_name; // string
    char *company; // string
    char *address1; // string
    char *address2; // string
    char *city; // string
    char *country; // string
    char *state; // string
    char *postcode; // string
    char *identification_number; // string
    list_t *types; //primitive container
    int _default; //boolean
    char *phone; // string
    char *phone_mobile; // string
    char *fax; // string
    char *website; // string
    char *gender; // string
    char *tax_id; // string
    char *alias; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_address_add_t;

__attribute__((deprecated)) customer_address_add_t *customer_address_add_create(
    char *customer_id,
    char *store_id,
    char *first_name,
    char *last_name,
    char *company,
    char *address1,
    char *address2,
    char *city,
    char *country,
    char *state,
    char *postcode,
    char *identification_number,
    list_t *types,
    int _default,
    char *phone,
    char *phone_mobile,
    char *fax,
    char *website,
    char *gender,
    char *tax_id,
    char *alias
);

void customer_address_add_free(customer_address_add_t *customer_address_add);

customer_address_add_t *customer_address_add_parseFromJSON(cJSON *customer_address_addJSON);

cJSON *customer_address_add_convertToJSON(customer_address_add_t *customer_address_add);

#endif /* _customer_address_add_H_ */

