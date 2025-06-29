#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_specifics_inner.h"



static product_add_specifics_inner_t *product_add_specifics_inner_create_internal(
    char *name,
    char *value,
    list_t *values,
    int used_for_variations,
    int scale_id,
    char *input_value,
    product_add_specifics_inner_food_details_t *food_details,
    list_t *group_products_details,
    product_add_specifics_inner_booking_details_t *booking_details
    ) {
    product_add_specifics_inner_t *product_add_specifics_inner_local_var = malloc(sizeof(product_add_specifics_inner_t));
    if (!product_add_specifics_inner_local_var) {
        return NULL;
    }
    product_add_specifics_inner_local_var->name = name;
    product_add_specifics_inner_local_var->value = value;
    product_add_specifics_inner_local_var->values = values;
    product_add_specifics_inner_local_var->used_for_variations = used_for_variations;
    product_add_specifics_inner_local_var->scale_id = scale_id;
    product_add_specifics_inner_local_var->input_value = input_value;
    product_add_specifics_inner_local_var->food_details = food_details;
    product_add_specifics_inner_local_var->group_products_details = group_products_details;
    product_add_specifics_inner_local_var->booking_details = booking_details;

    product_add_specifics_inner_local_var->_library_owned = 1;
    return product_add_specifics_inner_local_var;
}

__attribute__((deprecated)) product_add_specifics_inner_t *product_add_specifics_inner_create(
    char *name,
    char *value,
    list_t *values,
    int used_for_variations,
    int scale_id,
    char *input_value,
    product_add_specifics_inner_food_details_t *food_details,
    list_t *group_products_details,
    product_add_specifics_inner_booking_details_t *booking_details
    ) {
    return product_add_specifics_inner_create_internal (
        name,
        value,
        values,
        used_for_variations,
        scale_id,
        input_value,
        food_details,
        group_products_details,
        booking_details
        );
}

void product_add_specifics_inner_free(product_add_specifics_inner_t *product_add_specifics_inner) {
    if(NULL == product_add_specifics_inner){
        return ;
    }
    if(product_add_specifics_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_specifics_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_specifics_inner->name) {
        free(product_add_specifics_inner->name);
        product_add_specifics_inner->name = NULL;
    }
    if (product_add_specifics_inner->value) {
        free(product_add_specifics_inner->value);
        product_add_specifics_inner->value = NULL;
    }
    if (product_add_specifics_inner->values) {
        list_ForEach(listEntry, product_add_specifics_inner->values) {
            free(listEntry->data);
        }
        list_freeList(product_add_specifics_inner->values);
        product_add_specifics_inner->values = NULL;
    }
    if (product_add_specifics_inner->input_value) {
        free(product_add_specifics_inner->input_value);
        product_add_specifics_inner->input_value = NULL;
    }
    if (product_add_specifics_inner->food_details) {
        product_add_specifics_inner_food_details_free(product_add_specifics_inner->food_details);
        product_add_specifics_inner->food_details = NULL;
    }
    if (product_add_specifics_inner->group_products_details) {
        list_ForEach(listEntry, product_add_specifics_inner->group_products_details) {
            product_add_specifics_inner_group_products_details_inner_free(listEntry->data);
        }
        list_freeList(product_add_specifics_inner->group_products_details);
        product_add_specifics_inner->group_products_details = NULL;
    }
    if (product_add_specifics_inner->booking_details) {
        product_add_specifics_inner_booking_details_free(product_add_specifics_inner->booking_details);
        product_add_specifics_inner->booking_details = NULL;
    }
    free(product_add_specifics_inner);
}

