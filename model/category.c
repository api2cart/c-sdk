#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category.h"



static category_t *category_create_internal(
    char *id,
    char *parent_id,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    char *name,
    char *short_description,
    char *description,
    list_t *stores_ids,
    char *keywords,
    char *meta_description,
    char *meta_title,
    int avail,
    char *path,
    char *seo_url,
    int sort_order,
    list_t *images,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    category_t *category_local_var = malloc(sizeof(category_t));
    if (!category_local_var) {
        return NULL;
    }
    category_local_var->id = id;
    category_local_var->parent_id = parent_id;
    category_local_var->created_at = created_at;
    category_local_var->modified_at = modified_at;
    category_local_var->name = name;
    category_local_var->short_description = short_description;
    category_local_var->description = description;
    category_local_var->stores_ids = stores_ids;
    category_local_var->keywords = keywords;
    category_local_var->meta_description = meta_description;
    category_local_var->meta_title = meta_title;
    category_local_var->avail = avail;
    category_local_var->path = path;
    category_local_var->seo_url = seo_url;
    category_local_var->sort_order = sort_order;
    category_local_var->images = images;
    category_local_var->additional_fields = additional_fields;
    category_local_var->custom_fields = custom_fields;

    category_local_var->_library_owned = 1;
    return category_local_var;
}

__attribute__((deprecated)) category_t *category_create(
    char *id,
    char *parent_id,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    char *name,
    char *short_description,
    char *description,
    list_t *stores_ids,
    char *keywords,
    char *meta_description,
    char *meta_title,
    int avail,
    char *path,
    char *seo_url,
    int sort_order,
    list_t *images,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return category_create_internal (
        id,
        parent_id,
        created_at,
        modified_at,
        name,
        short_description,
        description,
        stores_ids,
        keywords,
        meta_description,
        meta_title,
        avail,
        path,
        seo_url,
        sort_order,
        images,
        additional_fields,
        custom_fields
        );
}

void category_free(category_t *category) {
    if(NULL == category){
        return ;
    }
    if(category->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_free");
        return ;
    }
    listEntry_t *listEntry;
    if (category->id) {
        free(category->id);
        category->id = NULL;
    }
    if (category->parent_id) {
        free(category->parent_id);
        category->parent_id = NULL;
    }
    if (category->created_at) {
        a2_c_date_time_free(category->created_at);
        category->created_at = NULL;
    }
    if (category->modified_at) {
        a2_c_date_time_free(category->modified_at);
        category->modified_at = NULL;
    }
    if (category->name) {
        free(category->name);
        category->name = NULL;
    }
    if (category->short_description) {
        free(category->short_description);
        category->short_description = NULL;
    }
    if (category->description) {
        free(category->description);
        category->description = NULL;
    }
    if (category->stores_ids) {
        list_ForEach(listEntry, category->stores_ids) {
            free(listEntry->data);
        }
        list_freeList(category->stores_ids);
        category->stores_ids = NULL;
    }
    if (category->keywords) {
        free(category->keywords);
        category->keywords = NULL;
    }
    if (category->meta_description) {
        free(category->meta_description);
        category->meta_description = NULL;
    }
    if (category->meta_title) {
        free(category->meta_title);
        category->meta_title = NULL;
    }
    if (category->path) {
        free(category->path);
        category->path = NULL;
    }
    if (category->seo_url) {
        free(category->seo_url);
        category->seo_url = NULL;
    }
    if (category->images) {
        list_ForEach(listEntry, category->images) {
            image_free(listEntry->data);
        }
        list_freeList(category->images);
        category->images = NULL;
    }
    if (category->additional_fields) {
        object_free(category->additional_fields);
        category->additional_fields = NULL;
    }
    if (category->custom_fields) {
        object_free(category->custom_fields);
        category->custom_fields = NULL;
    }
    free(category);
}

