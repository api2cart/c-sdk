#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_specifics_inner_booking_details.h"


char* product_add_specifics_inner_booking_details_type_ToString(api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_e type) {
    char* typeArray[] =  { "NULL", "date", "date_time" };
    return typeArray[type];
}

api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_e product_add_specifics_inner_booking_details_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "date", "date_time" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* product_add_specifics_inner_booking_details_time_strict_type_ToString(api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_e time_strict_type) {
    char* time_strict_typeArray[] =  { "NULL", "days", "hours", "minutes" };
    return time_strict_typeArray[time_strict_type];
}

api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_e product_add_specifics_inner_booking_details_time_strict_type_FromString(char* time_strict_type){
    int stringToReturn = 0;
    char *time_strict_typeArray[] =  { "NULL", "days", "hours", "minutes" };
    size_t sizeofArray = sizeof(time_strict_typeArray) / sizeof(time_strict_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(time_strict_type, time_strict_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details_create_internal(
    char *location,
    api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_e type,
    int session_duration,
    int session_gap,
    int sessions_count,
    double time_strict_value,
    api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_e time_strict_type,
    list_t *availabilities,
    list_t *overrides
    ) {
    product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details_local_var = malloc(sizeof(product_add_specifics_inner_booking_details_t));
    if (!product_add_specifics_inner_booking_details_local_var) {
        return NULL;
    }
    product_add_specifics_inner_booking_details_local_var->location = location;
    product_add_specifics_inner_booking_details_local_var->type = type;
    product_add_specifics_inner_booking_details_local_var->session_duration = session_duration;
    product_add_specifics_inner_booking_details_local_var->session_gap = session_gap;
    product_add_specifics_inner_booking_details_local_var->sessions_count = sessions_count;
    product_add_specifics_inner_booking_details_local_var->time_strict_value = time_strict_value;
    product_add_specifics_inner_booking_details_local_var->time_strict_type = time_strict_type;
    product_add_specifics_inner_booking_details_local_var->availabilities = availabilities;
    product_add_specifics_inner_booking_details_local_var->overrides = overrides;

    product_add_specifics_inner_booking_details_local_var->_library_owned = 1;
    return product_add_specifics_inner_booking_details_local_var;
}

__attribute__((deprecated)) product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details_create(
    char *location,
    api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_e type,
    int session_duration,
    int session_gap,
    int sessions_count,
    double time_strict_value,
    api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_e time_strict_type,
    list_t *availabilities,
    list_t *overrides
    ) {
    return product_add_specifics_inner_booking_details_create_internal (
        location,
        type,
        session_duration,
        session_gap,
        sessions_count,
        time_strict_value,
        time_strict_type,
        availabilities,
        overrides
        );
}

void product_add_specifics_inner_booking_details_free(product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details) {
    if(NULL == product_add_specifics_inner_booking_details){
        return ;
    }
    if(product_add_specifics_inner_booking_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_specifics_inner_booking_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_specifics_inner_booking_details->location) {
        free(product_add_specifics_inner_booking_details->location);
        product_add_specifics_inner_booking_details->location = NULL;
    }
    if (product_add_specifics_inner_booking_details->availabilities) {
        list_ForEach(listEntry, product_add_specifics_inner_booking_details->availabilities) {
            product_add_specifics_inner_booking_details_availabilities_inner_free(listEntry->data);
        }
        list_freeList(product_add_specifics_inner_booking_details->availabilities);
        product_add_specifics_inner_booking_details->availabilities = NULL;
    }
    if (product_add_specifics_inner_booking_details->overrides) {
        list_ForEach(listEntry, product_add_specifics_inner_booking_details->overrides) {
            product_add_specifics_inner_booking_details_overrides_inner_free(listEntry->data);
        }
        list_freeList(product_add_specifics_inner_booking_details->overrides);
        product_add_specifics_inner_booking_details->overrides = NULL;
    }
    free(product_add_specifics_inner_booking_details);
}

cJSON *product_add_specifics_inner_booking_details_convertToJSON(product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details) {
    cJSON *item = cJSON_CreateObject();

    // product_add_specifics_inner_booking_details->location
    if (!product_add_specifics_inner_booking_details->location) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "location", product_add_specifics_inner_booking_details->location) == NULL) {
    goto fail; //String
    }


    // product_add_specifics_inner_booking_details->type
    if (api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_NULL == product_add_specifics_inner_booking_details->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", product_add_specifics_inner_booking_details_type_ToString(product_add_specifics_inner_booking_details->type)) == NULL)
    {
    goto fail; //Enum
    }


    // product_add_specifics_inner_booking_details->session_duration
    if(product_add_specifics_inner_booking_details->session_duration) {
    if(cJSON_AddNumberToObject(item, "session_duration", product_add_specifics_inner_booking_details->session_duration) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_specifics_inner_booking_details->session_gap
    if(product_add_specifics_inner_booking_details->session_gap) {
    if(cJSON_AddNumberToObject(item, "session_gap", product_add_specifics_inner_booking_details->session_gap) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_specifics_inner_booking_details->sessions_count
    if (!product_add_specifics_inner_booking_details->sessions_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "sessions_count", product_add_specifics_inner_booking_details->sessions_count) == NULL) {
    goto fail; //Numeric
    }


    // product_add_specifics_inner_booking_details->time_strict_value
    if (!product_add_specifics_inner_booking_details->time_strict_value) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "time_strict_value", product_add_specifics_inner_booking_details->time_strict_value) == NULL) {
    goto fail; //Numeric
    }


    // product_add_specifics_inner_booking_details->time_strict_type
    if (api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_NULL == product_add_specifics_inner_booking_details->time_strict_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "time_strict_type", product_add_specifics_inner_booking_details_time_strict_type_ToString(product_add_specifics_inner_booking_details->time_strict_type)) == NULL)
    {
    goto fail; //Enum
    }


    // product_add_specifics_inner_booking_details->availabilities
    if (!product_add_specifics_inner_booking_details->availabilities) {
        goto fail;
    }
    cJSON *availabilities = cJSON_AddArrayToObject(item, "availabilities");
    if(availabilities == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *availabilitiesListEntry;
    if (product_add_specifics_inner_booking_details->availabilities) {
    list_ForEach(availabilitiesListEntry, product_add_specifics_inner_booking_details->availabilities) {
    cJSON *itemLocal = product_add_specifics_inner_booking_details_availabilities_inner_convertToJSON(availabilitiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(availabilities, itemLocal);
    }
    }


    // product_add_specifics_inner_booking_details->overrides
    if(product_add_specifics_inner_booking_details->overrides) {
    cJSON *overrides = cJSON_AddArrayToObject(item, "overrides");
    if(overrides == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *overridesListEntry;
    if (product_add_specifics_inner_booking_details->overrides) {
    list_ForEach(overridesListEntry, product_add_specifics_inner_booking_details->overrides) {
    cJSON *itemLocal = product_add_specifics_inner_booking_details_overrides_inner_convertToJSON(overridesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(overrides, itemLocal);
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

product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details_parseFromJSON(cJSON *product_add_specifics_inner_booking_detailsJSON){

    product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details_local_var = NULL;

    // define the local list for product_add_specifics_inner_booking_details->availabilities
    list_t *availabilitiesList = NULL;

    // define the local list for product_add_specifics_inner_booking_details->overrides
    list_t *overridesList = NULL;

    // product_add_specifics_inner_booking_details->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_detailsJSON, "location");
    if (cJSON_IsNull(location)) {
        location = NULL;
    }
    if (!location) {
        goto end;
    }

    
    if(!cJSON_IsString(location))
    {
    goto end; //String
    }

    // product_add_specifics_inner_booking_details->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_detailsJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (!type) {
        goto end;
    }

    api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_e typeVariable;
    
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = product_add_specifics_inner_booking_details_type_FromString(type->valuestring);

    // product_add_specifics_inner_booking_details->session_duration
    cJSON *session_duration = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_detailsJSON, "session_duration");
    if (cJSON_IsNull(session_duration)) {
        session_duration = NULL;
    }
    if (session_duration) { 
    if(!cJSON_IsNumber(session_duration))
    {
    goto end; //Numeric
    }
    }

    // product_add_specifics_inner_booking_details->session_gap
    cJSON *session_gap = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_detailsJSON, "session_gap");
    if (cJSON_IsNull(session_gap)) {
        session_gap = NULL;
    }
    if (session_gap) { 
    if(!cJSON_IsNumber(session_gap))
    {
    goto end; //Numeric
    }
    }

    // product_add_specifics_inner_booking_details->sessions_count
    cJSON *sessions_count = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_detailsJSON, "sessions_count");
    if (cJSON_IsNull(sessions_count)) {
        sessions_count = NULL;
    }
    if (!sessions_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(sessions_count))
    {
    goto end; //Numeric
    }

    // product_add_specifics_inner_booking_details->time_strict_value
    cJSON *time_strict_value = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_detailsJSON, "time_strict_value");
    if (cJSON_IsNull(time_strict_value)) {
        time_strict_value = NULL;
    }
    if (!time_strict_value) {
        goto end;
    }

    
    if(!cJSON_IsNumber(time_strict_value))
    {
    goto end; //Numeric
    }

    // product_add_specifics_inner_booking_details->time_strict_type
    cJSON *time_strict_type = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_detailsJSON, "time_strict_type");
    if (cJSON_IsNull(time_strict_type)) {
        time_strict_type = NULL;
    }
    if (!time_strict_type) {
        goto end;
    }

    api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_e time_strict_typeVariable;
    
    if(!cJSON_IsString(time_strict_type))
    {
    goto end; //Enum
    }
    time_strict_typeVariable = product_add_specifics_inner_booking_details_time_strict_type_FromString(time_strict_type->valuestring);

    // product_add_specifics_inner_booking_details->availabilities
    cJSON *availabilities = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_detailsJSON, "availabilities");
    if (cJSON_IsNull(availabilities)) {
        availabilities = NULL;
    }
    if (!availabilities) {
        goto end;
    }

    
    cJSON *availabilities_local_nonprimitive = NULL;
    if(!cJSON_IsArray(availabilities)){
        goto end; //nonprimitive container
    }

    availabilitiesList = list_createList();

    cJSON_ArrayForEach(availabilities_local_nonprimitive,availabilities )
    {
        if(!cJSON_IsObject(availabilities_local_nonprimitive)){
            goto end;
        }
        product_add_specifics_inner_booking_details_availabilities_inner_t *availabilitiesItem = product_add_specifics_inner_booking_details_availabilities_inner_parseFromJSON(availabilities_local_nonprimitive);

        list_addElement(availabilitiesList, availabilitiesItem);
    }

    // product_add_specifics_inner_booking_details->overrides
    cJSON *overrides = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_detailsJSON, "overrides");
    if (cJSON_IsNull(overrides)) {
        overrides = NULL;
    }
    if (overrides) { 
    cJSON *overrides_local_nonprimitive = NULL;
    if(!cJSON_IsArray(overrides)){
        goto end; //nonprimitive container
    }

    overridesList = list_createList();

    cJSON_ArrayForEach(overrides_local_nonprimitive,overrides )
    {
        if(!cJSON_IsObject(overrides_local_nonprimitive)){
            goto end;
        }
        product_add_specifics_inner_booking_details_overrides_inner_t *overridesItem = product_add_specifics_inner_booking_details_overrides_inner_parseFromJSON(overrides_local_nonprimitive);

        list_addElement(overridesList, overridesItem);
    }
    }


    product_add_specifics_inner_booking_details_local_var = product_add_specifics_inner_booking_details_create_internal (
        strdup(location->valuestring),
        typeVariable,
        session_duration ? session_duration->valuedouble : 0,
        session_gap ? session_gap->valuedouble : 0,
        sessions_count->valuedouble,
        time_strict_value->valuedouble,
        time_strict_typeVariable,
        availabilitiesList,
        overrides ? overridesList : NULL
        );

    return product_add_specifics_inner_booking_details_local_var;
end:
    if (availabilitiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, availabilitiesList) {
            product_add_specifics_inner_booking_details_availabilities_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(availabilitiesList);
        availabilitiesList = NULL;
    }
    if (overridesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, overridesList) {
            product_add_specifics_inner_booking_details_overrides_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(overridesList);
        overridesList = NULL;
    }
    return NULL;

}
