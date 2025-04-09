#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_cart_giftcard_list_result.h"



static response_cart_giftcard_list_result_t *response_cart_giftcard_list_result_create_internal(
    list_t *gift_card,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_cart_giftcard_list_result_t *response_cart_giftcard_list_result_local_var = malloc(sizeof(response_cart_giftcard_list_result_t));
    if (!response_cart_giftcard_list_result_local_var) {
        return NULL;
    }
    response_cart_giftcard_list_result_local_var->gift_card = gift_card;
    response_cart_giftcard_list_result_local_var->additional_fields = additional_fields;
    response_cart_giftcard_list_result_local_var->custom_fields = custom_fields;

    response_cart_giftcard_list_result_local_var->_library_owned = 1;
    return response_cart_giftcard_list_result_local_var;
}

__attribute__((deprecated)) response_cart_giftcard_list_result_t *response_cart_giftcard_list_result_create(
    list_t *gift_card,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_cart_giftcard_list_result_create_internal (
        gift_card,
        additional_fields,
        custom_fields
        );
}

void response_cart_giftcard_list_result_free(response_cart_giftcard_list_result_t *response_cart_giftcard_list_result) {
    if(NULL == response_cart_giftcard_list_result){
        return ;
    }
    if(response_cart_giftcard_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_cart_giftcard_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_cart_giftcard_list_result->gift_card) {
        list_ForEach(listEntry, response_cart_giftcard_list_result->gift_card) {
            gift_card_free(listEntry->data);
        }
        list_freeList(response_cart_giftcard_list_result->gift_card);
        response_cart_giftcard_list_result->gift_card = NULL;
    }
    if (response_cart_giftcard_list_result->additional_fields) {
        object_free(response_cart_giftcard_list_result->additional_fields);
        response_cart_giftcard_list_result->additional_fields = NULL;
    }
    if (response_cart_giftcard_list_result->custom_fields) {
        object_free(response_cart_giftcard_list_result->custom_fields);
        response_cart_giftcard_list_result->custom_fields = NULL;
    }
    free(response_cart_giftcard_list_result);
}

cJSON *response_cart_giftcard_list_result_convertToJSON(response_cart_giftcard_list_result_t *response_cart_giftcard_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_cart_giftcard_list_result->gift_card
    if(response_cart_giftcard_list_result->gift_card) {
    cJSON *gift_card = cJSON_AddArrayToObject(item, "gift_card");
    if(gift_card == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *gift_cardListEntry;
    if (response_cart_giftcard_list_result->gift_card) {
    list_ForEach(gift_cardListEntry, response_cart_giftcard_list_result->gift_card) {
    cJSON *itemLocal = gift_card_convertToJSON(gift_cardListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(gift_card, itemLocal);
    }
    }
    }


    // response_cart_giftcard_list_result->additional_fields
    if(response_cart_giftcard_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_cart_giftcard_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_cart_giftcard_list_result->custom_fields
    if(response_cart_giftcard_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_cart_giftcard_list_result->custom_fields);
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

response_cart_giftcard_list_result_t *response_cart_giftcard_list_result_parseFromJSON(cJSON *response_cart_giftcard_list_resultJSON){

    response_cart_giftcard_list_result_t *response_cart_giftcard_list_result_local_var = NULL;

    // define the local list for response_cart_giftcard_list_result->gift_card
    list_t *gift_cardList = NULL;

    // response_cart_giftcard_list_result->gift_card
    cJSON *gift_card = cJSON_GetObjectItemCaseSensitive(response_cart_giftcard_list_resultJSON, "gift_card");
    if (cJSON_IsNull(gift_card)) {
        gift_card = NULL;
    }
    if (gift_card) { 
    cJSON *gift_card_local_nonprimitive = NULL;
    if(!cJSON_IsArray(gift_card)){
        goto end; //nonprimitive container
    }

    gift_cardList = list_createList();

    cJSON_ArrayForEach(gift_card_local_nonprimitive,gift_card )
    {
        if(!cJSON_IsObject(gift_card_local_nonprimitive)){
            goto end;
        }
        gift_card_t *gift_cardItem = gift_card_parseFromJSON(gift_card_local_nonprimitive);

        list_addElement(gift_cardList, gift_cardItem);
    }
    }

    // response_cart_giftcard_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_cart_giftcard_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_cart_giftcard_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_cart_giftcard_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_cart_giftcard_list_result_local_var = response_cart_giftcard_list_result_create_internal (
        gift_card ? gift_cardList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_cart_giftcard_list_result_local_var;
end:
    if (gift_cardList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, gift_cardList) {
            gift_card_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(gift_cardList);
        gift_cardList = NULL;
    }
    return NULL;

}
