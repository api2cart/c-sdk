#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "coupon_action.h"



static coupon_action_t *coupon_action_create_internal(
    char *scope,
    char *apply_to,
    double amount,
    char *currency_code,
    int include_tax,
    char *type,
    double discounted_quantity,
    int discount_quantity_step,
    char *logic_operator,
    list_t *conditions,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    coupon_action_t *coupon_action_local_var = malloc(sizeof(coupon_action_t));
    if (!coupon_action_local_var) {
        return NULL;
    }
    coupon_action_local_var->scope = scope;
    coupon_action_local_var->apply_to = apply_to;
    coupon_action_local_var->amount = amount;
    coupon_action_local_var->currency_code = currency_code;
    coupon_action_local_var->include_tax = include_tax;
    coupon_action_local_var->type = type;
    coupon_action_local_var->discounted_quantity = discounted_quantity;
    coupon_action_local_var->discount_quantity_step = discount_quantity_step;
    coupon_action_local_var->logic_operator = logic_operator;
    coupon_action_local_var->conditions = conditions;
    coupon_action_local_var->additional_fields = additional_fields;
    coupon_action_local_var->custom_fields = custom_fields;

    coupon_action_local_var->_library_owned = 1;
    return coupon_action_local_var;
}

__attribute__((deprecated)) coupon_action_t *coupon_action_create(
    char *scope,
    char *apply_to,
    double amount,
    char *currency_code,
    int include_tax,
    char *type,
    double discounted_quantity,
    int discount_quantity_step,
    char *logic_operator,
    list_t *conditions,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return coupon_action_create_internal (
        scope,
        apply_to,
        amount,
        currency_code,
        include_tax,
        type,
        discounted_quantity,
        discount_quantity_step,
        logic_operator,
        conditions,
        additional_fields,
        custom_fields
        );
}

void coupon_action_free(coupon_action_t *coupon_action) {
    if(NULL == coupon_action){
        return ;
    }
    if(coupon_action->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "coupon_action_free");
        return ;
    }
    listEntry_t *listEntry;
    if (coupon_action->scope) {
        free(coupon_action->scope);
        coupon_action->scope = NULL;
    }
    if (coupon_action->apply_to) {
        free(coupon_action->apply_to);
        coupon_action->apply_to = NULL;
    }
    if (coupon_action->currency_code) {
        free(coupon_action->currency_code);
        coupon_action->currency_code = NULL;
    }
    if (coupon_action->type) {
        free(coupon_action->type);
        coupon_action->type = NULL;
    }
    if (coupon_action->logic_operator) {
        free(coupon_action->logic_operator);
        coupon_action->logic_operator = NULL;
    }
    if (coupon_action->conditions) {
        list_ForEach(listEntry, coupon_action->conditions) {
            coupon_condition_free(listEntry->data);
        }
        list_freeList(coupon_action->conditions);
        coupon_action->conditions = NULL;
    }
    if (coupon_action->additional_fields) {
        object_free(coupon_action->additional_fields);
        coupon_action->additional_fields = NULL;
    }
    if (coupon_action->custom_fields) {
        object_free(coupon_action->custom_fields);
        coupon_action->custom_fields = NULL;
    }
    free(coupon_action);
}

