#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "store_attribute_group.h"



static store_attribute_group_t *store_attribute_group_create_internal(
    char *id,
    char *name,
    int position,
    char *attribute_set_id,
    list_t *assigned_attribute_ids,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    store_attribute_group_t *store_attribute_group_local_var = malloc(sizeof(store_attribute_group_t));
    if (!store_attribute_group_local_var) {
        return NULL;
    }
    store_attribute_group_local_var->id = id;
    store_attribute_group_local_var->name = name;
    store_attribute_group_local_var->position = position;
    store_attribute_group_local_var->attribute_set_id = attribute_set_id;
    store_attribute_group_local_var->assigned_attribute_ids = assigned_attribute_ids;
    store_attribute_group_local_var->additional_fields = additional_fields;
    store_attribute_group_local_var->custom_fields = custom_fields;

    store_attribute_group_local_var->_library_owned = 1;
    return store_attribute_group_local_var;
}

__attribute__((deprecated)) store_attribute_group_t *store_attribute_group_create(
    char *id,
    char *name,
    int position,
    char *attribute_set_id,
    list_t *assigned_attribute_ids,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return store_attribute_group_create_internal (
        id,
        name,
        position,
        attribute_set_id,
        assigned_attribute_ids,
        additional_fields,
        custom_fields
        );
}

void store_attribute_group_free(store_attribute_group_t *store_attribute_group) {
    if(NULL == store_attribute_group){
        return ;
    }
    if(store_attribute_group->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "store_attribute_group_free");
        return ;
    }
    listEntry_t *listEntry;
    if (store_attribute_group->id) {
        free(store_attribute_group->id);
        store_attribute_group->id = NULL;
    }
    if (store_attribute_group->name) {
        free(store_attribute_group->name);
        store_attribute_group->name = NULL;
    }
    if (store_attribute_group->attribute_set_id) {
        free(store_attribute_group->attribute_set_id);
        store_attribute_group->attribute_set_id = NULL;
    }
    if (store_attribute_group->assigned_attribute_ids) {
        list_ForEach(listEntry, store_attribute_group->assigned_attribute_ids) {
            free(listEntry->data);
        }
        list_freeList(store_attribute_group->assigned_attribute_ids);
        store_attribute_group->assigned_attribute_ids = NULL;
    }
    if (store_attribute_group->additional_fields) {
        object_free(store_attribute_group->additional_fields);
        store_attribute_group->additional_fields = NULL;
    }
    if (store_attribute_group->custom_fields) {
        object_free(store_attribute_group->custom_fields);
        store_attribute_group->custom_fields = NULL;
    }
    free(store_attribute_group);
}

cJSON *store_attribute_group_convertToJSON(store_attribute_group_t *store_attribute_group) {
    cJSON *item = cJSON_CreateObject();

    // store_attribute_group->id
    if(store_attribute_group->id) {
    if(cJSON_AddStringToObject(item, "id", store_attribute_group->id) == NULL) {
    goto fail; //String
    }
    }


    // store_attribute_group->name
    if(store_attribute_group->name) {
    if(cJSON_AddStringToObject(item, "name", store_attribute_group->name) == NULL) {
    goto fail; //String
    }
    }


    // store_attribute_group->position
    if(store_attribute_group->position) {
    if(cJSON_AddNumberToObject(item, "position", store_attribute_group->position) == NULL) {
    goto fail; //Numeric
    }
    }


    // store_attribute_group->attribute_set_id
    if(store_attribute_group->attribute_set_id) {
    if(cJSON_AddStringToObject(item, "attribute_set_id", store_attribute_group->attribute_set_id) == NULL) {
    goto fail; //String
    }
    }


    // store_attribute_group->assigned_attribute_ids
    if(store_attribute_group->assigned_attribute_ids) {
    cJSON *assigned_attribute_ids = cJSON_AddArrayToObject(item, "assigned_attribute_ids");
    if(assigned_attribute_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *assigned_attribute_idsListEntry;
    list_ForEach(assigned_attribute_idsListEntry, store_attribute_group->assigned_attribute_ids) {
    if(cJSON_AddStringToObject(assigned_attribute_ids, "", assigned_attribute_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // store_attribute_group->additional_fields
    if(store_attribute_group->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(store_attribute_group->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_attribute_group->custom_fields
    if(store_attribute_group->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(store_attribute_group->custom_fields);
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

store_attribute_group_t *store_attribute_group_parseFromJSON(cJSON *store_attribute_groupJSON){

    store_attribute_group_t *store_attribute_group_local_var = NULL;

    // define the local list for store_attribute_group->assigned_attribute_ids
    list_t *assigned_attribute_idsList = NULL;

    // store_attribute_group->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(store_attribute_groupJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // store_attribute_group->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(store_attribute_groupJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // store_attribute_group->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(store_attribute_groupJSON, "position");
    if (cJSON_IsNull(position)) {
        position = NULL;
    }
    if (position) { 
    if(!cJSON_IsNumber(position))
    {
    goto end; //Numeric
    }
    }

    // store_attribute_group->attribute_set_id
    cJSON *attribute_set_id = cJSON_GetObjectItemCaseSensitive(store_attribute_groupJSON, "attribute_set_id");
    if (cJSON_IsNull(attribute_set_id)) {
        attribute_set_id = NULL;
    }
    if (attribute_set_id) { 
    if(!cJSON_IsString(attribute_set_id) && !cJSON_IsNull(attribute_set_id))
    {
    goto end; //String
    }
    }

    // store_attribute_group->assigned_attribute_ids
    cJSON *assigned_attribute_ids = cJSON_GetObjectItemCaseSensitive(store_attribute_groupJSON, "assigned_attribute_ids");
    if (cJSON_IsNull(assigned_attribute_ids)) {
        assigned_attribute_ids = NULL;
    }
    if (assigned_attribute_ids) { 
    cJSON *assigned_attribute_ids_local = NULL;
    if(!cJSON_IsArray(assigned_attribute_ids)) {
        goto end;//primitive container
    }
    assigned_attribute_idsList = list_createList();

    cJSON_ArrayForEach(assigned_attribute_ids_local, assigned_attribute_ids)
    {
        if(!cJSON_IsString(assigned_attribute_ids_local))
        {
            goto end;
        }
        list_addElement(assigned_attribute_idsList , strdup(assigned_attribute_ids_local->valuestring));
    }
    }

    // store_attribute_group->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(store_attribute_groupJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // store_attribute_group->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(store_attribute_groupJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    store_attribute_group_local_var = store_attribute_group_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        position ? position->valuedouble : 0,
        attribute_set_id && !cJSON_IsNull(attribute_set_id) ? strdup(attribute_set_id->valuestring) : NULL,
        assigned_attribute_ids ? assigned_attribute_idsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return store_attribute_group_local_var;
end:
    if (assigned_attribute_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, assigned_attribute_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(assigned_attribute_idsList);
        assigned_attribute_idsList = NULL;
    }
    return NULL;

}
