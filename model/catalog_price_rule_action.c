#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "catalog_price_rule_action.h"



static catalog_price_rule_action_t *catalog_price_rule_action_create_internal(
    char *scope,
    char *apply_to,
    char *type,
    double quantity,
    double value,
    char *currency_code,
    int include_tax,
    list_t *conditions,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    catalog_price_rule_action_t *catalog_price_rule_action_local_var = malloc(sizeof(catalog_price_rule_action_t));
    if (!catalog_price_rule_action_local_var) {
        return NULL;
    }
    catalog_price_rule_action_local_var->scope = scope;
    catalog_price_rule_action_local_var->apply_to = apply_to;
    catalog_price_rule_action_local_var->type = type;
    catalog_price_rule_action_local_var->quantity = quantity;
    catalog_price_rule_action_local_var->value = value;
    catalog_price_rule_action_local_var->currency_code = currency_code;
    catalog_price_rule_action_local_var->include_tax = include_tax;
    catalog_price_rule_action_local_var->conditions = conditions;
    catalog_price_rule_action_local_var->additional_fields = additional_fields;
    catalog_price_rule_action_local_var->custom_fields = custom_fields;

    catalog_price_rule_action_local_var->_library_owned = 1;
    return catalog_price_rule_action_local_var;
}

__attribute__((deprecated)) catalog_price_rule_action_t *catalog_price_rule_action_create(
    char *scope,
    char *apply_to,
    char *type,
    double quantity,
    double value,
    char *currency_code,
    int include_tax,
    list_t *conditions,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return catalog_price_rule_action_create_internal (
        scope,
        apply_to,
        type,
        quantity,
        value,
        currency_code,
        include_tax,
        conditions,
        additional_fields,
        custom_fields
        );
}

void catalog_price_rule_action_free(catalog_price_rule_action_t *catalog_price_rule_action) {
    if(NULL == catalog_price_rule_action){
        return ;
    }
    if(catalog_price_rule_action->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "catalog_price_rule_action_free");
        return ;
    }
    listEntry_t *listEntry;
    if (catalog_price_rule_action->scope) {
        free(catalog_price_rule_action->scope);
        catalog_price_rule_action->scope = NULL;
    }
    if (catalog_price_rule_action->apply_to) {
        free(catalog_price_rule_action->apply_to);
        catalog_price_rule_action->apply_to = NULL;
    }
    if (catalog_price_rule_action->type) {
        free(catalog_price_rule_action->type);
        catalog_price_rule_action->type = NULL;
    }
    if (catalog_price_rule_action->currency_code) {
        free(catalog_price_rule_action->currency_code);
        catalog_price_rule_action->currency_code = NULL;
    }
    if (catalog_price_rule_action->conditions) {
        list_ForEach(listEntry, catalog_price_rule_action->conditions) {
            coupon_condition_free(listEntry->data);
        }
        list_freeList(catalog_price_rule_action->conditions);
        catalog_price_rule_action->conditions = NULL;
    }
    if (catalog_price_rule_action->additional_fields) {
        object_free(catalog_price_rule_action->additional_fields);
        catalog_price_rule_action->additional_fields = NULL;
    }
    if (catalog_price_rule_action->custom_fields) {
        object_free(catalog_price_rule_action->custom_fields);
        catalog_price_rule_action->custom_fields = NULL;
    }
    free(catalog_price_rule_action);
}

