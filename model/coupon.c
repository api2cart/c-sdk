#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "coupon.h"



static coupon_t *coupon_create_internal(
    char *id,
    char *code,
    list_t *codes,
    char *name,
    char *description,
    list_t *actions,
    a2_c_date_time_t *date_start,
    a2_c_date_time_t *date_end,
    int avail,
    int priority,
    int used_times,
    int usage_limit,
    int usage_limit_per_customer,
    char *logic_operator,
    list_t *conditions,
    list_t *usage_history,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    coupon_t *coupon_local_var = malloc(sizeof(coupon_t));
    if (!coupon_local_var) {
        return NULL;
    }
    coupon_local_var->id = id;
    coupon_local_var->code = code;
    coupon_local_var->codes = codes;
    coupon_local_var->name = name;
    coupon_local_var->description = description;
    coupon_local_var->actions = actions;
    coupon_local_var->date_start = date_start;
    coupon_local_var->date_end = date_end;
    coupon_local_var->avail = avail;
    coupon_local_var->priority = priority;
    coupon_local_var->used_times = used_times;
    coupon_local_var->usage_limit = usage_limit;
    coupon_local_var->usage_limit_per_customer = usage_limit_per_customer;
    coupon_local_var->logic_operator = logic_operator;
    coupon_local_var->conditions = conditions;
    coupon_local_var->usage_history = usage_history;
    coupon_local_var->additional_fields = additional_fields;
    coupon_local_var->custom_fields = custom_fields;

    coupon_local_var->_library_owned = 1;
    return coupon_local_var;
}

__attribute__((deprecated)) coupon_t *coupon_create(
    char *id,
    char *code,
    list_t *codes,
    char *name,
    char *description,
    list_t *actions,
    a2_c_date_time_t *date_start,
    a2_c_date_time_t *date_end,
    int avail,
    int priority,
    int used_times,
    int usage_limit,
    int usage_limit_per_customer,
    char *logic_operator,
    list_t *conditions,
    list_t *usage_history,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return coupon_create_internal (
        id,
        code,
        codes,
        name,
        description,
        actions,
        date_start,
        date_end,
        avail,
        priority,
        used_times,
        usage_limit,
        usage_limit_per_customer,
        logic_operator,
        conditions,
        usage_history,
        additional_fields,
        custom_fields
        );
}

void coupon_free(coupon_t *coupon) {
    if(NULL == coupon){
        return ;
    }
    if(coupon->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "coupon_free");
        return ;
    }
    listEntry_t *listEntry;
    if (coupon->id) {
        free(coupon->id);
        coupon->id = NULL;
    }
    if (coupon->code) {
        free(coupon->code);
        coupon->code = NULL;
    }
    if (coupon->codes) {
        list_ForEach(listEntry, coupon->codes) {
            coupon_code_free(listEntry->data);
        }
        list_freeList(coupon->codes);
        coupon->codes = NULL;
    }
    if (coupon->name) {
        free(coupon->name);
        coupon->name = NULL;
    }
    if (coupon->description) {
        free(coupon->description);
        coupon->description = NULL;
    }
    if (coupon->actions) {
        list_ForEach(listEntry, coupon->actions) {
            coupon_action_free(listEntry->data);
        }
        list_freeList(coupon->actions);
        coupon->actions = NULL;
    }
    if (coupon->date_start) {
        a2_c_date_time_free(coupon->date_start);
        coupon->date_start = NULL;
    }
    if (coupon->date_end) {
        a2_c_date_time_free(coupon->date_end);
        coupon->date_end = NULL;
    }
    if (coupon->logic_operator) {
        free(coupon->logic_operator);
        coupon->logic_operator = NULL;
    }
    if (coupon->conditions) {
        list_ForEach(listEntry, coupon->conditions) {
            coupon_condition_free(listEntry->data);
        }
        list_freeList(coupon->conditions);
        coupon->conditions = NULL;
    }
    if (coupon->usage_history) {
        list_ForEach(listEntry, coupon->usage_history) {
            coupon_history_free(listEntry->data);
        }
        list_freeList(coupon->usage_history);
        coupon->usage_history = NULL;
    }
    if (coupon->additional_fields) {
        object_free(coupon->additional_fields);
        coupon->additional_fields = NULL;
    }
    if (coupon->custom_fields) {
        object_free(coupon->custom_fields);
        coupon->custom_fields = NULL;
    }
    free(coupon);
}

