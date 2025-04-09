#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "brand.h"



static brand_t *brand_create_internal(
    char *id,
    char *name,
    char *created_time,
    char *modified_time,
    char *full_description,
    char *short_description,
    list_t *stores_ids,
    int active,
    char *url,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    list_t *images,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    brand_t *brand_local_var = malloc(sizeof(brand_t));
    if (!brand_local_var) {
        return NULL;
    }
    brand_local_var->id = id;
    brand_local_var->name = name;
    brand_local_var->created_time = created_time;
    brand_local_var->modified_time = modified_time;
    brand_local_var->full_description = full_description;
    brand_local_var->short_description = short_description;
    brand_local_var->stores_ids = stores_ids;
    brand_local_var->active = active;
    brand_local_var->url = url;
    brand_local_var->meta_title = meta_title;
    brand_local_var->meta_keywords = meta_keywords;
    brand_local_var->meta_description = meta_description;
    brand_local_var->images = images;
    brand_local_var->additional_fields = additional_fields;
    brand_local_var->custom_fields = custom_fields;

    brand_local_var->_library_owned = 1;
    return brand_local_var;
}

__attribute__((deprecated)) brand_t *brand_create(
    char *id,
    char *name,
    char *created_time,
    char *modified_time,
    char *full_description,
    char *short_description,
    list_t *stores_ids,
    int active,
    char *url,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    list_t *images,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return brand_create_internal (
        id,
        name,
        created_time,
        modified_time,
        full_description,
        short_description,
        stores_ids,
        active,
        url,
        meta_title,
        meta_keywords,
        meta_description,
        images,
        additional_fields,
        custom_fields
        );
}

void brand_free(brand_t *brand) {
    if(NULL == brand){
        return ;
    }
    if(brand->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "brand_free");
        return ;
    }
    listEntry_t *listEntry;
    if (brand->id) {
        free(brand->id);
        brand->id = NULL;
    }
    if (brand->name) {
        free(brand->name);
        brand->name = NULL;
    }
    if (brand->created_time) {
        free(brand->created_time);
        brand->created_time = NULL;
    }
    if (brand->modified_time) {
        free(brand->modified_time);
        brand->modified_time = NULL;
    }
    if (brand->full_description) {
        free(brand->full_description);
        brand->full_description = NULL;
    }
    if (brand->short_description) {
        free(brand->short_description);
        brand->short_description = NULL;
    }
    if (brand->stores_ids) {
        list_ForEach(listEntry, brand->stores_ids) {
            free(listEntry->data);
        }
        list_freeList(brand->stores_ids);
        brand->stores_ids = NULL;
    }
    if (brand->url) {
        free(brand->url);
        brand->url = NULL;
    }
    if (brand->meta_title) {
        free(brand->meta_title);
        brand->meta_title = NULL;
    }
    if (brand->meta_keywords) {
        free(brand->meta_keywords);
        brand->meta_keywords = NULL;
    }
    if (brand->meta_description) {
        free(brand->meta_description);
        brand->meta_description = NULL;
    }
    if (brand->images) {
        list_ForEach(listEntry, brand->images) {
            image_free(listEntry->data);
        }
        list_freeList(brand->images);
        brand->images = NULL;
    }
    if (brand->additional_fields) {
        object_free(brand->additional_fields);
        brand->additional_fields = NULL;
    }
    if (brand->custom_fields) {
        object_free(brand->custom_fields);
        brand->custom_fields = NULL;
    }
    free(brand);
}