cJSON *product_add_specifics_inner_convertToJSON(product_add_specifics_inner_t *product_add_specifics_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_specifics_inner->name
    if(product_add_specifics_inner->name) {
    if(cJSON_AddStringToObject(item, "name", product_add_specifics_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // product_add_specifics_inner->value
    if(product_add_specifics_inner->value) {
    if(cJSON_AddStringToObject(item, "value", product_add_specifics_inner->value) == NULL) {
    goto fail; //String
    }
    }


    // product_add_specifics_inner->values
    if(product_add_specifics_inner->values) {
    cJSON *values = cJSON_AddArrayToObject(item, "values");
    if(values == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *valuesListEntry;
    list_ForEach(valuesListEntry, product_add_specifics_inner->values) {
    if(cJSON_AddStringToObject(values, "", valuesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add_specifics_inner->used_for_variations
    if(product_add_specifics_inner->used_for_variations) {
    if(cJSON_AddBoolToObject(item, "used_for_variations", product_add_specifics_inner->used_for_variations) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_specifics_inner->scale_id
    if(product_add_specifics_inner->scale_id) {
    if(cJSON_AddNumberToObject(item, "scale_id", product_add_specifics_inner->scale_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_specifics_inner->input_value
    if(product_add_specifics_inner->input_value) {
    if(cJSON_AddStringToObject(item, "input_value", product_add_specifics_inner->input_value) == NULL) {
    goto fail; //String
    }
    }


    // product_add_specifics_inner->food_details
    if(product_add_specifics_inner->food_details) {
    cJSON *food_details_local_JSON = product_add_specifics_inner_food_details_convertToJSON(product_add_specifics_inner->food_details);
    if(food_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "food_details", food_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_add_specifics_inner->group_products_details
    if(product_add_specifics_inner->group_products_details) {
    cJSON *group_products_details = cJSON_AddArrayToObject(item, "group_products_details");
    if(group_products_details == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *group_products_detailsListEntry;
    if (product_add_specifics_inner->group_products_details) {
    list_ForEach(group_products_detailsListEntry, product_add_specifics_inner->group_products_details) {
    cJSON *itemLocal = product_add_specifics_inner_group_products_details_inner_convertToJSON(group_products_detailsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(group_products_details, itemLocal);
    }
    }
    }


    // product_add_specifics_inner->booking_details
    if(product_add_specifics_inner->booking_details) {
    cJSON *booking_details_local_JSON = product_add_specifics_inner_booking_details_convertToJSON(product_add_specifics_inner->booking_details);
    if(booking_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "booking_details", booking_details_local_JSON);
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

product_add_specifics_inner_t *product_add_specifics_inner_parseFromJSON(cJSON *product_add_specifics_innerJSON){

    product_add_specifics_inner_t *product_add_specifics_inner_local_var = NULL;

    // define the local list for product_add_specifics_inner->values
    list_t *valuesList = NULL;

    // define the local variable for product_add_specifics_inner->food_details
    product_add_specifics_inner_food_details_t *food_details_local_nonprim = NULL;

    // define the local list for product_add_specifics_inner->group_products_details
    list_t *group_products_detailsList = NULL;

    // define the local variable for product_add_specifics_inner->booking_details
    product_add_specifics_inner_booking_details_t *booking_details_local_nonprim = NULL;

    // product_add_specifics_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_add_specifics_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_add_specifics_inner->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(product_add_specifics_innerJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // product_add_specifics_inner->values
    cJSON *values = cJSON_GetObjectItemCaseSensitive(product_add_specifics_innerJSON, "values");
    if (cJSON_IsNull(values)) {
        values = NULL;
    }
    if (values) { 
    cJSON *values_local = NULL;
    if(!cJSON_IsArray(values)) {
        goto end;//primitive container
    }
    valuesList = list_createList();

    cJSON_ArrayForEach(values_local, values)
    {
        if(!cJSON_IsString(values_local))
        {
            goto end;
        }
        list_addElement(valuesList , strdup(values_local->valuestring));
    }
    }

    // product_add_specifics_inner->used_for_variations
    cJSON *used_for_variations = cJSON_GetObjectItemCaseSensitive(product_add_specifics_innerJSON, "used_for_variations");
    if (cJSON_IsNull(used_for_variations)) {
        used_for_variations = NULL;
    }
    if (used_for_variations) { 
    if(!cJSON_IsBool(used_for_variations))
    {
    goto end; //Bool
    }
    }

    // product_add_specifics_inner->scale_id
    cJSON *scale_id = cJSON_GetObjectItemCaseSensitive(product_add_specifics_innerJSON, "scale_id");
    if (cJSON_IsNull(scale_id)) {
        scale_id = NULL;
    }
    if (scale_id) { 
    if(!cJSON_IsNumber(scale_id))
    {
    goto end; //Numeric
    }
    }

    // product_add_specifics_inner->input_value
    cJSON *input_value = cJSON_GetObjectItemCaseSensitive(product_add_specifics_innerJSON, "input_value");
    if (cJSON_IsNull(input_value)) {
        input_value = NULL;
    }
    if (input_value) { 
    if(!cJSON_IsString(input_value) && !cJSON_IsNull(input_value))
    {
    goto end; //String
    }
    }

    // product_add_specifics_inner->food_details
    cJSON *food_details = cJSON_GetObjectItemCaseSensitive(product_add_specifics_innerJSON, "food_details");
    if (cJSON_IsNull(food_details)) {
        food_details = NULL;
    }
    if (food_details) { 
    food_details_local_nonprim = product_add_specifics_inner_food_details_parseFromJSON(food_details); //nonprimitive
    }

    // product_add_specifics_inner->group_products_details
    cJSON *group_products_details = cJSON_GetObjectItemCaseSensitive(product_add_specifics_innerJSON, "group_products_details");
    if (cJSON_IsNull(group_products_details)) {
        group_products_details = NULL;
    }
    if (group_products_details) { 
    cJSON *group_products_details_local_nonprimitive = NULL;
    if(!cJSON_IsArray(group_products_details)){
        goto end; //nonprimitive container
    }

    group_products_detailsList = list_createList();

    cJSON_ArrayForEach(group_products_details_local_nonprimitive,group_products_details )
    {
        if(!cJSON_IsObject(group_products_details_local_nonprimitive)){
            goto end;
        }
        product_add_specifics_inner_group_products_details_inner_t *group_products_detailsItem = product_add_specifics_inner_group_products_details_inner_parseFromJSON(group_products_details_local_nonprimitive);

        list_addElement(group_products_detailsList, group_products_detailsItem);
    }
    }

    // product_add_specifics_inner->booking_details
    cJSON *booking_details = cJSON_GetObjectItemCaseSensitive(product_add_specifics_innerJSON, "booking_details");
    if (cJSON_IsNull(booking_details)) {
        booking_details = NULL;
    }
    if (booking_details) { 
    booking_details_local_nonprim = product_add_specifics_inner_booking_details_parseFromJSON(booking_details); //nonprimitive
    }


    product_add_specifics_inner_local_var = product_add_specifics_inner_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        values ? valuesList : NULL,
        used_for_variations ? used_for_variations->valueint : 0,
        scale_id ? scale_id->valuedouble : 0,
        input_value && !cJSON_IsNull(input_value) ? strdup(input_value->valuestring) : NULL,
        food_details ? food_details_local_nonprim : NULL,
        group_products_details ? group_products_detailsList : NULL,
        booking_details ? booking_details_local_nonprim : NULL
        );

    return product_add_specifics_inner_local_var;
end:
    if (valuesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, valuesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(valuesList);
        valuesList = NULL;
    }
    if (food_details_local_nonprim) {
        product_add_specifics_inner_food_details_free(food_details_local_nonprim);
        food_details_local_nonprim = NULL;
    }
    if (group_products_detailsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, group_products_detailsList) {
            product_add_specifics_inner_group_products_details_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(group_products_detailsList);
        group_products_detailsList = NULL;
    }
    if (booking_details_local_nonprim) {
        product_add_specifics_inner_booking_details_free(booking_details_local_nonprim);
        booking_details_local_nonprim = NULL;
    }
    return NULL;

}
