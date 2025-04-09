#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_certifications_inner.h"



static product_add_certifications_inner_t *product_add_certifications_inner_create_internal(
    char *id,
    list_t *images,
    list_t *files
    ) {
    product_add_certifications_inner_t *product_add_certifications_inner_local_var = malloc(sizeof(product_add_certifications_inner_t));
    if (!product_add_certifications_inner_local_var) {
        return NULL;
    }
    product_add_certifications_inner_local_var->id = id;
    product_add_certifications_inner_local_var->images = images;
    product_add_certifications_inner_local_var->files = files;

    product_add_certifications_inner_local_var->_library_owned = 1;
    return product_add_certifications_inner_local_var;
}

__attribute__((deprecated)) product_add_certifications_inner_t *product_add_certifications_inner_create(
    char *id,
    list_t *images,
    list_t *files
    ) {
    return product_add_certifications_inner_create_internal (
        id,
        images,
        files
        );
}

void product_add_certifications_inner_free(product_add_certifications_inner_t *product_add_certifications_inner) {
    if(NULL == product_add_certifications_inner){
        return ;
    }
    if(product_add_certifications_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_certifications_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_certifications_inner->id) {
        free(product_add_certifications_inner->id);
        product_add_certifications_inner->id = NULL;
    }
    if (product_add_certifications_inner->images) {
        list_ForEach(listEntry, product_add_certifications_inner->images) {
            product_add_certifications_inner_images_inner_free(listEntry->data);
        }
        list_freeList(product_add_certifications_inner->images);
        product_add_certifications_inner->images = NULL;
    }
    if (product_add_certifications_inner->files) {
        list_ForEach(listEntry, product_add_certifications_inner->files) {
            product_add_certifications_inner_files_inner_free(listEntry->data);
        }
        list_freeList(product_add_certifications_inner->files);
        product_add_certifications_inner->files = NULL;
    }
    free(product_add_certifications_inner);
}

cJSON *product_add_certifications_inner_convertToJSON(product_add_certifications_inner_t *product_add_certifications_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_certifications_inner->id
    if (!product_add_certifications_inner->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", product_add_certifications_inner->id) == NULL) {
    goto fail; //String
    }


    // product_add_certifications_inner->images
    if(product_add_certifications_inner->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *imagesListEntry;
    if (product_add_certifications_inner->images) {
    list_ForEach(imagesListEntry, product_add_certifications_inner->images) {
    cJSON *itemLocal = product_add_certifications_inner_images_inner_convertToJSON(imagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(images, itemLocal);
    }
    }
    }


    // product_add_certifications_inner->files
    if(product_add_certifications_inner->files) {
    cJSON *files = cJSON_AddArrayToObject(item, "files");
    if(files == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *filesListEntry;
    if (product_add_certifications_inner->files) {
    list_ForEach(filesListEntry, product_add_certifications_inner->files) {
    cJSON *itemLocal = product_add_certifications_inner_files_inner_convertToJSON(filesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(files, itemLocal);
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

product_add_certifications_inner_t *product_add_certifications_inner_parseFromJSON(cJSON *product_add_certifications_innerJSON){

    product_add_certifications_inner_t *product_add_certifications_inner_local_var = NULL;

    // define the local list for product_add_certifications_inner->images
    list_t *imagesList = NULL;

    // define the local list for product_add_certifications_inner->files
    list_t *filesList = NULL;

    // product_add_certifications_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_add_certifications_innerJSON, "id");
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

    // product_add_certifications_inner->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(product_add_certifications_innerJSON, "images");
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
        product_add_certifications_inner_images_inner_t *imagesItem = product_add_certifications_inner_images_inner_parseFromJSON(images_local_nonprimitive);

        list_addElement(imagesList, imagesItem);
    }
    }

    // product_add_certifications_inner->files
    cJSON *files = cJSON_GetObjectItemCaseSensitive(product_add_certifications_innerJSON, "files");
    if (cJSON_IsNull(files)) {
        files = NULL;
    }
    if (files) { 
    cJSON *files_local_nonprimitive = NULL;
    if(!cJSON_IsArray(files)){
        goto end; //nonprimitive container
    }

    filesList = list_createList();

    cJSON_ArrayForEach(files_local_nonprimitive,files )
    {
        if(!cJSON_IsObject(files_local_nonprimitive)){
            goto end;
        }
        product_add_certifications_inner_files_inner_t *filesItem = product_add_certifications_inner_files_inner_parseFromJSON(files_local_nonprimitive);

        list_addElement(filesList, filesItem);
    }
    }


    product_add_certifications_inner_local_var = product_add_certifications_inner_create_internal (
        strdup(id->valuestring),
        images ? imagesList : NULL,
        files ? filesList : NULL
        );

    return product_add_certifications_inner_local_var;
end:
    if (imagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, imagesList) {
            product_add_certifications_inner_images_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(imagesList);
        imagesList = NULL;
    }
    if (filesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, filesList) {
            product_add_certifications_inner_files_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(filesList);
        filesList = NULL;
    }
    return NULL;

}
