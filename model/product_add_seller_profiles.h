/*
 * product_add_seller_profiles.h
 *
 * If the seller is subscribed to \&quot;Business Policies\&quot;, use the seller_profiles instead of the shipping_details, payment_methods and return_accepted params.&lt;hr&gt;&lt;div style&#x3D;\&quot;font-style:normal\&quot;&gt;Param structure:&lt;div style&#x3D;\&quot;margin-left: 2%;\&quot;&gt;&lt;code style&#x3D;\&quot;padding:0; background-color:#ffffff;font-size:85%;font-family:monospace;\&quot;&gt;seller_profiles[&lt;b&gt;shipping_profile_id&lt;/b&gt;] &#x3D; string&lt;/br&gt;seller_profiles[&lt;b&gt;payment_profile_id&lt;/b&gt;] &#x3D; string&lt;/br&gt;seller_profiles[&lt;b&gt;return_profile_id&lt;/b&gt;] &#x3D; string&lt;/br&gt;&lt;/code&gt;&lt;/div&gt;&lt;/div&gt;
 */

#ifndef _product_add_seller_profiles_H_
#define _product_add_seller_profiles_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_seller_profiles_t product_add_seller_profiles_t;




typedef struct product_add_seller_profiles_t {
    char *shipping_profile_id; // string
    char *payment_profile_id; // string
    char *return_profile_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_seller_profiles_t;

__attribute__((deprecated)) product_add_seller_profiles_t *product_add_seller_profiles_create(
    char *shipping_profile_id,
    char *payment_profile_id,
    char *return_profile_id
);

void product_add_seller_profiles_free(product_add_seller_profiles_t *product_add_seller_profiles);

product_add_seller_profiles_t *product_add_seller_profiles_parseFromJSON(cJSON *product_add_seller_profilesJSON);

cJSON *product_add_seller_profiles_convertToJSON(product_add_seller_profiles_t *product_add_seller_profiles);

#endif /* _product_add_seller_profiles_H_ */