cJSON *category_convertToJSON(category_t *category) {
    cJSON *item = cJSON_CreateObject();

    // category->id
    if(category->id) {
    if(cJSON_AddStringToObject(item, "id", category->id) == NULL) {
    goto fail; //String
    }
    }


    // category->parent_id
    if(category->parent_id) {
    if(cJSON_AddStringToObject(item, "parent_id", category->parent_id) == NULL) {
    goto fail; //String
    }
    }


    // category->created_at
    if(category->created_at) {
    cJSON *created_at_local_JSON = a2_c_date_time_convertToJSON(category->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_at", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // category->modified_at
    if(category->modified_at) {
    cJSON *modified_at_local_JSON = a2_c_date_time_convertToJSON(category->modified_at);
    if(modified_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_at", modified_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // category->name
    if(category->name) {
    if(cJSON_AddStringToObject(item, "name", category->name) == NULL) {
    goto fail; //String
    }
    }


    // category->short_description
    if(category->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", category->short_description) == NULL) {
    goto fail; //String
    }
    }


    // category->description
    if(category->description) {
    if(cJSON_AddStringToObject(item, "description", category->description) == NULL) {
    goto fail; //String
    }
    }


    // category->stores_ids
    if(category->stores_ids) {
    cJSON *stores_ids = cJSON_AddArrayToObject(item, "stores_ids");
    if(stores_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stores_idsListEntry;
    list_ForEach(stores_idsListEntry, category->stores_ids) {
    if(cJSON_AddStringToObject(stores_ids, "", stores_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // category->keywords
    if(category->keywords) {
    if(cJSON_AddStringToObject(item, "keywords", category->keywords) == NULL) {
    goto fail; //String
    }
    }


    // category->meta_description
    if(category->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", category->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // category->meta_title
    if(category->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", category->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // category->avail
    if(category->avail) {
    if(cJSON_AddBoolToObject(item, "avail", category->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // category->path
    if(category->path) {
    if(cJSON_AddStringToObject(item, "path", category->path) == NULL) {
    goto fail; //String
    }
    }


    // category->seo_url
    if(category->seo_url) {
    if(cJSON_AddStringToObject(item, "seo_url", category->seo_url) == NULL) {
    goto fail; //String
    }
    }


    // category->sort_order
    if(category->sort_order) {
    if(cJSON_AddNumberToObject(item, "sort_order", category->sort_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // category->images
    if(category->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *imagesListEntry;
    if (category->images) {
    list_ForEach(imagesListEntry, category->images) {
    cJSON *itemLocal = image_convertToJSON(imagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(images, itemLocal);
    }
    }
    }


    // category->additional_fields
    if(category->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(category->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // category->custom_fields
    if(category->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(category->custom_fields);
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

category_t *category_parseFromJSON(cJSON *categoryJSON){

    category_t *category_local_var = NULL;

    // define the local variable for category->created_at
    a2_c_date_time_t *created_at_local_nonprim = NULL;

    // define the local variable for category->modified_at
    a2_c_date_time_t *modified_at_local_nonprim = NULL;

    // define the local list for category->stores_ids
    list_t *stores_idsList = NULL;

    // define the local list for category->images
    list_t *imagesList = NULL;

    // category->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(categoryJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // category->parent_id
    cJSON *parent_id = cJSON_GetObjectItemCaseSensitive(categoryJSON, "parent_id");
    if (cJSON_IsNull(parent_id)) {
        parent_id = NULL;
    }
    if (parent_id) { 
    if(!cJSON_IsString(parent_id) && !cJSON_IsNull(parent_id))
    {
    goto end; //String
    }
    }

    // category->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(categoryJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    created_at_local_nonprim = a2_c_date_time_parseFromJSON(created_at); //nonprimitive
    }

    // category->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(categoryJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    modified_at_local_nonprim = a2_c_date_time_parseFromJSON(modified_at); //nonprimitive
    }

    // category->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(categoryJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // category->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(categoryJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // category->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(categoryJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // category->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(categoryJSON, "stores_ids");
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

    // category->keywords
    cJSON *keywords = cJSON_GetObjectItemCaseSensitive(categoryJSON, "keywords");
    if (cJSON_IsNull(keywords)) {
        keywords = NULL;
    }
    if (keywords) { 
    if(!cJSON_IsString(keywords) && !cJSON_IsNull(keywords))
    {
    goto end; //String
    }
    }

    // category->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(categoryJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // category->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(categoryJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // category->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(categoryJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // category->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(categoryJSON, "path");
    if (cJSON_IsNull(path)) {
        path = NULL;
    }
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }

    // category->seo_url
    cJSON *seo_url = cJSON_GetObjectItemCaseSensitive(categoryJSON, "seo_url");
    if (cJSON_IsNull(seo_url)) {
        seo_url = NULL;
    }
    if (seo_url) { 
    if(!cJSON_IsString(seo_url) && !cJSON_IsNull(seo_url))
    {
    goto end; //String
    }
    }

    // category->sort_order
    cJSON *sort_order = cJSON_GetObjectItemCaseSensitive(categoryJSON, "sort_order");
    if (cJSON_IsNull(sort_order)) {
        sort_order = NULL;
    }
    if (sort_order) { 
    if(!cJSON_IsNumber(sort_order))
    {
    goto end; //Numeric
    }
    }

    // category->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(categoryJSON, "images");
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
        image_t *imagesItem = image_parseFromJSON(images_local_nonprimitive);

        list_addElement(imagesList, imagesItem);
    }
    }

    // category->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(categoryJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // category->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(categoryJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    category_local_var = category_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        parent_id && !cJSON_IsNull(parent_id) ? strdup(parent_id->valuestring) : NULL,
        created_at ? created_at_local_nonprim : NULL,
        modified_at ? modified_at_local_nonprim : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        stores_ids ? stores_idsList : NULL,
        keywords && !cJSON_IsNull(keywords) ? strdup(keywords->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        avail ? avail->valueint : 0,
        path && !cJSON_IsNull(path) ? strdup(path->valuestring) : NULL,
        seo_url && !cJSON_IsNull(seo_url) ? strdup(seo_url->valuestring) : NULL,
        sort_order ? sort_order->valuedouble : 0,
        images ? imagesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return category_local_var;
end:
    if (created_at_local_nonprim) {
        a2_c_date_time_free(created_at_local_nonprim);
        created_at_local_nonprim = NULL;
    }
    if (modified_at_local_nonprim) {
        a2_c_date_time_free(modified_at_local_nonprim);
        modified_at_local_nonprim = NULL;
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
    if (imagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, imagesList) {
            image_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(imagesList);
        imagesList = NULL;
    }
    return NULL;

}
