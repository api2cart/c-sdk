#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_best_offer.h"



static product_add_best_offer_t *product_add_best_offer_create_internal(
    double minimum_offer_price,
    double auto_accept_price
    ) {
    product_add_best_offer_t *product_add_best_offer_local_var = malloc(sizeof(product_add_best_offer_t));
    if (!product_add_best_offer_local_var) {
        return NULL;
    }
    product_add_best_offer_local_var->minimum_offer_price = minimum_offer_price;
    product_add_best_offer_local_var->auto_accept_price = auto_accept_price;

    product_add_best_offer_local_var->_library_owned = 1;
    return product_add_best_offer_local_var;
}

__attribute__((deprecated)) product_add_best_offer_t *product_add_best_offer_create(
    double minimum_offer_price,
    double auto_accept_price
    ) {
    return product_add_best_offer_create_internal (
        minimum_offer_price,
        auto_accept_price
        );
}

void product_add_best_offer_free(product_add_best_offer_t *product_add_best_offer) {
    if(NULL == product_add_best_offer){
        return ;
    }
    if(product_add_best_offer->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_best_offer_free");
        return ;
    }
    listEntry_t *listEntry;
    free(product_add_best_offer);
}

cJSON *product_add_best_offer_convertToJSON(product_add_best_offer_t *product_add_best_offer) {
    cJSON *item = cJSON_CreateObject();

    // product_add_best_offer->minimum_offer_price
    if(product_add_best_offer->minimum_offer_price) {
    if(cJSON_AddNumberToObject(item, "minimum_offer_price", product_add_best_offer->minimum_offer_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_best_offer->auto_accept_price
    if(product_add_best_offer->auto_accept_price) {
    if(cJSON_AddNumberToObject(item, "auto_accept_price", product_add_best_offer->auto_accept_price) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_best_offer_t *product_add_best_offer_parseFromJSON(cJSON *product_add_best_offerJSON){

    product_add_best_offer_t *product_add_best_offer_local_var = NULL;

    // product_add_best_offer->minimum_offer_price
    cJSON *minimum_offer_price = cJSON_GetObjectItemCaseSensitive(product_add_best_offerJSON, "minimum_offer_price");
    if (cJSON_IsNull(minimum_offer_price)) {
        minimum_offer_price = NULL;
    }
    if (minimum_offer_price) { 
    if(!cJSON_IsNumber(minimum_offer_price))
    {
    goto end; //Numeric
    }
    }

    // product_add_best_offer->auto_accept_price
    cJSON *auto_accept_price = cJSON_GetObjectItemCaseSensitive(product_add_best_offerJSON, "auto_accept_price");
    if (cJSON_IsNull(auto_accept_price)) {
        auto_accept_price = NULL;
    }
    if (auto_accept_price) { 
    if(!cJSON_IsNumber(auto_accept_price))
    {
    goto end; //Numeric
    }
    }


    product_add_best_offer_local_var = product_add_best_offer_create_internal (
        minimum_offer_price ? minimum_offer_price->valuedouble : 0,
        auto_accept_price ? auto_accept_price->valuedouble : 0
        );

    return product_add_best_offer_local_var;
end:
    return NULL;

}
