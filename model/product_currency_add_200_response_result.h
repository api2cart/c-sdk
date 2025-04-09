/*
 * product_currency_add_200_response_result.h
 *
 * 
 */

#ifndef _product_currency_add_200_response_result_H_
#define _product_currency_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_currency_add_200_response_result_t product_currency_add_200_response_result_t;




typedef struct product_currency_add_200_response_result_t {
    char *currency_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_currency_add_200_response_result_t;

__attribute__((deprecated)) product_currency_add_200_response_result_t *product_currency_add_200_response_result_create(
    char *currency_id
);

void product_currency_add_200_response_result_free(product_currency_add_200_response_result_t *product_currency_add_200_response_result);

product_currency_add_200_response_result_t *product_currency_add_200_response_result_parseFromJSON(cJSON *product_currency_add_200_response_resultJSON);

cJSON *product_currency_add_200_response_result_convertToJSON(product_currency_add_200_response_result_t *product_currency_add_200_response_result);

#endif /* _product_currency_add_200_response_result_H_ */

