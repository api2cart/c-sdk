/*
 * basket_info_200_response.h
 *
 * 
 */

#ifndef _basket_info_200_response_H_
#define _basket_info_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct basket_info_200_response_t basket_info_200_response_t;

#include "basket.h"



typedef struct basket_info_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct basket_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} basket_info_200_response_t;

__attribute__((deprecated)) basket_info_200_response_t *basket_info_200_response_create(
    int return_code,
    char *return_message,
    basket_t *result
);

void basket_info_200_response_free(basket_info_200_response_t *basket_info_200_response);

basket_info_200_response_t *basket_info_200_response_parseFromJSON(cJSON *basket_info_200_responseJSON);

cJSON *basket_info_200_response_convertToJSON(basket_info_200_response_t *basket_info_200_response);

#endif /* _basket_info_200_response_H_ */

