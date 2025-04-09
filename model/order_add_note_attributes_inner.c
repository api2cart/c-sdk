#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_add_note_attributes_inner.h"



static order_add_note_attributes_inner_t *order_add_note_attributes_inner_create_internal(
    char *name,
    char *value
    ) {
    order_add_note_attributes_inner_t *order_add_note_attributes_inner_local_var = malloc(sizeof(order_add_note_attributes_inner_t));
    if (!order_add_note_attributes_inner_local_var) {
        return NULL;
    }
    order_add_note_attributes_inner_local_var->name = name;
    order_add_note_attributes_inner_local_var->value = value;

    order_add_note_attributes_inner_local_var->_library_owned = 1;
    return order_add_note_attributes_inner_local_var;
}

__attribute__((deprecated)) order_add_note_attributes_inner_t *order_add_note_attributes_inner_create(
    char *name,
    char *value
    ) {
    return order_add_note_attributes_inner_create_internal (
        name,
        value
        );
}

void order_add_note_attributes_inner_free(order_add_note_attributes_inner_t *order_add_note_attributes_inner) {
    if(NULL == order_add_note_attributes_inner){
        return ;
    }
    if(order_add_note_attributes_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_add_note_attributes_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_add_note_attributes_inner->name) {
        free(order_add_note_attributes_inner->name);
        order_add_note_attributes_inner->name = NULL;
    }
    if (order_add_note_attributes_inner->value) {
        free(order_add_note_attributes_inner->value);
        order_add_note_attributes_inner->value = NULL;
    }
    free(order_add_note_attributes_inner);
}

cJSON *order_add_note_attributes_inner_convertToJSON(order_add_note_attributes_inner_t *order_add_note_attributes_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_add_note_attributes_inner->name
    if(order_add_note_attributes_inner->name) {
    if(cJSON_AddStringToObject(item, "name", order_add_note_attributes_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // order_add_note_attributes_inner->value
    if(order_add_note_attributes_inner->value) {
    if(cJSON_AddStringToObject(item, "value", order_add_note_attributes_inner->value) == NULL) {
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

order_add_note_attributes_inner_t *order_add_note_attributes_inner_parseFromJSON(cJSON *order_add_note_attributes_innerJSON){

    order_add_note_attributes_inner_t *order_add_note_attributes_inner_local_var = NULL;

    // order_add_note_attributes_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_add_note_attributes_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // order_add_note_attributes_inner->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(order_add_note_attributes_innerJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    order_add_note_attributes_inner_local_var = order_add_note_attributes_inner_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return order_add_note_attributes_inner_local_var;
end:
    return NULL;

}
