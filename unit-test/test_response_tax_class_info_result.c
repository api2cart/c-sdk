#ifndef response_tax_class_info_result_TEST
#define response_tax_class_info_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define response_tax_class_info_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/response_tax_class_info_result.h"
response_tax_class_info_result_t* instantiate_response_tax_class_info_result(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


response_tax_class_info_result_t* instantiate_response_tax_class_info_result(int include_optional) {
  response_tax_class_info_result_t* response_tax_class_info_result = NULL;
  if (include_optional) {
    response_tax_class_info_result = response_tax_class_info_result_create(
      "0",
      "0",
      1,
      1.337,
      56,
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      list_createList(),
      0,
      0
    );
  } else {
    response_tax_class_info_result = response_tax_class_info_result_create(
      "0",
      "0",
      1,
      1.337,
      56,
      NULL,
      NULL,
      list_createList(),
      0,
      0
    );
  }

  return response_tax_class_info_result;
}


#ifdef response_tax_class_info_result_MAIN

void test_response_tax_class_info_result(int include_optional) {
    response_tax_class_info_result_t* response_tax_class_info_result_1 = instantiate_response_tax_class_info_result(include_optional);

	cJSON* jsonresponse_tax_class_info_result_1 = response_tax_class_info_result_convertToJSON(response_tax_class_info_result_1);
	printf("response_tax_class_info_result :\n%s\n", cJSON_Print(jsonresponse_tax_class_info_result_1));
	response_tax_class_info_result_t* response_tax_class_info_result_2 = response_tax_class_info_result_parseFromJSON(jsonresponse_tax_class_info_result_1);
	cJSON* jsonresponse_tax_class_info_result_2 = response_tax_class_info_result_convertToJSON(response_tax_class_info_result_2);
	printf("repeating response_tax_class_info_result:\n%s\n", cJSON_Print(jsonresponse_tax_class_info_result_2));
}

int main() {
  test_response_tax_class_info_result(1);
  test_response_tax_class_info_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // response_tax_class_info_result_MAIN
#endif // response_tax_class_info_result_TEST
