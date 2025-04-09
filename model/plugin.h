/*
 * plugin.h
 *
 * 
 */

#ifndef _plugin_H_
#define _plugin_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct plugin_t plugin_t;

#include "object.h"



typedef struct plugin_t {
    char *name; // string
    int active; //boolean
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} plugin_t;

__attribute__((deprecated)) plugin_t *plugin_create(
    char *name,
    int active,
    object_t *additional_fields,
    object_t *custom_fields
);

void plugin_free(plugin_t *plugin);

plugin_t *plugin_parseFromJSON(cJSON *pluginJSON);

cJSON *plugin_convertToJSON(plugin_t *plugin);

#endif /* _plugin_H_ */

