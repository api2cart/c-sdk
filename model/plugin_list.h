/*
 * plugin_list.h
 *
 * 
 */

#ifndef _plugin_list_H_
#define _plugin_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct plugin_list_t plugin_list_t;

#include "object.h"
#include "plugin.h"



typedef struct plugin_list_t {
    int all_plugins; //numeric
    list_t *plugins; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} plugin_list_t;

__attribute__((deprecated)) plugin_list_t *plugin_list_create(
    int all_plugins,
    list_t *plugins,
    object_t *additional_fields,
    object_t *custom_fields
);

void plugin_list_free(plugin_list_t *plugin_list);

plugin_list_t *plugin_list_parseFromJSON(cJSON *plugin_listJSON);

cJSON *plugin_list_convertToJSON(plugin_list_t *plugin_list);

#endif /* _plugin_list_H_ */

