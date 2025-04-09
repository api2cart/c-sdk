/*
 * cart_methods_200_response_result.h
 *
 * 
 */

#ifndef _cart_methods_200_response_result_H_
#define _cart_methods_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_methods_200_response_result_t cart_methods_200_response_result_t;




typedef struct cart_methods_200_response_result_t {
    list_t *method; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} cart_methods_200_response_result_t;

__attribute__((deprecated)) cart_methods_200_response_result_t *cart_methods_200_response_result_create(
    list_t *method
);

void cart_methods_200_response_result_free(cart_methods_200_response_result_t *cart_methods_200_response_result);

cart_methods_200_response_result_t *cart_methods_200_response_result_parseFromJSON(cJSON *cart_methods_200_response_resultJSON);

cJSON *cart_methods_200_response_result_convertToJSON(cart_methods_200_response_result_t *cart_methods_200_response_result);

#endif /* _cart_methods_200_response_result_H_ */

