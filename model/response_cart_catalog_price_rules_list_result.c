#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_cart_catalog_price_rules_list_result.h"



static response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result_create_internal(
    int catalog_price_rules_count,
    list_t *catalog_price_rules,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result_local_var = malloc(sizeof(response_cart_catalog_price_rules_list_result_t));
    if (!response_cart_catalog_price_rules_list_result_local_var) {
        return NULL;
    }
    response_cart_catalog_price_rules_list_result_local_var->catalog_price_rules_count = catalog_price_rules_count;
    response_cart_catalog_price_rules_list_result_local_var->catalog_price_rules = catalog_price_rules;
    response_cart_catalog_price_rules_list_result_local_var->additional_fields = additional_fields;
    response_cart_catalog_price_rules_list_result_local_var->custom_fields = custom_fields;

    response_cart_catalog_price_rules_list_result_local_var->_library_owned = 1;
    return response_cart_catalog_price_rules_list_result_local_var;
}

__attribute__((deprecated)) response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result_create(
    int catalog_price_rules_count,
    list_t *catalog_price_rules,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_cart_catalog_price_rules_list_result_create_internal (
        catalog_price_rules_count,
        catalog_price_rules,
        additional_fields,
        custom_fields
        );
}

void response_cart_catalog_price_rules_list_result_free(response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result) {
    if(NULL == response_cart_catalog_price_rules_list_result){
        return ;
    }
    if(response_cart_catalog_price_rules_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_cart_catalog_price_rules_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_cart_catalog_price_rules_list_result->catalog_price_rules) {
        list_ForEach(listEntry, response_cart_catalog_price_rules_list_result->catalog_price_rules) {
            catalog_price_rule_free(listEntry->data);
        }
        list_freeList(response_cart_catalog_price_rules_list_result->catalog_price_rules);
        response_cart_catalog_price_rules_list_result->catalog_price_rules = NULL;
    }
    if (response_cart_catalog_price_rules_list_result->additional_fields) {
        object_free(response_cart_catalog_price_rules_list_result->additional_fields);
        response_cart_catalog_price_rules_list_result->additional_fields = NULL;
    }
    if (response_cart_catalog_price_rules_list_result->custom_fields) {
        object_free(response_cart_catalog_price_rules_list_result->custom_fields);
        response_cart_catalog_price_rules_list_result->custom_fields = NULL;
    }
    free(response_cart_catalog_price_rules_list_result);
}

cJSON *response_cart_catalog_price_rules_list_result_convertToJSON(response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_cart_catalog_price_rules_list_result->catalog_price_rules_count
    if(response_cart_catalog_price_rules_list_result->catalog_price_rules_count) {
    if(cJSON_AddNumberToObject(item, "catalog_price_rules_count", response_cart_catalog_price_rules_list_result->catalog_price_rules_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_cart_catalog_price_rules_list_result->catalog_price_rules
    if(response_cart_catalog_price_rules_list_result->catalog_price_rules) {
    cJSON *catalog_price_rules = cJSON_AddArrayToObject(item, "catalog_price_rules");
    if(catalog_price_rules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *catalog_price_rulesListEntry;
    if (response_cart_catalog_price_rules_list_result->catalog_price_rules) {
    list_ForEach(catalog_price_rulesListEntry, response_cart_catalog_price_rules_list_result->catalog_price_rules) {
    cJSON *itemLocal = catalog_price_rule_convertToJSON(catalog_price_rulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(catalog_price_rules, itemLocal);
    }
    }
    }


    // response_cart_catalog_price_rules_list_result->additional_fields
    if(response_cart_catalog_price_rules_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_cart_catalog_price_rules_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_cart_catalog_price_rules_list_result->custom_fields
    if(response_cart_catalog_price_rules_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_cart_catalog_price_rules_list_result->custom_fields);
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

response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result_parseFromJSON(cJSON *response_cart_catalog_price_rules_list_resultJSON){

    response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result_local_var = NULL;

    // define the local list for response_cart_catalog_price_rules_list_result->catalog_price_rules
    list_t *catalog_price_rulesList = NULL;

    // response_cart_catalog_price_rules_list_result->catalog_price_rules_count
    cJSON *catalog_price_rules_count = cJSON_GetObjectItemCaseSensitive(response_cart_catalog_price_rules_list_resultJSON, "catalog_price_rules_count");
    if (cJSON_IsNull(catalog_price_rules_count)) {
        catalog_price_rules_count = NULL;
    }
    if (catalog_price_rules_count) { 
    if(!cJSON_IsNumber(catalog_price_rules_count))
    {
    goto end; //Numeric
    }
    }

    // response_cart_catalog_price_rules_list_result->catalog_price_rules
    cJSON *catalog_price_rules = cJSON_GetObjectItemCaseSensitive(response_cart_catalog_price_rules_list_resultJSON, "catalog_price_rules");
    if (cJSON_IsNull(catalog_price_rules)) {
        catalog_price_rules = NULL;
    }
    if (catalog_price_rules) { 
    cJSON *catalog_price_rules_local_nonprimitive = NULL;
    if(!cJSON_IsArray(catalog_price_rules)){
        goto end; //nonprimitive container
    }

    catalog_price_rulesList = list_createList();

    cJSON_ArrayForEach(catalog_price_rules_local_nonprimitive,catalog_price_rules )
    {
        if(!cJSON_IsObject(catalog_price_rules_local_nonprimitive)){
            goto end;
        }
        catalog_price_rule_t *catalog_price_rulesItem = catalog_price_rule_parseFromJSON(catalog_price_rules_local_nonprimitive);

        list_addElement(catalog_price_rulesList, catalog_price_rulesItem);
    }
    }

    // response_cart_catalog_price_rules_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_cart_catalog_price_rules_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_cart_catalog_price_rules_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_cart_catalog_price_rules_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_cart_catalog_price_rules_list_result_local_var = response_cart_catalog_price_rules_list_result_create_internal (
        catalog_price_rules_count ? catalog_price_rules_count->valuedouble : 0,
        catalog_price_rules ? catalog_price_rulesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_cart_catalog_price_rules_list_result_local_var;
end:
    if (catalog_price_rulesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, catalog_price_rulesList) {
            catalog_price_rule_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(catalog_price_rulesList);
        catalog_price_rulesList = NULL;
    }
    return NULL;

}
