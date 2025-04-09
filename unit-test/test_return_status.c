#ifndef return_status_TEST
#define return_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define return_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/return_status.h"
return_status_t* instantiate_return_status(int include_optional);



return_status_t* instantiate_return_status(int include_optional) {
  return_status_t* return_status = NULL;
  if (include_optional) {
    return_status = return_status_create(
      "0",
      "0",
      0,
      0
    );
  } else {
    return_status = return_status_create(
      "0",
      "0",
      0,
      0
    );
  }

  return return_status;
}


#ifdef return_status_MAIN

void test_return_status(int include_optional) {
    return_status_t* return_status_1 = instantiate_return_status(include_optional);

	cJSON* jsonreturn_status_1 = return_status_convertToJSON(return_status_1);
	printf("return_status :\n%s\n", cJSON_Print(jsonreturn_status_1));
	return_status_t* return_status_2 = return_status_parseFromJSON(jsonreturn_status_1);
	cJSON* jsonreturn_status_2 = return_status_convertToJSON(return_status_2);
	printf("repeating return_status:\n%s\n", cJSON_Print(jsonreturn_status_2));
}

int main() {
  test_return_status(1);
  test_return_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // return_status_MAIN
#endif // return_status_TEST
