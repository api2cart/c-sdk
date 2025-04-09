#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner.h"



static account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_create_internal(
    char *name,
    char *description
    ) {
    account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_local_var = malloc(sizeof(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_t));
    if (!account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_local_var) {
        return NULL;
    }
    account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_local_var->name = name;
    account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_local_var->description = description;

    account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_local_var->_library_owned = 1;
    return account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_local_var;
}

__attribute__((deprecated)) account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_create(
    char *name,
    char *description
    ) {
    return account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_create_internal (
        name,
        description
        );
}

void account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_free(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner) {
    if(NULL == account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner){
        return ;
    }
    if(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->name) {
        free(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->name);
        account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->name = NULL;
    }
    if (account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->description) {
        free(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->description);
        account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->description = NULL;
    }
    free(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner);
}

cJSON *account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_convertToJSON(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner) {
    cJSON *item = cJSON_CreateObject();

    // account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->name
    if(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->name) {
    if(cJSON_AddStringToObject(item, "name", account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->description
    if(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->description) {
    if(cJSON_AddStringToObject(item, "description", account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->description) == NULL) {
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

account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_parseFromJSON(cJSON *account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_innerJSON){

    account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_local_var = NULL;

    // account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_innerJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_local_var = account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_local_var;
end:
    return NULL;

}
