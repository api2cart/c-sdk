/*
 * product_review.h
 *
 * 
 */

#ifndef _product_review_H_
#define _product_review_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_review_t product_review_t;

#include "a2_c_date_time.h"
#include "media.h"
#include "object.h"
#include "product_review_rating.h"



typedef struct product_review_t {
    char *id; // string
    char *product_id; // string
    char *customer_id; // string
    char *nick_name; // string
    char *email; // string
    char *summary; // string
    char *message; // string
    double rating; //numeric
    list_t *ratings; //nonprimitive container
    char *status; // string
    struct a2_c_date_time_t *created_time; //model
    list_t *medias; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_review_t;

__attribute__((deprecated)) product_review_t *product_review_create(
    char *id,
    char *product_id,
    char *customer_id,
    char *nick_name,
    char *email,
    char *summary,
    char *message,
    double rating,
    list_t *ratings,
    char *status,
    a2_c_date_time_t *created_time,
    list_t *medias,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_review_free(product_review_t *product_review);

product_review_t *product_review_parseFromJSON(cJSON *product_reviewJSON);

cJSON *product_review_convertToJSON(product_review_t *product_review);

#endif /* _product_review_H_ */

