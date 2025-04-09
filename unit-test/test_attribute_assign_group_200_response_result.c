#ifndef attribute_assign_group_200_response_result_TEST
#define attribute_assign_group_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attribute_assign_group_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attribute_assign_group_200_response_result.h"
attribute_assign_group_200_response_result_t* instantiate_attribute_assign_group_200_response_result(int include_optional);



attribute_assign_group_200_response_result_t* instantiate_attribute_assign_group_200_response_result(int include_optional) {
  attribute_assign_group_200_response_result_t* attribute_assign_group_200_response_result = NULL;
  if (include_optional) {
    attribute_assign_group_200_response_result = attribute_assign_group_200_response_result_create(
      "0"
    );
  } else {
    attribute_assign_group_200_response_result = attribute_assign_group_200_response_result_create(
      "0"
    );
  }

  return attribute_assign_group_200_response_result;
}


#ifdef attribute_assign_group_200_response_result_MAIN

void test_attribute_assign_group_200_response_result(int include_optional) {
    attribute_assign_group_200_response_result_t* attribute_assign_group_200_response_result_1 = instantiate_attribute_assign_group_200_response_result(include_optional);

	cJSON* jsonattribute_assign_group_200_response_result_1 = attribute_assign_group_200_response_result_convertToJSON(attribute_assign_group_200_response_result_1);
	printf("attribute_assign_group_200_response_result :\n%s\n", cJSON_Print(jsonattribute_assign_group_200_response_result_1));
	attribute_assign_group_200_response_result_t* attribute_assign_group_200_response_result_2 = attribute_assign_group_200_response_result_parseFromJSON(jsonattribute_assign_group_200_response_result_1);
	cJSON* jsonattribute_assign_group_200_response_result_2 = attribute_assign_group_200_response_result_convertToJSON(attribute_assign_group_200_response_result_2);
	printf("repeating attribute_assign_group_200_response_result:\n%s\n", cJSON_Print(jsonattribute_assign_group_200_response_result_2));
}

int main() {
  test_attribute_assign_group_200_response_result(1);
  test_attribute_assign_group_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // attribute_assign_group_200_response_result_MAIN
#endif // attribute_assign_group_200_response_result_TEST
