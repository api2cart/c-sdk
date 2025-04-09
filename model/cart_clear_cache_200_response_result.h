/*
 * cart_clear_cache_200_response_result.h
 *
 * 
 */

#ifndef _cart_clear_cache_200_response_result_H_
#define _cart_clear_cache_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_clear_cache_200_response_result_t cart_clear_cache_200_response_result_t;




typedef struct cart_clear_cache_200_response_result_t {
    char *cache_cleared; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cart_clear_cache_200_response_result_t;

__attribute__((deprecated)) cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result_create(
    char *cache_cleared
);

void cart_clear_cache_200_response_result_free(cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result);

cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result_parseFromJSON(cJSON *cart_clear_cache_200_response_resultJSON);

cJSON *cart_clear_cache_200_response_result_convertToJSON(cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result);

#endif /* _cart_clear_cache_200_response_result_H_ */

