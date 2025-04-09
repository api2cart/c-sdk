/*
 * currency.h
 *
 * 
 */

#ifndef _currency_H_
#define _currency_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct currency_t currency_t;

#include "object.h"



typedef struct currency_t {
    char *id; // string
    char *name; // string
    char *iso3; // string
    char *symbol_left; // string
    char *symbol_right; // string
    double rate; //numeric
    int avail; //boolean
    int _default; //boolean
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} currency_t;

__attribute__((deprecated)) currency_t *currency_create(
    char *id,
    char *name,
    char *iso3,
    char *symbol_left,
    char *symbol_right,
    double rate,
    int avail,
    int _default,
    object_t *additional_fields,
    object_t *custom_fields
);

void currency_free(currency_t *currency);

currency_t *currency_parseFromJSON(cJSON *currencyJSON);

cJSON *currency_convertToJSON(currency_t *currency);

#endif /* _currency_H_ */

