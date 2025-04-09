/*
 * coupon_code.h
 *
 * 
 */

#ifndef _coupon_code_H_
#define _coupon_code_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct coupon_code_t coupon_code_t;

#include "object.h"



typedef struct coupon_code_t {
    char *id; // string
    char *code; // string
    int used_times; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} coupon_code_t;

__attribute__((deprecated)) coupon_code_t *coupon_code_create(
    char *id,
    char *code,
    int used_times,
    object_t *additional_fields,
    object_t *custom_fields
);

void coupon_code_free(coupon_code_t *coupon_code);

coupon_code_t *coupon_code_parseFromJSON(cJSON *coupon_codeJSON);

cJSON *coupon_code_convertToJSON(coupon_code_t *coupon_code);

#endif /* _coupon_code_H_ */

