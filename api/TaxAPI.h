#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/model_response_tax_class_info.h"
#include "../model/model_response_tax_class_list.h"


// tax.class.info
//
// Use this method to get information about a tax class and its rates. It allows you to calculate the tax percentage for a specific customer's address. This information contains relatively static data that rarely changes, so API2Cart may cache certain data to reduce the load on the store and speed up request execution. We also recommend that you cache the response of this method on your side to save requests. If you need to clear the cache for a specific store, use the cart.validate method.
//
model_response_tax_class_info_t*
TaxAPI_taxClassInfo(apiClient_t *apiClient, char *tax_class_id, char *store_id, char *lang_id, char *params, char *response_fields, char *exclude);


// tax.class.list
//
// Get list of tax classes from your store.
//
model_response_tax_class_list_t*
TaxAPI_taxClassList(apiClient_t *apiClient, char *created_to, char *created_from, char *modified_to, char *modified_from, char *find_value, char *find_where, char *store_id, int *count, char *page_cursor, char *response_fields);


