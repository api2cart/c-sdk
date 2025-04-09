#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "coupon_condition.h"



static coupon_condition_t *coupon_condition_create_internal(
    char *id,
    char *entity,
    char *match_items,
    char *key,
    char *_operator,
    char *value,
    char *logic_operator,
    list_t *sub_conditions,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    coupon_condition_t *coupon_condition_local_var = malloc(sizeof(coupon_condition_t));
    if (!coupon_condition_local_var) {
        return NULL;
    }
    coupon_condition_local_var->id = id;
    coupon_condition_local_var->entity = entity;
    coupon_condition_local_var->match_items = match_items;
    coupon_condition_local_var->key = key;
    coupon_condition_local_var->_operator = _operator;
    coupon_condition_local_var->value = value;
    coupon_condition_local_var->logic_operator = logic_operator;
    coupon_condition_local_var->sub_conditions = sub_conditions;
    coupon_condition_local_var->additional_fields = additional_fields;
    coupon_condition_local_var->custom_fields = custom_fields;

    coupon_condition_local_var->_library_owned = 1;
    return coupon_condition_local_var;
}

__attribute__((deprecated)) coupon_condition_t *coupon_condition_create(
    char *id,
    char *entity,
    char *match_items,
    char *key,
    char *_operator,
    char *value,
    char *logic_operator,
    list_t *sub_conditions,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return coupon_condition_create_internal (
        id,
        entity,
        match_items,
        key,
        _operator,
        value,
        logic_operator,
        sub_conditions,
        additional_fields,
        custom_fields
        );
}

void coupon_condition_free(coupon_condition_t *coupon_condition) {
    if(NULL == coupon_condition){
        return ;
    }
    if(coupon_condition->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "coupon_condition_free");
        return ;
    }
    listEntry_t *listEntry;
    if (coupon_condition->id) {
        free(coupon_condition->id);
        coupon_condition->id = NULL;
    }
    if (coupon_condition->entity) {
        free(coupon_condition->entity);
        coupon_condition->entity = NULL;
    }
    if (coupon_condition->match_items) {
        free(coupon_condition->match_items);
        coupon_condition->match_items = NULL;
    }
    if (coupon_condition->key) {
        free(coupon_condition->key);
        coupon_condition->key = NULL;
    }
    if (coupon_condition->_operator) {
        free(coupon_condition->_operator);
        coupon_condition->_operator = NULL;
    }
    if (coupon_condition->value) {
        free(coupon_condition->value);
        coupon_condition->value = NULL;
    }
    if (coupon_condition->logic_operator) {
        free(coupon_condition->logic_operator);
        coupon_condition->logic_operator = NULL;
    }
    if (coupon_condition->sub_conditions) {
        list_ForEach(listEntry, coupon_condition->sub_conditions) {
            coupon_condition_free(listEntry->data);
        }
        list_freeList(coupon_condition->sub_conditions);
        coupon_condition->sub_conditions = NULL;
    }
    if (coupon_condition->additional_fields) {
        object_free(coupon_condition->additional_fields);
        coupon_condition->additional_fields = NULL;
    }
    if (coupon_condition->custom_fields) {
        object_free(coupon_condition->custom_fields);
        coupon_condition->custom_fields = NULL;
    }
    free(coupon_condition);
}

