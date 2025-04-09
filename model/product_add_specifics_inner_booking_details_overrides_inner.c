#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_specifics_inner_booking_details_overrides_inner.h"


char* product_add_specifics_inner_booking_details_overrides_inner_day_ToString(api2cart_openapi_product_add_specifics_inner_booking_details_overrides_inner_DAY_e day) {
    char* dayArray[] =  { "NULL", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
    return dayArray[day];
}

api2cart_openapi_product_add_specifics_inner_booking_details_overrides_inner_DAY_e product_add_specifics_inner_booking_details_overrides_inner_day_FromString(char* day){
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

static product_add_specifics_inner_booking_details_overrides_inner_t *product_add_specifics_inner_booking_details_overrides_inner_create_internal(
    api2cart_openapi_product_add_specifics_inner_booking_details_overrides_inner_DAY_e day,
    char *date
    ) {
    product_add_specifics_inner_booking_details_overrides_inner_t *product_add_specifics_inner_booking_details_overrides_inner_local_var = malloc(sizeof(product_add_specifics_inner_booking_details_overrides_inner_t));
    if (!product_add_specifics_inner_booking_details_overrides_inner_local_var) {
        return NULL;
    }
    product_add_specifics_inner_booking_details_overrides_inner_local_var->day = day;
    product_add_specifics_inner_booking_details_overrides_inner_local_var->date = date;

    product_add_specifics_inner_booking_details_overrides_inner_local_var->_library_owned = 1;
    return product_add_specifics_inner_booking_details_overrides_inner_local_var;
}

__attribute__((deprecated)) product_add_specifics_inner_booking_details_overrides_inner_t *product_add_specifics_inner_booking_details_overrides_inner_create(
    api2cart_openapi_product_add_specifics_inner_booking_details_overrides_inner_DAY_e day,
    char *date
    ) {
    return product_add_specifics_inner_booking_details_overrides_inner_create_internal (
        day,
        date
        );
}

void product_add_specifics_inner_booking_details_overrides_inner_free(product_add_specifics_inner_booking_details_overrides_inner_t *product_add_specifics_inner_booking_details_overrides_inner) {
    if(NULL == product_add_specifics_inner_booking_details_overrides_inner){
        return ;
    }
    if(product_add_specifics_inner_booking_details_overrides_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_specifics_inner_booking_details_overrides_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_specifics_inner_booking_details_overrides_inner->date) {
        free(product_add_specifics_inner_booking_details_overrides_inner->date);
        product_add_specifics_inner_booking_details_overrides_inner->date = NULL;
    }
    free(product_add_specifics_inner_booking_details_overrides_inner);
}

cJSON *product_add_specifics_inner_booking_details_overrides_inner_convertToJSON(product_add_specifics_inner_booking_details_overrides_inner_t *product_add_specifics_inner_booking_details_overrides_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_specifics_inner_booking_details_overrides_inner->day
    if (api2cart_openapi_product_add_specifics_inner_booking_details_overrides_inner_DAY_NULL == product_add_specifics_inner_booking_details_overrides_inner->day) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "day", product_add_specifics_inner_booking_details_overrides_inner_day_ToString(product_add_specifics_inner_booking_details_overrides_inner->day)) == NULL)
    {
    goto fail; //Enum
    }


    // product_add_specifics_inner_booking_details_overrides_inner->date
    if (!product_add_specifics_inner_booking_details_overrides_inner->date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "date", product_add_specifics_inner_booking_details_overrides_inner->date) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_specifics_inner_booking_details_overrides_inner_t *product_add_specifics_inner_booking_details_overrides_inner_parseFromJSON(cJSON *product_add_specifics_inner_booking_details_overrides_innerJSON){

    product_add_specifics_inner_booking_details_overrides_inner_t *product_add_specifics_inner_booking_details_overrides_inner_local_var = NULL;

    // product_add_specifics_inner_booking_details_overrides_inner->day
    cJSON *day = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_details_overrides_innerJSON, "day");
    if (cJSON_IsNull(day)) {
        day = NULL;
    }
    if (!day) {
        goto end;
    }

    api2cart_openapi_product_add_specifics_inner_booking_details_overrides_inner_DAY_e dayVariable;
    
    if(!cJSON_IsString(day))
    {
    goto end; //Enum
    }
    dayVariable = product_add_specifics_inner_booking_details_overrides_inner_day_FromString(day->valuestring);

    // product_add_specifics_inner_booking_details_overrides_inner->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_details_overrides_innerJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (!date) {
        goto end;
    }

    
    if(!cJSON_IsString(date))
    {
    goto end; //String
    }


    product_add_specifics_inner_booking_details_overrides_inner_local_var = product_add_specifics_inner_booking_details_overrides_inner_create_internal (
        dayVariable,
        strdup(date->valuestring)
        );

    return product_add_specifics_inner_booking_details_overrides_inner_local_var;
end:
    return NULL;

}
