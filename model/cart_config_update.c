#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_config_update.h"



static cart_config_update_t *cart_config_update_create_internal(
    char *db_tables_prefix,
    object_t *custom_fields,
    char *store_id,
    char *user_agent
    ) {
    cart_config_update_t *cart_config_update_local_var = malloc(sizeof(cart_config_update_t));
    if (!cart_config_update_local_var) {
        return NULL;
    }
    cart_config_update_local_var->db_tables_prefix = db_tables_prefix;
    cart_config_update_local_var->custom_fields = custom_fields;
    cart_config_update_local_var->store_id = store_id;
    cart_config_update_local_var->user_agent = user_agent;

    cart_config_update_local_var->_library_owned = 1;
    return cart_config_update_local_var;
}

__attribute__((deprecated)) cart_config_update_t *cart_config_update_create(
    char *db_tables_prefix,
    object_t *custom_fields,
    char *store_id,
    char *user_agent
    ) {
    return cart_config_update_create_internal (
        db_tables_prefix,
        custom_fields,
        store_id,
        user_agent
        );
}

void cart_config_update_free(cart_config_update_t *cart_config_update) {
    if(NULL == cart_config_update){
        return ;
    }
    if(cart_config_update->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_config_update_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_config_update->db_tables_prefix) {
        free(cart_config_update->db_tables_prefix);
        cart_config_update->db_tables_prefix = NULL;
    }
    if (cart_config_update->custom_fields) {
        object_free(cart_config_update->custom_fields);
        cart_config_update->custom_fields = NULL;
    }
    if (cart_config_update->store_id) {
        free(cart_config_update->store_id);
        cart_config_update->store_id = NULL;
    }
    if (cart_config_update->user_agent) {
        free(cart_config_update->user_agent);
        cart_config_update->user_agent = NULL;
    }
    free(cart_config_update);
}

cJSON *cart_config_update_convertToJSON(cart_config_update_t *cart_config_update) {
    cJSON *item = cJSON_CreateObject();

    // cart_config_update->db_tables_prefix
    if(cart_config_update->db_tables_prefix) {
    if(cJSON_AddStringToObject(item, "db_tables_prefix", cart_config_update->db_tables_prefix) == NULL) {
    goto fail; //String
    }
    }


    // cart_config_update->custom_fields
    if(cart_config_update->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(cart_config_update->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_config_update->store_id
    if(cart_config_update->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", cart_config_update->store_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_config_update->user_agent
    if(cart_config_update->user_agent) {
    if(cJSON_AddStringToObject(item, "user_agent", cart_config_update->user_agent) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cart_config_update_t *cart_config_update_parseFromJSON(cJSON *cart_config_updateJSON){

    cart_config_update_t *cart_config_update_local_var = NULL;

    // cart_config_update->db_tables_prefix
    cJSON *db_tables_prefix = cJSON_GetObjectItemCaseSensitive(cart_config_updateJSON, "db_tables_prefix");
    if (cJSON_IsNull(db_tables_prefix)) {
        db_tables_prefix = NULL;
    }
    if (db_tables_prefix) { 
    if(!cJSON_IsString(db_tables_prefix) && !cJSON_IsNull(db_tables_prefix))
    {
    goto end; //String
    }
    }

    // cart_config_update->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(cart_config_updateJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }

    // cart_config_update->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(cart_config_updateJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // cart_config_update->user_agent
    cJSON *user_agent = cJSON_GetObjectItemCaseSensitive(cart_config_updateJSON, "user_agent");
    if (cJSON_IsNull(user_agent)) {
        user_agent = NULL;
    }
    if (user_agent) { 
    if(!cJSON_IsString(user_agent) && !cJSON_IsNull(user_agent))
    {
    goto end; //String
    }
    }


    cart_config_update_local_var = cart_config_update_create_internal (
        db_tables_prefix && !cJSON_IsNull(db_tables_prefix) ? strdup(db_tables_prefix->valuestring) : NULL,
        custom_fields ? custom_fields_local_object : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        user_agent && !cJSON_IsNull(user_agent) ? strdup(user_agent->valuestring) : NULL
        );

    return cart_config_update_local_var;
end:
    return NULL;

}
