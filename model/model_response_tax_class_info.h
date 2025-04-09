/*
 * model_response_tax_class_info.h
 *
 * 
 */

#ifndef _model_response_tax_class_info_H_
#define _model_response_tax_class_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct model_response_tax_class_info_t model_response_tax_class_info_t;

#include "object.h"
#include "response_tax_class_info_result.h"



typedef struct model_response_tax_class_info_t {
    int return_code; //numeric
    char *return_message; // string
    struct response_tax_class_info_result_t *result; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} model_response_tax_class_info_t;

__attribute__((deprecated)) model_response_tax_class_info_t *model_response_tax_class_info_create(
    int return_code,
    char *return_message,
    response_tax_class_info_result_t *result,
    object_t *additional_fields,
    object_t *custom_fields
);

void model_response_tax_class_info_free(model_response_tax_class_info_t *model_response_tax_class_info);

model_response_tax_class_info_t *model_response_tax_class_info_parseFromJSON(cJSON *model_response_tax_class_infoJSON);

cJSON *model_response_tax_class_info_convertToJSON(model_response_tax_class_info_t *model_response_tax_class_info);

#endif /* _model_response_tax_class_info_H_ */

