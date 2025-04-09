#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "catalog_price_rule.h"



static catalog_price_rule_t *catalog_price_rule_create_internal(
    char *id,
    char *gid,
    char *type,
    char *name,
    char *description,
    char *short_description,
    int avail,
    list_t *actions,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *date_start,
    a2_c_date_time_t *date_end,
    double usage_count,
    list_t *conditions,
    int uses_per_order_limit,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    catalog_price_rule_t *catalog_price_rule_local_var = malloc(sizeof(catalog_price_rule_t));
    if (!catalog_price_rule_local_var) {
        return NULL;
    }
    catalog_price_rule_local_var->id = id;
    catalog_price_rule_local_var->gid = gid;
    catalog_price_rule_local_var->type = type;
    catalog_price_rule_local_var->name = name;
    catalog_price_rule_local_var->description = description;
    catalog_price_rule_local_var->short_description = short_description;
    catalog_price_rule_local_var->avail = avail;
    catalog_price_rule_local_var->actions = actions;
    catalog_price_rule_local_var->created_time = created_time;
    catalog_price_rule_local_var->date_start = date_start;
    catalog_price_rule_local_var->date_end = date_end;
    catalog_price_rule_local_var->usage_count = usage_count;
    catalog_price_rule_local_var->conditions = conditions;
    catalog_price_rule_local_var->uses_per_order_limit = uses_per_order_limit;
    catalog_price_rule_local_var->additional_fields = additional_fields;
    catalog_price_rule_local_var->custom_fields = custom_fields;

    catalog_price_rule_local_var->_library_owned = 1;
    return catalog_price_rule_local_var;
}

__attribute__((deprecated)) catalog_price_rule_t *catalog_price_rule_create(
    char *id,
    char *gid,
    char *type,
    char *name,
    char *description,
    char *short_description,
    int avail,
    list_t *actions,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *date_start,
    a2_c_date_time_t *date_end,
    double usage_count,
    list_t *conditions,
    int uses_per_order_limit,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return catalog_price_rule_create_internal (
        id,
        gid,
        type,
        name,
        description,
        short_description,
        avail,
        actions,
        created_time,
        date_start,
        date_end,
        usage_count,
        conditions,
        uses_per_order_limit,
        additional_fields,
        custom_fields
        );
}

void catalog_price_rule_free(catalog_price_rule_t *catalog_price_rule) {
    if(NULL == catalog_price_rule){
        return ;
    }
    if(catalog_price_rule->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "catalog_price_rule_free");
        return ;
    }
    listEntry_t *listEntry;
    if (catalog_price_rule->id) {
        free(catalog_price_rule->id);
        catalog_price_rule->id = NULL;
    }
    if (catalog_price_rule->gid) {
        free(catalog_price_rule->gid);
        catalog_price_rule->gid = NULL;
    }
    if (catalog_price_rule->type) {
        free(catalog_price_rule->type);
        catalog_price_rule->type = NULL;
    }
    if (catalog_price_rule->name) {
        free(catalog_price_rule->name);
        catalog_price_rule->name = NULL;
    }
    if (catalog_price_rule->description) {
        free(catalog_price_rule->description);
        catalog_price_rule->description = NULL;
    }
    if (catalog_price_rule->short_description) {
        free(catalog_price_rule->short_description);
        catalog_price_rule->short_description = NULL;
    }
    if (catalog_price_rule->actions) {
        list_ForEach(listEntry, catalog_price_rule->actions) {
            catalog_price_rule_action_free(listEntry->data);
        }
        list_freeList(catalog_price_rule->actions);
        catalog_price_rule->actions = NULL;
    }
    if (catalog_price_rule->created_time) {
        a2_c_date_time_free(catalog_price_rule->created_time);
        catalog_price_rule->created_time = NULL;
    }
    if (catalog_price_rule->date_start) {
        a2_c_date_time_free(catalog_price_rule->date_start);
        catalog_price_rule->date_start = NULL;
    }
    if (catalog_price_rule->date_end) {
        a2_c_date_time_free(catalog_price_rule->date_end);
        catalog_price_rule->date_end = NULL;
    }
    if (catalog_price_rule->conditions) {
        list_ForEach(listEntry, catalog_price_rule->conditions) {
            coupon_condition_free(listEntry->data);
        }
        list_freeList(catalog_price_rule->conditions);
        catalog_price_rule->conditions = NULL;
    }
    if (catalog_price_rule->additional_fields) {
        object_free(catalog_price_rule->additional_fields);
        catalog_price_rule->additional_fields = NULL;
    }
    if (catalog_price_rule->custom_fields) {
        object_free(catalog_price_rule->custom_fields);
        catalog_price_rule->custom_fields = NULL;
    }
    free(catalog_price_rule);
}

