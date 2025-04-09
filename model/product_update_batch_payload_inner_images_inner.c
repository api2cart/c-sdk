#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_update_batch_payload_inner_images_inner.h"



static product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner_create_internal(
    char *id,
    char *name,
    char *url,
    char *label,
    int position,
    char *type
    ) {
    product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner_local_var = malloc(sizeof(product_update_batch_payload_inner_images_inner_t));
    if (!product_update_batch_payload_inner_images_inner_local_var) {
        return NULL;
    }
    product_update_batch_payload_inner_images_inner_local_var->id = id;
    product_update_batch_payload_inner_images_inner_local_var->name = name;
    product_update_batch_payload_inner_images_inner_local_var->url = url;
    product_update_batch_payload_inner_images_inner_local_var->label = label;
    product_update_batch_payload_inner_images_inner_local_var->position = position;
    product_update_batch_payload_inner_images_inner_local_var->type = type;

    product_update_batch_payload_inner_images_inner_local_var->_library_owned = 1;
    return product_update_batch_payload_inner_images_inner_local_var;
}

__attribute__((deprecated)) product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner_create(
    char *id,
    char *name,
    char *url,
    char *label,
    int position,
    char *type
    ) {
    return product_update_batch_payload_inner_images_inner_create_internal (
        id,
        name,
        url,
        label,
        position,
        type
        );
}

void product_update_batch_payload_inner_images_inner_free(product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner) {
    if(NULL == product_update_batch_payload_inner_images_inner){
        return ;
    }
    if(product_update_batch_payload_inner_images_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_update_batch_payload_inner_images_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_update_batch_payload_inner_images_inner->id) {
        free(product_update_batch_payload_inner_images_inner->id);
        product_update_batch_payload_inner_images_inner->id = NULL;
    }
    if (product_update_batch_payload_inner_images_inner->name) {
        free(product_update_batch_payload_inner_images_inner->name);
        product_update_batch_payload_inner_images_inner->name = NULL;
    }
    if (product_update_batch_payload_inner_images_inner->url) {
        free(product_update_batch_payload_inner_images_inner->url);
        product_update_batch_payload_inner_images_inner->url = NULL;
    }
    if (product_update_batch_payload_inner_images_inner->label) {
        free(product_update_batch_payload_inner_images_inner->label);
        product_update_batch_payload_inner_images_inner->label = NULL;
    }
    if (product_update_batch_payload_inner_images_inner->type) {
        free(product_update_batch_payload_inner_images_inner->type);
        product_update_batch_payload_inner_images_inner->type = NULL;
    }
    free(product_update_batch_payload_inner_images_inner);
}

cJSON *product_update_batch_payload_inner_images_inner_convertToJSON(product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_update_batch_payload_inner_images_inner->id
    if(product_update_batch_payload_inner_images_inner->id) {
    if(cJSON_AddStringToObject(item, "id", product_update_batch_payload_inner_images_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner_images_inner->name
    if(product_update_batch_payload_inner_images_inner->name) {
    if(cJSON_AddStringToObject(item, "name", product_update_batch_payload_inner_images_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner_images_inner->url
    if (!product_update_batch_payload_inner_images_inner->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", product_update_batch_payload_inner_images_inner->url) == NULL) {
    goto fail; //String
    }


    // product_update_batch_payload_inner_images_inner->label
    if(product_update_batch_payload_inner_images_inner->label) {
    if(cJSON_AddStringToObject(item, "label", product_update_batch_payload_inner_images_inner->label) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner_images_inner->position
    if(product_update_batch_payload_inner_images_inner->position) {
    if(cJSON_AddNumberToObject(item, "position", product_update_batch_payload_inner_images_inner->position) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner_images_inner->type
    if(product_update_batch_payload_inner_images_inner->type) {
    if(cJSON_AddStringToObject(item, "type", product_update_batch_payload_inner_images_inner->type) == NULL) {
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

product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner_parseFromJSON(cJSON *product_update_batch_payload_inner_images_innerJSON){

    product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner_local_var = NULL;

    // product_update_batch_payload_inner_images_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_inner_images_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner_images_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_inner_images_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner_images_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_inner_images_innerJSON, "url");
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

    // product_update_batch_payload_inner_images_inner->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_inner_images_innerJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner_images_inner->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_inner_images_innerJSON, "position");
    if (cJSON_IsNull(position)) {
        position = NULL;
    }
    if (position) { 
    if(!cJSON_IsNumber(position))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner_images_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_inner_images_innerJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }


    product_update_batch_payload_inner_images_inner_local_var = product_update_batch_payload_inner_images_inner_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        strdup(url->valuestring),
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        position ? position->valuedouble : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL
        );

    return product_update_batch_payload_inner_images_inner_local_var;
end:
    return NULL;

}
