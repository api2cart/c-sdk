/*
 * product_option_add_200_response_result.h
 *
 * 
 */

#ifndef _product_option_add_200_response_result_H_
#define _product_option_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_option_add_200_response_result_t product_option_add_200_response_result_t;




typedef struct product_option_add_200_response_result_t {
    char *option_id; // string
    char *product_option_id; // string
    char *product_value_ids; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_option_add_200_response_result_t;

__attribute__((deprecated)) product_option_add_200_response_result_t *product_option_add_200_response_result_create(
    char *option_id,
    char *product_option_id,
    char *product_value_ids
);

void product_option_add_200_response_result_free(product_option_add_200_response_result_t *product_option_add_200_response_result);

product_option_add_200_response_result_t *product_option_add_200_response_result_parseFromJSON(cJSON *product_option_add_200_response_resultJSON);

cJSON *product_option_add_200_response_result_convertToJSON(product_option_add_200_response_result_t *product_option_add_200_response_result);

#endif /* _product_option_add_200_response_result_H_ */

