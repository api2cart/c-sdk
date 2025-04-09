/*
 * cart_config_update.h
 *
 * 
 */

#ifndef _cart_config_update_H_
#define _cart_config_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_config_update_t cart_config_update_t;

#include "object.h"



typedef struct cart_config_update_t {
    char *db_tables_prefix; // string
    object_t *custom_fields; //object
    char *store_id; // string
    char *user_agent; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cart_config_update_t;

__attribute__((deprecated)) cart_config_update_t *cart_config_update_create(
    char *db_tables_prefix,
    object_t *custom_fields,
    char *store_id,
    char *user_agent
);

void cart_config_update_free(cart_config_update_t *cart_config_update);

cart_config_update_t *cart_config_update_parseFromJSON(cJSON *cart_config_updateJSON);

cJSON *cart_config_update_convertToJSON(cart_config_update_t *cart_config_update);

#endif /* _cart_config_update_H_ */

