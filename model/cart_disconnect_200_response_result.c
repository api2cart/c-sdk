#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_disconnect_200_response_result.h"



static cart_disconnect_200_response_result_t *cart_disconnect_200_response_result_create_internal(
    char *connection
    ) {
    cart_disconnect_200_response_result_t *cart_disconnect_200_response_result_local_var = malloc(sizeof(cart_disconnect_200_response_result_t));
    if (!cart_disconnect_200_response_result_local_var) {
        return NULL;
    }
    cart_disconnect_200_response_result_local_var->connection = connection;

    cart_disconnect_200_response_result_local_var->_library_owned = 1;
    return cart_disconnect_200_response_result_local_var;
}

__attribute__((deprecated)) cart_disconnect_200_response_result_t *cart_disconnect_200_response_result_create(
    char *connection
    ) {
    return cart_disconnect_200_response_result_create_internal (
        connection
        );
}

void cart_disconnect_200_response_result_free(cart_disconnect_200_response_result_t *cart_disconnect_200_response_result) {
    if(NULL == cart_disconnect_200_response_result){
        return ;
    }
    if(cart_disconnect_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_disconnect_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_disconnect_200_response_result->connection) {
        free(cart_disconnect_200_response_result->connection);
        cart_disconnect_200_response_result->connection = NULL;
    }
    free(cart_disconnect_200_response_result);
}

cJSON *cart_disconnect_200_response_result_convertToJSON(cart_disconnect_200_response_result_t *cart_disconnect_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_disconnect_200_response_result->connection
    if(cart_disconnect_200_response_result->connection) {
    if(cJSON_AddStringToObject(item, "connection", cart_disconnect_200_response_result->connection) == NULL) {
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

cart_disconnect_200_response_result_t *cart_disconnect_200_response_result_parseFromJSON(cJSON *cart_disconnect_200_response_resultJSON){

    cart_disconnect_200_response_result_t *cart_disconnect_200_response_result_local_var = NULL;

    // cart_disconnect_200_response_result->connection
    cJSON *connection = cJSON_GetObjectItemCaseSensitive(cart_disconnect_200_response_resultJSON, "connection");
    if (cJSON_IsNull(connection)) {
        connection = NULL;
    }
    if (connection) { 
    if(!cJSON_IsString(connection) && !cJSON_IsNull(connection))
    {
    goto end; //String
    }
    }


    cart_disconnect_200_response_result_local_var = cart_disconnect_200_response_result_create_internal (
        connection && !cJSON_IsNull(connection) ? strdup(connection->valuestring) : NULL
        );

    return cart_disconnect_200_response_result_local_var;
end:
    return NULL;

}
