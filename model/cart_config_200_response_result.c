#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_config_200_response_result.h"



static cart_config_200_response_result_t *cart_config_200_response_result_create_internal(
    char *store_name,
    char *store_url,
    char *db_prefix
    ) {
    cart_config_200_response_result_t *cart_config_200_response_result_local_var = malloc(sizeof(cart_config_200_response_result_t));
    if (!cart_config_200_response_result_local_var) {
        return NULL;
    }
    cart_config_200_response_result_local_var->store_name = store_name;
    cart_config_200_response_result_local_var->store_url = store_url;
    cart_config_200_response_result_local_var->db_prefix = db_prefix;

    cart_config_200_response_result_local_var->_library_owned = 1;
    return cart_config_200_response_result_local_var;
}

__attribute__((deprecated)) cart_config_200_response_result_t *cart_config_200_response_result_create(
    char *store_name,
    char *store_url,
    char *db_prefix
    ) {
    return cart_config_200_response_result_create_internal (
        store_name,
        store_url,
        db_prefix
        );
}

void cart_config_200_response_result_free(cart_config_200_response_result_t *cart_config_200_response_result) {
    if(NULL == cart_config_200_response_result){
        return ;
    }
    if(cart_config_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_config_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_config_200_response_result->store_name) {
        free(cart_config_200_response_result->store_name);
        cart_config_200_response_result->store_name = NULL;
    }
    if (cart_config_200_response_result->store_url) {
        free(cart_config_200_response_result->store_url);
        cart_config_200_response_result->store_url = NULL;
    }
    if (cart_config_200_response_result->db_prefix) {
        free(cart_config_200_response_result->db_prefix);
        cart_config_200_response_result->db_prefix = NULL;
    }
    free(cart_config_200_response_result);
}

cJSON *cart_config_200_response_result_convertToJSON(cart_config_200_response_result_t *cart_config_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_config_200_response_result->store_name
    if(cart_config_200_response_result->store_name) {
    if(cJSON_AddStringToObject(item, "store_name", cart_config_200_response_result->store_name) == NULL) {
    goto fail; //String
    }
    }


    // cart_config_200_response_result->store_url
    if(cart_config_200_response_result->store_url) {
    if(cJSON_AddStringToObject(item, "store_url", cart_config_200_response_result->store_url) == NULL) {
    goto fail; //String
    }
    }


    // cart_config_200_response_result->db_prefix
    if(cart_config_200_response_result->db_prefix) {
    if(cJSON_AddStringToObject(item, "db_prefix", cart_config_200_response_result->db_prefix) == NULL) {
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

cart_config_200_response_result_t *cart_config_200_response_result_parseFromJSON(cJSON *cart_config_200_response_resultJSON){

    cart_config_200_response_result_t *cart_config_200_response_result_local_var = NULL;

    // cart_config_200_response_result->store_name
    cJSON *store_name = cJSON_GetObjectItemCaseSensitive(cart_config_200_response_resultJSON, "store_name");
    if (cJSON_IsNull(store_name)) {
        store_name = NULL;
    }
    if (store_name) { 
    if(!cJSON_IsString(store_name) && !cJSON_IsNull(store_name))
    {
    goto end; //String
    }
    }

    // cart_config_200_response_result->store_url
    cJSON *store_url = cJSON_GetObjectItemCaseSensitive(cart_config_200_response_resultJSON, "store_url");
    if (cJSON_IsNull(store_url)) {
        store_url = NULL;
    }
    if (store_url) { 
    if(!cJSON_IsString(store_url) && !cJSON_IsNull(store_url))
    {
    goto end; //String
    }
    }

    // cart_config_200_response_result->db_prefix
    cJSON *db_prefix = cJSON_GetObjectItemCaseSensitive(cart_config_200_response_resultJSON, "db_prefix");
    if (cJSON_IsNull(db_prefix)) {
        db_prefix = NULL;
    }
    if (db_prefix) { 
    if(!cJSON_IsString(db_prefix) && !cJSON_IsNull(db_prefix))
    {
    goto end; //String
    }
    }


    cart_config_200_response_result_local_var = cart_config_200_response_result_create_internal (
        store_name && !cJSON_IsNull(store_name) ? strdup(store_name->valuestring) : NULL,
        store_url && !cJSON_IsNull(store_url) ? strdup(store_url->valuestring) : NULL,
        db_prefix && !cJSON_IsNull(db_prefix) ? strdup(db_prefix->valuestring) : NULL
        );

    return cart_config_200_response_result_local_var;
end:
    return NULL;

}
