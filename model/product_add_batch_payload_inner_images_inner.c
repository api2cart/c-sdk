#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_batch_payload_inner_images_inner.h"



static product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner_create_internal(
    char *type,
    char *url,
    char *label,
    char *name,
    int position
    ) {
    product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner_local_var = malloc(sizeof(product_add_batch_payload_inner_images_inner_t));
    if (!product_add_batch_payload_inner_images_inner_local_var) {
        return NULL;
    }
    product_add_batch_payload_inner_images_inner_local_var->type = type;
    product_add_batch_payload_inner_images_inner_local_var->url = url;
    product_add_batch_payload_inner_images_inner_local_var->label = label;
    product_add_batch_payload_inner_images_inner_local_var->name = name;
    product_add_batch_payload_inner_images_inner_local_var->position = position;

    product_add_batch_payload_inner_images_inner_local_var->_library_owned = 1;
    return product_add_batch_payload_inner_images_inner_local_var;
}

__attribute__((deprecated)) product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner_create(
    char *type,
    char *url,
    char *label,
    char *name,
    int position
    ) {
    return product_add_batch_payload_inner_images_inner_create_internal (
        type,
        url,
        label,
        name,
        position
        );
}

void product_add_batch_payload_inner_images_inner_free(product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner) {
    if(NULL == product_add_batch_payload_inner_images_inner){
        return ;
    }
    if(product_add_batch_payload_inner_images_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_batch_payload_inner_images_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_batch_payload_inner_images_inner->type) {
        free(product_add_batch_payload_inner_images_inner->type);
        product_add_batch_payload_inner_images_inner->type = NULL;
    }
    if (product_add_batch_payload_inner_images_inner->url) {
        free(product_add_batch_payload_inner_images_inner->url);
        product_add_batch_payload_inner_images_inner->url = NULL;
    }
    if (product_add_batch_payload_inner_images_inner->label) {
        free(product_add_batch_payload_inner_images_inner->label);
        product_add_batch_payload_inner_images_inner->label = NULL;
    }
    if (product_add_batch_payload_inner_images_inner->name) {
        free(product_add_batch_payload_inner_images_inner->name);
        product_add_batch_payload_inner_images_inner->name = NULL;
    }
    free(product_add_batch_payload_inner_images_inner);
}

cJSON *product_add_batch_payload_inner_images_inner_convertToJSON(product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_batch_payload_inner_images_inner->type
    if(product_add_batch_payload_inner_images_inner->type) {
    if(cJSON_AddStringToObject(item, "type", product_add_batch_payload_inner_images_inner->type) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner_images_inner->url
    if (!product_add_batch_payload_inner_images_inner->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", product_add_batch_payload_inner_images_inner->url) == NULL) {
    goto fail; //String
    }


    // product_add_batch_payload_inner_images_inner->label
    if(product_add_batch_payload_inner_images_inner->label) {
    if(cJSON_AddStringToObject(item, "label", product_add_batch_payload_inner_images_inner->label) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner_images_inner->name
    if(product_add_batch_payload_inner_images_inner->name) {
    if(cJSON_AddStringToObject(item, "name", product_add_batch_payload_inner_images_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner_images_inner->position
    if(product_add_batch_payload_inner_images_inner->position) {
    if(cJSON_AddNumberToObject(item, "position", product_add_batch_payload_inner_images_inner->position) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner_parseFromJSON(cJSON *product_add_batch_payload_inner_images_innerJSON){

    product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner_local_var = NULL;

    // product_add_batch_payload_inner_images_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_inner_images_innerJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner_images_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_inner_images_innerJSON, "url");
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

    // product_add_batch_payload_inner_images_inner->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_inner_images_innerJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner_images_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_inner_images_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner_images_inner->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_inner_images_innerJSON, "position");
    if (cJSON_IsNull(position)) {
        position = NULL;
    }
    if (position) { 
    if(!cJSON_IsNumber(position))
    {
    goto end; //Numeric
    }
    }


    product_add_batch_payload_inner_images_inner_local_var = product_add_batch_payload_inner_images_inner_create_internal (
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        strdup(url->valuestring),
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        position ? position->valuedouble : 0
        );

    return product_add_batch_payload_inner_images_inner_local_var;
end:
    return NULL;

}
