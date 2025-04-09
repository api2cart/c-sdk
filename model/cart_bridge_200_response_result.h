/*
 * cart_bridge_200_response_result.h
 *
 * 
 */

#ifndef _cart_bridge_200_response_result_H_
#define _cart_bridge_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_bridge_200_response_result_t cart_bridge_200_response_result_t;




typedef struct cart_bridge_200_response_result_t {
    char *store_key; // string
    char *bridge; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cart_bridge_200_response_result_t;

__attribute__((deprecated)) cart_bridge_200_response_result_t *cart_bridge_200_response_result_create(
    char *store_key,
    char *bridge
);

void cart_bridge_200_response_result_free(cart_bridge_200_response_result_t *cart_bridge_200_response_result);

cart_bridge_200_response_result_t *cart_bridge_200_response_result_parseFromJSON(cJSON *cart_bridge_200_response_resultJSON);

cJSON *cart_bridge_200_response_result_convertToJSON(cart_bridge_200_response_result_t *cart_bridge_200_response_result);

#endif /* _cart_bridge_200_response_result_H_ */

