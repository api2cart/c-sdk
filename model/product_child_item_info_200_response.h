/*
 * product_child_item_info_200_response.h
 *
 * 
 */

#ifndef _product_child_item_info_200_response_H_
#define _product_child_item_info_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_child_item_info_200_response_t product_child_item_info_200_response_t;

#include "child.h"



typedef struct product_child_item_info_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct child_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} product_child_item_info_200_response_t;

__attribute__((deprecated)) product_child_item_info_200_response_t *product_child_item_info_200_response_create(
    int return_code,
    char *return_message,
    child_t *result
);

void product_child_item_info_200_response_free(product_child_item_info_200_response_t *product_child_item_info_200_response);

product_child_item_info_200_response_t *product_child_item_info_200_response_parseFromJSON(cJSON *product_child_item_info_200_responseJSON);

cJSON *product_child_item_info_200_response_convertToJSON(product_child_item_info_200_response_t *product_child_item_info_200_response);

#endif /* _product_child_item_info_200_response_H_ */

