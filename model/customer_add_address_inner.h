/*
 * customer_add_address_inner.h
 *
 * 
 */

#ifndef _customer_add_address_inner_H_
#define _customer_add_address_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_add_address_inner_t customer_add_address_inner_t;




typedef struct customer_add_address_inner_t {
    char *address_book_type; // string
    char *address_book_first_name; // string
    char *address_book_last_name; // string
    char *address_book_company; // string
    char *address_book_fax; // string
    char *address_book_phone; // string
    char *address_book_phone_mobile; // string
    char *address_book_website; // string
    char *address_book_address1; // string
    char *address_book_address2; // string
    char *address_book_city; // string
    char *address_book_country; // string
    char *address_book_state; // string
    char *address_book_postcode; // string
    char *address_book_gender; // string
    char *address_book_region; // string
    int address_book_default; //boolean
    char *address_book_tax_id; // string
    char *address_book_identification_number; // string
    char *address_book_alias; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_add_address_inner_t;

__attribute__((deprecated)) customer_add_address_inner_t *customer_add_address_inner_create(
    char *address_book_type,
    char *address_book_first_name,
    char *address_book_last_name,
    char *address_book_company,
    char *address_book_fax,
    char *address_book_phone,
    char *address_book_phone_mobile,
    char *address_book_website,
    char *address_book_address1,
    char *address_book_address2,
    char *address_book_city,
    char *address_book_country,
    char *address_book_state,
    char *address_book_postcode,
    char *address_book_gender,
    char *address_book_region,
    int address_book_default,
    char *address_book_tax_id,
    char *address_book_identification_number,
    char *address_book_alias
);

void customer_add_address_inner_free(customer_add_address_inner_t *customer_add_address_inner);

customer_add_address_inner_t *customer_add_address_inner_parseFromJSON(cJSON *customer_add_address_innerJSON);

cJSON *customer_add_address_inner_convertToJSON(customer_add_address_inner_t *customer_add_address_inner);

#endif /* _customer_add_address_inner_H_ */

