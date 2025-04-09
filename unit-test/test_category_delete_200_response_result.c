#ifndef category_delete_200_response_result_TEST
#define category_delete_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define category_delete_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/category_delete_200_response_result.h"
category_delete_200_response_result_t* instantiate_category_delete_200_response_result(int include_optional);



category_delete_200_response_result_t* instantiate_category_delete_200_response_result(int include_optional) {
  category_delete_200_response_result_t* category_delete_200_response_result = NULL;
  if (include_optional) {
    category_delete_200_response_result = category_delete_200_response_result_create(
      1
    );
  } else {
    category_delete_200_response_result = category_delete_200_response_result_create(
      1
    );
  }

  return category_delete_200_response_result;
}


#ifdef category_delete_200_response_result_MAIN

void test_category_delete_200_response_result(int include_optional) {
    category_delete_200_response_result_t* category_delete_200_response_result_1 = instantiate_category_delete_200_response_result(include_optional);

	cJSON* jsoncategory_delete_200_response_result_1 = category_delete_200_response_result_convertToJSON(category_delete_200_response_result_1);
	printf("category_delete_200_response_result :\n%s\n", cJSON_Print(jsoncategory_delete_200_response_result_1));
	category_delete_200_response_result_t* category_delete_200_response_result_2 = category_delete_200_response_result_parseFromJSON(jsoncategory_delete_200_response_result_1);
	cJSON* jsoncategory_delete_200_response_result_2 = category_delete_200_response_result_convertToJSON(category_delete_200_response_result_2);
	printf("repeating category_delete_200_response_result:\n%s\n", cJSON_Print(jsoncategory_delete_200_response_result_2));
}

int main() {
  test_category_delete_200_response_result(1);
  test_category_delete_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // category_delete_200_response_result_MAIN
#endif // category_delete_200_response_result_TEST
