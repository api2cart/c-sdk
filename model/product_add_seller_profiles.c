#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_seller_profiles.h"



static product_add_seller_profiles_t *product_add_seller_profiles_create_internal(
    char *shipping_profile_id,
    char *payment_profile_id,
    char *return_profile_id
    ) {
    product_add_seller_profiles_t *product_add_seller_profiles_local_var = malloc(sizeof(product_add_seller_profiles_t));
    if (!product_add_seller_profiles_local_var) {
        return NULL;
    }
    product_add_seller_profiles_local_var->shipping_profile_id = shipping_profile_id;
    product_add_seller_profiles_local_var->payment_profile_id = payment_profile_id;
    product_add_seller_profiles_local_var->return_profile_id = return_profile_id;

    product_add_seller_profiles_local_var->_library_owned = 1;
    return product_add_seller_profiles_local_var;
}

__attribute__((deprecated)) product_add_seller_profiles_t *product_add_seller_profiles_create(
    char *shipping_profile_id,
    char *payment_profile_id,
    char *return_profile_id
    ) {
    return product_add_seller_profiles_create_internal (
        shipping_profile_id,
        payment_profile_id,
        return_profile_id
        );
}

void product_add_seller_profiles_free(product_add_seller_profiles_t *product_add_seller_profiles) {
    if(NULL == product_add_seller_profiles){
        return ;
    }
    if(product_add_seller_profiles->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_seller_profiles_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_seller_profiles->shipping_profile_id) {
        free(product_add_seller_profiles->shipping_profile_id);
        product_add_seller_profiles->shipping_profile_id = NULL;
    }
    if (product_add_seller_profiles->payment_profile_id) {
        free(product_add_seller_profiles->payment_profile_id);
        product_add_seller_profiles->payment_profile_id = NULL;
    }
    if (product_add_seller_profiles->return_profile_id) {
        free(product_add_seller_profiles->return_profile_id);
        product_add_seller_profiles->return_profile_id = NULL;
    }
    free(product_add_seller_profiles);
}

cJSON *product_add_seller_profiles_convertToJSON(product_add_seller_profiles_t *product_add_seller_profiles) {
    cJSON *item = cJSON_CreateObject();

    // product_add_seller_profiles->shipping_profile_id
    if(product_add_seller_profiles->shipping_profile_id) {
    if(cJSON_AddStringToObject(item, "shipping_profile_id", product_add_seller_profiles->shipping_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add_seller_profiles->payment_profile_id
    if(product_add_seller_profiles->payment_profile_id) {
    if(cJSON_AddStringToObject(item, "payment_profile_id", product_add_seller_profiles->payment_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add_seller_profiles->return_profile_id
    if(product_add_seller_profiles->return_profile_id) {
    if(cJSON_AddStringToObject(item, "return_profile_id", product_add_seller_profiles->return_profile_id) == NULL) {
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

product_add_seller_profiles_t *product_add_seller_profiles_parseFromJSON(cJSON *product_add_seller_profilesJSON){

    product_add_seller_profiles_t *product_add_seller_profiles_local_var = NULL;

    // product_add_seller_profiles->shipping_profile_id
    cJSON *shipping_profile_id = cJSON_GetObjectItemCaseSensitive(product_add_seller_profilesJSON, "shipping_profile_id");
    if (cJSON_IsNull(shipping_profile_id)) {
        shipping_profile_id = NULL;
    }
    if (shipping_profile_id) { 
    if(!cJSON_IsString(shipping_profile_id) && !cJSON_IsNull(shipping_profile_id))
    {
    goto end; //String
    }
    }

    // product_add_seller_profiles->payment_profile_id
    cJSON *payment_profile_id = cJSON_GetObjectItemCaseSensitive(product_add_seller_profilesJSON, "payment_profile_id");
    if (cJSON_IsNull(payment_profile_id)) {
        payment_profile_id = NULL;
    }
    if (payment_profile_id) { 
    if(!cJSON_IsString(payment_profile_id) && !cJSON_IsNull(payment_profile_id))
    {
    goto end; //String
    }
    }

    // product_add_seller_profiles->return_profile_id
    cJSON *return_profile_id = cJSON_GetObjectItemCaseSensitive(product_add_seller_profilesJSON, "return_profile_id");
    if (cJSON_IsNull(return_profile_id)) {
        return_profile_id = NULL;
    }
    if (return_profile_id) { 
    if(!cJSON_IsString(return_profile_id) && !cJSON_IsNull(return_profile_id))
    {
    goto end; //String
    }
    }


    product_add_seller_profiles_local_var = product_add_seller_profiles_create_internal (
        shipping_profile_id && !cJSON_IsNull(shipping_profile_id) ? strdup(shipping_profile_id->valuestring) : NULL,
        payment_profile_id && !cJSON_IsNull(payment_profile_id) ? strdup(payment_profile_id->valuestring) : NULL,
        return_profile_id && !cJSON_IsNull(return_profile_id) ? strdup(return_profile_id->valuestring) : NULL
        );

    return product_add_seller_profiles_local_var;
end:
    return NULL;

}
