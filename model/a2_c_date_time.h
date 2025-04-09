/*
 * a2_c_date_time.h
 *
 * 
 */

#ifndef _a2_c_date_time_H_
#define _a2_c_date_time_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct a2_c_date_time_t a2_c_date_time_t;

#include "object.h"



typedef struct a2_c_date_time_t {
    char *value; // string
    char *format; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} a2_c_date_time_t;

__attribute__((deprecated)) a2_c_date_time_t *a2_c_date_time_create(
    char *value,
    char *format,
    object_t *additional_fields,
    object_t *custom_fields
);

void a2_c_date_time_free(a2_c_date_time_t *a2_c_date_time);

a2_c_date_time_t *a2_c_date_time_parseFromJSON(cJSON *a2_c_date_timeJSON);

cJSON *a2_c_date_time_convertToJSON(a2_c_date_time_t *a2_c_date_time);

#endif /* _a2_c_date_time_H_ */

