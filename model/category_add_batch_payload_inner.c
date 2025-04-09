#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_add_batch_payload_inner.h"



static category_add_batch_payload_inner_t *category_add_batch_payload_inner_create_internal(
    char *name,
    int avail,
    char *description,
    char *meta_title,
    char *meta_description,
    list_t *meta_keywords,
    char *parent_id,
    int sort_order,
    char *seo_url,
    char *store_id,
    list_t *images,
    list_t *stores_ids
    ) {
    category_add_batch_payload_inner_t *category_add_batch_payload_inner_local_var = malloc(sizeof(category_add_batch_payload_inner_t));
    if (!category_add_batch_payload_inner_local_var) {
        return NULL;
    }
    category_add_batch_payload_inner_local_var->name = name;
    category_add_batch_payload_inner_local_var->avail = avail;
    category_add_batch_payload_inner_local_var->description = description;
    category_add_batch_payload_inner_local_var->meta_title = meta_title;
    category_add_batch_payload_inner_local_var->meta_description = meta_description;
    category_add_batch_payload_inner_local_var->meta_keywords = meta_keywords;
    category_add_batch_payload_inner_local_var->parent_id = parent_id;
    category_add_batch_payload_inner_local_var->sort_order = sort_order;
    category_add_batch_payload_inner_local_var->seo_url = seo_url;
    category_add_batch_payload_inner_local_var->store_id = store_id;
    category_add_batch_payload_inner_local_var->images = images;
    category_add_batch_payload_inner_local_var->stores_ids = stores_ids;

    category_add_batch_payload_inner_local_var->_library_owned = 1;
    return category_add_batch_payload_inner_local_var;
}

__attribute__((deprecated)) category_add_batch_payload_inner_t *category_add_batch_payload_inner_create(
    char *name,
    int avail,
    char *description,
    char *meta_title,
    char *meta_description,
    list_t *meta_keywords,
    char *parent_id,
    int sort_order,
    char *seo_url,
    char *store_id,
    list_t *images,
    list_t *stores_ids
    ) {
    return category_add_batch_payload_inner_create_internal (
        name,
        avail,
        description,
        meta_title,
        meta_description,
        meta_keywords,
        parent_id,
        sort_order,
        seo_url,
        store_id,
        images,
        stores_ids
        );
}

