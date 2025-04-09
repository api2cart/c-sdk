#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_manufacturer_info.h"



static product_add_manufacturer_info_t *product_add_manufacturer_info_create_internal(
    char *name,
    char *address,
    char *phone,
    char *email
    ) {
    product_add_manufacturer_info_t *product_add_manufacturer_info_local_var = malloc(sizeof(product_add_manufacturer_info_t));
    if (!product_add_manufacturer_info_local_var) {
        return NULL;
    }
    product_add_manufacturer_info_local_var->name = name;
    product_add_manufacturer_info_local_var->address = address;
    product_add_manufacturer_info_local_var->phone = phone;
    product_add_manufacturer_info_local_var->email = email;

    product_add_manufacturer_info_local_var->_library_owned = 1;
    return product_add_manufacturer_info_local_var;
}

__attribute__((deprecated)) product_add_manufacturer_info_t *product_add_manufacturer_info_create(
    char *name,
    char *address,
    char *phone,
    char *email
    ) {
    return product_add_manufacturer_info_create_internal (
        name,
        address,
        phone,
        email
        );
}

void product_add_manufacturer_info_free(product_add_manufacturer_info_t *product_add_manufacturer_info) {
    if(NULL == product_add_manufacturer_info){
        return ;
    }
    if(product_add_manufacturer_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_manufacturer_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_manufacturer_info->name) {
        free(product_add_manufacturer_info->name);
        product_add_manufacturer_info->name = NULL;
    }
    if (product_add_manufacturer_info->address) {
        free(product_add_manufacturer_info->address);
        product_add_manufacturer_info->address = NULL;
    }
    if (product_add_manufacturer_info->phone) {
        free(product_add_manufacturer_info->phone);
        product_add_manufacturer_info->phone = NULL;
    }
    if (product_add_manufacturer_info->email) {
        free(product_add_manufacturer_info->email);
        product_add_manufacturer_info->email = NULL;
    }
    free(product_add_manufacturer_info);
}

cJSON *product_add_manufacturer_info_convertToJSON(product_add_manufacturer_info_t *product_add_manufacturer_info) {
    cJSON *item = cJSON_CreateObject();

    // product_add_manufacturer_info->name
    if(product_add_manufacturer_info->name) {
    if(cJSON_AddStringToObject(item, "name", product_add_manufacturer_info->name) == NULL) {
    goto fail; //String
    }
    }


    // product_add_manufacturer_info->address
    if(product_add_manufacturer_info->address) {
    if(cJSON_AddStringToObject(item, "address", product_add_manufacturer_info->address) == NULL) {
    goto fail; //String
    }
    }


    // product_add_manufacturer_info->phone
    if(product_add_manufacturer_info->phone) {
    if(cJSON_AddStringToObject(item, "phone", product_add_manufacturer_info->phone) == NULL) {
    goto fail; //String
    }
    }


    // product_add_manufacturer_info->email
    if(product_add_manufacturer_info->email) {
    if(cJSON_AddStringToObject(item, "email", product_add_manufacturer_info->email) == NULL) {
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

product_add_manufacturer_info_t *product_add_manufacturer_info_parseFromJSON(cJSON *product_add_manufacturer_infoJSON){

    product_add_manufacturer_info_t *product_add_manufacturer_info_local_var = NULL;

    // product_add_manufacturer_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_add_manufacturer_infoJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_add_manufacturer_info->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(product_add_manufacturer_infoJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // product_add_manufacturer_info->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(product_add_manufacturer_infoJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // product_add_manufacturer_info->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(product_add_manufacturer_infoJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }


    product_add_manufacturer_info_local_var = product_add_manufacturer_info_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL
        );

    return product_add_manufacturer_info_local_var;
end:
    return NULL;

}