cJSON *coupon_condition_convertToJSON(coupon_condition_t *coupon_condition) {
    cJSON *item = cJSON_CreateObject();

    // coupon_condition->id
    if(coupon_condition->id) {
    if(cJSON_AddStringToObject(item, "id", coupon_condition->id) == NULL) {
    goto fail; //String
    }
    }


    // coupon_condition->entity
    if(coupon_condition->entity) {
    if(cJSON_AddStringToObject(item, "entity", coupon_condition->entity) == NULL) {
    goto fail; //String
    }
    }


    // coupon_condition->match_items
    if(coupon_condition->match_items) {
    if(cJSON_AddStringToObject(item, "match_items", coupon_condition->match_items) == NULL) {
    goto fail; //String
    }
    }


    // coupon_condition->key
    if(coupon_condition->key) {
    if(cJSON_AddStringToObject(item, "key", coupon_condition->key) == NULL) {
    goto fail; //String
    }
    }


    // coupon_condition->_operator
    if(coupon_condition->_operator) {
    if(cJSON_AddStringToObject(item, "operator", coupon_condition->_operator) == NULL) {
    goto fail; //String
    }
    }


    // coupon_condition->value
    if(coupon_condition->value) {
    if(cJSON_AddStringToObject(item, "value", coupon_condition->value) == NULL) {
    goto fail; //String
    }
    }


    // coupon_condition->logic_operator
    if(coupon_condition->logic_operator) {
    if(cJSON_AddStringToObject(item, "logic_operator", coupon_condition->logic_operator) == NULL) {
    goto fail; //String
    }
    }


    // coupon_condition->sub_conditions
    if(coupon_condition->sub_conditions) {
    cJSON *sub_conditions = cJSON_AddArrayToObject(item, "sub-conditions");
    if(sub_conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *sub_conditionsListEntry;
    if (coupon_condition->sub_conditions) {
    list_ForEach(sub_conditionsListEntry, coupon_condition->sub_conditions) {
    cJSON *itemLocal = coupon_condition_convertToJSON(sub_conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(sub_conditions, itemLocal);
    }
    }
    }


    // coupon_condition->additional_fields
    if(coupon_condition->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(coupon_condition->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // coupon_condition->custom_fields
    if(coupon_condition->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(coupon_condition->custom_fields);
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

coupon_condition_t *coupon_condition_parseFromJSON(cJSON *coupon_conditionJSON){

    coupon_condition_t *coupon_condition_local_var = NULL;

    // define the local list for coupon_condition->sub_conditions
    list_t *sub_conditionsList = NULL;

    // coupon_condition->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(coupon_conditionJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // coupon_condition->entity
    cJSON *entity = cJSON_GetObjectItemCaseSensitive(coupon_conditionJSON, "entity");
    if (cJSON_IsNull(entity)) {
        entity = NULL;
    }
    if (entity) { 
    if(!cJSON_IsString(entity) && !cJSON_IsNull(entity))
    {
    goto end; //String
    }
    }

    // coupon_condition->match_items
    cJSON *match_items = cJSON_GetObjectItemCaseSensitive(coupon_conditionJSON, "match_items");
    if (cJSON_IsNull(match_items)) {
        match_items = NULL;
    }
    if (match_items) { 
    if(!cJSON_IsString(match_items) && !cJSON_IsNull(match_items))
    {
    goto end; //String
    }
    }

    // coupon_condition->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(coupon_conditionJSON, "key");
    if (cJSON_IsNull(key)) {
        key = NULL;
    }
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // coupon_condition->_operator
    cJSON *_operator = cJSON_GetObjectItemCaseSensitive(coupon_conditionJSON, "operator");
    if (cJSON_IsNull(_operator)) {
        _operator = NULL;
    }
    if (_operator) { 
    if(!cJSON_IsString(_operator) && !cJSON_IsNull(_operator))
    {
    goto end; //String
    }
    }

    // coupon_condition->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(coupon_conditionJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // coupon_condition->logic_operator
    cJSON *logic_operator = cJSON_GetObjectItemCaseSensitive(coupon_conditionJSON, "logic_operator");
    if (cJSON_IsNull(logic_operator)) {
        logic_operator = NULL;
    }
    if (logic_operator) { 
    if(!cJSON_IsString(logic_operator) && !cJSON_IsNull(logic_operator))
    {
    goto end; //String
    }
    }

    // coupon_condition->sub_conditions
    cJSON *sub_conditions = cJSON_GetObjectItemCaseSensitive(coupon_conditionJSON, "sub-conditions");
    if (cJSON_IsNull(sub_conditions)) {
        sub_conditions = NULL;
    }
    if (sub_conditions) { 
    cJSON *sub_conditions_local_nonprimitive = NULL;
    if(!cJSON_IsArray(sub_conditions)){
        goto end; //nonprimitive container
    }

    sub_conditionsList = list_createList();

    cJSON_ArrayForEach(sub_conditions_local_nonprimitive,sub_conditions )
    {
        if(!cJSON_IsObject(sub_conditions_local_nonprimitive)){
            goto end;
        }
        coupon_condition_t *sub_conditionsItem = coupon_condition_parseFromJSON(sub_conditions_local_nonprimitive);

        list_addElement(sub_conditionsList, sub_conditionsItem);
    }
    }

    // coupon_condition->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(coupon_conditionJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // coupon_condition->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(coupon_conditionJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    coupon_condition_local_var = coupon_condition_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        entity && !cJSON_IsNull(entity) ? strdup(entity->valuestring) : NULL,
        match_items && !cJSON_IsNull(match_items) ? strdup(match_items->valuestring) : NULL,
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        _operator && !cJSON_IsNull(_operator) ? strdup(_operator->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        logic_operator && !cJSON_IsNull(logic_operator) ? strdup(logic_operator->valuestring) : NULL,
        sub_conditions ? sub_conditionsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return coupon_condition_local_var;
end:
    if (sub_conditionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, sub_conditionsList) {
            coupon_condition_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(sub_conditionsList);
        sub_conditionsList = NULL;
    }
    return NULL;

}
