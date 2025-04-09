#ifndef batch_job_result_item_TEST
#define batch_job_result_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define batch_job_result_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/batch_job_result_item.h"
batch_job_result_item_t* instantiate_batch_job_result_item(int include_optional);



batch_job_result_item_t* instantiate_batch_job_result_item(int include_optional) {
  batch_job_result_item_t* batch_job_result_item = NULL;
  if (include_optional) {
    batch_job_result_item = batch_job_result_item_create(
      56,
      "0",
      "0",
      list_createList(),
      list_createList(),
      0,
      0
    );
  } else {
    batch_job_result_item = batch_job_result_item_create(
      56,
      "0",
      "0",
      list_createList(),
      list_createList(),
      0,
      0
    );
  }

  return batch_job_result_item;
}


#ifdef batch_job_result_item_MAIN

void test_batch_job_result_item(int include_optional) {
    batch_job_result_item_t* batch_job_result_item_1 = instantiate_batch_job_result_item(include_optional);

	cJSON* jsonbatch_job_result_item_1 = batch_job_result_item_convertToJSON(batch_job_result_item_1);
	printf("batch_job_result_item :\n%s\n", cJSON_Print(jsonbatch_job_result_item_1));
	batch_job_result_item_t* batch_job_result_item_2 = batch_job_result_item_parseFromJSON(jsonbatch_job_result_item_1);
	cJSON* jsonbatch_job_result_item_2 = batch_job_result_item_convertToJSON(batch_job_result_item_2);
	printf("repeating batch_job_result_item:\n%s\n", cJSON_Print(jsonbatch_job_result_item_2));
}

int main() {
  test_batch_job_result_item(1);
  test_batch_job_result_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // batch_job_result_item_MAIN
#endif // batch_job_result_item_TEST
