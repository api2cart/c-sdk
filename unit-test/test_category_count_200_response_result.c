#ifndef category_count_200_response_result_TEST
#define category_count_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define category_count_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/category_count_200_response_result.h"
category_count_200_response_result_t* instantiate_category_count_200_response_result(int include_optional);



category_count_200_response_result_t* instantiate_category_count_200_response_result(int include_optional) {
  category_count_200_response_result_t* category_count_200_response_result = NULL;
  if (include_optional) {
    category_count_200_response_result = category_count_200_response_result_create(
      56
    );
  } else {
    category_count_200_response_result = category_count_200_response_result_create(
      56
    );
  }

  return category_count_200_response_result;
}


#ifdef category_count_200_response_result_MAIN

void test_category_count_200_response_result(int include_optional) {
    category_count_200_response_result_t* category_count_200_response_result_1 = instantiate_category_count_200_response_result(include_optional);

	cJSON* jsoncategory_count_200_response_result_1 = category_count_200_response_result_convertToJSON(category_count_200_response_result_1);
	printf("category_count_200_response_result :\n%s\n", cJSON_Print(jsoncategory_count_200_response_result_1));
	category_count_200_response_result_t* category_count_200_response_result_2 = category_count_200_response_result_parseFromJSON(jsoncategory_count_200_response_result_1);
	cJSON* jsoncategory_count_200_response_result_2 = category_count_200_response_result_convertToJSON(category_count_200_response_result_2);
	printf("repeating category_count_200_response_result:\n%s\n", cJSON_Print(jsoncategory_count_200_response_result_2));
}

int main() {
  test_category_count_200_response_result(1);
  test_category_count_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // category_count_200_response_result_MAIN
#endif // category_count_200_response_result_TEST
