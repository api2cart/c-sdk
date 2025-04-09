/*
 * product_add_best_offer.h
 *
 * The price at which Best Offers are automatically accepted.&lt;hr&gt;&lt;div style&#x3D;\&quot;font-style:normal\&quot;&gt;Param structure:&lt;div style&#x3D;\&quot;margin-left: 2%;\&quot;&gt;&lt;code style&#x3D;\&quot;padding:0; background-color:#ffffff;font-size:85%;font-family:monospace;\&quot;&gt;best_offer[&lt;b&gt;minimum_offer_price&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;best_offer[&lt;b&gt;auto_accept_price&lt;/b&gt;] &#x3D; decimal&lt;/br&gt;&lt;/code&gt;&lt;/div&gt;&lt;/div&gt;
 */

#ifndef _product_add_best_offer_H_
#define _product_add_best_offer_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_best_offer_t product_add_best_offer_t;




typedef struct product_add_best_offer_t {
    double minimum_offer_price; //numeric
    double auto_accept_price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_best_offer_t;

__attribute__((deprecated)) product_add_best_offer_t *product_add_best_offer_create(
    double minimum_offer_price,
    double auto_accept_price
);

void product_add_best_offer_free(product_add_best_offer_t *product_add_best_offer);

product_add_best_offer_t *product_add_best_offer_parseFromJSON(cJSON *product_add_best_offerJSON);

cJSON *product_add_best_offer_convertToJSON(product_add_best_offer_t *product_add_best_offer);

#endif /* _product_add_best_offer_H_ */

