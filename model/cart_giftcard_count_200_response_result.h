/*
 * cart_giftcard_count_200_response_result.h
 *
 * 
 */

#ifndef _cart_giftcard_count_200_response_result_H_
#define _cart_giftcard_count_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_giftcard_count_200_response_result_t cart_giftcard_count_200_response_result_t;




typedef struct cart_giftcard_count_200_response_result_t {
    char *gift_cards_count; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cart_giftcard_count_200_response_result_t;

__attribute__((deprecated)) cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result_create(
    char *gift_cards_count
);

void cart_giftcard_count_200_response_result_free(cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result);

cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result_parseFromJSON(cJSON *cart_giftcard_count_200_response_resultJSON);

cJSON *cart_giftcard_count_200_response_result_convertToJSON(cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result);

#endif /* _cart_giftcard_count_200_response_result_H_ */

