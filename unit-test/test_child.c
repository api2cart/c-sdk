#ifndef child_TEST
#define child_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define child_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/child.h"
child_t* instantiate_child(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


child_t* instantiate_child(int include_optional) {
  child_t* child = NULL;
  if (include_optional) {
    child = child_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      1.337,
      1.337,
      1.337,
      1.337,
      list_createList(),
      "0",
      1,
      1,
      1,
      1,
      1,
      1.337,
      list_createList(),
      1.337,
      1.337,
      1.337,
      1,
      "0",
      1.337,
      "0",
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      list_createList(),
      1,
      0,
      0
    );
  } else {
    child = child_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      NULL,
      NULL,
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      1.337,
      1.337,
      1.337,
      1.337,
      list_createList(),
      "0",
      1,
      1,
      1,
      1,
      1,
      1.337,
      list_createList(),
      1.337,
      1.337,
      1.337,
      1,
      "0",
      1.337,
      "0",
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      list_createList(),
      1,
      0,
      0
    );
  }

  return child;
}


#ifdef child_MAIN

void test_child(int include_optional) {
    child_t* child_1 = instantiate_child(include_optional);

	cJSON* jsonchild_1 = child_convertToJSON(child_1);
	printf("child :\n%s\n", cJSON_Print(jsonchild_1));
	child_t* child_2 = child_parseFromJSON(jsonchild_1);
	cJSON* jsonchild_2 = child_convertToJSON(child_2);
	printf("repeating child:\n%s\n", cJSON_Print(jsonchild_2));
}

int main() {
  test_child(1);
  test_child(0);

  printf("Hello world \n");
  return 0;
}

#endif // child_MAIN
#endif // child_TEST