cJSON *coupon_action_convertToJSON(coupon_action_t *coupon_action) {
    cJSON *item = cJSON_CreateObject();

    // coupon_action->scope
    if(coupon_action->scope) {
    if(cJSON_AddStringToObject(item, "scope", coupon_action->scope) == NULL) {
    goto fail; //String
    }
    }


    // coupon_action->apply_to
    if(coupon_action->apply_to) {
    if(cJSON_AddStringToObject(item, "apply_to", coupon_action->apply_to) == NULL) {
    goto fail; //String
    }
    }


    // coupon_action->amount
    if(coupon_action->amount) {
    if(cJSON_AddNumberToObject(item, "amount", coupon_action->amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // coupon_action->currency_code
    if(coupon_action->currency_code) {
    if(cJSON_AddStringToObject(item, "currency_code", coupon_action->currency_code) == NULL) {
    goto fail; //String
    }
    }


    // coupon_action->include_tax
    if(coupon_action->include_tax) {
    if(cJSON_AddBoolToObject(item, "include_tax", coupon_action->include_tax) == NULL) {
    goto fail; //Bool
    }
    }


    // coupon_action->type
    if(coupon_action->type) {
    if(cJSON_AddStringToObject(item, "type", coupon_action->type) == NULL) {
    goto fail; //String
    }
    }


    // coupon_action->discounted_quantity
    if(coupon_action->discounted_quantity) {
    if(cJSON_AddNumberToObject(item, "discounted_quantity", coupon_action->discounted_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // coupon_action->discount_quantity_step
    if(coupon_action->discount_quantity_step) {
    if(cJSON_AddNumberToObject(item, "discount_quantity_step", coupon_action->discount_quantity_step) == NULL) {
    goto fail; //Numeric
    }
    }


    // coupon_action->logic_operator
    if(coupon_action->logic_operator) {
    if(cJSON_AddStringToObject(item, "logic_operator", coupon_action->logic_operator) == NULL) {
    goto fail; //String
    }
    }


    // coupon_action->conditions
    if(coupon_action->conditions) {
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (coupon_action->conditions) {
    list_ForEach(conditionsListEntry, coupon_action->conditions) {
    cJSON *itemLocal = coupon_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
    }


    // coupon_action->additional_fields
    if(coupon_action->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(coupon_action->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // coupon_action->custom_fields
    if(coupon_action->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(coupon_action->custom_fields);
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

coupon_action_t *coupon_action_parseFromJSON(cJSON *coupon_actionJSON){

    coupon_action_t *coupon_action_local_var = NULL;

    // define the local list for coupon_action->conditions
    list_t *conditionsList = NULL;

    // coupon_action->scope
    cJSON *scope = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "scope");
    if (cJSON_IsNull(scope)) {
        scope = NULL;
    }
    if (scope) { 
    if(!cJSON_IsString(scope) && !cJSON_IsNull(scope))
    {
    goto end; //String
    }
    }

    // coupon_action->apply_to
    cJSON *apply_to = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "apply_to");
    if (cJSON_IsNull(apply_to)) {
        apply_to = NULL;
    }
    if (apply_to) { 
    if(!cJSON_IsString(apply_to) && !cJSON_IsNull(apply_to))
    {
    goto end; //String
    }
    }

    // coupon_action->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "amount");
    if (cJSON_IsNull(amount)) {
        amount = NULL;
    }
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    }

    // coupon_action->currency_code
    cJSON *currency_code = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "currency_code");
    if (cJSON_IsNull(currency_code)) {
        currency_code = NULL;
    }
    if (currency_code) { 
    if(!cJSON_IsString(currency_code) && !cJSON_IsNull(currency_code))
    {
    goto end; //String
    }
    }

    // coupon_action->include_tax
    cJSON *include_tax = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "include_tax");
    if (cJSON_IsNull(include_tax)) {
        include_tax = NULL;
    }
    if (include_tax) { 
    if(!cJSON_IsBool(include_tax))
    {
    goto end; //Bool
    }
    }

    // coupon_action->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // coupon_action->discounted_quantity
    cJSON *discounted_quantity = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "discounted_quantity");
    if (cJSON_IsNull(discounted_quantity)) {
        discounted_quantity = NULL;
    }
    if (discounted_quantity) { 
    if(!cJSON_IsNumber(discounted_quantity))
    {
    goto end; //Numeric
    }
    }

    // coupon_action->discount_quantity_step
    cJSON *discount_quantity_step = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "discount_quantity_step");
    if (cJSON_IsNull(discount_quantity_step)) {
        discount_quantity_step = NULL;
    }
    if (discount_quantity_step) { 
    if(!cJSON_IsNumber(discount_quantity_step))
    {
    goto end; //Numeric
    }
    }

    // coupon_action->logic_operator
    cJSON *logic_operator = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "logic_operator");
    if (cJSON_IsNull(logic_operator)) {
        logic_operator = NULL;
    }
    if (logic_operator) { 
    if(!cJSON_IsString(logic_operator) && !cJSON_IsNull(logic_operator))
    {
    goto end; //String
    }
    }

    // coupon_action->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "conditions");
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

    // coupon_action->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // coupon_action->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(coupon_actionJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    coupon_action_local_var = coupon_action_create_internal (
        scope && !cJSON_IsNull(scope) ? strdup(scope->valuestring) : NULL,
        apply_to && !cJSON_IsNull(apply_to) ? strdup(apply_to->valuestring) : NULL,
        amount ? amount->valuedouble : 0,
        currency_code && !cJSON_IsNull(currency_code) ? strdup(currency_code->valuestring) : NULL,
        include_tax ? include_tax->valueint : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        discounted_quantity ? discounted_quantity->valuedouble : 0,
        discount_quantity_step ? discount_quantity_step->valuedouble : 0,
        logic_operator && !cJSON_IsNull(logic_operator) ? strdup(logic_operator->valuestring) : NULL,
        conditions ? conditionsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return coupon_action_local_var;
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
