#ifndef category_add_200_response_TEST
#define category_add_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define category_add_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/category_add_200_response.h"
category_add_200_response_t* instantiate_category_add_200_response(int include_optional);

#include "test_category_add_200_response_result.c"


category_add_200_response_t* instantiate_category_add_200_response(int include_optional) {
  category_add_200_response_t* category_add_200_response = NULL;
  if (include_optional) {
    category_add_200_response = category_add_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_category_add_200_response_result(0)
    );
  } else {
    category_add_200_response = category_add_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return category_add_200_response;
}


#ifdef category_add_200_response_MAIN

void test_category_add_200_response(int include_optional) {
    category_add_200_response_t* category_add_200_response_1 = instantiate_category_add_200_response(include_optional);

	cJSON* jsoncategory_add_200_response_1 = category_add_200_response_convertToJSON(category_add_200_response_1);
	printf("category_add_200_response :\n%s\n", cJSON_Print(jsoncategory_add_200_response_1));
	category_add_200_response_t* category_add_200_response_2 = category_add_200_response_parseFromJSON(jsoncategory_add_200_response_1);
	cJSON* jsoncategory_add_200_response_2 = category_add_200_response_convertToJSON(category_add_200_response_2);
	printf("repeating category_add_200_response:\n%s\n", cJSON_Print(jsoncategory_add_200_response_2));
}

int main() {
  test_category_add_200_response(1);
  test_category_add_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // category_add_200_response_MAIN
#endif // category_add_200_response_TEST
