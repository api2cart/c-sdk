/*
 * product_option_add_200_response.h
 *
 * 
 */

#ifndef _product_option_add_200_response_H_
#define _product_option_add_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_option_add_200_response_t product_option_add_200_response_t;

#include "product_option_add_200_response_result.h"



typedef struct product_option_add_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct product_option_add_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} product_option_add_200_response_t;

__attribute__((deprecated)) product_option_add_200_response_t *product_option_add_200_response_create(
    int return_code,
    char *return_message,
    product_option_add_200_response_result_t *result
);

void product_option_add_200_response_free(product_option_add_200_response_t *product_option_add_200_response);

product_option_add_200_response_t *product_option_add_200_response_parseFromJSON(cJSON *product_option_add_200_responseJSON);

cJSON *product_option_add_200_response_convertToJSON(product_option_add_200_response_t *product_option_add_200_response);

#endif /* _product_option_add_200_response_H_ */