cJSON *coupon_convertToJSON(coupon_t *coupon) {
    cJSON *item = cJSON_CreateObject();

    // coupon->id
    if(coupon->id) {
    if(cJSON_AddStringToObject(item, "id", coupon->id) == NULL) {
    goto fail; //String
    }
    }


    // coupon->code
    if(coupon->code) {
    if(cJSON_AddStringToObject(item, "code", coupon->code) == NULL) {
    goto fail; //String
    }
    }


    // coupon->codes
    if(coupon->codes) {
    cJSON *codes = cJSON_AddArrayToObject(item, "codes");
    if(codes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *codesListEntry;
    if (coupon->codes) {
    list_ForEach(codesListEntry, coupon->codes) {
    cJSON *itemLocal = coupon_code_convertToJSON(codesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(codes, itemLocal);
    }
    }
    }


    // coupon->name
    if(coupon->name) {
    if(cJSON_AddStringToObject(item, "name", coupon->name) == NULL) {
    goto fail; //String
    }
    }


    // coupon->description
    if(coupon->description) {
    if(cJSON_AddStringToObject(item, "description", coupon->description) == NULL) {
    goto fail; //String
    }
    }


    // coupon->actions
    if(coupon->actions) {
    cJSON *actions = cJSON_AddArrayToObject(item, "actions");
    if(actions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *actionsListEntry;
    if (coupon->actions) {
    list_ForEach(actionsListEntry, coupon->actions) {
    cJSON *itemLocal = coupon_action_convertToJSON(actionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(actions, itemLocal);
    }
    }
    }


    // coupon->date_start
    if(coupon->date_start) {
    cJSON *date_start_local_JSON = a2_c_date_time_convertToJSON(coupon->date_start);
    if(date_start_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "date_start", date_start_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // coupon->date_end
    if(coupon->date_end) {
    cJSON *date_end_local_JSON = a2_c_date_time_convertToJSON(coupon->date_end);
    if(date_end_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "date_end", date_end_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // coupon->avail
    if(coupon->avail) {
    if(cJSON_AddBoolToObject(item, "avail", coupon->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // coupon->priority
    if(coupon->priority) {
    if(cJSON_AddNumberToObject(item, "priority", coupon->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // coupon->used_times
    if(coupon->used_times) {
    if(cJSON_AddNumberToObject(item, "used_times", coupon->used_times) == NULL) {
    goto fail; //Numeric
    }
    }


    // coupon->usage_limit
    if(coupon->usage_limit) {
    if(cJSON_AddNumberToObject(item, "usage_limit", coupon->usage_limit) == NULL) {
    goto fail; //Numeric
    }
    }


    // coupon->usage_limit_per_customer
    if(coupon->usage_limit_per_customer) {
    if(cJSON_AddNumberToObject(item, "usage_limit_per_customer", coupon->usage_limit_per_customer) == NULL) {
    goto fail; //Numeric
    }
    }


    // coupon->logic_operator
    if(coupon->logic_operator) {
    if(cJSON_AddStringToObject(item, "logic_operator", coupon->logic_operator) == NULL) {
    goto fail; //String
    }
    }


    // coupon->conditions
    if(coupon->conditions) {
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (coupon->conditions) {
    list_ForEach(conditionsListEntry, coupon->conditions) {
    cJSON *itemLocal = coupon_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
    }


    // coupon->usage_history
    if(coupon->usage_history) {
    cJSON *usage_history = cJSON_AddArrayToObject(item, "usage_history");
    if(usage_history == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *usage_historyListEntry;
    if (coupon->usage_history) {
    list_ForEach(usage_historyListEntry, coupon->usage_history) {
    cJSON *itemLocal = coupon_history_convertToJSON(usage_historyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(usage_history, itemLocal);
    }
    }
    }


    // coupon->additional_fields
    if(coupon->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(coupon->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // coupon->custom_fields
    if(coupon->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(coupon->custom_fields);
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

coupon_t *coupon_parseFromJSON(cJSON *couponJSON){

    coupon_t *coupon_local_var = NULL;

    // define the local list for coupon->codes
    list_t *codesList = NULL;

    // define the local list for coupon->actions
    list_t *actionsList = NULL;

    // define the local variable for coupon->date_start
    a2_c_date_time_t *date_start_local_nonprim = NULL;

    // define the local variable for coupon->date_end
    a2_c_date_time_t *date_end_local_nonprim = NULL;

    // define the local list for coupon->conditions
    list_t *conditionsList = NULL;

    // define the local list for coupon->usage_history
    list_t *usage_historyList = NULL;

    // coupon->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(couponJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // coupon->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(couponJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // coupon->codes
    cJSON *codes = cJSON_GetObjectItemCaseSensitive(couponJSON, "codes");
    if (cJSON_IsNull(codes)) {
        codes = NULL;
    }
    if (codes) { 
    cJSON *codes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(codes)){
        goto end; //nonprimitive container
    }

    codesList = list_createList();

    cJSON_ArrayForEach(codes_local_nonprimitive,codes )
    {
        if(!cJSON_IsObject(codes_local_nonprimitive)){
            goto end;
        }
        coupon_code_t *codesItem = coupon_code_parseFromJSON(codes_local_nonprimitive);

        list_addElement(codesList, codesItem);
    }
    }

    // coupon->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(couponJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // coupon->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(couponJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // coupon->actions
    cJSON *actions = cJSON_GetObjectItemCaseSensitive(couponJSON, "actions");
    if (cJSON_IsNull(actions)) {
        actions = NULL;
    }
    if (actions) { 
    cJSON *actions_local_nonprimitive = NULL;
    if(!cJSON_IsArray(actions)){
        goto end; //nonprimitive container
    }

    actionsList = list_createList();

    cJSON_ArrayForEach(actions_local_nonprimitive,actions )
    {
        if(!cJSON_IsObject(actions_local_nonprimitive)){
            goto end;
        }
        coupon_action_t *actionsItem = coupon_action_parseFromJSON(actions_local_nonprimitive);

        list_addElement(actionsList, actionsItem);
    }
    }

    // coupon->date_start
    cJSON *date_start = cJSON_GetObjectItemCaseSensitive(couponJSON, "date_start");
    if (cJSON_IsNull(date_start)) {
        date_start = NULL;
    }
    if (date_start) { 
    date_start_local_nonprim = a2_c_date_time_parseFromJSON(date_start); //nonprimitive
    }

    // coupon->date_end
    cJSON *date_end = cJSON_GetObjectItemCaseSensitive(couponJSON, "date_end");
    if (cJSON_IsNull(date_end)) {
        date_end = NULL;
    }
    if (date_end) { 
    date_end_local_nonprim = a2_c_date_time_parseFromJSON(date_end); //nonprimitive
    }

    // coupon->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(couponJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // coupon->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(couponJSON, "priority");
    if (cJSON_IsNull(priority)) {
        priority = NULL;
    }
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // coupon->used_times
    cJSON *used_times = cJSON_GetObjectItemCaseSensitive(couponJSON, "used_times");
    if (cJSON_IsNull(used_times)) {
        used_times = NULL;
    }
    if (used_times) { 
    if(!cJSON_IsNumber(used_times))
    {
    goto end; //Numeric
    }
    }

    // coupon->usage_limit
    cJSON *usage_limit = cJSON_GetObjectItemCaseSensitive(couponJSON, "usage_limit");
    if (cJSON_IsNull(usage_limit)) {
        usage_limit = NULL;
    }
    if (usage_limit) { 
    if(!cJSON_IsNumber(usage_limit))
    {
    goto end; //Numeric
    }
    }

    // coupon->usage_limit_per_customer
    cJSON *usage_limit_per_customer = cJSON_GetObjectItemCaseSensitive(couponJSON, "usage_limit_per_customer");
    if (cJSON_IsNull(usage_limit_per_customer)) {
        usage_limit_per_customer = NULL;
    }
    if (usage_limit_per_customer) { 
    if(!cJSON_IsNumber(usage_limit_per_customer))
    {
    goto end; //Numeric
    }
    }

    // coupon->logic_operator
    cJSON *logic_operator = cJSON_GetObjectItemCaseSensitive(couponJSON, "logic_operator");
    if (cJSON_IsNull(logic_operator)) {
        logic_operator = NULL;
    }
    if (logic_operator) { 
    if(!cJSON_IsString(logic_operator) && !cJSON_IsNull(logic_operator))
    {
    goto end; //String
    }
    }

    // coupon->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(couponJSON, "conditions");
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

    // coupon->usage_history
    cJSON *usage_history = cJSON_GetObjectItemCaseSensitive(couponJSON, "usage_history");
    if (cJSON_IsNull(usage_history)) {
        usage_history = NULL;
    }
    if (usage_history) { 
    cJSON *usage_history_local_nonprimitive = NULL;
    if(!cJSON_IsArray(usage_history)){
        goto end; //nonprimitive container
    }

    usage_historyList = list_createList();

    cJSON_ArrayForEach(usage_history_local_nonprimitive,usage_history )
    {
        if(!cJSON_IsObject(usage_history_local_nonprimitive)){
            goto end;
        }
        coupon_history_t *usage_historyItem = coupon_history_parseFromJSON(usage_history_local_nonprimitive);

        list_addElement(usage_historyList, usage_historyItem);
    }
    }

    // coupon->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(couponJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // coupon->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(couponJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    coupon_local_var = coupon_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        codes ? codesList : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        actions ? actionsList : NULL,
        date_start ? date_start_local_nonprim : NULL,
        date_end ? date_end_local_nonprim : NULL,
        avail ? avail->valueint : 0,
        priority ? priority->valuedouble : 0,
        used_times ? used_times->valuedouble : 0,
        usage_limit ? usage_limit->valuedouble : 0,
        usage_limit_per_customer ? usage_limit_per_customer->valuedouble : 0,
        logic_operator && !cJSON_IsNull(logic_operator) ? strdup(logic_operator->valuestring) : NULL,
        conditions ? conditionsList : NULL,
        usage_history ? usage_historyList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return coupon_local_var;
end:
    if (codesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, codesList) {
            coupon_code_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(codesList);
        codesList = NULL;
    }
    if (actionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, actionsList) {
            coupon_action_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(actionsList);
        actionsList = NULL;
    }
    if (date_start_local_nonprim) {
        a2_c_date_time_free(date_start_local_nonprim);
        date_start_local_nonprim = NULL;
    }
    if (date_end_local_nonprim) {
        a2_c_date_time_free(date_end_local_nonprim);
        date_end_local_nonprim = NULL;
    }
    if (conditionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, conditionsList) {
            coupon_condition_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(conditionsList);
        conditionsList = NULL;
    }
    if (usage_historyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, usage_historyList) {
            coupon_history_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(usage_historyList);
        usage_historyList = NULL;
    }
    return NULL;

}
