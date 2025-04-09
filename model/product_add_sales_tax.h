/*
 * product_add_sales_tax.h
 *
 * Percent of an item&#39;s price to be charged as the sales tax for the order. Look at cart.info method response for allowed values.&lt;hr&gt;&lt;div style&#x3D;\&quot;font-style:normal\&quot;&gt;Param structure:&lt;div style&#x3D;\&quot;margin-left: 2%;\&quot;&gt;&lt;code style&#x3D;\&quot;padding:0; background-color:#ffffff;font-size:85%;font-family:monospace;\&quot;&gt;sales_tax[&lt;b&gt;tax_percent&lt;/b&gt;] &#x3D; decimal (##.###)&lt;/br&gt;sales_tax[&lt;b&gt;tax_state&lt;/b&gt;] &#x3D; string&lt;/br&gt;sales_tax[&lt;b&gt;shipping_inc_in_tax&lt;/b&gt;] &#x3D; bool&lt;/br&gt;&lt;/code&gt;&lt;/div&gt;&lt;/div&gt;
 */

#ifndef _product_add_sales_tax_H_
#define _product_add_sales_tax_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_sales_tax_t product_add_sales_tax_t;




typedef struct product_add_sales_tax_t {
    double tax_percent; //numeric
    char *tax_state; // string
    int shipping_inc_in_tax; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_sales_tax_t;

__attribute__((deprecated)) product_add_sales_tax_t *product_add_sales_tax_create(
    double tax_percent,
    char *tax_state,
    int shipping_inc_in_tax
);

void product_add_sales_tax_free(product_add_sales_tax_t *product_add_sales_tax);

product_add_sales_tax_t *product_add_sales_tax_parseFromJSON(cJSON *product_add_sales_taxJSON);

cJSON *product_add_sales_tax_convertToJSON(product_add_sales_tax_t *product_add_sales_tax);

#endif /* _product_add_sales_tax_H_ */

