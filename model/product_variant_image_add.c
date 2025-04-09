#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_image_add.h"


char* product_variant_image_add_type_ToString(api2cart_openapi_product_variant_image_add_TYPE_e type) {
    char* typeArray[] =  { "NULL", "small", "base", "additional", "thumbnail" };
    return typeArray[type];
}

api2cart_openapi_product_variant_image_add_TYPE_e product_variant_image_add_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "small", "base", "additional", "thumbnail" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static product_variant_image_add_t *product_variant_image_add_create_internal(
    char *product_id,
    char *product_variant_id,
    char *image_name,
    api2cart_openapi_product_variant_image_add_TYPE_e type,
    char *url,
    char *content,
    char *label,
    char *mime,
    int position,
    char *store_id,
    char *option_id
    ) {
    product_variant_image_add_t *product_variant_image_add_local_var = malloc(sizeof(product_variant_image_add_t));
    if (!product_variant_image_add_local_var) {
        return NULL;
    }
    product_variant_image_add_local_var->product_id = product_id;
    product_variant_image_add_local_var->product_variant_id = product_variant_id;
    product_variant_image_add_local_var->image_name = image_name;
    product_variant_image_add_local_var->type = type;
    product_variant_image_add_local_var->url = url;
    product_variant_image_add_local_var->content = content;
    product_variant_image_add_local_var->label = label;
    product_variant_image_add_local_var->mime = mime;
    product_variant_image_add_local_var->position = position;
    product_variant_image_add_local_var->store_id = store_id;
    product_variant_image_add_local_var->option_id = option_id;

    product_variant_image_add_local_var->_library_owned = 1;
    return product_variant_image_add_local_var;
}

__attribute__((deprecated)) product_variant_image_add_t *product_variant_image_add_create(
    char *product_id,
    char *product_variant_id,
    char *image_name,
    api2cart_openapi_product_variant_image_add_TYPE_e type,
    char *url,
    char *content,
    char *label,
    char *mime,
    int position,
    char *store_id,
    char *option_id
    ) {
    return product_variant_image_add_create_internal (
        product_id,
        product_variant_id,
        image_name,
        type,
        url,
        content,
        label,
        mime,
        position,
        store_id,
        option_id
        );
}

void product_variant_image_add_free(product_variant_image_add_t *product_variant_image_add) {
    if(NULL == product_variant_image_add){
        return ;
    }
    if(product_variant_image_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_image_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_image_add->product_id) {
        free(product_variant_image_add->product_id);
        product_variant_image_add->product_id = NULL;
    }
    if (product_variant_image_add->product_variant_id) {
        free(product_variant_image_add->product_variant_id);
        product_variant_image_add->product_variant_id = NULL;
    }
    if (product_variant_image_add->image_name) {
        free(product_variant_image_add->image_name);
        product_variant_image_add->image_name = NULL;
    }
    if (product_variant_image_add->url) {
        free(product_variant_image_add->url);
        product_variant_image_add->url = NULL;
    }
    if (product_variant_image_add->content) {
        free(product_variant_image_add->content);
        product_variant_image_add->content = NULL;
    }
    if (product_variant_image_add->label) {
        free(product_variant_image_add->label);
        product_variant_image_add->label = NULL;
    }
    if (product_variant_image_add->mime) {
        free(product_variant_image_add->mime);
        product_variant_image_add->mime = NULL;
    }
    if (product_variant_image_add->store_id) {
        free(product_variant_image_add->store_id);
        product_variant_image_add->store_id = NULL;
    }
    if (product_variant_image_add->option_id) {
        free(product_variant_image_add->option_id);
        product_variant_image_add->option_id = NULL;
    }
    free(product_variant_image_add);
}

