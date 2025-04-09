#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_specifics_inner_booking_details_availabilities_inner_times_inner.h"



static product_add_specifics_inner_booking_details_availabilities_inner_times_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_times_inner_create_internal(
    char *from,
    char *to
    ) {
    product_add_specifics_inner_booking_details_availabilities_inner_times_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_times_inner_local_var = malloc(sizeof(product_add_specifics_inner_booking_details_availabilities_inner_times_inner_t));
    if (!product_add_specifics_inner_booking_details_availabilities_inner_times_inner_local_var) {
        return NULL;
    }
    product_add_specifics_inner_booking_details_availabilities_inner_times_inner_local_var->from = from;
    product_add_specifics_inner_booking_details_availabilities_inner_times_inner_local_var->to = to;

    product_add_specifics_inner_booking_details_availabilities_inner_times_inner_local_var->_library_owned = 1;
    return product_add_specifics_inner_booking_details_availabilities_inner_times_inner_local_var;
}

__attribute__((deprecated)) product_add_specifics_inner_booking_details_availabilities_inner_times_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_times_inner_create(
    char *from,
    char *to
    ) {
    return product_add_specifics_inner_booking_details_availabilities_inner_times_inner_create_internal (
        from,
        to
        );
}

void product_add_specifics_inner_booking_details_availabilities_inner_times_inner_free(product_add_specifics_inner_booking_details_availabilities_inner_times_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_times_inner) {
    if(NULL == product_add_specifics_inner_booking_details_availabilities_inner_times_inner){
        return ;
    }
    if(product_add_specifics_inner_booking_details_availabilities_inner_times_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_specifics_inner_booking_details_availabilities_inner_times_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_specifics_inner_booking_details_availabilities_inner_times_inner->from) {
        free(product_add_specifics_inner_booking_details_availabilities_inner_times_inner->from);
        product_add_specifics_inner_booking_details_availabilities_inner_times_inner->from = NULL;
    }
    if (product_add_specifics_inner_booking_details_availabilities_inner_times_inner->to) {
        free(product_add_specifics_inner_booking_details_availabilities_inner_times_inner->to);
        product_add_specifics_inner_booking_details_availabilities_inner_times_inner->to = NULL;
    }
    free(product_add_specifics_inner_booking_details_availabilities_inner_times_inner);
}

cJSON *product_add_specifics_inner_booking_details_availabilities_inner_times_inner_convertToJSON(product_add_specifics_inner_booking_details_availabilities_inner_times_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_times_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_specifics_inner_booking_details_availabilities_inner_times_inner->from
    if (!product_add_specifics_inner_booking_details_availabilities_inner_times_inner->from) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "from", product_add_specifics_inner_booking_details_availabilities_inner_times_inner->from) == NULL) {
    goto fail; //String
    }


    // product_add_specifics_inner_booking_details_availabilities_inner_times_inner->to
    if (!product_add_specifics_inner_booking_details_availabilities_inner_times_inner->to) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "to", product_add_specifics_inner_booking_details_availabilities_inner_times_inner->to) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_specifics_inner_booking_details_availabilities_inner_times_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_times_inner_parseFromJSON(cJSON *product_add_specifics_inner_booking_details_availabilities_inner_times_innerJSON){

    product_add_specifics_inner_booking_details_availabilities_inner_times_inner_t *product_add_specifics_inner_booking_details_availabilities_inner_times_inner_local_var = NULL;

    // product_add_specifics_inner_booking_details_availabilities_inner_times_inner->from
    cJSON *from = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_details_availabilities_inner_times_innerJSON, "from");
    if (cJSON_IsNull(from)) {
        from = NULL;
    }
    if (!from) {
        goto end;
    }

    
    if(!cJSON_IsString(from))
    {
    goto end; //String
    }

    // product_add_specifics_inner_booking_details_availabilities_inner_times_inner->to
    cJSON *to = cJSON_GetObjectItemCaseSensitive(product_add_specifics_inner_booking_details_availabilities_inner_times_innerJSON, "to");
    if (cJSON_IsNull(to)) {
        to = NULL;
    }
    if (!to) {
        goto end;
    }

    
    if(!cJSON_IsString(to))
    {
    goto end; //String
    }


    product_add_specifics_inner_booking_details_availabilities_inner_times_inner_local_var = product_add_specifics_inner_booking_details_availabilities_inner_times_inner_create_internal (
        strdup(from->valuestring),
        strdup(to->valuestring)
        );

    return product_add_specifics_inner_booking_details_availabilities_inner_times_inner_local_var;
end:
    return NULL;

}
