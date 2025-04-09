#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_list_200_response_result.h"



static product_variant_list_200_response_result_t *product_variant_list_200_response_result_create_internal(
    list_t *variant
    ) {
    product_variant_list_200_response_result_t *product_variant_list_200_response_result_local_var = malloc(sizeof(product_variant_list_200_response_result_t));
    if (!product_variant_list_200_response_result_local_var) {
        return NULL;
    }
    product_variant_list_200_response_result_local_var->variant = variant;

    product_variant_list_200_response_result_local_var->_library_owned = 1;
    return product_variant_list_200_response_result_local_var;
}

__attribute__((deprecated)) product_variant_list_200_response_result_t *product_variant_list_200_response_result_create(
    list_t *variant
    ) {
    return product_variant_list_200_response_result_create_internal (
        variant
        );
}

void product_variant_list_200_response_result_free(product_variant_list_200_response_result_t *product_variant_list_200_response_result) {
    if(NULL == product_variant_list_200_response_result){
        return ;
    }
    if(product_variant_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_list_200_response_result->variant) {
        list_ForEach(listEntry, product_variant_list_200_response_result->variant) {
            product_free(listEntry->data);
        }
        list_freeList(product_variant_list_200_response_result->variant);
        product_variant_list_200_response_result->variant = NULL;
    }
    free(product_variant_list_200_response_result);
}

cJSON *product_variant_list_200_response_result_convertToJSON(product_variant_list_200_response_result_t *product_variant_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_list_200_response_result->variant
    if(product_variant_list_200_response_result->variant) {
    cJSON *variant = cJSON_AddArrayToObject(item, "variant");
    if(variant == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *variantListEntry;
    if (product_variant_list_200_response_result->variant) {
    list_ForEach(variantListEntry, product_variant_list_200_response_result->variant) {
    cJSON *itemLocal = product_convertToJSON(variantListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(variant, itemLocal);
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

product_variant_list_200_response_result_t *product_variant_list_200_response_result_parseFromJSON(cJSON *product_variant_list_200_response_resultJSON){

    product_variant_list_200_response_result_t *product_variant_list_200_response_result_local_var = NULL;

    // define the local list for product_variant_list_200_response_result->variant
    list_t *variantList = NULL;

    // product_variant_list_200_response_result->variant
    cJSON *variant = cJSON_GetObjectItemCaseSensitive(product_variant_list_200_response_resultJSON, "variant");
    if (cJSON_IsNull(variant)) {
        variant = NULL;
    }
    if (variant) { 
    cJSON *variant_local_nonprimitive = NULL;
    if(!cJSON_IsArray(variant)){
        goto end; //nonprimitive container
    }

    variantList = list_createList();

    cJSON_ArrayForEach(variant_local_nonprimitive,variant )
    {
        if(!cJSON_IsObject(variant_local_nonprimitive)){
            goto end;
        }
        product_t *variantItem = product_parseFromJSON(variant_local_nonprimitive);

        list_addElement(variantList, variantItem);
    }
    }


    product_variant_list_200_response_result_local_var = product_variant_list_200_response_result_create_internal (
        variant ? variantList : NULL
        );

    return product_variant_list_200_response_result_local_var;
end:
    if (variantList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, variantList) {
            product_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(variantList);
        variantList = NULL;
    }
    return NULL;

}