void category_add_batch_payload_inner_free(category_add_batch_payload_inner_t *category_add_batch_payload_inner) {
    if(NULL == category_add_batch_payload_inner){
        return ;
    }
    if(category_add_batch_payload_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_add_batch_payload_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (category_add_batch_payload_inner->name) {
        free(category_add_batch_payload_inner->name);
        category_add_batch_payload_inner->name = NULL;
    }
    if (category_add_batch_payload_inner->description) {
        free(category_add_batch_payload_inner->description);
        category_add_batch_payload_inner->description = NULL;
    }
    if (category_add_batch_payload_inner->meta_title) {
        free(category_add_batch_payload_inner->meta_title);
        category_add_batch_payload_inner->meta_title = NULL;
    }
    if (category_add_batch_payload_inner->meta_description) {
        free(category_add_batch_payload_inner->meta_description);
        category_add_batch_payload_inner->meta_description = NULL;
    }
    if (category_add_batch_payload_inner->meta_keywords) {
        list_ForEach(listEntry, category_add_batch_payload_inner->meta_keywords) {
            free(listEntry->data);
        }
        list_freeList(category_add_batch_payload_inner->meta_keywords);
        category_add_batch_payload_inner->meta_keywords = NULL;
    }
    if (category_add_batch_payload_inner->parent_id) {
        free(category_add_batch_payload_inner->parent_id);
        category_add_batch_payload_inner->parent_id = NULL;
    }
    if (category_add_batch_payload_inner->seo_url) {
        free(category_add_batch_payload_inner->seo_url);
        category_add_batch_payload_inner->seo_url = NULL;
    }
    if (category_add_batch_payload_inner->store_id) {
        free(category_add_batch_payload_inner->store_id);
        category_add_batch_payload_inner->store_id = NULL;
    }
    if (category_add_batch_payload_inner->images) {
        list_ForEach(listEntry, category_add_batch_payload_inner->images) {
            category_add_batch_payload_inner_images_inner_free(listEntry->data);
        }
        list_freeList(category_add_batch_payload_inner->images);
        category_add_batch_payload_inner->images = NULL;
    }
    if (category_add_batch_payload_inner->stores_ids) {
        list_ForEach(listEntry, category_add_batch_payload_inner->stores_ids) {
            free(listEntry->data);
        }
        list_freeList(category_add_batch_payload_inner->stores_ids);
        category_add_batch_payload_inner->stores_ids = NULL;
    }
    free(category_add_batch_payload_inner);
}

cJSON *category_add_batch_payload_inner_convertToJSON(category_add_batch_payload_inner_t *category_add_batch_payload_inner) {
    cJSON *item = cJSON_CreateObject();

    // category_add_batch_payload_inner->name
    if (!category_add_batch_payload_inner->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", category_add_batch_payload_inner->name) == NULL) {
    goto fail; //String
    }


    // category_add_batch_payload_inner->avail
    if(category_add_batch_payload_inner->avail) {
    if(cJSON_AddBoolToObject(item, "avail", category_add_batch_payload_inner->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // category_add_batch_payload_inner->description
    if(category_add_batch_payload_inner->description) {
    if(cJSON_AddStringToObject(item, "description", category_add_batch_payload_inner->description) == NULL) {
    goto fail; //String
    }
    }


    // category_add_batch_payload_inner->meta_title
    if(category_add_batch_payload_inner->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", category_add_batch_payload_inner->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // category_add_batch_payload_inner->meta_description
    if(category_add_batch_payload_inner->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", category_add_batch_payload_inner->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // category_add_batch_payload_inner->meta_keywords
    if(category_add_batch_payload_inner->meta_keywords) {
    cJSON *meta_keywords = cJSON_AddArrayToObject(item, "meta_keywords");
    if(meta_keywords == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *meta_keywordsListEntry;
    list_ForEach(meta_keywordsListEntry, category_add_batch_payload_inner->meta_keywords) {
    if(cJSON_AddStringToObject(meta_keywords, "", meta_keywordsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // category_add_batch_payload_inner->parent_id
    if(category_add_batch_payload_inner->parent_id) {
    if(cJSON_AddStringToObject(item, "parent_id", category_add_batch_payload_inner->parent_id) == NULL) {
    goto fail; //String
    }
    }


    // category_add_batch_payload_inner->sort_order
    if(category_add_batch_payload_inner->sort_order) {
    if(cJSON_AddNumberToObject(item, "sort_order", category_add_batch_payload_inner->sort_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // category_add_batch_payload_inner->seo_url
    if(category_add_batch_payload_inner->seo_url) {
    if(cJSON_AddStringToObject(item, "seo_url", category_add_batch_payload_inner->seo_url) == NULL) {
    goto fail; //String
    }
    }


    // category_add_batch_payload_inner->store_id
    if(category_add_batch_payload_inner->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", category_add_batch_payload_inner->store_id) == NULL) {
    goto fail; //String
    }
    }


    // category_add_batch_payload_inner->images
    if(category_add_batch_payload_inner->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *imagesListEntry;
    if (category_add_batch_payload_inner->images) {
    list_ForEach(imagesListEntry, category_add_batch_payload_inner->images) {
    cJSON *itemLocal = category_add_batch_payload_inner_images_inner_convertToJSON(imagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(images, itemLocal);
    }
    }
    }


    // category_add_batch_payload_inner->stores_ids
    if(category_add_batch_payload_inner->stores_ids) {
    cJSON *stores_ids = cJSON_AddArrayToObject(item, "stores_ids");
    if(stores_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stores_idsListEntry;
    list_ForEach(stores_idsListEntry, category_add_batch_payload_inner->stores_ids) {
    if(cJSON_AddStringToObject(stores_ids, "", stores_idsListEntry->data) == NULL)
    {
        goto fail;
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

category_add_batch_payload_inner_t *category_add_batch_payload_inner_parseFromJSON(cJSON *category_add_batch_payload_innerJSON){

    category_add_batch_payload_inner_t *category_add_batch_payload_inner_local_var = NULL;

    // define the local list for category_add_batch_payload_inner->meta_keywords
    list_t *meta_keywordsList = NULL;

    // define the local list for category_add_batch_payload_inner->images
    list_t *imagesList = NULL;

    // define the local list for category_add_batch_payload_inner->stores_ids
    list_t *stores_idsList = NULL;

    // category_add_batch_payload_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // category_add_batch_payload_inner->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // category_add_batch_payload_inner->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // category_add_batch_payload_inner->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // category_add_batch_payload_inner->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // category_add_batch_payload_inner->meta_keywords
    cJSON *meta_keywords = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "meta_keywords");
    if (cJSON_IsNull(meta_keywords)) {
        meta_keywords = NULL;
    }
    if (meta_keywords) { 
    cJSON *meta_keywords_local = NULL;
    if(!cJSON_IsArray(meta_keywords)) {
        goto end;//primitive container
    }
    meta_keywordsList = list_createList();

    cJSON_ArrayForEach(meta_keywords_local, meta_keywords)
    {
        if(!cJSON_IsString(meta_keywords_local))
        {
            goto end;
        }
        list_addElement(meta_keywordsList , strdup(meta_keywords_local->valuestring));
    }
    }

    // category_add_batch_payload_inner->parent_id
    cJSON *parent_id = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "parent_id");
    if (cJSON_IsNull(parent_id)) {
        parent_id = NULL;
    }
    if (parent_id) { 
    if(!cJSON_IsString(parent_id) && !cJSON_IsNull(parent_id))
    {
    goto end; //String
    }
    }

    // category_add_batch_payload_inner->sort_order
    cJSON *sort_order = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "sort_order");
    if (cJSON_IsNull(sort_order)) {
        sort_order = NULL;
    }
    if (sort_order) { 
    if(!cJSON_IsNumber(sort_order))
    {
    goto end; //Numeric
    }
    }

    // category_add_batch_payload_inner->seo_url
    cJSON *seo_url = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "seo_url");
    if (cJSON_IsNull(seo_url)) {
        seo_url = NULL;
    }
    if (seo_url) { 
    if(!cJSON_IsString(seo_url) && !cJSON_IsNull(seo_url))
    {
    goto end; //String
    }
    }

    // category_add_batch_payload_inner->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // category_add_batch_payload_inner->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "images");
    if (cJSON_IsNull(images)) {
        images = NULL;
    }
    if (images) { 
    cJSON *images_local_nonprimitive = NULL;
    if(!cJSON_IsArray(images)){
        goto end; //nonprimitive container
    }

    imagesList = list_createList();

    cJSON_ArrayForEach(images_local_nonprimitive,images )
    {
        if(!cJSON_IsObject(images_local_nonprimitive)){
            goto end;
        }
        category_add_batch_payload_inner_images_inner_t *imagesItem = category_add_batch_payload_inner_images_inner_parseFromJSON(images_local_nonprimitive);

        list_addElement(imagesList, imagesItem);
    }
    }

    // category_add_batch_payload_inner->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_innerJSON, "stores_ids");
    if (cJSON_IsNull(stores_ids)) {
        stores_ids = NULL;
    }
    if (stores_ids) { 
    cJSON *stores_ids_local = NULL;
    if(!cJSON_IsArray(stores_ids)) {
        goto end;//primitive container
    }
    stores_idsList = list_createList();

    cJSON_ArrayForEach(stores_ids_local, stores_ids)
    {
        if(!cJSON_IsString(stores_ids_local))
        {
            goto end;
        }
        list_addElement(stores_idsList , strdup(stores_ids_local->valuestring));
    }
    }


    category_add_batch_payload_inner_local_var = category_add_batch_payload_inner_create_internal (
        strdup(name->valuestring),
        avail ? avail->valueint : 0,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        meta_keywords ? meta_keywordsList : NULL,
        parent_id && !cJSON_IsNull(parent_id) ? strdup(parent_id->valuestring) : NULL,
        sort_order ? sort_order->valuedouble : 0,
        seo_url && !cJSON_IsNull(seo_url) ? strdup(seo_url->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        images ? imagesList : NULL,
        stores_ids ? stores_idsList : NULL
        );

    return category_add_batch_payload_inner_local_var;
end:
    if (meta_keywordsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, meta_keywordsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(meta_keywordsList);
        meta_keywordsList = NULL;
    }
    if (imagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, imagesList) {
            category_add_batch_payload_inner_images_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(imagesList);
        imagesList = NULL;
    }
    if (stores_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, stores_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(stores_idsList);
        stores_idsList = NULL;
    }
    return NULL;

}