cJSON *product_variant_image_add_convertToJSON(product_variant_image_add_t *product_variant_image_add) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_image_add->product_id
    if(product_variant_image_add->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_variant_image_add->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_image_add->product_variant_id
    if (!product_variant_image_add->product_variant_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "product_variant_id", product_variant_image_add->product_variant_id) == NULL) {
    goto fail; //String
    }


    // product_variant_image_add->image_name
    if (!product_variant_image_add->image_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "image_name", product_variant_image_add->image_name) == NULL) {
    goto fail; //String
    }


    // product_variant_image_add->type
    if (api2cart_openapi_product_variant_image_add_TYPE_NULL == product_variant_image_add->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", product_variant_image_add_type_ToString(product_variant_image_add->type)) == NULL)
    {
    goto fail; //Enum
    }


    // product_variant_image_add->url
    if(product_variant_image_add->url) {
    if(cJSON_AddStringToObject(item, "url", product_variant_image_add->url) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_image_add->content
    if(product_variant_image_add->content) {
    if(cJSON_AddStringToObject(item, "content", product_variant_image_add->content) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_image_add->label
    if(product_variant_image_add->label) {
    if(cJSON_AddStringToObject(item, "label", product_variant_image_add->label) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_image_add->mime
    if(product_variant_image_add->mime) {
    if(cJSON_AddStringToObject(item, "mime", product_variant_image_add->mime) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_image_add->position
    if(product_variant_image_add->position) {
    if(cJSON_AddNumberToObject(item, "position", product_variant_image_add->position) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_image_add->store_id
    if(product_variant_image_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_variant_image_add->store_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_image_add->option_id
    if(product_variant_image_add->option_id) {
    if(cJSON_AddStringToObject(item, "option_id", product_variant_image_add->option_id) == NULL) {
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

product_variant_image_add_t *product_variant_image_add_parseFromJSON(cJSON *product_variant_image_addJSON){

    product_variant_image_add_t *product_variant_image_add_local_var = NULL;

    // product_variant_image_add->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_variant_image_add->product_variant_id
    cJSON *product_variant_id = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "product_variant_id");
    if (cJSON_IsNull(product_variant_id)) {
        product_variant_id = NULL;
    }
    if (!product_variant_id) {
        goto end;
    }

    
    if(!cJSON_IsString(product_variant_id))
    {
    goto end; //String
    }

    // product_variant_image_add->image_name
    cJSON *image_name = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "image_name");
    if (cJSON_IsNull(image_name)) {
        image_name = NULL;
    }
    if (!image_name) {
        goto end;
    }

    
    if(!cJSON_IsString(image_name))
    {
    goto end; //String
    }

    // product_variant_image_add->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (!type) {
        goto end;
    }

    api2cart_openapi_product_variant_image_add_TYPE_e typeVariable;
    
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = product_variant_image_add_type_FromString(type->valuestring);

    // product_variant_image_add->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // product_variant_image_add->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "content");
    if (cJSON_IsNull(content)) {
        content = NULL;
    }
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // product_variant_image_add->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // product_variant_image_add->mime
    cJSON *mime = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "mime");
    if (cJSON_IsNull(mime)) {
        mime = NULL;
    }
    if (mime) { 
    if(!cJSON_IsString(mime) && !cJSON_IsNull(mime))
    {
    goto end; //String
    }
    }

    // product_variant_image_add->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "position");
    if (cJSON_IsNull(position)) {
        position = NULL;
    }
    if (position) { 
    if(!cJSON_IsNumber(position))
    {
    goto end; //Numeric
    }
    }

    // product_variant_image_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // product_variant_image_add->option_id
    cJSON *option_id = cJSON_GetObjectItemCaseSensitive(product_variant_image_addJSON, "option_id");
    if (cJSON_IsNull(option_id)) {
        option_id = NULL;
    }
    if (option_id) { 
    if(!cJSON_IsString(option_id) && !cJSON_IsNull(option_id))
    {
    goto end; //String
    }
    }


    product_variant_image_add_local_var = product_variant_image_add_create_internal (
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        strdup(product_variant_id->valuestring),
        strdup(image_name->valuestring),
        typeVariable,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        mime && !cJSON_IsNull(mime) ? strdup(mime->valuestring) : NULL,
        position ? position->valuedouble : 0,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        option_id && !cJSON_IsNull(option_id) ? strdup(option_id->valuestring) : NULL
        );

    return product_variant_image_add_local_var;
end:
    return NULL;

}
