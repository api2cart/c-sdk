#ifndef a2_c_date_time_TEST
#define a2_c_date_time_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define a2_c_date_time_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/a2_c_date_time.h"
a2_c_date_time_t* instantiate_a2_c_date_time(int include_optional);



a2_c_date_time_t* instantiate_a2_c_date_time(int include_optional) {
  a2_c_date_time_t* a2_c_date_time = NULL;
  if (include_optional) {
    a2_c_date_time = a2_c_date_time_create(
      "0",
      "0",
      0,
      0
    );
  } else {
    a2_c_date_time = a2_c_date_time_create(
      "0",
      "0",
      0,
      0
    );
  }

  return a2_c_date_time;
}


#ifdef a2_c_date_time_MAIN

void test_a2_c_date_time(int include_optional) {
    a2_c_date_time_t* a2_c_date_time_1 = instantiate_a2_c_date_time(include_optional);

	cJSON* jsona2_c_date_time_1 = a2_c_date_time_convertToJSON(a2_c_date_time_1);
	printf("a2_c_date_time :\n%s\n", cJSON_Print(jsona2_c_date_time_1));
	a2_c_date_time_t* a2_c_date_time_2 = a2_c_date_time_parseFromJSON(jsona2_c_date_time_1);
	cJSON* jsona2_c_date_time_2 = a2_c_date_time_convertToJSON(a2_c_date_time_2);
	printf("repeating a2_c_date_time:\n%s\n", cJSON_Print(jsona2_c_date_time_2));
}

int main() {
  test_a2_c_date_time(1);
  test_a2_c_date_time(0);

  printf("Hello world \n");
  return 0;
}

#endif // a2_c_date_time_MAIN
#endif // a2_c_date_time_TEST
