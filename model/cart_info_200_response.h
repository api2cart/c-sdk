/*
 * cart_info_200_response.h
 *
 * 
 */

#ifndef _cart_info_200_response_H_
#define _cart_info_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_info_200_response_t cart_info_200_response_t;

#include "cart.h"



typedef struct cart_info_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct cart_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} cart_info_200_response_t;

__attribute__((deprecated)) cart_info_200_response_t *cart_info_200_response_create(
    int return_code,
    char *return_message,
    cart_t *result
);

void cart_info_200_response_free(cart_info_200_response_t *cart_info_200_response);

cart_info_200_response_t *cart_info_200_response_parseFromJSON(cJSON *cart_info_200_responseJSON);

cJSON *cart_info_200_response_convertToJSON(cart_info_200_response_t *cart_info_200_response);

#endif /* _cart_info_200_response_H_ */

