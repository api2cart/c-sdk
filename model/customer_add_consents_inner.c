#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_add_consents_inner.h"


char* customer_add_consents_inner_type_ToString(api2cart_openapi_customer_add_consents_inner_TYPE_e type) {
    char* typeArray[] =  { "NULL", "email", "sms" };
    return typeArray[type];
}

api2cart_openapi_customer_add_consents_inner_TYPE_e customer_add_consents_inner_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "email", "sms" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static customer_add_consents_inner_t *customer_add_consents_inner_create_internal(
    api2cart_openapi_customer_add_consents_inner_TYPE_e type,
    char *status,
    char *opt_in_level
    ) {
    customer_add_consents_inner_t *customer_add_consents_inner_local_var = malloc(sizeof(customer_add_consents_inner_t));
    if (!customer_add_consents_inner_local_var) {
        return NULL;
    }
    customer_add_consents_inner_local_var->type = type;
    customer_add_consents_inner_local_var->status = status;
    customer_add_consents_inner_local_var->opt_in_level = opt_in_level;

    customer_add_consents_inner_local_var->_library_owned = 1;
    return customer_add_consents_inner_local_var;
}

__attribute__((deprecated)) customer_add_consents_inner_t *customer_add_consents_inner_create(
    api2cart_openapi_customer_add_consents_inner_TYPE_e type,
    char *status,
    char *opt_in_level
    ) {
    return customer_add_consents_inner_create_internal (
        type,
        status,
        opt_in_level
        );
}

void customer_add_consents_inner_free(customer_add_consents_inner_t *customer_add_consents_inner) {
    if(NULL == customer_add_consents_inner){
        return ;
    }
    if(customer_add_consents_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_add_consents_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_add_consents_inner->status) {
        free(customer_add_consents_inner->status);
        customer_add_consents_inner->status = NULL;
    }
    if (customer_add_consents_inner->opt_in_level) {
        free(customer_add_consents_inner->opt_in_level);
        customer_add_consents_inner->opt_in_level = NULL;
    }
    free(customer_add_consents_inner);
}

cJSON *customer_add_consents_inner_convertToJSON(customer_add_consents_inner_t *customer_add_consents_inner) {
    cJSON *item = cJSON_CreateObject();

    // customer_add_consents_inner->type
    if (api2cart_openapi_customer_add_consents_inner_TYPE_NULL == customer_add_consents_inner->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", customer_add_consents_inner_type_ToString(customer_add_consents_inner->type)) == NULL)
    {
    goto fail; //Enum
    }


    // customer_add_consents_inner->status
    if (!customer_add_consents_inner->status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "status", customer_add_consents_inner->status) == NULL) {
    goto fail; //String
    }


    // customer_add_consents_inner->opt_in_level
    if (!customer_add_consents_inner->opt_in_level) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "opt_in_level", customer_add_consents_inner->opt_in_level) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_add_consents_inner_t *customer_add_consents_inner_parseFromJSON(cJSON *customer_add_consents_innerJSON){

    customer_add_consents_inner_t *customer_add_consents_inner_local_var = NULL;

    // customer_add_consents_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(customer_add_consents_innerJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (!type) {
        goto end;
    }

    api2cart_openapi_customer_add_consents_inner_TYPE_e typeVariable;
    
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = customer_add_consents_inner_type_FromString(type->valuestring);

    // customer_add_consents_inner->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(customer_add_consents_innerJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // customer_add_consents_inner->opt_in_level
    cJSON *opt_in_level = cJSON_GetObjectItemCaseSensitive(customer_add_consents_innerJSON, "opt_in_level");
    if (cJSON_IsNull(opt_in_level)) {
        opt_in_level = NULL;
    }
    if (!opt_in_level) {
        goto end;
    }

    
    if(!cJSON_IsString(opt_in_level))
    {
    goto end; //String
    }


    customer_add_consents_inner_local_var = customer_add_consents_inner_create_internal (
        typeVariable,
        strdup(status->valuestring),
        strdup(opt_in_level->valuestring)
        );

    return customer_add_consents_inner_local_var;
end:
    return NULL;

}
