#ifndef response_batch_job_result_TEST
#define response_batch_job_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define response_batch_job_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/response_batch_job_result.h"
response_batch_job_result_t* instantiate_response_batch_job_result(int include_optional);

#include "test_batch_job_result.c"


response_batch_job_result_t* instantiate_response_batch_job_result(int include_optional) {
  response_batch_job_result_t* response_batch_job_result = NULL;
  if (include_optional) {
    response_batch_job_result = response_batch_job_result_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_batch_job_result(0),
      0,
      0
    );
  } else {
    response_batch_job_result = response_batch_job_result_create(
      56,
      "0",
      NULL,
      0,
      0
    );
  }

  return response_batch_job_result;
}


#ifdef response_batch_job_result_MAIN

void test_response_batch_job_result(int include_optional) {
    response_batch_job_result_t* response_batch_job_result_1 = instantiate_response_batch_job_result(include_optional);

	cJSON* jsonresponse_batch_job_result_1 = response_batch_job_result_convertToJSON(response_batch_job_result_1);
	printf("response_batch_job_result :\n%s\n", cJSON_Print(jsonresponse_batch_job_result_1));
	response_batch_job_result_t* response_batch_job_result_2 = response_batch_job_result_parseFromJSON(jsonresponse_batch_job_result_1);
	cJSON* jsonresponse_batch_job_result_2 = response_batch_job_result_convertToJSON(response_batch_job_result_2);
	printf("repeating response_batch_job_result:\n%s\n", cJSON_Print(jsonresponse_batch_job_result_2));
}

int main() {
  test_response_batch_job_result(1);
  test_response_batch_job_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // response_batch_job_result_MAIN
#endif // response_batch_job_result_TEST
