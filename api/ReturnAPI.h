#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/model_response_return_list.h"
#include "../model/return_action_list_200_response.h"
#include "../model/return_count_200_response.h"
#include "../model/return_info_200_response.h"
#include "../model/return_reason_list_200_response.h"
#include "../model/return_status_list_200_response.h"


// return.action.list
//
// Retrieve list of return actions
//
return_action_list_200_response_t*
ReturnAPI_returnActionList(apiClient_t *apiClient);


// return.count
//
// Count returns in store
//
return_count_200_response_t*
ReturnAPI_returnCount(apiClient_t *apiClient, char *order_ids, char *customer_id, char *store_id, char *status, char *return_type, char *created_from, char *created_to, char *modified_from, char *modified_to, char *report_request_id, int *disable_report_cache);


// return.info
//
// Retrieve return information.
//
return_info_200_response_t*
ReturnAPI_returnInfo(apiClient_t *apiClient, char *id, char *order_id, char *store_id, char *response_fields, char *params, char *exclude);


// return.list
//
// Get list of return requests from store.
//
model_response_return_list_t*
ReturnAPI_returnList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *order_id, char *order_ids, char *customer_id, char *store_id, char *status, char *return_type, char *created_from, char *created_to, char *modified_from, char *modified_to, char *response_fields, char *params, char *exclude, char *report_request_id, int *disable_report_cache);


// return.reason.list
//
// Retrieve list of return reasons
//
return_reason_list_200_response_t*
ReturnAPI_returnReasonList(apiClient_t *apiClient, char *store_id);


// return.status.list
//
// Retrieve list of statuses
//
return_status_list_200_response_t*
ReturnAPI_returnStatusList(apiClient_t *apiClient);


