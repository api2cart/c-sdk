#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/attribute_update_200_response.h"
#include "../model/attribute_value_delete_200_response.h"


// bridge.delete
//
// Delete bridge from the store.
//
attribute_value_delete_200_response_t*
BridgeAPI_bridgeDelete(apiClient_t *apiClient);


// bridge.download
//
// Download bridge for store.</br>Please note that the method would not work if you call it from Swagger UI.
//
binary_t*
BridgeAPI_bridgeDownload(apiClient_t *apiClient, int *whitelabel);


// bridge.update
//
// Update bridge in the store.
//
attribute_update_200_response_t*
BridgeAPI_bridgeUpdate(apiClient_t *apiClient);


