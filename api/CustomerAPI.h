#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/account_config_update_200_response.h"
#include "../model/attribute_add_200_response.h"
#include "../model/customer_add.h"
#include "../model/customer_add_200_response.h"
#include "../model/customer_address_add.h"
#include "../model/customer_count_200_response.h"
#include "../model/customer_delete_200_response.h"
#include "../model/customer_find_200_response.h"
#include "../model/customer_group_add_200_response.h"
#include "../model/customer_info_200_response.h"
#include "../model/customer_update.h"
#include "../model/model_response_customer_attribute_list.h"
#include "../model/model_response_customer_group_list.h"
#include "../model/model_response_customer_list.h"
#include "../model/model_response_customer_wishlist_list.h"


// customer.add
//
// Add customer into store.
//
customer_add_200_response_t*
CustomerAPI_customerAdd(apiClient_t *apiClient, customer_add_t *customer_add);


// customer.address.add
//
// Add customer address.
//
attribute_add_200_response_t*
CustomerAPI_customerAddressAdd(apiClient_t *apiClient, customer_address_add_t *customer_address_add);


// customer.attribute.list
//
// Get attributes for specific customer
//
model_response_customer_attribute_list_t*
CustomerAPI_customerAttributeList(apiClient_t *apiClient, char *customer_id, int *count, char *page_cursor, char *store_id, char *lang_id, char *response_fields, char *params, char *exclude);


// customer.count
//
// Get number of customers from store.
//
customer_count_200_response_t*
CustomerAPI_customerCount(apiClient_t *apiClient, char *ids, char *since_id, char *customer_list_id, char *group_id, char *store_id, int *avail, int *include_guests, char *find_value, char *find_where, char *created_from, char *created_to, char *modified_from, char *modified_to);


// customer.delete
//
// Delete customer from store.
//
customer_delete_200_response_t*
CustomerAPI_customerDelete(apiClient_t *apiClient, char *id);


// customer.find
//
// Find customers in store.
//
customer_find_200_response_t*
CustomerAPI_customerFind(apiClient_t *apiClient, char *find_value, char *find_where, char *find_params, char *store_id, int *include_guests);


// customer.group.add
//
// Create customer group.
//
customer_group_add_200_response_t*
CustomerAPI_customerGroupAdd(apiClient_t *apiClient, char *name, char *store_id, char *stores_ids);


// customer.group.list
//
// Get list of customers groups.
//
model_response_customer_group_list_t*
CustomerAPI_customerGroupList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *group_ids, char *store_id, char *lang_id, char *response_fields, char *params, char *exclude, int *disable_cache);


// customer.info
//
// Get customers' details from store.
//
customer_info_200_response_t*
CustomerAPI_customerInfo(apiClient_t *apiClient, char *id, char *store_id, char *response_fields, char *params, char *exclude);


// customer.list
//
// Get list of customers from store.
//
model_response_customer_list_t*
CustomerAPI_customerList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *ids, char *since_id, char *customer_list_id, char *group_id, char *store_id, int *avail, int *include_guests, char *find_value, char *find_where, char *created_from, char *created_to, char *modified_from, char *modified_to, char *sort_by, char *sort_direction, char *response_fields, char *params, char *exclude);


// customer.update
//
// Update information of customer in store.
//
account_config_update_200_response_t*
CustomerAPI_customerUpdate(apiClient_t *apiClient, customer_update_t *customer_update);


// customer.wishlist.list
//
// Get a Wish List of customer from the store.
//
model_response_customer_wishlist_list_t*
CustomerAPI_customerWishlistList(apiClient_t *apiClient, char *customer_id, int *start, int *count, char *page_cursor, char *id, char *store_id, char *response_fields);


