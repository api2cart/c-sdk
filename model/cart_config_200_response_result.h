/*
 * cart_config_200_response_result.h
 *
 * 
 */

#ifndef _cart_config_200_response_result_H_
#define _cart_config_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_config_200_response_result_t cart_config_200_response_result_t;




typedef struct cart_config_200_response_result_t {
    char *store_name; // string
    char *store_url; // string
    char *db_prefix; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cart_config_200_response_result_t;

__attribute__((deprecated)) cart_config_200_response_result_t *cart_config_200_response_result_create(
    char *store_name,
    char *store_url,
    char *db_prefix
);

void cart_config_200_response_result_free(cart_config_200_response_result_t *cart_config_200_response_result);

cart_config_200_response_result_t *cart_config_200_response_result_parseFromJSON(cJSON *cart_config_200_response_resultJSON);

cJSON *cart_config_200_response_result_convertToJSON(cart_config_200_response_result_t *cart_config_200_response_result);

#endif /* _cart_config_200_response_result_H_ */

