/*
 * product_review_rating.h
 *
 * 
 */

#ifndef _product_review_rating_H_
#define _product_review_rating_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_review_rating_t product_review_rating_t;

#include "object.h"



typedef struct product_review_rating_t {
    char *id; // string
    char *name; // string
    int value; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_review_rating_t;

__attribute__((deprecated)) product_review_rating_t *product_review_rating_create(
    char *id,
    char *name,
    int value,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_review_rating_free(product_review_rating_t *product_review_rating);

product_review_rating_t *product_review_rating_parseFromJSON(cJSON *product_review_ratingJSON);

cJSON *product_review_rating_convertToJSON(product_review_rating_t *product_review_rating);

#endif /* _product_review_rating_H_ */

