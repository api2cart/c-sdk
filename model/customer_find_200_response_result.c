#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_find_200_response_result.h"



static customer_find_200_response_result_t *customer_find_200_response_result_create_internal(
    char *id,
    char *email,
    char *first_name,
    char *last_name
    ) {
    customer_find_200_response_result_t *customer_find_200_response_result_local_var = malloc(sizeof(customer_find_200_response_result_t));
    if (!customer_find_200_response_result_local_var) {
        return NULL;
    }
    customer_find_200_response_result_local_var->id = id;
    customer_find_200_response_result_local_var->email = email;
    customer_find_200_response_result_local_var->first_name = first_name;
    customer_find_200_response_result_local_var->last_name = last_name;

    customer_find_200_response_result_local_var->_library_owned = 1;
    return customer_find_200_response_result_local_var;
}

__attribute__((deprecated)) customer_find_200_response_result_t *customer_find_200_response_result_create(
    char *id,
    char *email,
    char *first_name,
    char *last_name
    ) {
    return customer_find_200_response_result_create_internal (
        id,
        email,
        first_name,
        last_name
        );
}

void customer_find_200_response_result_free(customer_find_200_response_result_t *customer_find_200_response_result) {
    if(NULL == customer_find_200_response_result){
        return ;
    }
    if(customer_find_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_find_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_find_200_response_result->id) {
        free(customer_find_200_response_result->id);
        customer_find_200_response_result->id = NULL;
    }
    if (customer_find_200_response_result->email) {
        free(customer_find_200_response_result->email);
        customer_find_200_response_result->email = NULL;
    }
    if (customer_find_200_response_result->first_name) {
        free(customer_find_200_response_result->first_name);
        customer_find_200_response_result->first_name = NULL;
    }
    if (customer_find_200_response_result->last_name) {
        free(customer_find_200_response_result->last_name);
        customer_find_200_response_result->last_name = NULL;
    }
    free(customer_find_200_response_result);
}

cJSON *customer_find_200_response_result_convertToJSON(customer_find_200_response_result_t *customer_find_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // customer_find_200_response_result->id
    if(customer_find_200_response_result->id) {
    if(cJSON_AddStringToObject(item, "id", customer_find_200_response_result->id) == NULL) {
    goto fail; //String
    }
    }


    // customer_find_200_response_result->email
    if(customer_find_200_response_result->email) {
    if(cJSON_AddStringToObject(item, "email", customer_find_200_response_result->email) == NULL) {
    goto fail; //String
    }
    }


    // customer_find_200_response_result->first_name
    if(customer_find_200_response_result->first_name) {
    if(cJSON_AddStringToObject(item, "first_name", customer_find_200_response_result->first_name) == NULL) {
    goto fail; //String
    }
    }


    // customer_find_200_response_result->last_name
    if(customer_find_200_response_result->last_name) {
    if(cJSON_AddStringToObject(item, "last_name", customer_find_200_response_result->last_name) == NULL) {
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

customer_find_200_response_result_t *customer_find_200_response_result_parseFromJSON(cJSON *customer_find_200_response_resultJSON){

    customer_find_200_response_result_t *customer_find_200_response_result_local_var = NULL;

    // customer_find_200_response_result->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customer_find_200_response_resultJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // customer_find_200_response_result->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(customer_find_200_response_resultJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // customer_find_200_response_result->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(customer_find_200_response_resultJSON, "first_name");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // customer_find_200_response_result->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(customer_find_200_response_resultJSON, "last_name");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }


    customer_find_200_response_result_local_var = customer_find_200_response_result_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL
        );

    return customer_find_200_response_result_local_var;
end:
    return NULL;

}
