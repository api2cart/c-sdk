#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_coupon_add.h"


char* cart_coupon_add_action_type_ToString(api2cart_openapi_cart_coupon_add_ACTIONTYPE_e action_type) {
    char* action_typeArray[] =  { "NULL", "percent", "fixed" };
    return action_typeArray[action_type];
}

api2cart_openapi_cart_coupon_add_ACTIONTYPE_e cart_coupon_add_action_type_FromString(char* action_type){
    int stringToReturn = 0;
    char *action_typeArray[] =  { "NULL", "percent", "fixed" };
    size_t sizeofArray = sizeof(action_typeArray) / sizeof(action_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(action_type, action_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* cart_coupon_add_action_apply_to_ToString(api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e action_apply_to) {
    char* action_apply_toArray[] =  { "NULL", "order_total", "item_price", "shipping" };
    return action_apply_toArray[action_apply_to];
}

api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e cart_coupon_add_action_apply_to_FromString(char* action_apply_to){
    int stringToReturn = 0;
    char *action_apply_toArray[] =  { "NULL", "order_total", "item_price", "shipping" };
    size_t sizeofArray = sizeof(action_apply_toArray) / sizeof(action_apply_toArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(action_apply_to, action_apply_toArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* cart_coupon_add_action_scope_ToString(api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e action_scope) {
    char* action_scopeArray[] =  { "NULL", "order", "matching_items" };
    return action_scopeArray[action_scope];
}

api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e cart_coupon_add_action_scope_FromString(char* action_scope){
    int stringToReturn = 0;
    char *action_scopeArray[] =  { "NULL", "order", "matching_items" };
    size_t sizeofArray = sizeof(action_scopeArray) / sizeof(action_scopeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(action_scope, action_scopeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static cart_coupon_add_t *cart_coupon_add_create_internal(
    char *code,
    api2cart_openapi_cart_coupon_add_ACTIONTYPE_e action_type,
    api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e action_apply_to,
    api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e action_scope,
    double action_amount,
    list_t *codes,
    char *name,
    char *date_start,
    char *date_end,
    int usage_limit,
    int usage_limit_per_customer,
    char *action_condition_entity,
    char *action_condition_key,
    char *action_condition_operator,
    char *action_condition_value,
    int include_tax,
    char *store_id
    ) {
    cart_coupon_add_t *cart_coupon_add_local_var = malloc(sizeof(cart_coupon_add_t));
    if (!cart_coupon_add_local_var) {
        return NULL;
    }
    cart_coupon_add_local_var->code = code;
    cart_coupon_add_local_var->action_type = action_type;
    cart_coupon_add_local_var->action_apply_to = action_apply_to;
    cart_coupon_add_local_var->action_scope = action_scope;
    cart_coupon_add_local_var->action_amount = action_amount;
    cart_coupon_add_local_var->codes = codes;
    cart_coupon_add_local_var->name = name;
    cart_coupon_add_local_var->date_start = date_start;
    cart_coupon_add_local_var->date_end = date_end;
    cart_coupon_add_local_var->usage_limit = usage_limit;
    cart_coupon_add_local_var->usage_limit_per_customer = usage_limit_per_customer;
    cart_coupon_add_local_var->action_condition_entity = action_condition_entity;
    cart_coupon_add_local_var->action_condition_key = action_condition_key;
    cart_coupon_add_local_var->action_condition_operator = action_condition_operator;
    cart_coupon_add_local_var->action_condition_value = action_condition_value;
    cart_coupon_add_local_var->include_tax = include_tax;
    cart_coupon_add_local_var->store_id = store_id;

    cart_coupon_add_local_var->_library_owned = 1;
    return cart_coupon_add_local_var;
}

__attribute__((deprecated)) cart_coupon_add_t *cart_coupon_add_create(
    char *code,
    api2cart_openapi_cart_coupon_add_ACTIONTYPE_e action_type,
    api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e action_apply_to,
    api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e action_scope,
    double action_amount,
    list_t *codes,
    char *name,
    char *date_start,
    char *date_end,
    int usage_limit,
    int usage_limit_per_customer,
    char *action_condition_entity,
    char *action_condition_key,
    char *action_condition_operator,
    char *action_condition_value,
    int include_tax,
    char *store_id
    ) {
    return cart_coupon_add_create_internal (
        code,
        action_type,
        action_apply_to,
        action_scope,
        action_amount,
        codes,
        name,
        date_start,
        date_end,
        usage_limit,
        usage_limit_per_customer,
        action_condition_entity,
        action_condition_key,
        action_condition_operator,
        action_condition_value,
        include_tax,
        store_id
        );
}

void cart_coupon_add_free(cart_coupon_add_t *cart_coupon_add) {
    if(NULL == cart_coupon_add){
        return ;
    }
    if(cart_coupon_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_coupon_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_coupon_add->code) {
        free(cart_coupon_add->code);
        cart_coupon_add->code = NULL;
    }
    if (cart_coupon_add->codes) {
        list_ForEach(listEntry, cart_coupon_add->codes) {
            free(listEntry->data);
        }
        list_freeList(cart_coupon_add->codes);
        cart_coupon_add->codes = NULL;
    }
    if (cart_coupon_add->name) {
        free(cart_coupon_add->name);
        cart_coupon_add->name = NULL;
    }
    if (cart_coupon_add->date_start) {
        free(cart_coupon_add->date_start);
        cart_coupon_add->date_start = NULL;
    }
    if (cart_coupon_add->date_end) {
        free(cart_coupon_add->date_end);
        cart_coupon_add->date_end = NULL;
    }
    if (cart_coupon_add->action_condition_entity) {
        free(cart_coupon_add->action_condition_entity);
        cart_coupon_add->action_condition_entity = NULL;
    }
    if (cart_coupon_add->action_condition_key) {
        free(cart_coupon_add->action_condition_key);
        cart_coupon_add->action_condition_key = NULL;
    }
    if (cart_coupon_add->action_condition_operator) {
        free(cart_coupon_add->action_condition_operator);
        cart_coupon_add->action_condition_operator = NULL;
    }
    if (cart_coupon_add->action_condition_value) {
        free(cart_coupon_add->action_condition_value);
        cart_coupon_add->action_condition_value = NULL;
    }
    if (cart_coupon_add->store_id) {
        free(cart_coupon_add->store_id);
        cart_coupon_add->store_id = NULL;
    }
    free(cart_coupon_add);
}

cJSON *cart_coupon_add_convertToJSON(cart_coupon_add_t *cart_coupon_add) {
    cJSON *item = cJSON_CreateObject();

    // cart_coupon_add->code
    if (!cart_coupon_add->code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "code", cart_coupon_add->code) == NULL) {
    goto fail; //String
    }


    // cart_coupon_add->action_type
    if (api2cart_openapi_cart_coupon_add_ACTIONTYPE_NULL == cart_coupon_add->action_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "action_type", cart_coupon_add_action_type_ToString(cart_coupon_add->action_type)) == NULL)
    {
    goto fail; //Enum
    }


    // cart_coupon_add->action_apply_to
    if (api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_NULL == cart_coupon_add->action_apply_to) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "action_apply_to", cart_coupon_add_action_apply_to_ToString(cart_coupon_add->action_apply_to)) == NULL)
    {
    goto fail; //Enum
    }


    // cart_coupon_add->action_scope
    if (api2cart_openapi_cart_coupon_add_ACTIONSCOPE_NULL == cart_coupon_add->action_scope) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "action_scope", cart_coupon_add_action_scope_ToString(cart_coupon_add->action_scope)) == NULL)
    {
    goto fail; //Enum
    }


    // cart_coupon_add->action_amount
    if (!cart_coupon_add->action_amount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "action_amount", cart_coupon_add->action_amount) == NULL) {
    goto fail; //Numeric
    }


    // cart_coupon_add->codes
    if(cart_coupon_add->codes) {
    cJSON *codes = cJSON_AddArrayToObject(item, "codes");
    if(codes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *codesListEntry;
    list_ForEach(codesListEntry, cart_coupon_add->codes) {
    if(cJSON_AddStringToObject(codes, "", codesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // cart_coupon_add->name
    if(cart_coupon_add->name) {
    if(cJSON_AddStringToObject(item, "name", cart_coupon_add->name) == NULL) {
    goto fail; //String
    }
    }


    // cart_coupon_add->date_start
    if(cart_coupon_add->date_start) {
    if(cJSON_AddStringToObject(item, "date_start", cart_coupon_add->date_start) == NULL) {
    goto fail; //String
    }
    }


    // cart_coupon_add->date_end
    if(cart_coupon_add->date_end) {
    if(cJSON_AddStringToObject(item, "date_end", cart_coupon_add->date_end) == NULL) {
    goto fail; //String
    }
    }


    // cart_coupon_add->usage_limit
    if(cart_coupon_add->usage_limit) {
    if(cJSON_AddNumberToObject(item, "usage_limit", cart_coupon_add->usage_limit) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_coupon_add->usage_limit_per_customer
    if(cart_coupon_add->usage_limit_per_customer) {
    if(cJSON_AddNumberToObject(item, "usage_limit_per_customer", cart_coupon_add->usage_limit_per_customer) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_coupon_add->action_condition_entity
    if(cart_coupon_add->action_condition_entity) {
    if(cJSON_AddStringToObject(item, "action_condition_entity", cart_coupon_add->action_condition_entity) == NULL) {
    goto fail; //String
    }
    }


    // cart_coupon_add->action_condition_key
    if(cart_coupon_add->action_condition_key) {
    if(cJSON_AddStringToObject(item, "action_condition_key", cart_coupon_add->action_condition_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_coupon_add->action_condition_operator
    if(cart_coupon_add->action_condition_operator) {
    if(cJSON_AddStringToObject(item, "action_condition_operator", cart_coupon_add->action_condition_operator) == NULL) {
    goto fail; //String
    }
    }


    // cart_coupon_add->action_condition_value
    if(cart_coupon_add->action_condition_value) {
    if(cJSON_AddStringToObject(item, "action_condition_value", cart_coupon_add->action_condition_value) == NULL) {
    goto fail; //String
    }
    }


    // cart_coupon_add->include_tax
    if(cart_coupon_add->include_tax) {
    if(cJSON_AddBoolToObject(item, "include_tax", cart_coupon_add->include_tax) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_coupon_add->store_id
    if(cart_coupon_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", cart_coupon_add->store_id) == NULL) {
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

cart_coupon_add_t *cart_coupon_add_parseFromJSON(cJSON *cart_coupon_addJSON){

    cart_coupon_add_t *cart_coupon_add_local_var = NULL;

    // define the local list for cart_coupon_add->codes
    list_t *codesList = NULL;

    // cart_coupon_add->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (!code) {
        goto end;
    }

    
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }

    // cart_coupon_add->action_type
    cJSON *action_type = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "action_type");
    if (cJSON_IsNull(action_type)) {
        action_type = NULL;
    }
    if (!action_type) {
        goto end;
    }

    api2cart_openapi_cart_coupon_add_ACTIONTYPE_e action_typeVariable;
    
    if(!cJSON_IsString(action_type))
    {
    goto end; //Enum
    }
    action_typeVariable = cart_coupon_add_action_type_FromString(action_type->valuestring);

    // cart_coupon_add->action_apply_to
    cJSON *action_apply_to = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "action_apply_to");
    if (cJSON_IsNull(action_apply_to)) {
        action_apply_to = NULL;
    }
    if (!action_apply_to) {
        goto end;
    }

    api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e action_apply_toVariable;
    
    if(!cJSON_IsString(action_apply_to))
    {
    goto end; //Enum
    }
    action_apply_toVariable = cart_coupon_add_action_apply_to_FromString(action_apply_to->valuestring);

    // cart_coupon_add->action_scope
    cJSON *action_scope = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "action_scope");
    if (cJSON_IsNull(action_scope)) {
        action_scope = NULL;
    }
    if (!action_scope) {
        goto end;
    }

    api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e action_scopeVariable;
    
    if(!cJSON_IsString(action_scope))
    {
    goto end; //Enum
    }
    action_scopeVariable = cart_coupon_add_action_scope_FromString(action_scope->valuestring);

    // cart_coupon_add->action_amount
    cJSON *action_amount = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "action_amount");
    if (cJSON_IsNull(action_amount)) {
        action_amount = NULL;
    }
    if (!action_amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(action_amount))
    {
    goto end; //Numeric
    }

    // cart_coupon_add->codes
    cJSON *codes = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "codes");
    if (cJSON_IsNull(codes)) {
        codes = NULL;
    }
    if (codes) { 
    cJSON *codes_local = NULL;
    if(!cJSON_IsArray(codes)) {
        goto end;//primitive container
    }
    codesList = list_createList();

    cJSON_ArrayForEach(codes_local, codes)
    {
        if(!cJSON_IsString(codes_local))
        {
            goto end;
        }
        list_addElement(codesList , strdup(codes_local->valuestring));
    }
    }

    // cart_coupon_add->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cart_coupon_add->date_start
    cJSON *date_start = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "date_start");
    if (cJSON_IsNull(date_start)) {
        date_start = NULL;
    }
    if (date_start) { 
    if(!cJSON_IsString(date_start) && !cJSON_IsNull(date_start))
    {
    goto end; //String
    }
    }

    // cart_coupon_add->date_end
    cJSON *date_end = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "date_end");
    if (cJSON_IsNull(date_end)) {
        date_end = NULL;
    }
    if (date_end) { 
    if(!cJSON_IsString(date_end) && !cJSON_IsNull(date_end))
    {
    goto end; //String
    }
    }

    // cart_coupon_add->usage_limit
    cJSON *usage_limit = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "usage_limit");
    if (cJSON_IsNull(usage_limit)) {
        usage_limit = NULL;
    }
    if (usage_limit) { 
    if(!cJSON_IsNumber(usage_limit))
    {
    goto end; //Numeric
    }
    }

    // cart_coupon_add->usage_limit_per_customer
    cJSON *usage_limit_per_customer = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "usage_limit_per_customer");
    if (cJSON_IsNull(usage_limit_per_customer)) {
        usage_limit_per_customer = NULL;
    }
    if (usage_limit_per_customer) { 
    if(!cJSON_IsNumber(usage_limit_per_customer))
    {
    goto end; //Numeric
    }
    }

    // cart_coupon_add->action_condition_entity
    cJSON *action_condition_entity = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "action_condition_entity");
    if (cJSON_IsNull(action_condition_entity)) {
        action_condition_entity = NULL;
    }
    if (action_condition_entity) { 
    if(!cJSON_IsString(action_condition_entity) && !cJSON_IsNull(action_condition_entity))
    {
    goto end; //String
    }
    }

    // cart_coupon_add->action_condition_key
    cJSON *action_condition_key = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "action_condition_key");
    if (cJSON_IsNull(action_condition_key)) {
        action_condition_key = NULL;
    }
    if (action_condition_key) { 
    if(!cJSON_IsString(action_condition_key) && !cJSON_IsNull(action_condition_key))
    {
    goto end; //String
    }
    }

    // cart_coupon_add->action_condition_operator
    cJSON *action_condition_operator = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "action_condition_operator");
    if (cJSON_IsNull(action_condition_operator)) {
        action_condition_operator = NULL;
    }
    if (action_condition_operator) { 
    if(!cJSON_IsString(action_condition_operator) && !cJSON_IsNull(action_condition_operator))
    {
    goto end; //String
    }
    }

    // cart_coupon_add->action_condition_value
    cJSON *action_condition_value = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "action_condition_value");
    if (cJSON_IsNull(action_condition_value)) {
        action_condition_value = NULL;
    }
    if (action_condition_value) { 
    if(!cJSON_IsString(action_condition_value) && !cJSON_IsNull(action_condition_value))
    {
    goto end; //String
    }
    }

    // cart_coupon_add->include_tax
    cJSON *include_tax = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "include_tax");
    if (cJSON_IsNull(include_tax)) {
        include_tax = NULL;
    }
    if (include_tax) { 
    if(!cJSON_IsBool(include_tax))
    {
    goto end; //Bool
    }
    }

    // cart_coupon_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(cart_coupon_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }


    cart_coupon_add_local_var = cart_coupon_add_create_internal (
        strdup(code->valuestring),
        action_typeVariable,
        action_apply_toVariable,
        action_scopeVariable,
        action_amount->valuedouble,
        codes ? codesList : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        date_start && !cJSON_IsNull(date_start) ? strdup(date_start->valuestring) : NULL,
        date_end && !cJSON_IsNull(date_end) ? strdup(date_end->valuestring) : NULL,
        usage_limit ? usage_limit->valuedouble : 0,
        usage_limit_per_customer ? usage_limit_per_customer->valuedouble : 0,
        action_condition_entity && !cJSON_IsNull(action_condition_entity) ? strdup(action_condition_entity->valuestring) : NULL,
        action_condition_key && !cJSON_IsNull(action_condition_key) ? strdup(action_condition_key->valuestring) : NULL,
        action_condition_operator && !cJSON_IsNull(action_condition_operator) ? strdup(action_condition_operator->valuestring) : NULL,
        action_condition_value && !cJSON_IsNull(action_condition_value) ? strdup(action_condition_value->valuestring) : NULL,
        include_tax ? include_tax->valueint : 0,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL
        );

    return cart_coupon_add_local_var;
end:
    if (codesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, codesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(codesList);
        codesList = NULL;
    }
    return NULL;

}
