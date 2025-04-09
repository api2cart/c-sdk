#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/account_config_update_200_response.h"
#include "../model/attribute_delete_200_response.h"
#include "../model/cart_config_update_200_response.h"
#include "../model/category_add_200_response.h"
#include "../model/category_add_batch.h"
#include "../model/category_add_batch_200_response.h"
#include "../model/category_count_200_response.h"
#include "../model/category_delete_200_response.h"
#include "../model/category_find_200_response.h"
#include "../model/category_image_add_200_response.h"
#include "../model/category_info_200_response.h"
#include "../model/model_response_category_list.h"

// Enum TYPE for CategoryAPI_categoryImageAdd
typedef enum  { api2cart_openapi_categoryImageAdd_TYPE_NULL = 0, api2cart_openapi_categoryImageAdd_TYPE_base, api2cart_openapi_categoryImageAdd_TYPE_thumbnail } api2cart_openapi_categoryImageAdd_type_e;


// category.add
//
// Add new category in store
//
category_add_200_response_t*
CategoryAPI_categoryAdd(apiClient_t *apiClient, char *name, char *parent_id, char *stores_ids, char *store_id, char *lang_id, int *avail, int *sort_order, char *created_time, char *modified_time, char *description, char *short_description, char *meta_title, char *meta_description, char *meta_keywords, char *seo_url);


// category.add.batch
//
// Add new categories to the store.
//
category_add_batch_200_response_t*
CategoryAPI_categoryAddBatch(apiClient_t *apiClient, category_add_batch_t *category_add_batch);


// category.assign
//
// Assign category to product
//
cart_config_update_200_response_t*
CategoryAPI_categoryAssign(apiClient_t *apiClient, char *product_id, char *category_id, char *store_id);


// category.count
//
// Count categories in store.
//
category_count_200_response_t*
CategoryAPI_categoryCount(apiClient_t *apiClient, char *parent_id, char *store_id, char *lang_id, char *created_from, char *created_to, char *modified_from, char *modified_to, int *avail, char *product_type, char *find_value, char *find_where, char *report_request_id, int *disable_report_cache);


// category.delete
//
// Delete category in store
//
category_delete_200_response_t*
CategoryAPI_categoryDelete(apiClient_t *apiClient, char *id, char *store_id);


// category.find
//
// Search category in store. \"Laptop\" is specified here by default.
//
category_find_200_response_t*
CategoryAPI_categoryFind(apiClient_t *apiClient, char *find_value, char *find_where, char *find_params, char *store_id, char *lang_id);


// category.image.add
//
// Add image to category
//
category_image_add_200_response_t*
CategoryAPI_categoryImageAdd(apiClient_t *apiClient, char *category_id, char *image_name, char *url, api2cart_openapi_categoryImageAdd_type_e type, char *label, char *mime, int *position, char *store_id);


// category.image.delete
//
// Delete image
//
attribute_delete_200_response_t*
CategoryAPI_categoryImageDelete(apiClient_t *apiClient, char *category_id, char *image_id, char *store_id);


// category.info
//
// Get category info about category ID*** or specify other category ID.
//
category_info_200_response_t*
CategoryAPI_categoryInfo(apiClient_t *apiClient, char *id, char *params, char *response_fields, char *exclude, char *store_id, char *lang_id, char *schema_type, char *report_request_id, int *disable_report_cache);


// category.list
//
// Get list of categories from store.
//
model_response_category_list_t*
CategoryAPI_categoryList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *parent_id, char *params, char *response_fields, char *exclude, char *store_id, char *lang_id, char *created_from, char *created_to, char *modified_from, char *modified_to, int *avail, char *product_type, char *find_value, char *find_where, char *report_request_id, int *disable_report_cache, int *disable_cache);


// category.unassign
//
// Unassign category to product
//
cart_config_update_200_response_t*
CategoryAPI_categoryUnassign(apiClient_t *apiClient, char *category_id, char *product_id, char *store_id);


// category.update
//
// Update category in store
//
account_config_update_200_response_t*
CategoryAPI_categoryUpdate(apiClient_t *apiClient, char *id, char *name, char *parent_id, char *stores_ids, int *avail, int *sort_order, char *modified_time, char *description, char *short_description, char *meta_title, char *meta_description, char *meta_keywords, char *seo_url, char *lang_id, char *store_id);


