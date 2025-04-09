#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_size_chart.h"



static product_add_size_chart_t *product_add_size_chart_create_internal(
    char *id,
    char *url
    ) {
    product_add_size_chart_t *product_add_size_chart_local_var = malloc(sizeof(product_add_size_chart_t));
    if (!product_add_size_chart_local_var) {
        return NULL;
    }
    product_add_size_chart_local_var->id = id;
    product_add_size_chart_local_var->url = url;

    product_add_size_chart_local_var->_library_owned = 1;
    return product_add_size_chart_local_var;
}

__attribute__((deprecated)) product_add_size_chart_t *product_add_size_chart_create(
    char *id,
    char *url
    ) {
    return product_add_size_chart_create_internal (
        id,
        url
        );
}

void product_add_size_chart_free(product_add_size_chart_t *product_add_size_chart) {
    if(NULL == product_add_size_chart){
        return ;
    }
    if(product_add_size_chart->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_size_chart_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_size_chart->id) {
        free(product_add_size_chart->id);
        product_add_size_chart->id = NULL;
    }
    if (product_add_size_chart->url) {
        free(product_add_size_chart->url);
        product_add_size_chart->url = NULL;
    }
    free(product_add_size_chart);
}

cJSON *product_add_size_chart_convertToJSON(product_add_size_chart_t *product_add_size_chart) {
    cJSON *item = cJSON_CreateObject();

    // product_add_size_chart->id
    if(product_add_size_chart->id) {
    if(cJSON_AddStringToObject(item, "id", product_add_size_chart->id) == NULL) {
    goto fail; //String
    }
    }


    // product_add_size_chart->url
    if(product_add_size_chart->url) {
    if(cJSON_AddStringToObject(item, "url", product_add_size_chart->url) == NULL) {
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

product_add_size_chart_t *product_add_size_chart_parseFromJSON(cJSON *product_add_size_chartJSON){

    product_add_size_chart_t *product_add_size_chart_local_var = NULL;

    // product_add_size_chart->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_add_size_chartJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_add_size_chart->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(product_add_size_chartJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }


    product_add_size_chart_local_var = product_add_size_chart_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL
        );

    return product_add_size_chart_local_var;
end:
    return NULL;

}
