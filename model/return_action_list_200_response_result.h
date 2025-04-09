/*
 * return_action_list_200_response_result.h
 *
 * 
 */

#ifndef _return_action_list_200_response_result_H_
#define _return_action_list_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_action_list_200_response_result_t return_action_list_200_response_result_t;

#include "order_financial_status_list_200_response_result_order_financial_statuses_inner.h"



typedef struct return_action_list_200_response_result_t {
    list_t *return_actions; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} return_action_list_200_response_result_t;

__attribute__((deprecated)) return_action_list_200_response_result_t *return_action_list_200_response_result_create(
    list_t *return_actions
);

void return_action_list_200_response_result_free(return_action_list_200_response_result_t *return_action_list_200_response_result);

return_action_list_200_response_result_t *return_action_list_200_response_result_parseFromJSON(cJSON *return_action_list_200_response_resultJSON);

cJSON *return_action_list_200_response_result_convertToJSON(return_action_list_200_response_result_t *return_action_list_200_response_result);

#endif /* _return_action_list_200_response_result_H_ */

