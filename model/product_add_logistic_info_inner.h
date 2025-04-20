/*
 * product_add_logistic_info_inner.h
 *
 * 
 */

#ifndef _product_add_logistic_info_inner_H_
#define _product_add_logistic_info_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_logistic_info_inner_t product_add_logistic_info_inner_t;




typedef struct product_add_logistic_info_inner_t {
    double logistic_id; //numeric
    int is_free; //boolean
    double shipping_fee; //numeric
    double size_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_logistic_info_inner_t;

__attribute__((deprecated)) product_add_logistic_info_inner_t *product_add_logistic_info_inner_create(
    double logistic_id,
    int is_free,
    double shipping_fee,
    double size_id
);

void product_add_logistic_info_inner_free(product_add_logistic_info_inner_t *product_add_logistic_info_inner);

product_add_logistic_info_inner_t *product_add_logistic_info_inner_parseFromJSON(cJSON *product_add_logistic_info_innerJSON);

cJSON *product_add_logistic_info_inner_convertToJSON(product_add_logistic_info_inner_t *product_add_logistic_info_inner);

#endif /* _product_add_logistic_info_inner_H_ */

