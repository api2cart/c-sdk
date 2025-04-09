#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_package_details.h"



static product_add_package_details_t *product_add_package_details_create_internal(
    char *measure_unit,
    char *weigh_unit,
    double package_depth,
    double package_length,
    double package_width,
    double weight_major,
    double weight_minor,
    char *shipping_package
    ) {
    product_add_package_details_t *product_add_package_details_local_var = malloc(sizeof(product_add_package_details_t));
    if (!product_add_package_details_local_var) {
        return NULL;
    }
    product_add_package_details_local_var->measure_unit = measure_unit;
    product_add_package_details_local_var->weigh_unit = weigh_unit;
    product_add_package_details_local_var->package_depth = package_depth;
    product_add_package_details_local_var->package_length = package_length;
    product_add_package_details_local_var->package_width = package_width;
    product_add_package_details_local_var->weight_major = weight_major;
    product_add_package_details_local_var->weight_minor = weight_minor;
    product_add_package_details_local_var->shipping_package = shipping_package;

    product_add_package_details_local_var->_library_owned = 1;
    return product_add_package_details_local_var;
}

__attribute__((deprecated)) product_add_package_details_t *product_add_package_details_create(
    char *measure_unit,
    char *weigh_unit,
    double package_depth,
    double package_length,
    double package_width,
    double weight_major,
    double weight_minor,
    char *shipping_package
    ) {
    return product_add_package_details_create_internal (
        measure_unit,
        weigh_unit,
        package_depth,
        package_length,
        package_width,
        weight_major,
        weight_minor,
        shipping_package
        );
}

void product_add_package_details_free(product_add_package_details_t *product_add_package_details) {
    if(NULL == product_add_package_details){
        return ;
    }
    if(product_add_package_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_package_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_package_details->measure_unit) {
        free(product_add_package_details->measure_unit);
        product_add_package_details->measure_unit = NULL;
    }
    if (product_add_package_details->weigh_unit) {
        free(product_add_package_details->weigh_unit);
        product_add_package_details->weigh_unit = NULL;
    }
    if (product_add_package_details->shipping_package) {
        free(product_add_package_details->shipping_package);
        product_add_package_details->shipping_package = NULL;
    }
    free(product_add_package_details);
}

