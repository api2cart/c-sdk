#ifndef attribute_value_delete_200_response_result_TEST
#define attribute_value_delete_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attribute_value_delete_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attribute_value_delete_200_response_result.h"
attribute_value_delete_200_response_result_t* instantiate_attribute_value_delete_200_response_result(int include_optional);



attribute_value_delete_200_response_result_t* instantiate_attribute_value_delete_200_response_result(int include_optional) {
  attribute_value_delete_200_response_result_t* attribute_value_delete_200_response_result = NULL;
  if (include_optional) {
    attribute_value_delete_200_response_result = attribute_value_delete_200_response_result_create(
      1
    );
  } else {
    attribute_value_delete_200_response_result = attribute_value_delete_200_response_result_create(
      1
    );
  }

  return attribute_value_delete_200_response_result;
}


#ifdef attribute_value_delete_200_response_result_MAIN

void test_attribute_value_delete_200_response_result(int include_optional) {
    attribute_value_delete_200_response_result_t* attribute_value_delete_200_response_result_1 = instantiate_attribute_value_delete_200_response_result(include_optional);

	cJSON* jsonattribute_value_delete_200_response_result_1 = attribute_value_delete_200_response_result_convertToJSON(attribute_value_delete_200_response_result_1);
	printf("attribute_value_delete_200_response_result :\n%s\n", cJSON_Print(jsonattribute_value_delete_200_response_result_1));
	attribute_value_delete_200_response_result_t* attribute_value_delete_200_response_result_2 = attribute_value_delete_200_response_result_parseFromJSON(jsonattribute_value_delete_200_response_result_1);
	cJSON* jsonattribute_value_delete_200_response_result_2 = attribute_value_delete_200_response_result_convertToJSON(attribute_value_delete_200_response_result_2);
	printf("repeating attribute_value_delete_200_response_result:\n%s\n", cJSON_Print(jsonattribute_value_delete_200_response_result_2));
}

int main() {
  test_attribute_value_delete_200_response_result(1);
  test_attribute_value_delete_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // attribute_value_delete_200_response_result_MAIN
#endif // attribute_value_delete_200_response_result_TEST
