#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_cart_add_hybris_websites_inner.h"



static account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner_create_internal(
    char *uid,
    char *url,
    list_t *store_ids
    ) {
    account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner_local_var = malloc(sizeof(account_cart_add_hybris_websites_inner_t));
    if (!account_cart_add_hybris_websites_inner_local_var) {
        return NULL;
    }
    account_cart_add_hybris_websites_inner_local_var->uid = uid;
    account_cart_add_hybris_websites_inner_local_var->url = url;
    account_cart_add_hybris_websites_inner_local_var->store_ids = store_ids;

    account_cart_add_hybris_websites_inner_local_var->_library_owned = 1;
    return account_cart_add_hybris_websites_inner_local_var;
}

__attribute__((deprecated)) account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner_create(
    char *uid,
    char *url,
    list_t *store_ids
    ) {
    return account_cart_add_hybris_websites_inner_create_internal (
        uid,
        url,
        store_ids
        );
}

void account_cart_add_hybris_websites_inner_free(account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner) {
    if(NULL == account_cart_add_hybris_websites_inner){
        return ;
    }
    if(account_cart_add_hybris_websites_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_cart_add_hybris_websites_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_cart_add_hybris_websites_inner->uid) {
        free(account_cart_add_hybris_websites_inner->uid);
        account_cart_add_hybris_websites_inner->uid = NULL;
    }
    if (account_cart_add_hybris_websites_inner->url) {
        free(account_cart_add_hybris_websites_inner->url);
        account_cart_add_hybris_websites_inner->url = NULL;
    }
    if (account_cart_add_hybris_websites_inner->store_ids) {
        list_ForEach(listEntry, account_cart_add_hybris_websites_inner->store_ids) {
            free(listEntry->data);
        }
        list_freeList(account_cart_add_hybris_websites_inner->store_ids);
        account_cart_add_hybris_websites_inner->store_ids = NULL;
    }
    free(account_cart_add_hybris_websites_inner);
}

cJSON *account_cart_add_hybris_websites_inner_convertToJSON(account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner) {
    cJSON *item = cJSON_CreateObject();

    // account_cart_add_hybris_websites_inner->uid
    if (!account_cart_add_hybris_websites_inner->uid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "uid", account_cart_add_hybris_websites_inner->uid) == NULL) {
    goto fail; //String
    }


    // account_cart_add_hybris_websites_inner->url
    if (!account_cart_add_hybris_websites_inner->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", account_cart_add_hybris_websites_inner->url) == NULL) {
    goto fail; //String
    }


    // account_cart_add_hybris_websites_inner->store_ids
    if (!account_cart_add_hybris_websites_inner->store_ids) {
        goto fail;
    }
    cJSON *store_ids = cJSON_AddArrayToObject(item, "storeIds");
    if(store_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *store_idsListEntry;
    list_ForEach(store_idsListEntry, account_cart_add_hybris_websites_inner->store_ids) {
    if(cJSON_AddStringToObject(store_ids, "", store_idsListEntry->data) == NULL)
    {
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

account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner_parseFromJSON(cJSON *account_cart_add_hybris_websites_innerJSON){

    account_cart_add_hybris_websites_inner_t *account_cart_add_hybris_websites_inner_local_var = NULL;

    // define the local list for account_cart_add_hybris_websites_inner->store_ids
    list_t *store_idsList = NULL;

    // account_cart_add_hybris_websites_inner->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(account_cart_add_hybris_websites_innerJSON, "uid");
    if (cJSON_IsNull(uid)) {
        uid = NULL;
    }
    if (!uid) {
        goto end;
    }

    
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }

    // account_cart_add_hybris_websites_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(account_cart_add_hybris_websites_innerJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // account_cart_add_hybris_websites_inner->store_ids
    cJSON *store_ids = cJSON_GetObjectItemCaseSensitive(account_cart_add_hybris_websites_innerJSON, "storeIds");
    if (cJSON_IsNull(store_ids)) {
        store_ids = NULL;
    }
    if (!store_ids) {
        goto end;
    }

    
    cJSON *store_ids_local = NULL;
    if(!cJSON_IsArray(store_ids)) {
        goto end;//primitive container
    }
    store_idsList = list_createList();

    cJSON_ArrayForEach(store_ids_local, store_ids)
    {
        if(!cJSON_IsString(store_ids_local))
        {
            goto end;
        }
        list_addElement(store_idsList , strdup(store_ids_local->valuestring));
    }


    account_cart_add_hybris_websites_inner_local_var = account_cart_add_hybris_websites_inner_create_internal (
        strdup(uid->valuestring),
        strdup(url->valuestring),
        store_idsList
        );

    return account_cart_add_hybris_websites_inner_local_var;
end:
    if (store_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, store_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(store_idsList);
        store_idsList = NULL;
    }
    return NULL;

}
