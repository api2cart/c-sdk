#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_payment_method.h"



static order_payment_method_t *order_payment_method_create_internal(
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_payment_method_t *order_payment_method_local_var = malloc(sizeof(order_payment_method_t));
    if (!order_payment_method_local_var) {
        return NULL;
    }
    order_payment_method_local_var->name = name;
    order_payment_method_local_var->additional_fields = additional_fields;
    order_payment_method_local_var->custom_fields = custom_fields;

    order_payment_method_local_var->_library_owned = 1;
    return order_payment_method_local_var;
}

__attribute__((deprecated)) order_payment_method_t *order_payment_method_create(
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_payment_method_create_internal (
        name,
        additional_fields,
        custom_fields
        );
}

void order_payment_method_free(order_payment_method_t *order_payment_method) {
    if(NULL == order_payment_method){
        return ;
    }
    if(order_payment_method->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_payment_method_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_payment_method->name) {
        free(order_payment_method->name);
        order_payment_method->name = NULL;
    }
    if (order_payment_method->additional_fields) {
        object_free(order_payment_method->additional_fields);
        order_payment_method->additional_fields = NULL;
    }
    if (order_payment_method->custom_fields) {
        object_free(order_payment_method->custom_fields);
        order_payment_method->custom_fields = NULL;
    }
    free(order_payment_method);
}

cJSON *order_payment_method_convertToJSON(order_payment_method_t *order_payment_method) {
    cJSON *item = cJSON_CreateObject();

    // order_payment_method->name
    if(order_payment_method->name) {
    if(cJSON_AddStringToObject(item, "name", order_payment_method->name) == NULL) {
    goto fail; //String
    }
    }


    // order_payment_method->additional_fields
    if(order_payment_method->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_payment_method->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_payment_method->custom_fields
    if(order_payment_method->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_payment_method->custom_fields);
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

order_payment_method_t *order_payment_method_parseFromJSON(cJSON *order_payment_methodJSON){

    order_payment_method_t *order_payment_method_local_var = NULL;

    // order_payment_method->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_payment_methodJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // order_payment_method->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_payment_methodJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_payment_method->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_payment_methodJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_payment_method_local_var = order_payment_method_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_payment_method_local_var;
end:
    return NULL;

}