cJSON *brand_convertToJSON(brand_t *brand) {
    cJSON *item = cJSON_CreateObject();

    // brand->id
    if(brand->id) {
    if(cJSON_AddStringToObject(item, "id", brand->id) == NULL) {
    goto fail; //String
    }
    }


    // brand->name
    if(brand->name) {
    if(cJSON_AddStringToObject(item, "name", brand->name) == NULL) {
    goto fail; //String
    }
    }


    // brand->created_time
    if(brand->created_time) {
    if(cJSON_AddStringToObject(item, "created_time", brand->created_time) == NULL) {
    goto fail; //String
    }
    }


    // brand->modified_time
    if(brand->modified_time) {
    if(cJSON_AddStringToObject(item, "modified_time", brand->modified_time) == NULL) {
    goto fail; //String
    }
    }


    // brand->full_description
    if(brand->full_description) {
    if(cJSON_AddStringToObject(item, "full_description", brand->full_description) == NULL) {
    goto fail; //String
    }
    }


    // brand->short_description
    if(brand->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", brand->short_description) == NULL) {
    goto fail; //String
    }
    }


    // brand->stores_ids
    if(brand->stores_ids) {
    cJSON *stores_ids = cJSON_AddArrayToObject(item, "stores_ids");
    if(stores_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stores_idsListEntry;
    list_ForEach(stores_idsListEntry, brand->stores_ids) {
    if(cJSON_AddStringToObject(stores_ids, "", stores_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // brand->active
    if(brand->active) {
    if(cJSON_AddBoolToObject(item, "active", brand->active) == NULL) {
    goto fail; //Bool
    }
    }


    // brand->url
    if(brand->url) {
    if(cJSON_AddStringToObject(item, "url", brand->url) == NULL) {
    goto fail; //String
    }
    }


    // brand->meta_title
    if(brand->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", brand->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // brand->meta_keywords
    if(brand->meta_keywords) {
    if(cJSON_AddStringToObject(item, "meta_keywords", brand->meta_keywords) == NULL) {
    goto fail; //String
    }
    }


    // brand->meta_description
    if(brand->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", brand->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // brand->images
    if(brand->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *imagesListEntry;
    if (brand->images) {
    list_ForEach(imagesListEntry, brand->images) {
    cJSON *itemLocal = image_convertToJSON(imagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(images, itemLocal);
    }
    }
    }


    // brand->additional_fields
    if(brand->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(brand->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // brand->custom_fields
    if(brand->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(brand->custom_fields);
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

brand_t *brand_parseFromJSON(cJSON *brandJSON){

    brand_t *brand_local_var = NULL;

    // define the local list for brand->stores_ids
    list_t *stores_idsList = NULL;

    // define the local list for brand->images
    list_t *imagesList = NULL;

    // brand->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(brandJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // brand->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(brandJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // brand->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(brandJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    if(!cJSON_IsString(created_time) && !cJSON_IsNull(created_time))
    {
    goto end; //String
    }
    }

    // brand->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(brandJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    if(!cJSON_IsString(modified_time) && !cJSON_IsNull(modified_time))
    {
    goto end; //String
    }
    }

    // brand->full_description
    cJSON *full_description = cJSON_GetObjectItemCaseSensitive(brandJSON, "full_description");
    if (cJSON_IsNull(full_description)) {
        full_description = NULL;
    }
    if (full_description) { 
    if(!cJSON_IsString(full_description) && !cJSON_IsNull(full_description))
    {
    goto end; //String
    }
    }

    // brand->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(brandJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // brand->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(brandJSON, "stores_ids");
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

    // brand->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(brandJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }
    }

    // brand->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(brandJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // brand->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(brandJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // brand->meta_keywords
    cJSON *meta_keywords = cJSON_GetObjectItemCaseSensitive(brandJSON, "meta_keywords");
    if (cJSON_IsNull(meta_keywords)) {
        meta_keywords = NULL;
    }
    if (meta_keywords) { 
    if(!cJSON_IsString(meta_keywords) && !cJSON_IsNull(meta_keywords))
    {
    goto end; //String
    }
    }

    // brand->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(brandJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // brand->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(brandJSON, "images");
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

    // brand->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(brandJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // brand->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(brandJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    brand_local_var = brand_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        created_time && !cJSON_IsNull(created_time) ? strdup(created_time->valuestring) : NULL,
        modified_time && !cJSON_IsNull(modified_time) ? strdup(modified_time->valuestring) : NULL,
        full_description && !cJSON_IsNull(full_description) ? strdup(full_description->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        stores_ids ? stores_idsList : NULL,
        active ? active->valueint : 0,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        meta_keywords && !cJSON_IsNull(meta_keywords) ? strdup(meta_keywords->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        images ? imagesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return brand_local_var;
end:
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
