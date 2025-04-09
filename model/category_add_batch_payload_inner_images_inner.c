#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_add_batch_payload_inner_images_inner.h"



static category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner_create_internal(
    char *url,
    char *image_name,
    char *type,
    char *label
    ) {
    category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner_local_var = malloc(sizeof(category_add_batch_payload_inner_images_inner_t));
    if (!category_add_batch_payload_inner_images_inner_local_var) {
        return NULL;
    }
    category_add_batch_payload_inner_images_inner_local_var->url = url;
    category_add_batch_payload_inner_images_inner_local_var->image_name = image_name;
    category_add_batch_payload_inner_images_inner_local_var->type = type;
    category_add_batch_payload_inner_images_inner_local_var->label = label;

    category_add_batch_payload_inner_images_inner_local_var->_library_owned = 1;
    return category_add_batch_payload_inner_images_inner_local_var;
}

__attribute__((deprecated)) category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner_create(
    char *url,
    char *image_name,
    char *type,
    char *label
    ) {
    return category_add_batch_payload_inner_images_inner_create_internal (
        url,
        image_name,
        type,
        label
        );
}

void category_add_batch_payload_inner_images_inner_free(category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner) {
    if(NULL == category_add_batch_payload_inner_images_inner){
        return ;
    }
    if(category_add_batch_payload_inner_images_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_add_batch_payload_inner_images_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (category_add_batch_payload_inner_images_inner->url) {
        free(category_add_batch_payload_inner_images_inner->url);
        category_add_batch_payload_inner_images_inner->url = NULL;
    }
    if (category_add_batch_payload_inner_images_inner->image_name) {
        free(category_add_batch_payload_inner_images_inner->image_name);
        category_add_batch_payload_inner_images_inner->image_name = NULL;
    }
    if (category_add_batch_payload_inner_images_inner->type) {
        free(category_add_batch_payload_inner_images_inner->type);
        category_add_batch_payload_inner_images_inner->type = NULL;
    }
    if (category_add_batch_payload_inner_images_inner->label) {
        free(category_add_batch_payload_inner_images_inner->label);
        category_add_batch_payload_inner_images_inner->label = NULL;
    }
    free(category_add_batch_payload_inner_images_inner);
}

cJSON *category_add_batch_payload_inner_images_inner_convertToJSON(category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner) {
    cJSON *item = cJSON_CreateObject();

    // category_add_batch_payload_inner_images_inner->url
    if (!category_add_batch_payload_inner_images_inner->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", category_add_batch_payload_inner_images_inner->url) == NULL) {
    goto fail; //String
    }


    // category_add_batch_payload_inner_images_inner->image_name
    if(category_add_batch_payload_inner_images_inner->image_name) {
    if(cJSON_AddStringToObject(item, "image_name", category_add_batch_payload_inner_images_inner->image_name) == NULL) {
    goto fail; //String
    }
    }


    // category_add_batch_payload_inner_images_inner->type
    if(category_add_batch_payload_inner_images_inner->type) {
    if(cJSON_AddStringToObject(item, "type", category_add_batch_payload_inner_images_inner->type) == NULL) {
    goto fail; //String
    }
    }


    // category_add_batch_payload_inner_images_inner->label
    if(category_add_batch_payload_inner_images_inner->label) {
    if(cJSON_AddStringToObject(item, "label", category_add_batch_payload_inner_images_inner->label) == NULL) {
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

category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner_parseFromJSON(cJSON *category_add_batch_payload_inner_images_innerJSON){

    category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner_local_var = NULL;

    // category_add_batch_payload_inner_images_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_inner_images_innerJSON, "url");
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

    // category_add_batch_payload_inner_images_inner->image_name
    cJSON *image_name = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_inner_images_innerJSON, "image_name");
    if (cJSON_IsNull(image_name)) {
        image_name = NULL;
    }
    if (image_name) { 
    if(!cJSON_IsString(image_name) && !cJSON_IsNull(image_name))
    {
    goto end; //String
    }
    }

    // category_add_batch_payload_inner_images_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_inner_images_innerJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // category_add_batch_payload_inner_images_inner->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(category_add_batch_payload_inner_images_innerJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }


    category_add_batch_payload_inner_images_inner_local_var = category_add_batch_payload_inner_images_inner_create_internal (
        strdup(url->valuestring),
        image_name && !cJSON_IsNull(image_name) ? strdup(image_name->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL
        );

    return category_add_batch_payload_inner_images_inner_local_var;
end:
    return NULL;

}
