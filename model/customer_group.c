#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_group.h"



static customer_group_t *customer_group_create_internal(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    customer_group_t *customer_group_local_var = malloc(sizeof(customer_group_t));
    if (!customer_group_local_var) {
        return NULL;
    }
    customer_group_local_var->id = id;
    customer_group_local_var->name = name;
    customer_group_local_var->additional_fields = additional_fields;
    customer_group_local_var->custom_fields = custom_fields;

    customer_group_local_var->_library_owned = 1;
    return customer_group_local_var;
}

__attribute__((deprecated)) customer_group_t *customer_group_create(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return customer_group_create_internal (
        id,
        name,
        additional_fields,
        custom_fields
        );
}

void customer_group_free(customer_group_t *customer_group) {
    if(NULL == customer_group){
        return ;
    }
    if(customer_group->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_group_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_group->id) {
        free(customer_group->id);
        customer_group->id = NULL;
    }
    if (customer_group->name) {
        free(customer_group->name);
        customer_group->name = NULL;
    }
    if (customer_group->additional_fields) {
        object_free(customer_group->additional_fields);
        customer_group->additional_fields = NULL;
    }
    if (customer_group->custom_fields) {
        object_free(customer_group->custom_fields);
        customer_group->custom_fields = NULL;
    }
    free(customer_group);
}

cJSON *customer_group_convertToJSON(customer_group_t *customer_group) {
    cJSON *item = cJSON_CreateObject();

    // customer_group->id
    if(customer_group->id) {
    if(cJSON_AddStringToObject(item, "id", customer_group->id) == NULL) {
    goto fail; //String
    }
    }


    // customer_group->name
    if(customer_group->name) {
    if(cJSON_AddStringToObject(item, "name", customer_group->name) == NULL) {
    goto fail; //String
    }
    }


    // customer_group->additional_fields
    if(customer_group->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(customer_group->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_group->custom_fields
    if(customer_group->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(customer_group->custom_fields);
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

customer_group_t *customer_group_parseFromJSON(cJSON *customer_groupJSON){

    customer_group_t *customer_group_local_var = NULL;

    // customer_group->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customer_groupJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // customer_group->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(customer_groupJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // customer_group->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(customer_groupJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // customer_group->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(customer_groupJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    customer_group_local_var = customer_group_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return customer_group_local_var;
end:
    return NULL;

}
