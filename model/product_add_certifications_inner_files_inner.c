#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_certifications_inner_files_inner.h"



static product_add_certifications_inner_files_inner_t *product_add_certifications_inner_files_inner_create_internal(
    char *url
    ) {
    product_add_certifications_inner_files_inner_t *product_add_certifications_inner_files_inner_local_var = malloc(sizeof(product_add_certifications_inner_files_inner_t));
    if (!product_add_certifications_inner_files_inner_local_var) {
        return NULL;
    }
    product_add_certifications_inner_files_inner_local_var->url = url;

    product_add_certifications_inner_files_inner_local_var->_library_owned = 1;
    return product_add_certifications_inner_files_inner_local_var;
}

__attribute__((deprecated)) product_add_certifications_inner_files_inner_t *product_add_certifications_inner_files_inner_create(
    char *url
    ) {
    return product_add_certifications_inner_files_inner_create_internal (
        url
        );
}

void product_add_certifications_inner_files_inner_free(product_add_certifications_inner_files_inner_t *product_add_certifications_inner_files_inner) {
    if(NULL == product_add_certifications_inner_files_inner){
        return ;
    }
    if(product_add_certifications_inner_files_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_certifications_inner_files_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_certifications_inner_files_inner->url) {
        free(product_add_certifications_inner_files_inner->url);
        product_add_certifications_inner_files_inner->url = NULL;
    }
    free(product_add_certifications_inner_files_inner);
}

cJSON *product_add_certifications_inner_files_inner_convertToJSON(product_add_certifications_inner_files_inner_t *product_add_certifications_inner_files_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_certifications_inner_files_inner->url
    if (!product_add_certifications_inner_files_inner->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", product_add_certifications_inner_files_inner->url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_certifications_inner_files_inner_t *product_add_certifications_inner_files_inner_parseFromJSON(cJSON *product_add_certifications_inner_files_innerJSON){

    product_add_certifications_inner_files_inner_t *product_add_certifications_inner_files_inner_local_var = NULL;

    // product_add_certifications_inner_files_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(product_add_certifications_inner_files_innerJSON, "url");
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


    product_add_certifications_inner_files_inner_local_var = product_add_certifications_inner_files_inner_create_internal (
        strdup(url->valuestring)
        );

    return product_add_certifications_inner_files_inner_local_var;
end:
    return NULL;

}
