#ifndef model_response_tax_class_info_TEST
#define model_response_tax_class_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_response_tax_class_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_response_tax_class_info.h"
model_response_tax_class_info_t* instantiate_model_response_tax_class_info(int include_optional);

#include "test_response_tax_class_info_result.c"


model_response_tax_class_info_t* instantiate_model_response_tax_class_info(int include_optional) {
  model_response_tax_class_info_t* model_response_tax_class_info = NULL;
  if (include_optional) {
    model_response_tax_class_info = model_response_tax_class_info_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_response_tax_class_info_result(0),
      0,
      0
    );
  } else {
    model_response_tax_class_info = model_response_tax_class_info_create(
      56,
      "0",
      NULL,
      0,
      0
    );
  }

  return model_response_tax_class_info;
}


#ifdef model_response_tax_class_info_MAIN

void test_model_response_tax_class_info(int include_optional) {
    model_response_tax_class_info_t* model_response_tax_class_info_1 = instantiate_model_response_tax_class_info(include_optional);

	cJSON* jsonmodel_response_tax_class_info_1 = model_response_tax_class_info_convertToJSON(model_response_tax_class_info_1);
	printf("model_response_tax_class_info :\n%s\n", cJSON_Print(jsonmodel_response_tax_class_info_1));
	model_response_tax_class_info_t* model_response_tax_class_info_2 = model_response_tax_class_info_parseFromJSON(jsonmodel_response_tax_class_info_1);
	cJSON* jsonmodel_response_tax_class_info_2 = model_response_tax_class_info_convertToJSON(model_response_tax_class_info_2);
	printf("repeating model_response_tax_class_info:\n%s\n", cJSON_Print(jsonmodel_response_tax_class_info_2));
}

int main() {
  test_model_response_tax_class_info(1);
  test_model_response_tax_class_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_response_tax_class_info_MAIN
#endif // model_response_tax_class_info_TEST
