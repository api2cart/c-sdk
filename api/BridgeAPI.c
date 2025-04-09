#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "BridgeAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// bridge.delete
//
// Delete bridge from the store.
//
attribute_value_delete_200_response_t*
BridgeAPI_bridgeDelete(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/bridge.delete.json");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_value_delete_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BridgeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_value_delete_200_response_parseFromJSON(BridgeAPIlocalVarJSON);
        cJSON_Delete(BridgeAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// bridge.download
//
// Download bridge for store.</br>Please note that the method would not work if you call it from Swagger UI.
//
binary_t*
BridgeAPI_bridgeDownload(apiClient_t *apiClient, int *whitelabel)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/bridge.download.file");





    // query parameters
    char *keyQuery_whitelabel = NULL;
    char * valueQuery_whitelabel = NULL;
    keyValuePair_t *keyPairQuery_whitelabel = 0;
    if (whitelabel)
    {
        keyQuery_whitelabel = strdup("whitelabel");
        valueQuery_whitelabel = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_whitelabel, MAX_NUMBER_LENGTH, "%d", *whitelabel);
        keyPairQuery_whitelabel = keyValuePair_create(keyQuery_whitelabel, valueQuery_whitelabel);
        list_addElement(localVarQueryParameters,keyPairQuery_whitelabel);
    }
    list_addElement(localVarHeaderType,"application/zip"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //primitive return type simple binary
    binary_t* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = instantiate_binary_t(apiClient->dataReceived, apiClient->dataReceivedLen);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_whitelabel){
        free(keyQuery_whitelabel);
        keyQuery_whitelabel = NULL;
    }
    if(valueQuery_whitelabel){
        free(valueQuery_whitelabel);
        valueQuery_whitelabel = NULL;
    }
    if(keyPairQuery_whitelabel){
        keyValuePair_free(keyPairQuery_whitelabel);
        keyPairQuery_whitelabel = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// bridge.update
//
// Update bridge in the store.
//
attribute_update_200_response_t*
BridgeAPI_bridgeUpdate(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/bridge.update.json");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    attribute_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *BridgeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attribute_update_200_response_parseFromJSON(BridgeAPIlocalVarJSON);
        cJSON_Delete(BridgeAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

