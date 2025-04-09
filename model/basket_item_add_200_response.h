/*
 * basket_item_add_200_response.h
 *
 * 
 */

#ifndef _basket_item_add_200_response_H_
#define _basket_item_add_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct basket_item_add_200_response_t basket_item_add_200_response_t;

#include "basket_item_add_200_response_result.h"



typedef struct basket_item_add_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct basket_item_add_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} basket_item_add_200_response_t;

__attribute__((deprecated)) basket_item_add_200_response_t *basket_item_add_200_response_create(
    int return_code,
    char *return_message,
    basket_item_add_200_response_result_t *result
);

void basket_item_add_200_response_free(basket_item_add_200_response_t *basket_item_add_200_response);

basket_item_add_200_response_t *basket_item_add_200_response_parseFromJSON(cJSON *basket_item_add_200_responseJSON);

cJSON *basket_item_add_200_response_convertToJSON(basket_item_add_200_response_t *basket_item_add_200_response);

#endif /* _basket_item_add_200_response_H_ */

