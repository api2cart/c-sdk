/*
 * product_count_200_response_result.h
 *
 * 
 */

#ifndef _product_count_200_response_result_H_
#define _product_count_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_count_200_response_result_t product_count_200_response_result_t;




typedef struct product_count_200_response_result_t {
    int products_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_count_200_response_result_t;

__attribute__((deprecated)) product_count_200_response_result_t *product_count_200_response_result_create(
    int products_count
);

void product_count_200_response_result_free(product_count_200_response_result_t *product_count_200_response_result);

product_count_200_response_result_t *product_count_200_response_result_parseFromJSON(cJSON *product_count_200_response_resultJSON);

cJSON *product_count_200_response_result_convertToJSON(product_count_200_response_result_t *product_count_200_response_result);

#endif /* _product_count_200_response_result_H_ */

