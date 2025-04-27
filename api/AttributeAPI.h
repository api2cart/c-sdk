#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/attribute_add_200_response.h"
#include "../model/attribute_assign_group_200_response.h"
#include "../model/attribute_count_200_response.h"
#include "../model/attribute_delete_200_response.h"
#include "../model/attribute_info_200_response.h"
#include "../model/attribute_type_list_200_response.h"
#include "../model/attribute_unassign_group_200_response.h"
#include "../model/attribute_update_200_response.h"
#include "../model/attribute_value_delete_200_response.h"
#include "../model/model_response_attribute_attributeset_list.h"
#include "../model/model_response_attribute_group_list.h"
#include "../model/model_response_attribute_list.h"

// Enum TYPE for AttributeAPI_attributeAdd
typedef enum  { api2cart_openapi_attributeAdd_TYPE_NULL = 0, api2cart_openapi_attributeAdd_TYPE_text, api2cart_openapi_attributeAdd_TYPE_select, api2cart_openapi_attributeAdd_TYPE_textarea, api2cart_openapi_attributeAdd_TYPE_date, api2cart_openapi_attributeAdd_TYPE_price, api2cart_openapi_attributeAdd_TYPE_multiselect, api2cart_openapi_attributeAdd_TYPE_boolean } api2cart_openapi_attributeAdd_type_e;


// attribute.add
//
// Add new attribute
//
attribute_add_200_response_t*
AttributeAPI_attributeAdd(apiClient_t *apiClient, api2cart_openapi_attributeAdd_type_e type, char *name, char *code, char *store_id, char *lang_id, int *visible, int *required, int *position, char *attribute_group_id, char *is_global, int *is_searchable, char *is_filterable, int *is_comparable, int *is_html_allowed_on_front, int *is_filterable_in_search, int *is_configurable, int *is_visible_in_advanced_search, int *is_used_for_promo_rules, int *used_in_product_listing, int *used_for_sort_by, char *apply_to);


// attribute.assign.group
//
// Assign attribute to the group
//
attribute_assign_group_200_response_t*
AttributeAPI_attributeAssignGroup(apiClient_t *apiClient, char *id, char *group_id, char *attribute_set_id);


// attribute.assign.set
//
// Assign attribute to the attribute set
//
attribute_assign_group_200_response_t*
AttributeAPI_attributeAssignSet(apiClient_t *apiClient, char *id, char *attribute_set_id, char *group_id);


// attribute.attributeset.list
//
// Get attribute_set list
//
model_response_attribute_attributeset_list_t*
AttributeAPI_attributeAttributesetList(apiClient_t *apiClient, int *start, int *count, char *response_fields, char *params, char *exclude);


// attribute.count
//
// Get attributes count
//
attribute_count_200_response_t*
AttributeAPI_attributeCount(apiClient_t *apiClient, char *type, char *attribute_set_id, char *store_id, char *lang_id, int *visible, int *required, int *system);


// attribute.delete
//
// Delete attribute from store
//
attribute_delete_200_response_t*
AttributeAPI_attributeDelete(apiClient_t *apiClient, char *id, char *store_id);


// attribute.group.list
//
// Get attribute group list
//
model_response_attribute_group_list_t*
AttributeAPI_attributeGroupList(apiClient_t *apiClient, int *start, int *count, char *attribute_set_id, char *lang_id, char *response_fields, char *params, char *exclude);


// attribute.info
//
// Get information about a specific global attribute by its ID.
//
attribute_info_200_response_t*
AttributeAPI_attributeInfo(apiClient_t *apiClient, char *id, char *attribute_set_id, char *store_id, char *lang_id, char *response_fields, char *params, char *exclude);


// attribute.list
//
// Get a list of global attributes.
//
model_response_attribute_list_t*
AttributeAPI_attributeList(apiClient_t *apiClient, int *start, int *count, char *attribute_ids, char *attribute_set_id, char *store_id, char *lang_id, char *type, int *visible, int *required, int *system, char *response_fields, char *params, char *exclude);


// attribute.type.list
//
// Get list of supported attributes types
//
attribute_type_list_200_response_t*
AttributeAPI_attributeTypeList(apiClient_t *apiClient);


// attribute.unassign.group
//
// Unassign attribute from group
//
attribute_unassign_group_200_response_t*
AttributeAPI_attributeUnassignGroup(apiClient_t *apiClient, char *id, char *group_id);


// attribute.unassign.set
//
// Unassign attribute from attribute set
//
attribute_unassign_group_200_response_t*
AttributeAPI_attributeUnassignSet(apiClient_t *apiClient, char *id, char *attribute_set_id);


// attribute.update
//
// Update attribute data
//
attribute_update_200_response_t*
AttributeAPI_attributeUpdate(apiClient_t *apiClient, char *id, char *name, char *store_id, char *lang_id);


// attribute.value.add
//
// Add new value to attribute.
//
attribute_add_200_response_t*
AttributeAPI_attributeValueAdd(apiClient_t *apiClient, char *attribute_id, char *name, char *code, char *description, char *store_id, char *lang_id);


// attribute.value.delete
//
// Delete attribute value.
//
attribute_value_delete_200_response_t*
AttributeAPI_attributeValueDelete(apiClient_t *apiClient, char *id, char *attribute_id, char *store_id);


// attribute.value.update
//
// Update attribute value.
//
attribute_update_200_response_t*
AttributeAPI_attributeValueUpdate(apiClient_t *apiClient, char *id, char *attribute_id, char *name, char *description, char *code, char *store_id, char *lang_id);


