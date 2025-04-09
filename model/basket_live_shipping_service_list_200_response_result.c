#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "basket_live_shipping_service_list_200_response_result.h"



static basket_live_shipping_service_list_200_response_result_t *basket_live_shipping_service_list_200_response_result_create_internal(
    list_t *live_shipping_services
    ) {
    basket_live_shipping_service_list_200_response_result_t *basket_live_shipping_service_list_200_response_result_local_var = malloc(sizeof(basket_live_shipping_service_list_200_response_result_t));
    if (!basket_live_shipping_service_list_200_response_result_local_var) {
        return NULL;
    }
    basket_live_shipping_service_list_200_response_result_local_var->live_shipping_services = live_shipping_services;

    basket_live_shipping_service_list_200_response_result_local_var->_library_owned = 1;
    return basket_live_shipping_service_list_200_response_result_local_var;
}

__attribute__((deprecated)) basket_live_shipping_service_list_200_response_result_t *basket_live_shipping_service_list_200_response_result_create(
    list_t *live_shipping_services
    ) {
    return basket_live_shipping_service_list_200_response_result_create_internal (
        live_shipping_services
        );
}

void basket_live_shipping_service_list_200_response_result_free(basket_live_shipping_service_list_200_response_result_t *basket_live_shipping_service_list_200_response_result) {
    if(NULL == basket_live_shipping_service_list_200_response_result){
        return ;
    }
    if(basket_live_shipping_service_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "basket_live_shipping_service_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (basket_live_shipping_service_list_200_response_result->live_shipping_services) {
        list_ForEach(listEntry, basket_live_shipping_service_list_200_response_result->live_shipping_services) {
            basket_live_shipping_service_free(listEntry->data);
        }
        list_freeList(basket_live_shipping_service_list_200_response_result->live_shipping_services);
        basket_live_shipping_service_list_200_response_result->live_shipping_services = NULL;
    }
    free(basket_live_shipping_service_list_200_response_result);
}

cJSON *basket_live_shipping_service_list_200_response_result_convertToJSON(basket_live_shipping_service_list_200_response_result_t *basket_live_shipping_service_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // basket_live_shipping_service_list_200_response_result->live_shipping_services
    if(basket_live_shipping_service_list_200_response_result->live_shipping_services) {
    cJSON *live_shipping_services = cJSON_AddArrayToObject(item, "live_shipping_services");
    if(live_shipping_services == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *live_shipping_servicesListEntry;
    if (basket_live_shipping_service_list_200_response_result->live_shipping_services) {
    list_ForEach(live_shipping_servicesListEntry, basket_live_shipping_service_list_200_response_result->live_shipping_services) {
    cJSON *itemLocal = basket_live_shipping_service_convertToJSON(live_shipping_servicesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(live_shipping_services, itemLocal);
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

basket_live_shipping_service_list_200_response_result_t *basket_live_shipping_service_list_200_response_result_parseFromJSON(cJSON *basket_live_shipping_service_list_200_response_resultJSON){

    basket_live_shipping_service_list_200_response_result_t *basket_live_shipping_service_list_200_response_result_local_var = NULL;

    // define the local list for basket_live_shipping_service_list_200_response_result->live_shipping_services
    list_t *live_shipping_servicesList = NULL;

    // basket_live_shipping_service_list_200_response_result->live_shipping_services
    cJSON *live_shipping_services = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_service_list_200_response_resultJSON, "live_shipping_services");
    if (cJSON_IsNull(live_shipping_services)) {
        live_shipping_services = NULL;
    }
    if (live_shipping_services) { 
    cJSON *live_shipping_services_local_nonprimitive = NULL;
    if(!cJSON_IsArray(live_shipping_services)){
        goto end; //nonprimitive container
    }

    live_shipping_servicesList = list_createList();

    cJSON_ArrayForEach(live_shipping_services_local_nonprimitive,live_shipping_services )
    {
        if(!cJSON_IsObject(live_shipping_services_local_nonprimitive)){
            goto end;
        }
        basket_live_shipping_service_t *live_shipping_servicesItem = basket_live_shipping_service_parseFromJSON(live_shipping_services_local_nonprimitive);

        list_addElement(live_shipping_servicesList, live_shipping_servicesItem);
    }
    }


    basket_live_shipping_service_list_200_response_result_local_var = basket_live_shipping_service_list_200_response_result_create_internal (
        live_shipping_services ? live_shipping_servicesList : NULL
        );

    return basket_live_shipping_service_list_200_response_result_local_var;
end:
    if (live_shipping_servicesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, live_shipping_servicesList) {
            basket_live_shipping_service_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(live_shipping_servicesList);
        live_shipping_servicesList = NULL;
    }
    return NULL;

}
