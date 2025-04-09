/*
 * account_cart_add_hybris_websites_inner.h
 *
 * 
 */

#ifndef _account_cart_add_hybris_websites_inner_H_
#define _account_cart_add_hybris_websites_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_cart_add_hybris_websites_inner_t account_cart_add_hybris_websites_inner_t;




typedef struct account_cart_add_hybris_websites_inner_t {
    char *uid; // string
    char *url; // string
    list_t *store_ids; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} account_cart_add_hybris_websites_inner_t;

__attribute__((deprecated)) account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner_create(
    char *uid,
    char *url,
    list_t *store_ids
);

void account_cart_add_hybris_websites_inner_free(account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner);

account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner_parseFromJSON(cJSON *account_cart_add_hybris_websites_innerJSON);

cJSON *account_cart_add_hybris_websites_inner_convertToJSON(account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner);

#endif /* _account_cart_add_hybris_websites_inner_H_ */

