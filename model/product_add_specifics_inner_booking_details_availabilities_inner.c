#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_specifics_inner_booking_details_availabilities_inner.h"


char* product_add_specifics_inner_booking_details_availabilities_inner_day_ToString(api2cart_openapi_product_add_specifics_inner_booking_details_availabilities_inner_DAY_e day) {
    char* dayArray[] =  { "NULL", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
    return dayArray[day];
}

api2cart_openapi_product_add_specifics_inner_booking_details_availabilities_inner_DAY_e product_add_specifics_inner_booking_details_availabilities_inner_day_FromString(char* day){
    int stringToReturn = 0;
    char *dayArray[] =  { "NULL", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
    size_t sizeofArray = sizeof(dayArray) / sizeof(dayArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(day, dayArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static product_add_specifics_inner_booking_details_availabilities_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_create_internal(
    api2cart_openapi_product_add_specifics_inner_booking_details_availabilities_inner_DAY_e day,
    int is_available,
    list_t *times
    ) {
    product_add_specifics_inner_booking_details_availabilities_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_local_var = malloc(sizeof(product_add_specifics_inner_booking_details_availabilities_inner_t));
    if (!product_add_specifics_inner_booking_details_availabilities_inner_local_var) {
        return NULL;
    }
    product_add_specifics_inner_booking_details_availabilities_inner_local_var->day = day;
    product_add_specifics_inner_booking_details_availabilities_inner_local_var->is_available = is_available;
    product_add_specifics_inner_booking_details_availabilities_inner_local_var->times = times;

    product_add_specifics_inner_booking_details_availabilities_inner_local_var->_library_owned = 1;
    return product_add_specifics_inner_booking_details_availabilities_inner_local_var;
}

__attribute__((deprecated)) product_add_specifics_inner_booking_details_availabilities_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_create(
    api2cart_openapi_product_add_specifics_inner_booking_details_availabilities_inner_DAY_e day,
    int is_available,
    list_t *times
    ) {
    return product_add_specifics_inner_booking_details_availabilities_inner_create_internal (
        day,
        is_available,
        times
        );
}

void product_add_specifics_inner_booking_details_availabilities_inner_free(product_add_specifics_inner_booking_details_availabilities_inner_t *product_add_specifics_inner_booking_details_availabilities_inner) {
    if(NULL == product_add_specifics_inner_booking_details_availabilities_inner){
        return ;
    }
    if(product_add_specifics_inner_booking_details_availabilities_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_specifics_inner_booking_details_availabilities_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_specifics_inner_booking_details_availabilities_inner->times) {
        list_ForEach(listEntry, product_add_specifics_inner_booking_details_availabilities_inner->times) {
            product_add_specifics_inner_booking_details_availabilities_inner_times_inner_free(listEntry->data);
        }
        list_freeList(product_add_specifics_inner_booking_details_availabilities_inner->times);
        product_add_specifics_inner_booking_details_availabilities_inner->times = NULL;
    }
    free(product_add_specifics_inner_booking_details_availabilities_inner);
}

cJSON *product_add_specifics_inner_booking_details_availabilities_inner_convertToJSON(product_add_specifics_inner_booking_details_availabilities_inner_t *product_add_specifics_inner_booking_details_availabilities_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_specifics_inner_booking_details_availabilities_inner->day
    if (api2cart_openapi_product_add_specifics_inner_booking_details_availabilities_inner_DAY_NULL == product_add_specifics_inner_booking_details_availabilities_inner->day) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "day", product_add_specifics_inner_booking_details_availabilities_inner_day_ToString(product_add_specifics_inner_booking_details_availabilities_inner->day)) == NULL)
    {
    goto fail; //Enum
    }


    // product_add_specifics_inner_booking_details_availabilities_inner->is_available
    if(product_add_specifics_inner_booking_details_availabilities_inner->is_available) {
    if(cJSON_AddBoolToObject(item, "is_available", product_add_specifics_inner_booking_details_availabilities_inner->is_available) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_specifics_inner_booking_details_availabilities_inner->times
    if(product_add_specifics_inner_booking_details_availabilities_inner->times) {
    cJSON *times = cJSON_AddArrayToObject(item, "times");
    if(times == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *timesListEntry;
    if (product_add_specifics_inner_booking_details_availabilities_inner->times) {
    list_ForEach(timesListEntry, product_add_specifics_inner_booking_details_availabilities_inner->times) {
    cJSON *itemLocal = product_add_specifics_inner_booking_details_availabilities_inner_times_inner_convertToJSON(timesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(times, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_specifics_inner_booking_details_availabilities_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_parseFromJSON(cJSON *product_add_specifics_inner_booking_details_availabilities_innerJSON){

    product_add_specifics_inner_booking_details_availabilities_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_local_var = NULL;

    // define the local list for product_add_specifics_inner_booking_details_availabilities_inner->times
    list_t *timesList = NULL;

    // product_add_specifics_inner_booking_details_availabilities_inner->day
    cJSON *day = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_details_availabilities_innerJSON, "day");
    if (cJSON_IsNull(day)) {
        day = NULL;
    }
    if (!day) {
        goto end;
    }

    api2cart_openapi_product_add_specifics_inner_booking_details_availabilities_inner_DAY_e dayVariable;
    
    if(!cJSON_IsString(day))
    {
    goto end; //Enum
    }
    dayVariable = product_add_specifics_inner_booking_details_availabilities_inner_day_FromString(day->valuestring);

    // product_add_specifics_inner_booking_details_availabilities_inner->is_available
    cJSON *is_available = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_details_availabilities_innerJSON, "is_available");
    if (cJSON_IsNull(is_available)) {
        is_available = NULL;
    }
    if (is_available) { 
    if(!cJSON_IsBool(is_available))
    {
    goto end; //Bool
    }
    }

    // product_add_specifics_inner_booking_details_availabilities_inner->times
    cJSON *times = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_details_availabilities_innerJSON, "times");
    if (cJSON_IsNull(times)) {
        times = NULL;
    }
    if (times) { 
    cJSON *times_local_nonprimitive = NULL;
    if(!cJSON_IsArray(times)){
        goto end; //nonprimitive container
    }

    timesList = list_createList();

    cJSON_ArrayForEach(times_local_nonprimitive,times )
    {
        if(!cJSON_IsObject(times_local_nonprimitive)){
            goto end;
        }
        product_add_specifics_inner_booking_details_availabilities_inner_times_inner_t *timesItem = product_add_specifics_inner_booking_details_availabilities_inner_times_inner_parseFromJSON(times_local_nonprimitive);

        list_addElement(timesList, timesItem);
    }
    }


    product_add_specifics_inner_booking_details_availabilities_inner_local_var = product_add_specifics_inner_booking_details_availabilities_inner_create_internal (
        dayVariable,
        is_available ? is_available->valueint : 0,
        times ? timesList : NULL
        );

    return product_add_specifics_inner_booking_details_availabilities_inner_local_var;
end:
    if (timesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, timesList) {
            product_add_specifics_inner_booking_details_availabilities_inner_times_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(timesList);
        timesList = NULL;
    }
    return NULL;

}
