#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/model_response_marketplace_product_find.h"


// marketplace.product.find
//
// Search product in global catalog.
//
model_response_marketplace_product_find_t*
MarketplaceAPI_marketplaceProductFind(apiClient_t *apiClient, int *count, char *page_cursor, char *keyword, char *categories_ids, char *store_id, char *asin, char *ean, char *gtin, char *upc, char *mpn, char *isbn, char *response_fields, char *params, char *exclude);


