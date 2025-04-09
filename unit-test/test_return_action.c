#ifndef return_action_TEST
#define return_action_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define return_action_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/return_action.h"
return_action_t* instantiate_return_action(int include_optional);



return_action_t* instantiate_return_action(int include_optional) {
  return_action_t* return_action = NULL;
  if (include_optional) {
    return_action = return_action_create(
      "0",
      "0",
      0,
      0
    );
  } else {
    return_action = return_action_create(
      "0",
      "0",
      0,
      0
    );
  }

  return return_action;
}


#ifdef return_action_MAIN

void test_return_action(int include_optional) {
    return_action_t* return_action_1 = instantiate_return_action(include_optional);

	cJSON* jsonreturn_action_1 = return_action_convertToJSON(return_action_1);
	printf("return_action :\n%s\n", cJSON_Print(jsonreturn_action_1));
	return_action_t* return_action_2 = return_action_parseFromJSON(jsonreturn_action_1);
	cJSON* jsonreturn_action_2 = return_action_convertToJSON(return_action_2);
	printf("repeating return_action:\n%s\n", cJSON_Print(jsonreturn_action_2));
}

int main() {
  test_return_action(1);
  test_return_action(0);

  printf("Hello world \n");
  return 0;
}

#endif // return_action_MAIN
#endif // return_action_TEST