cJSON *product_add_package_details_convertToJSON(product_add_package_details_t *product_add_package_details) {
    cJSON *item = cJSON_CreateObject();

    // product_add_package_details->measure_unit
    if(product_add_package_details->measure_unit) {
    if(cJSON_AddStringToObject(item, "measure_unit", product_add_package_details->measure_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_add_package_details->weigh_unit
    if(product_add_package_details->weigh_unit) {
    if(cJSON_AddStringToObject(item, "weigh_unit", product_add_package_details->weigh_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_add_package_details->package_depth
    if(product_add_package_details->package_depth) {
    if(cJSON_AddNumberToObject(item, "package_depth", product_add_package_details->package_depth) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_package_details->package_length
    if(product_add_package_details->package_length) {
    if(cJSON_AddNumberToObject(item, "package_length", product_add_package_details->package_length) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_package_details->package_width
    if(product_add_package_details->package_width) {
    if(cJSON_AddNumberToObject(item, "package_width", product_add_package_details->package_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_package_details->weight_major
    if(product_add_package_details->weight_major) {
    if(cJSON_AddNumberToObject(item, "weight_major", product_add_package_details->weight_major) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_package_details->weight_minor
    if(product_add_package_details->weight_minor) {
    if(cJSON_AddNumberToObject(item, "weight_minor", product_add_package_details->weight_minor) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_package_details->shipping_package
    if(product_add_package_details->shipping_package) {
    if(cJSON_AddStringToObject(item, "shipping_package", product_add_package_details->shipping_package) == NULL) {
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

product_add_package_details_t *product_add_package_details_parseFromJSON(cJSON *product_add_package_detailsJSON){

    product_add_package_details_t *product_add_package_details_local_var = NULL;

    // product_add_package_details->measure_unit
    cJSON *measure_unit = cJSON_GetObjectItemCaseSensitive(product_add_package_detailsJSON, "measure_unit");
    if (cJSON_IsNull(measure_unit)) {
        measure_unit = NULL;
    }
    if (measure_unit) { 
    if(!cJSON_IsString(measure_unit) && !cJSON_IsNull(measure_unit))
    {
    goto end; //String
    }
    }

    // product_add_package_details->weigh_unit
    cJSON *weigh_unit = cJSON_GetObjectItemCaseSensitive(product_add_package_detailsJSON, "weigh_unit");
    if (cJSON_IsNull(weigh_unit)) {
        weigh_unit = NULL;
    }
    if (weigh_unit) { 
    if(!cJSON_IsString(weigh_unit) && !cJSON_IsNull(weigh_unit))
    {
    goto end; //String
    }
    }

    // product_add_package_details->package_depth
    cJSON *package_depth = cJSON_GetObjectItemCaseSensitive(product_add_package_detailsJSON, "package_depth");
    if (cJSON_IsNull(package_depth)) {
        package_depth = NULL;
    }
    if (package_depth) { 
    if(!cJSON_IsNumber(package_depth))
    {
    goto end; //Numeric
    }
    }

    // product_add_package_details->package_length
    cJSON *package_length = cJSON_GetObjectItemCaseSensitive(product_add_package_detailsJSON, "package_length");
    if (cJSON_IsNull(package_length)) {
        package_length = NULL;
    }
    if (package_length) { 
    if(!cJSON_IsNumber(package_length))
    {
    goto end; //Numeric
    }
    }

    // product_add_package_details->package_width
    cJSON *package_width = cJSON_GetObjectItemCaseSensitive(product_add_package_detailsJSON, "package_width");
    if (cJSON_IsNull(package_width)) {
        package_width = NULL;
    }
    if (package_width) { 
    if(!cJSON_IsNumber(package_width))
    {
    goto end; //Numeric
    }
    }

    // product_add_package_details->weight_major
    cJSON *weight_major = cJSON_GetObjectItemCaseSensitive(product_add_package_detailsJSON, "weight_major");
    if (cJSON_IsNull(weight_major)) {
        weight_major = NULL;
    }
    if (weight_major) { 
    if(!cJSON_IsNumber(weight_major))
    {
    goto end; //Numeric
    }
    }

    // product_add_package_details->weight_minor
    cJSON *weight_minor = cJSON_GetObjectItemCaseSensitive(product_add_package_detailsJSON, "weight_minor");
    if (cJSON_IsNull(weight_minor)) {
        weight_minor = NULL;
    }
    if (weight_minor) { 
    if(!cJSON_IsNumber(weight_minor))
    {
    goto end; //Numeric
    }
    }

    // product_add_package_details->shipping_package
    cJSON *shipping_package = cJSON_GetObjectItemCaseSensitive(product_add_package_detailsJSON, "shipping_package");
    if (cJSON_IsNull(shipping_package)) {
        shipping_package = NULL;
    }
    if (shipping_package) { 
    if(!cJSON_IsString(shipping_package) && !cJSON_IsNull(shipping_package))
    {
    goto end; //String
    }
    }


    product_add_package_details_local_var = product_add_package_details_create_internal (
        measure_unit && !cJSON_IsNull(measure_unit) ? strdup(measure_unit->valuestring) : NULL,
        weigh_unit && !cJSON_IsNull(weigh_unit) ? strdup(weigh_unit->valuestring) : NULL,
        package_depth ? package_depth->valuedouble : 0,
        package_length ? package_length->valuedouble : 0,
        package_width ? package_width->valuedouble : 0,
        weight_major ? weight_major->valuedouble : 0,
        weight_minor ? weight_minor->valuedouble : 0,
        shipping_package && !cJSON_IsNull(shipping_package) ? strdup(shipping_package->valuestring) : NULL
        );

    return product_add_package_details_local_var;
end:
    return NULL;

}
