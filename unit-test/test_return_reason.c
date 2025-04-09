#ifndef return_reason_TEST
#define return_reason_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define return_reason_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/return_reason.h"
return_reason_t* instantiate_return_reason(int include_optional);



return_reason_t* instantiate_return_reason(int include_optional) {
  return_reason_t* return_reason = NULL;
  if (include_optional) {
    return_reason = return_reason_create(
      "0",
      "0",
      0,
      0
    );
  } else {
    return_reason = return_reason_create(
      "0",
      "0",
      0,
      0
    );
  }

  return return_reason;
}


#ifdef return_reason_MAIN

void test_return_reason(int include_optional) {
    return_reason_t* return_reason_1 = instantiate_return_reason(include_optional);

	cJSON* jsonreturn_reason_1 = return_reason_convertToJSON(return_reason_1);
	printf("return_reason :\n%s\n", cJSON_Print(jsonreturn_reason_1));
	return_reason_t* return_reason_2 = return_reason_parseFromJSON(jsonreturn_reason_1);
	cJSON* jsonreturn_reason_2 = return_reason_convertToJSON(return_reason_2);
	printf("repeating return_reason:\n%s\n", cJSON_Print(jsonreturn_reason_2));
}

int main() {
  test_return_reason(1);
  test_return_reason(0);

  printf("Hello world \n");
  return 0;
}

#endif // return_reason_MAIN
#endif // return_reason_TEST
