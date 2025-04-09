#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_delete_batch_payload_inner.h"



static product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner_create_internal(
    char *product_id,
    char *id,
    char *store_id
    ) {
    product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner_local_var = malloc(sizeof(product_variant_delete_batch_payload_inner_t));
    if (!product_variant_delete_batch_payload_inner_local_var) {
        return NULL;
    }
    product_variant_delete_batch_payload_inner_local_var->product_id = product_id;
    product_variant_delete_batch_payload_inner_local_var->id = id;
    product_variant_delete_batch_payload_inner_local_var->store_id = store_id;

    product_variant_delete_batch_payload_inner_local_var->_library_owned = 1;
    return product_variant_delete_batch_payload_inner_local_var;
}

__attribute__((deprecated)) product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner_create(
    char *product_id,
    char *id,
    char *store_id
    ) {
    return product_variant_delete_batch_payload_inner_create_internal (
        product_id,
        id,
        store_id
        );
}

void product_variant_delete_batch_payload_inner_free(product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner) {
    if(NULL == product_variant_delete_batch_payload_inner){
        return ;
    }
    if(product_variant_delete_batch_payload_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_delete_batch_payload_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_delete_batch_payload_inner->product_id) {
        free(product_variant_delete_batch_payload_inner->product_id);
        product_variant_delete_batch_payload_inner->product_id = NULL;
    }
    if (product_variant_delete_batch_payload_inner->id) {
        free(product_variant_delete_batch_payload_inner->id);
        product_variant_delete_batch_payload_inner->id = NULL;
    }
    if (product_variant_delete_batch_payload_inner->store_id) {
        free(product_variant_delete_batch_payload_inner->store_id);
        product_variant_delete_batch_payload_inner->store_id = NULL;
    }
    free(product_variant_delete_batch_payload_inner);
}

cJSON *product_variant_delete_batch_payload_inner_convertToJSON(product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_delete_batch_payload_inner->product_id
    if (!product_variant_delete_batch_payload_inner->product_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "product_id", product_variant_delete_batch_payload_inner->product_id) == NULL) {
    goto fail; //String
    }


    // product_variant_delete_batch_payload_inner->id
    if (!product_variant_delete_batch_payload_inner->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", product_variant_delete_batch_payload_inner->id) == NULL) {
    goto fail; //String
    }


    // product_variant_delete_batch_payload_inner->store_id
    if(product_variant_delete_batch_payload_inner->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_variant_delete_batch_payload_inner->store_id) == NULL) {
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

product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner_parseFromJSON(cJSON *product_variant_delete_batch_payload_innerJSON){

    product_variant_delete_batch_payload_inner_t *product_variant_delete_batch_payload_inner_local_var = NULL;

    // product_variant_delete_batch_payload_inner->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_variant_delete_batch_payload_innerJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (!product_id) {
        goto end;
    }

    
    if(!cJSON_IsString(product_id))
    {
    goto end; //String
    }

    // product_variant_delete_batch_payload_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_variant_delete_batch_payload_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // product_variant_delete_batch_payload_inner->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_variant_delete_batch_payload_innerJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }


    product_variant_delete_batch_payload_inner_local_var = product_variant_delete_batch_payload_inner_create_internal (
        strdup(product_id->valuestring),
        strdup(id->valuestring),
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL
        );

    return product_variant_delete_batch_payload_inner_local_var;
end:
    return NULL;

}
