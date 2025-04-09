/*
 * cart_delete_200_response.h
 *
 * 
 */

#ifndef _cart_delete_200_response_H_
#define _cart_delete_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_delete_200_response_t cart_delete_200_response_t;

#include "cart_delete_200_response_result.h"



typedef struct cart_delete_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct cart_delete_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} cart_delete_200_response_t;

__attribute__((deprecated)) cart_delete_200_response_t *cart_delete_200_response_create(
    int return_code,
    char *return_message,
    cart_delete_200_response_result_t *result
);

void cart_delete_200_response_free(cart_delete_200_response_t *cart_delete_200_response);

cart_delete_200_response_t *cart_delete_200_response_parseFromJSON(cJSON *cart_delete_200_responseJSON);

cJSON *cart_delete_200_response_convertToJSON(cart_delete_200_response_t *cart_delete_200_response);

#endif /* _cart_delete_200_response_H_ */

