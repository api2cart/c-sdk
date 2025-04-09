#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_giftcard_count_200_response_result.h"



static cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result_create_internal(
    char *gift_cards_count
    ) {
    cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result_local_var = malloc(sizeof(cart_giftcard_count_200_response_result_t));
    if (!cart_giftcard_count_200_response_result_local_var) {
        return NULL;
    }
    cart_giftcard_count_200_response_result_local_var->gift_cards_count = gift_cards_count;

    cart_giftcard_count_200_response_result_local_var->_library_owned = 1;
    return cart_giftcard_count_200_response_result_local_var;
}

__attribute__((deprecated)) cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result_create(
    char *gift_cards_count
    ) {
    return cart_giftcard_count_200_response_result_create_internal (
        gift_cards_count
        );
}

void cart_giftcard_count_200_response_result_free(cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result) {
    if(NULL == cart_giftcard_count_200_response_result){
        return ;
    }
    if(cart_giftcard_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_giftcard_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_giftcard_count_200_response_result->gift_cards_count) {
        free(cart_giftcard_count_200_response_result->gift_cards_count);
        cart_giftcard_count_200_response_result->gift_cards_count = NULL;
    }
    free(cart_giftcard_count_200_response_result);
}

cJSON *cart_giftcard_count_200_response_result_convertToJSON(cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_giftcard_count_200_response_result->gift_cards_count
    if(cart_giftcard_count_200_response_result->gift_cards_count) {
    if(cJSON_AddStringToObject(item, "gift_cards_count", cart_giftcard_count_200_response_result->gift_cards_count) == NULL) {
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

cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result_parseFromJSON(cJSON *cart_giftcard_count_200_response_resultJSON){

    cart_giftcard_count_200_response_result_t *cart_giftcard_count_200_response_result_local_var = NULL;

    // cart_giftcard_count_200_response_result->gift_cards_count
    cJSON *gift_cards_count = cJSON_GetObjectItemCaseSensitive(cart_giftcard_count_200_response_resultJSON, "gift_cards_count");
    if (cJSON_IsNull(gift_cards_count)) {
        gift_cards_count = NULL;
    }
    if (gift_cards_count) { 
    if(!cJSON_IsString(gift_cards_count) && !cJSON_IsNull(gift_cards_count))
    {
    goto end; //String
    }
    }


    cart_giftcard_count_200_response_result_local_var = cart_giftcard_count_200_response_result_create_internal (
        gift_cards_count && !cJSON_IsNull(gift_cards_count) ? strdup(gift_cards_count->valuestring) : NULL
        );

    return cart_giftcard_count_200_response_result_local_var;
end:
    return NULL;

}
