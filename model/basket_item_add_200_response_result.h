/*
 * basket_item_add_200_response_result.h
 *
 * 
 */

#ifndef _basket_item_add_200_response_result_H_
#define _basket_item_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct basket_item_add_200_response_result_t basket_item_add_200_response_result_t;




typedef struct basket_item_add_200_response_result_t {
    int added; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} basket_item_add_200_response_result_t;

__attribute__((deprecated)) basket_item_add_200_response_result_t *basket_item_add_200_response_result_create(
    int added
);

void basket_item_add_200_response_result_free(basket_item_add_200_response_result_t *basket_item_add_200_response_result);

basket_item_add_200_response_result_t *basket_item_add_200_response_result_parseFromJSON(cJSON *basket_item_add_200_response_resultJSON);

cJSON *basket_item_add_200_response_result_convertToJSON(basket_item_add_200_response_result_t *basket_item_add_200_response_result);

#endif /* _basket_item_add_200_response_result_H_ */

