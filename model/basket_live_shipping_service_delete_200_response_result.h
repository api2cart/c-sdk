/*
 * basket_live_shipping_service_delete_200_response_result.h
 *
 * 
 */

#ifndef _basket_live_shipping_service_delete_200_response_result_H_
#define _basket_live_shipping_service_delete_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct basket_live_shipping_service_delete_200_response_result_t basket_live_shipping_service_delete_200_response_result_t;




typedef struct basket_live_shipping_service_delete_200_response_result_t {
    int status; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} basket_live_shipping_service_delete_200_response_result_t;

__attribute__((deprecated)) basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result_create(
    int status
);

void basket_live_shipping_service_delete_200_response_result_free(basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result);

basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result_parseFromJSON(cJSON *basket_live_shipping_service_delete_200_response_resultJSON);

cJSON *basket_live_shipping_service_delete_200_response_result_convertToJSON(basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result);

#endif /* _basket_live_shipping_service_delete_200_response_result_H_ */

