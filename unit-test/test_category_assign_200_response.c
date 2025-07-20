#ifndef category_assign_200_response_TEST
#define category_assign_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define category_assign_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/category_assign_200_response.h"
category_assign_200_response_t* instantiate_category_assign_200_response(int include_optional);



category_assign_200_response_t* instantiate_category_assign_200_response(int include_optional) {
  category_assign_200_response_t* category_assign_200_response = NULL;
  if (include_optional) {
    category_assign_200_response = category_assign_200_response_create(
      56,
      "0",
      0
    );
  } else {
    category_assign_200_response = category_assign_200_response_create(
      56,
      "0",
      0
    );
  }

  return category_assign_200_response;
}


#ifdef category_assign_200_response_MAIN

void test_category_assign_200_response(int include_optional) {
    category_assign_200_response_t* category_assign_200_response_1 = instantiate_category_assign_200_response(include_optional);

	cJSON* jsoncategory_assign_200_response_1 = category_assign_200_response_convertToJSON(category_assign_200_response_1);
	printf("category_assign_200_response :\n%s\n", cJSON_Print(jsoncategory_assign_200_response_1));
	category_assign_200_response_t* category_assign_200_response_2 = category_assign_200_response_parseFromJSON(jsoncategory_assign_200_response_1);
	cJSON* jsoncategory_assign_200_response_2 = category_assign_200_response_convertToJSON(category_assign_200_response_2);
	printf("repeating category_assign_200_response:\n%s\n", cJSON_Print(jsoncategory_assign_200_response_2));
}

int main() {
  test_category_assign_200_response(1);
  test_category_assign_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // category_assign_200_response_MAIN
#endif // category_assign_200_response_TEST
