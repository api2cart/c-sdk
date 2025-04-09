#ifndef info_TEST
#define info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/info.h"
info_t* instantiate_info(int include_optional);



info_t* instantiate_info(int include_optional) {
  info_t* info = NULL;
  if (include_optional) {
    info = info_create(
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
      0,
      0
    );
  } else {
    info = info_create(
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
      0,
      0
    );
  }

  return info;
}


#ifdef info_MAIN

void test_info(int include_optional) {
    info_t* info_1 = instantiate_info(include_optional);

	cJSON* jsoninfo_1 = info_convertToJSON(info_1);
	printf("info :\n%s\n", cJSON_Print(jsoninfo_1));
	info_t* info_2 = info_parseFromJSON(jsoninfo_1);
	cJSON* jsoninfo_2 = info_convertToJSON(info_2);
	printf("repeating info:\n%s\n", cJSON_Print(jsoninfo_2));
}

int main() {
  test_info(1);
  test_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // info_MAIN
#endif // info_TEST
