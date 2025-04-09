/*
 * product_add_package_details.h
 *
 * If the seller is subscribed to \&quot;Business Policies\&quot;, use the seller_profiles instead of the shipping_details, payment_methods and return_accepted params.&lt;hr&gt;&lt;div style&#x3D;\&quot;font-style:normal\&quot;&gt;Param structure:&lt;div style&#x3D;\&quot;margin-left: 2%;\&quot;&gt;&lt;code style&#x3D;\&quot;padding:0; background-color:#ffffff;font-size:85%;font-family:monospace;\&quot;&gt;package_details[&lt;b&gt;measure_unit&lt;/b&gt;] &#x3D; string&lt;/br&gt; Allowed measure_unit values: [English or Metric] &lt;/br&gt; Default: Metric&lt;/br&gt;package_details[&lt;b&gt;weigh_unit&lt;/b&gt;] &#x3D; string&lt;/br&gt; Allowed weigh_unit values: [kg, g, lbs, oz]&lt;/br&gt;package_details[&lt;b&gt;package_depth&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;package_details[&lt;b&gt;package_length&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;package_details[&lt;b&gt;package_width&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;package_details[&lt;b&gt;weight_major&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;package_details[&lt;b&gt;weight_minor&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;package_details[&lt;b&gt;shipping_package&lt;/b&gt;] &#x3D; string&lt;/br&gt; See cart.info method, param &#x60;eBay_shipping_package_details&#x60;&lt;/code&gt;&lt;/div&gt;&lt;/div&gt;
 */

#ifndef _product_add_package_details_H_
#define _product_add_package_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_package_details_t product_add_package_details_t;




typedef struct product_add_package_details_t {
    char *measure_unit; // string
    char *weigh_unit; // string
    double package_depth; //numeric
    double package_length; //numeric
    double package_width; //numeric
    double weight_major; //numeric
    double weight_minor; //numeric
    char *shipping_package; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_package_details_t;

__attribute__((deprecated)) product_add_package_details_t *product_add_package_details_create(
    char *measure_unit,
    char *weigh_unit,
    double package_depth,
    double package_length,
    double package_width,
    double weight_major,
    double weight_minor,
    char *shipping_package
);

void product_add_package_details_free(product_add_package_details_t *product_add_package_details);

product_add_package_details_t *product_add_package_details_parseFromJSON(cJSON *product_add_package_detailsJSON);

cJSON *product_add_package_details_convertToJSON(product_add_package_details_t *product_add_package_details);

#endif /* _product_add_package_details_H_ */

