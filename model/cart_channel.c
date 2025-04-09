#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_channel.h"



static cart_channel_t *cart_channel_create_internal(
    char *id,
    char *name,
    char *platform,
    int is_enabled,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    cart_channel_t *cart_channel_local_var = malloc(sizeof(cart_channel_t));
    if (!cart_channel_local_var) {
        return NULL;
    }
    cart_channel_local_var->id = id;
    cart_channel_local_var->name = name;
    cart_channel_local_var->platform = platform;
    cart_channel_local_var->is_enabled = is_enabled;
    cart_channel_local_var->additional_fields = additional_fields;
    cart_channel_local_var->custom_fields = custom_fields;

    cart_channel_local_var->_library_owned = 1;
    return cart_channel_local_var;
}

__attribute__((deprecated)) cart_channel_t *cart_channel_create(
    char *id,
    char *name,
    char *platform,
    int is_enabled,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return cart_channel_create_internal (
        id,
        name,
        platform,
        is_enabled,
        additional_fields,
        custom_fields
        );
}

void cart_channel_free(cart_channel_t *cart_channel) {
    if(NULL == cart_channel){
        return ;
    }
    if(cart_channel->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_channel_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_channel->id) {
        free(cart_channel->id);
        cart_channel->id = NULL;
    }
    if (cart_channel->name) {
        free(cart_channel->name);
        cart_channel->name = NULL;
    }
    if (cart_channel->platform) {
        free(cart_channel->platform);
        cart_channel->platform = NULL;
    }
    if (cart_channel->additional_fields) {
        object_free(cart_channel->additional_fields);
        cart_channel->additional_fields = NULL;
    }
    if (cart_channel->custom_fields) {
        object_free(cart_channel->custom_fields);
        cart_channel->custom_fields = NULL;
    }
    free(cart_channel);
}

cJSON *cart_channel_convertToJSON(cart_channel_t *cart_channel) {
    cJSON *item = cJSON_CreateObject();

    // cart_channel->id
    if(cart_channel->id) {
    if(cJSON_AddStringToObject(item, "id", cart_channel->id) == NULL) {
    goto fail; //String
    }
    }


    // cart_channel->name
    if(cart_channel->name) {
    if(cJSON_AddStringToObject(item, "name", cart_channel->name) == NULL) {
    goto fail; //String
    }
    }


    // cart_channel->platform
    if(cart_channel->platform) {
    if(cJSON_AddStringToObject(item, "platform", cart_channel->platform) == NULL) {
    goto fail; //String
    }
    }


    // cart_channel->is_enabled
    if(cart_channel->is_enabled) {
    if(cJSON_AddBoolToObject(item, "is_enabled", cart_channel->is_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_channel->additional_fields
    if(cart_channel->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(cart_channel->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_channel->custom_fields
    if(cart_channel->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(cart_channel->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cart_channel_t *cart_channel_parseFromJSON(cJSON *cart_channelJSON){

    cart_channel_t *cart_channel_local_var = NULL;

    // cart_channel->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cart_channelJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cart_channel->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cart_channelJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cart_channel->platform
    cJSON *platform = cJSON_GetObjectItemCaseSensitive(cart_channelJSON, "platform");
    if (cJSON_IsNull(platform)) {
        platform = NULL;
    }
    if (platform) { 
    if(!cJSON_IsString(platform) && !cJSON_IsNull(platform))
    {
    goto end; //String
    }
    }

    // cart_channel->is_enabled
    cJSON *is_enabled = cJSON_GetObjectItemCaseSensitive(cart_channelJSON, "is_enabled");
    if (cJSON_IsNull(is_enabled)) {
        is_enabled = NULL;
    }
    if (is_enabled) { 
    if(!cJSON_IsBool(is_enabled))
    {
    goto end; //Bool
    }
    }

    // cart_channel->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(cart_channelJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // cart_channel->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(cart_channelJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    cart_channel_local_var = cart_channel_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        platform && !cJSON_IsNull(platform) ? strdup(platform->valuestring) : NULL,
        is_enabled ? is_enabled->valueint : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return cart_channel_local_var;
end:
    return NULL;

}
