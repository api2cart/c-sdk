#ifndef return_action_list_200_response_result_TEST
#define return_action_list_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define return_action_list_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/return_action_list_200_response_result.h"
return_action_list_200_response_result_t* instantiate_return_action_list_200_response_result(int include_optional);



return_action_list_200_response_result_t* instantiate_return_action_list_200_response_result(int include_optional) {
  return_action_list_200_response_result_t* return_action_list_200_response_result = NULL;
  if (include_optional) {
    return_action_list_200_response_result = return_action_list_200_response_result_create(
      list_createList()
    );
  } else {
    return_action_list_200_response_result = return_action_list_200_response_result_create(
      list_createList()
    );
  }

  return return_action_list_200_response_result;
}


#ifdef return_action_list_200_response_result_MAIN

void test_return_action_list_200_response_result(int include_optional) {
    return_action_list_200_response_result_t* return_action_list_200_response_result_1 = instantiate_return_action_list_200_response_result(include_optional);

	cJSON* jsonreturn_action_list_200_response_result_1 = return_action_list_200_response_result_convertToJSON(return_action_list_200_response_result_1);
	printf("return_action_list_200_response_result :\n%s\n", cJSON_Print(jsonreturn_action_list_200_response_result_1));
	return_action_list_200_response_result_t* return_action_list_200_response_result_2 = return_action_list_200_response_result_parseFromJSON(jsonreturn_action_list_200_response_result_1);
	cJSON* jsonreturn_action_list_200_response_result_2 = return_action_list_200_response_result_convertToJSON(return_action_list_200_response_result_2);
	printf("repeating return_action_list_200_response_result:\n%s\n", cJSON_Print(jsonreturn_action_list_200_response_result_2));
}

int main() {
  test_return_action_list_200_response_result(1);
  test_return_action_list_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // return_action_list_200_response_result_MAIN
#endif // return_action_list_200_response_result_TEST
