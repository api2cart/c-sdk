/*
 * cart_channel.h
 *
 * 
 */

#ifndef _cart_channel_H_
#define _cart_channel_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_channel_t cart_channel_t;

#include "object.h"



typedef struct cart_channel_t {
    char *id; // string
    char *name; // string
    char *platform; // string
    int is_enabled; //boolean
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} cart_channel_t;

__attribute__((deprecated)) cart_channel_t *cart_channel_create(
    char *id,
    char *name,
    char *platform,
    int is_enabled,
    object_t *additional_fields,
    object_t *custom_fields
);

void cart_channel_free(cart_channel_t *cart_channel);

cart_channel_t *cart_channel_parseFromJSON(cJSON *cart_channelJSON);

cJSON *cart_channel_convertToJSON(cart_channel_t *cart_channel);

#endif /* _cart_channel_H_ */

