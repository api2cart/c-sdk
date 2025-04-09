#ifndef attribute_info_200_response_TEST
#define attribute_info_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attribute_info_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attribute_info_200_response.h"
attribute_info_200_response_t* instantiate_attribute_info_200_response(int include_optional);

#include "test_store_attribute.c"


attribute_info_200_response_t* instantiate_attribute_info_200_response(int include_optional) {
  attribute_info_200_response_t* attribute_info_200_response = NULL;
  if (include_optional) {
    attribute_info_200_response = attribute_info_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_store_attribute(0)
    );
  } else {
    attribute_info_200_response = attribute_info_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return attribute_info_200_response;
}


#ifdef attribute_info_200_response_MAIN

void test_attribute_info_200_response(int include_optional) {
    attribute_info_200_response_t* attribute_info_200_response_1 = instantiate_attribute_info_200_response(include_optional);

	cJSON* jsonattribute_info_200_response_1 = attribute_info_200_response_convertToJSON(attribute_info_200_response_1);
	printf("attribute_info_200_response :\n%s\n", cJSON_Print(jsonattribute_info_200_response_1));
	attribute_info_200_response_t* attribute_info_200_response_2 = attribute_info_200_response_parseFromJSON(jsonattribute_info_200_response_1);
	cJSON* jsonattribute_info_200_response_2 = attribute_info_200_response_convertToJSON(attribute_info_200_response_2);
	printf("repeating attribute_info_200_response:\n%s\n", cJSON_Print(jsonattribute_info_200_response_2));
}

int main() {
  test_attribute_info_200_response(1);
  test_attribute_info_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // attribute_info_200_response_MAIN
#endif // attribute_info_200_response_TEST
