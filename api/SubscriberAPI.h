#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/model_response_subscriber_list.h"


// subscriber.list
//
// Get subscribers list
//
model_response_subscriber_list_t*
SubscriberAPI_subscriberList(apiClient_t *apiClient, int *start, int *count, int *subscribed, char *store_id, char *email, char *params, char *exclude, char *created_from, char *created_to, char *modified_from, char *modified_to, char *page_cursor, char *response_fields);


