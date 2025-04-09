/*
 * script.h
 *
 * 
 */

#ifndef _script_H_
#define _script_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct script_t script_t;

#include "a2_c_date_time.h"
#include "object.h"



typedef struct script_t {
    char *id; // string
    char *name; // string
    char *description; // string
    char *src; // string
    char *scope; // string
    char *event; // string
    char *load_method; // string
    char *html; // string
    struct a2_c_date_time_t *created_time; //model
    struct a2_c_date_time_t *modified_time; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} script_t;

__attribute__((deprecated)) script_t *script_create(
    char *id,
    char *name,
    char *description,
    char *src,
    char *scope,
    char *event,
    char *load_method,
    char *html,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *modified_time,
    object_t *additional_fields,
    object_t *custom_fields
);

void script_free(script_t *script);

script_t *script_parseFromJSON(cJSON *scriptJSON);

cJSON *script_convertToJSON(script_t *script);

#endif /* _script_H_ */

