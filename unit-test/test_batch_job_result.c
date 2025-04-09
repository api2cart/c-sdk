#ifndef batch_job_result_TEST
#define batch_job_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define batch_job_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/batch_job_result.h"
batch_job_result_t* instantiate_batch_job_result(int include_optional);



batch_job_result_t* instantiate_batch_job_result(int include_optional) {
  batch_job_result_t* batch_job_result = NULL;
  if (include_optional) {
    batch_job_result = batch_job_result_create(
      56,
      "0",
      56,
      56,
      list_createList(),
      0,
      0
    );
  } else {
    batch_job_result = batch_job_result_create(
      56,
      "0",
      56,
      56,
      list_createList(),
      0,
      0
    );
  }

  return batch_job_result;
}


#ifdef batch_job_result_MAIN

void test_batch_job_result(int include_optional) {
    batch_job_result_t* batch_job_result_1 = instantiate_batch_job_result(include_optional);

	cJSON* jsonbatch_job_result_1 = batch_job_result_convertToJSON(batch_job_result_1);
	printf("batch_job_result :\n%s\n", cJSON_Print(jsonbatch_job_result_1));
	batch_job_result_t* batch_job_result_2 = batch_job_result_parseFromJSON(jsonbatch_job_result_1);
	cJSON* jsonbatch_job_result_2 = batch_job_result_convertToJSON(batch_job_result_2);
	printf("repeating batch_job_result:\n%s\n", cJSON_Print(jsonbatch_job_result_2));
}

int main() {
  test_batch_job_result(1);
  test_batch_job_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // batch_job_result_MAIN
#endif // batch_job_result_TEST
