#ifndef attribute_unassign_group_200_response_TEST
#define attribute_unassign_group_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attribute_unassign_group_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attribute_unassign_group_200_response.h"
attribute_unassign_group_200_response_t* instantiate_attribute_unassign_group_200_response(int include_optional);

#include "test_attribute_unassign_group_200_response_result.c"


attribute_unassign_group_200_response_t* instantiate_attribute_unassign_group_200_response(int include_optional) {
  attribute_unassign_group_200_response_t* attribute_unassign_group_200_response = NULL;
  if (include_optional) {
    attribute_unassign_group_200_response = attribute_unassign_group_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_attribute_unassign_group_200_response_result(0)
    );
  } else {
    attribute_unassign_group_200_response = attribute_unassign_group_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return attribute_unassign_group_200_response;
}


#ifdef attribute_unassign_group_200_response_MAIN

void test_attribute_unassign_group_200_response(int include_optional) {
    attribute_unassign_group_200_response_t* attribute_unassign_group_200_response_1 = instantiate_attribute_unassign_group_200_response(include_optional);

	cJSON* jsonattribute_unassign_group_200_response_1 = attribute_unassign_group_200_response_convertToJSON(attribute_unassign_group_200_response_1);
	printf("attribute_unassign_group_200_response :\n%s\n", cJSON_Print(jsonattribute_unassign_group_200_response_1));
	attribute_unassign_group_200_response_t* attribute_unassign_group_200_response_2 = attribute_unassign_group_200_response_parseFromJSON(jsonattribute_unassign_group_200_response_1);
	cJSON* jsonattribute_unassign_group_200_response_2 = attribute_unassign_group_200_response_convertToJSON(attribute_unassign_group_200_response_2);
	printf("repeating attribute_unassign_group_200_response:\n%s\n", cJSON_Print(jsonattribute_unassign_group_200_response_2));
}

int main() {
  test_attribute_unassign_group_200_response(1);
  test_attribute_unassign_group_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // attribute_unassign_group_200_response_MAIN
#endif // attribute_unassign_group_200_response_TEST
