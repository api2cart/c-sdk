/*
 * cart_plugin_list_200_response_result.h
 *
 * 
 */

#ifndef _cart_plugin_list_200_response_result_H_
#define _cart_plugin_list_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_plugin_list_200_response_result_t cart_plugin_list_200_response_result_t;

#include "plugin_list.h"



typedef struct cart_plugin_list_200_response_result_t {
    int all_plugins; //numeric
    list_t *plugins; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} cart_plugin_list_200_response_result_t;

__attribute__((deprecated)) cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result_create(
    int all_plugins,
    list_t *plugins
);

void cart_plugin_list_200_response_result_free(cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result);

cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result_parseFromJSON(cJSON *cart_plugin_list_200_response_resultJSON);

cJSON *cart_plugin_list_200_response_result_convertToJSON(cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result);

#endif /* _cart_plugin_list_200_response_result_H_ */

