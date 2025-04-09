/*
 * response_tax_class_info_result.h
 *
 * 
 */

#ifndef _response_tax_class_info_result_H_
#define _response_tax_class_info_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_tax_class_info_result_t response_tax_class_info_result_t;

#include "a2_c_date_time.h"
#include "object.h"
#include "tax_class_rate.h"



typedef struct response_tax_class_info_result_t {
    char *id; // string
    char *name; // string
    int avail; //boolean
    double tax; //numeric
    int tax_type; //numeric
    struct a2_c_date_time_t *created_at; //model
    struct a2_c_date_time_t *modified_at; //model
    list_t *tax_rates; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} response_tax_class_info_result_t;

__attribute__((deprecated)) response_tax_class_info_result_t *response_tax_class_info_result_create(
    char *id,
    char *name,
    int avail,
    double tax,
    int tax_type,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    list_t *tax_rates,
    object_t *additional_fields,
    object_t *custom_fields
);

void response_tax_class_info_result_free(response_tax_class_info_result_t *response_tax_class_info_result);

response_tax_class_info_result_t *response_tax_class_info_result_parseFromJSON(cJSON *response_tax_class_info_resultJSON);

cJSON *response_tax_class_info_result_convertToJSON(response_tax_class_info_result_t *response_tax_class_info_result);

#endif /* _response_tax_class_info_result_H_ */

