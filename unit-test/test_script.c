#ifndef script_TEST
#define script_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define script_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/script.h"
script_t* instantiate_script(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


script_t* instantiate_script(int include_optional) {
  script_t* script = NULL;
  if (include_optional) {
    script = script_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      0,
      0
    );
  } else {
    script = script_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL,
      NULL,
      0,
      0
    );
  }

  return script;
}


#ifdef script_MAIN

void test_script(int include_optional) {
    script_t* script_1 = instantiate_script(include_optional);

	cJSON* jsonscript_1 = script_convertToJSON(script_1);
	printf("script :\n%s\n", cJSON_Print(jsonscript_1));
	script_t* script_2 = script_parseFromJSON(jsonscript_1);
	cJSON* jsonscript_2 = script_convertToJSON(script_2);
	printf("repeating script:\n%s\n", cJSON_Print(jsonscript_2));
}

int main() {
  test_script(1);
  test_script(0);

  printf("Hello world \n");
  return 0;
}

#endif // script_MAIN
#endif // script_TEST
