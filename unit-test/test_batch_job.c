#ifndef batch_job_TEST
#define batch_job_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define batch_job_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/batch_job.h"
batch_job_t* instantiate_batch_job(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


batch_job_t* instantiate_batch_job(int include_optional) {
  batch_job_t* batch_job = NULL;
  if (include_optional) {
    batch_job = batch_job_create(
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      0,
      0
    );
  } else {
    batch_job = batch_job_create(
      "0",
      "0",
      "0",
      NULL,
      NULL,
      0,
      0
    );
  }

  return batch_job;
}


#ifdef batch_job_MAIN

void test_batch_job(int include_optional) {
    batch_job_t* batch_job_1 = instantiate_batch_job(include_optional);

	cJSON* jsonbatch_job_1 = batch_job_convertToJSON(batch_job_1);
	printf("batch_job :\n%s\n", cJSON_Print(jsonbatch_job_1));
	batch_job_t* batch_job_2 = batch_job_parseFromJSON(jsonbatch_job_1);
	cJSON* jsonbatch_job_2 = batch_job_convertToJSON(batch_job_2);
	printf("repeating batch_job:\n%s\n", cJSON_Print(jsonbatch_job_2));
}

int main() {
  test_batch_job(1);
  test_batch_job(0);

  printf("Hello world \n");
  return 0;
}

#endif // batch_job_MAIN
#endif // batch_job_TEST
