#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/model_response_batch_job_list.h"
#include "../model/response_batch_job_result.h"


// batch.job.list
//
// Get list of recent jobs
//
model_response_batch_job_list_t*
BatchAPI_batchJobList(apiClient_t *apiClient, int *count, char *page_cursor, char *created_from, char *created_to, char *processed_from, char *processed_to, char *ids, char *response_fields);


// batch.job.result
//
// Get job result data
//
response_batch_job_result_t*
BatchAPI_batchJobResult(apiClient_t *apiClient, char *id);


