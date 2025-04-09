#ifndef return_count_200_response_TEST
#define return_count_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define return_count_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/return_count_200_response.h"
return_count_200_response_t* instantiate_return_count_200_response(int include_optional);

#include "test_return_count_200_response_result.c"


return_count_200_response_t* instantiate_return_count_200_response(int include_optional) {
  return_count_200_response_t* return_count_200_response = NULL;
  if (include_optional) {
    return_count_200_response = return_count_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_return_count_200_response_result(0)
    );
  } else {
    return_count_200_response = return_count_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return return_count_200_response;
}


#ifdef return_count_200_response_MAIN

void test_return_count_200_response(int include_optional) {
    return_count_200_response_t* return_count_200_response_1 = instantiate_return_count_200_response(include_optional);

	cJSON* jsonreturn_count_200_response_1 = return_count_200_response_convertToJSON(return_count_200_response_1);
	printf("return_count_200_response :\n%s\n", cJSON_Print(jsonreturn_count_200_response_1));
	return_count_200_response_t* return_count_200_response_2 = return_count_200_response_parseFromJSON(jsonreturn_count_200_response_1);
	cJSON* jsonreturn_count_200_response_2 = return_count_200_response_convertToJSON(return_count_200_response_2);
	printf("repeating return_count_200_response:\n%s\n", cJSON_Print(jsonreturn_count_200_response_2));
}

int main() {
  test_return_count_200_response(1);
  test_return_count_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // return_count_200_response_MAIN
#endif // return_count_200_response_TEST