cJSON *catalog_price_rule_convertToJSON(catalog_price_rule_t *catalog_price_rule) {
    cJSON *item = cJSON_CreateObject();

    // catalog_price_rule->id
    if(catalog_price_rule->id) {
    if(cJSON_AddStringToObject(item, "id", catalog_price_rule->id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_price_rule->gid
    if(catalog_price_rule->gid) {
    if(cJSON_AddStringToObject(item, "gid", catalog_price_rule->gid) == NULL) {
    goto fail; //String
    }
    }


    // catalog_price_rule->type
    if(catalog_price_rule->type) {
    if(cJSON_AddStringToObject(item, "type", catalog_price_rule->type) == NULL) {
    goto fail; //String
    }
    }


    // catalog_price_rule->name
    if(catalog_price_rule->name) {
    if(cJSON_AddStringToObject(item, "name", catalog_price_rule->name) == NULL) {
    goto fail; //String
    }
    }


    // catalog_price_rule->description
    if(catalog_price_rule->description) {
    if(cJSON_AddStringToObject(item, "description", catalog_price_rule->description) == NULL) {
    goto fail; //String
    }
    }


    // catalog_price_rule->short_description
    if(catalog_price_rule->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", catalog_price_rule->short_description) == NULL) {
    goto fail; //String
    }
    }


    // catalog_price_rule->avail
    if(catalog_price_rule->avail) {
    if(cJSON_AddBoolToObject(item, "avail", catalog_price_rule->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_price_rule->actions
    if(catalog_price_rule->actions) {
    cJSON *actions = cJSON_AddArrayToObject(item, "actions");
    if(actions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *actionsListEntry;
    if (catalog_price_rule->actions) {
    list_ForEach(actionsListEntry, catalog_price_rule->actions) {
    cJSON *itemLocal = catalog_price_rule_action_convertToJSON(actionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(actions, itemLocal);
    }
    }
    }


    // catalog_price_rule->created_time
    if(catalog_price_rule->created_time) {
    cJSON *created_time_local_JSON = a2_c_date_time_convertToJSON(catalog_price_rule->created_time);
    if(created_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_time", created_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // catalog_price_rule->date_start
    if(catalog_price_rule->date_start) {
    cJSON *date_start_local_JSON = a2_c_date_time_convertToJSON(catalog_price_rule->date_start);
    if(date_start_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "date_start", date_start_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // catalog_price_rule->date_end
    if(catalog_price_rule->date_end) {
    cJSON *date_end_local_JSON = a2_c_date_time_convertToJSON(catalog_price_rule->date_end);
    if(date_end_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "date_end", date_end_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // catalog_price_rule->usage_count
    if(catalog_price_rule->usage_count) {
    if(cJSON_AddNumberToObject(item, "usage_count", catalog_price_rule->usage_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_price_rule->conditions
    if(catalog_price_rule->conditions) {
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (catalog_price_rule->conditions) {
    list_ForEach(conditionsListEntry, catalog_price_rule->conditions) {
    cJSON *itemLocal = coupon_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
    }


    // catalog_price_rule->uses_per_order_limit
    if(catalog_price_rule->uses_per_order_limit) {
    if(cJSON_AddNumberToObject(item, "uses_per_order_limit", catalog_price_rule->uses_per_order_limit) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_price_rule->additional_fields
    if(catalog_price_rule->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(catalog_price_rule->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // catalog_price_rule->custom_fields
    if(catalog_price_rule->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(catalog_price_rule->custom_fields);
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

catalog_price_rule_t *catalog_price_rule_parseFromJSON(cJSON *catalog_price_ruleJSON){

    catalog_price_rule_t *catalog_price_rule_local_var = NULL;

    // define the local list for catalog_price_rule->actions
    list_t *actionsList = NULL;

    // define the local variable for catalog_price_rule->created_time
    a2_c_date_time_t *created_time_local_nonprim = NULL;

    // define the local variable for catalog_price_rule->date_start
    a2_c_date_time_t *date_start_local_nonprim = NULL;

    // define the local variable for catalog_price_rule->date_end
    a2_c_date_time_t *date_end_local_nonprim = NULL;

    // define the local list for catalog_price_rule->conditions
    list_t *conditionsList = NULL;

    // catalog_price_rule->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // catalog_price_rule->gid
    cJSON *gid = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "gid");
    if (cJSON_IsNull(gid)) {
        gid = NULL;
    }
    if (gid) { 
    if(!cJSON_IsString(gid) && !cJSON_IsNull(gid))
    {
    goto end; //String
    }
    }

    // catalog_price_rule->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // catalog_price_rule->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // catalog_price_rule->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // catalog_price_rule->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // catalog_price_rule->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // catalog_price_rule->actions
    cJSON *actions = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "actions");
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
        catalog_price_rule_action_t *actionsItem = catalog_price_rule_action_parseFromJSON(actions_local_nonprimitive);

        list_addElement(actionsList, actionsItem);
    }
    }

    // catalog_price_rule->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    created_time_local_nonprim = a2_c_date_time_parseFromJSON(created_time); //nonprimitive
    }

    // catalog_price_rule->date_start
    cJSON *date_start = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "date_start");
    if (cJSON_IsNull(date_start)) {
        date_start = NULL;
    }
    if (date_start) { 
    date_start_local_nonprim = a2_c_date_time_parseFromJSON(date_start); //nonprimitive
    }

    // catalog_price_rule->date_end
    cJSON *date_end = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "date_end");
    if (cJSON_IsNull(date_end)) {
        date_end = NULL;
    }
    if (date_end) { 
    date_end_local_nonprim = a2_c_date_time_parseFromJSON(date_end); //nonprimitive
    }

    // catalog_price_rule->usage_count
    cJSON *usage_count = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "usage_count");
    if (cJSON_IsNull(usage_count)) {
        usage_count = NULL;
    }
    if (usage_count) { 
    if(!cJSON_IsNumber(usage_count))
    {
    goto end; //Numeric
    }
    }

    // catalog_price_rule->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "conditions");
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

    // catalog_price_rule->uses_per_order_limit
    cJSON *uses_per_order_limit = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "uses_per_order_limit");
    if (cJSON_IsNull(uses_per_order_limit)) {
        uses_per_order_limit = NULL;
    }
    if (uses_per_order_limit) { 
    if(!cJSON_IsNumber(uses_per_order_limit))
    {
    goto end; //Numeric
    }
    }

    // catalog_price_rule->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // catalog_price_rule->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(catalog_price_ruleJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    catalog_price_rule_local_var = catalog_price_rule_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        gid && !cJSON_IsNull(gid) ? strdup(gid->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        avail ? avail->valueint : 0,
        actions ? actionsList : NULL,
        created_time ? created_time_local_nonprim : NULL,
        date_start ? date_start_local_nonprim : NULL,
        date_end ? date_end_local_nonprim : NULL,
        usage_count ? usage_count->valuedouble : 0,
        conditions ? conditionsList : NULL,
        uses_per_order_limit ? uses_per_order_limit->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return catalog_price_rule_local_var;
end:
    if (actionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, actionsList) {
            catalog_price_rule_action_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(actionsList);
        actionsList = NULL;
    }
    if (created_time_local_nonprim) {
        a2_c_date_time_free(created_time_local_nonprim);
        created_time_local_nonprim = NULL;
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
    return NULL;

}