cJSON *catalog_price_rule_action_convertToJSON(catalog_price_rule_action_t *catalog_price_rule_action) {
    cJSON *item = cJSON_CreateObject();

    // catalog_price_rule_action->scope
    if(catalog_price_rule_action->scope) {
    if(cJSON_AddStringToObject(item, "scope", catalog_price_rule_action->scope) == NULL) {
    goto fail; //String
    }
    }


    // catalog_price_rule_action->apply_to
    if(catalog_price_rule_action->apply_to) {
    if(cJSON_AddStringToObject(item, "apply_to", catalog_price_rule_action->apply_to) == NULL) {
    goto fail; //String
    }
    }


    // catalog_price_rule_action->type
    if(catalog_price_rule_action->type) {
    if(cJSON_AddStringToObject(item, "type", catalog_price_rule_action->type) == NULL) {
    goto fail; //String
    }
    }


    // catalog_price_rule_action->quantity
    if(catalog_price_rule_action->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", catalog_price_rule_action->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_price_rule_action->value
    if(catalog_price_rule_action->value) {
    if(cJSON_AddNumberToObject(item, "value", catalog_price_rule_action->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_price_rule_action->currency_code
    if(catalog_price_rule_action->currency_code) {
    if(cJSON_AddStringToObject(item, "currency_code", catalog_price_rule_action->currency_code) == NULL) {
    goto fail; //String
    }
    }


    // catalog_price_rule_action->include_tax
    if(catalog_price_rule_action->include_tax) {
    if(cJSON_AddBoolToObject(item, "include_tax", catalog_price_rule_action->include_tax) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_price_rule_action->conditions
    if(catalog_price_rule_action->conditions) {
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (catalog_price_rule_action->conditions) {
    list_ForEach(conditionsListEntry, catalog_price_rule_action->conditions) {
    cJSON *itemLocal = coupon_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
    }


    // catalog_price_rule_action->additional_fields
    if(catalog_price_rule_action->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(catalog_price_rule_action->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // catalog_price_rule_action->custom_fields
    if(catalog_price_rule_action->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(catalog_price_rule_action->custom_fields);
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

catalog_price_rule_action_t *catalog_price_rule_action_parseFromJSON(cJSON *catalog_price_rule_actionJSON){

    catalog_price_rule_action_t *catalog_price_rule_action_local_var = NULL;

    // define the local list for catalog_price_rule_action->conditions
    list_t *conditionsList = NULL;

    // catalog_price_rule_action->scope
    cJSON *scope = cJSON_GetObjectItemCaseSensitive(catalog_price_rule_actionJSON, "scope");
    if (cJSON_IsNull(scope)) {
        scope = NULL;
    }
    if (scope) { 
    if(!cJSON_IsString(scope) && !cJSON_IsNull(scope))
    {
    goto end; //String
    }
    }

    // catalog_price_rule_action->apply_to
    cJSON *apply_to = cJSON_GetObjectItemCaseSensitive(catalog_price_rule_actionJSON, "apply_to");
    if (cJSON_IsNull(apply_to)) {
        apply_to = NULL;
    }
    if (apply_to) { 
    if(!cJSON_IsString(apply_to) && !cJSON_IsNull(apply_to))
    {
    goto end; //String
    }
    }

    // catalog_price_rule_action->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(catalog_price_rule_actionJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // catalog_price_rule_action->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(catalog_price_rule_actionJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // catalog_price_rule_action->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(catalog_price_rule_actionJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // catalog_price_rule_action->currency_code
    cJSON *currency_code = cJSON_GetObjectItemCaseSensitive(catalog_price_rule_actionJSON, "currency_code");
    if (cJSON_IsNull(currency_code)) {
        currency_code = NULL;
    }
    if (currency_code) { 
    if(!cJSON_IsString(currency_code) && !cJSON_IsNull(currency_code))
    {
    goto end; //String
    }
    }

    // catalog_price_rule_action->include_tax
    cJSON *include_tax = cJSON_GetObjectItemCaseSensitive(catalog_price_rule_actionJSON, "include_tax");
    if (cJSON_IsNull(include_tax)) {
        include_tax = NULL;
    }
    if (include_tax) { 
    if(!cJSON_IsBool(include_tax))
    {
    goto end; //Bool
    }
    }

    // catalog_price_rule_action->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(catalog_price_rule_actionJSON, "conditions");
    if (cJSON_IsNull(conditions)) {
        conditions = NULL;
    }
    if (conditions) { 
    cJSON *conditions_local_nonprimitive = NULL;
    if(!cJSON_IsArray(conditions)){
        goto end; //nonprimitive container
    }

    conditionsList = list_createList();

    cJSON_ArrayForEach(conditions_local_nonprimitive,conditions )
    {
        if(!cJSON_IsObject(conditions_local_nonprimitive)){
            goto end;
        }
        coupon_condition_t *conditionsItem = coupon_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }

    // catalog_price_rule_action->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(catalog_price_rule_actionJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // catalog_price_rule_action->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(catalog_price_rule_actionJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    catalog_price_rule_action_local_var = catalog_price_rule_action_create_internal (
        scope && !cJSON_IsNull(scope) ? strdup(scope->valuestring) : NULL,
        apply_to && !cJSON_IsNull(apply_to) ? strdup(apply_to->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        value ? value->valuedouble : 0,
        currency_code && !cJSON_IsNull(currency_code) ? strdup(currency_code->valuestring) : NULL,
        include_tax ? include_tax->valueint : 0,
        conditions ? conditionsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return catalog_price_rule_action_local_var;
end:
    if (conditionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, conditionsList) {
            coupon_condition_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(conditionsList);
        conditionsList = NULL;
    }
    return NULL;

}
