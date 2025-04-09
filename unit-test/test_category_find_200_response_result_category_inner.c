#ifndef category_find_200_response_result_category_inner_TEST
#define category_find_200_response_result_category_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define category_find_200_response_result_category_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/category_find_200_response_result_category_inner.h"
category_find_200_response_result_category_inner_t* instantiate_category_find_200_response_result_category_inner(int include_optional);



category_find_200_response_result_category_inner_t* instantiate_category_find_200_response_result_category_inner(int include_optional) {
  category_find_200_response_result_category_inner_t* category_find_200_response_result_category_inner = NULL;
  if (include_optional) {
    category_find_200_response_result_category_inner = category_find_200_response_result_category_inner_create(
      "0",
      "0",
      "0"
    );
  } else {
    category_find_200_response_result_category_inner = category_find_200_response_result_category_inner_create(
      "0",
      "0",
      "0"
    );
  }

  return category_find_200_response_result_category_inner;
}


#ifdef category_find_200_response_result_category_inner_MAIN

void test_category_find_200_response_result_category_inner(int include_optional) {
    category_find_200_response_result_category_inner_t* category_find_200_response_result_category_inner_1 = instantiate_category_find_200_response_result_category_inner(include_optional);

	cJSON* jsoncategory_find_200_response_result_category_inner_1 = category_find_200_response_result_category_inner_convertToJSON(category_find_200_response_result_category_inner_1);
	printf("category_find_200_response_result_category_inner :\n%s\n", cJSON_Print(jsoncategory_find_200_response_result_category_inner_1));
	category_find_200_response_result_category_inner_t* category_find_200_response_result_category_inner_2 = category_find_200_response_result_category_inner_parseFromJSON(jsoncategory_find_200_response_result_category_inner_1);
	cJSON* jsoncategory_find_200_response_result_category_inner_2 = category_find_200_response_result_category_inner_convertToJSON(category_find_200_response_result_category_inner_2);
	printf("repeating category_find_200_response_result_category_inner:\n%s\n", cJSON_Print(jsoncategory_find_200_response_result_category_inner_2));
}

int main() {
  test_category_find_200_response_result_category_inner(1);
  test_category_find_200_response_result_category_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // category_find_200_response_result_category_inner_MAIN
#endif // category_find_200_response_result_category_inner_TEST
