#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_methods_200_response_result.h"



static cart_methods_200_response_result_t *cart_methods_200_response_result_create_internal(
    list_t *method
    ) {
    cart_methods_200_response_result_t *cart_methods_200_response_result_local_var = malloc(sizeof(cart_methods_200_response_result_t));
    if (!cart_methods_200_response_result_local_var) {
        return NULL;
    }
    cart_methods_200_response_result_local_var->method = method;

    cart_methods_200_response_result_local_var->_library_owned = 1;
    return cart_methods_200_response_result_local_var;
}

__attribute__((deprecated)) cart_methods_200_response_result_t *cart_methods_200_response_result_create(
    list_t *method
    ) {
    return cart_methods_200_response_result_create_internal (
        method
        );
}

void cart_methods_200_response_result_free(cart_methods_200_response_result_t *cart_methods_200_response_result) {
    if(NULL == cart_methods_200_response_result){
        return ;
    }
    if(cart_methods_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_methods_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_methods_200_response_result->method) {
        list_ForEach(listEntry, cart_methods_200_response_result->method) {
            free(listEntry->data);
        }
        list_freeList(cart_methods_200_response_result->method);
        cart_methods_200_response_result->method = NULL;
    }
    free(cart_methods_200_response_result);
}

cJSON *cart_methods_200_response_result_convertToJSON(cart_methods_200_response_result_t *cart_methods_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_methods_200_response_result->method
    if(cart_methods_200_response_result->method) {
    cJSON *method = cJSON_AddArrayToObject(item, "method");
    if(method == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *methodListEntry;
    list_ForEach(methodListEntry, cart_methods_200_response_result->method) {
    if(cJSON_AddStringToObject(method, "", methodListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cart_methods_200_response_result_t *cart_methods_200_response_result_parseFromJSON(cJSON *cart_methods_200_response_resultJSON){

    cart_methods_200_response_result_t *cart_methods_200_response_result_local_var = NULL;

    // define the local list for cart_methods_200_response_result->method
    list_t *methodList = NULL;

    // cart_methods_200_response_result->method
    cJSON *method = cJSON_GetObjectItemCaseSensitive(cart_methods_200_response_resultJSON, "method");
    if (cJSON_IsNull(method)) {
        method = NULL;
    }
    if (method) { 
    cJSON *method_local = NULL;
    if(!cJSON_IsArray(method)) {
        goto end;//primitive container
    }
    methodList = list_createList();

    cJSON_ArrayForEach(method_local, method)
    {
        if(!cJSON_IsString(method_local))
        {
            goto end;
        }
        list_addElement(methodList , strdup(method_local->valuestring));
    }
    }


    cart_methods_200_response_result_local_var = cart_methods_200_response_result_create_internal (
        method ? methodList : NULL
        );

    return cart_methods_200_response_result_local_var;
end:
    if (methodList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, methodList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(methodList);
        methodList = NULL;
    }
    return NULL;

}
