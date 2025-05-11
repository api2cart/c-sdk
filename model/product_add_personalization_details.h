/*
 * product_add_personalization_details.h
 *
 * Defines personalization settings for the listing. To enable personalization, is_personalizable must be set to true. When enabled, additional fields may be used to configure the personalization experience, including whether it is required (personalization_is_required), the maximum character limit (personalization_char_count_max), and buyer instructions (personalization_instructions). All related fields are only applicable if personalization is enabled.
 */

#ifndef _product_add_personalization_details_H_
#define _product_add_personalization_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_personalization_details_t product_add_personalization_details_t;




typedef struct product_add_personalization_details_t {
    int is_personalizable; //boolean
    int personalization_is_required; //boolean
    int personalization_char_count_max; //numeric
    char *personalization_instructions; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_personalization_details_t;

__attribute__((deprecated)) product_add_personalization_details_t *product_add_personalization_details_create(
    int is_personalizable,
    int personalization_is_required,
    int personalization_char_count_max,
    char *personalization_instructions
);

void product_add_personalization_details_free(product_add_personalization_details_t *product_add_personalization_details);

product_add_personalization_details_t *product_add_personalization_details_parseFromJSON(cJSON *product_add_personalization_detailsJSON);

cJSON *product_add_personalization_details_convertToJSON(product_add_personalization_details_t *product_add_personalization_details);

#endif /* _product_add_personalization_details_H_ */

