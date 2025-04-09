#ifndef model_return_TEST
#define model_return_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_return_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_return.h"
ModelReturn_t* instantiate_ModelReturn(int include_optional);

#include "test_return_status.c"


ModelReturn_t* instantiate_ModelReturn(int include_optional) {
  ModelReturn_t* ModelReturn = NULL;
  if (include_optional) {
    ModelReturn = ModelReturn_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_return_status(0),
      list_createList(),
      "0",
      "0",
      0,
      0
    );
  } else {
    ModelReturn = ModelReturn_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL,
      list_createList(),
      "0",
      "0",
      0,
      0
    );
  }

  return ModelReturn;
}


#ifdef model_return_MAIN

void test_ModelReturn(int include_optional) {
    ModelReturn_t* ModelReturn_1 = instantiate_ModelReturn(include_optional);

	cJSON* jsonModelReturn_1 = ModelReturn_convertToJSON(ModelReturn_1);
	printf("ModelReturn :\n%s\n", cJSON_Print(jsonModelReturn_1));
	ModelReturn_t* ModelReturn_2 = ModelReturn_parseFromJSON(jsonModelReturn_1);
	cJSON* jsonModelReturn_2 = ModelReturn_convertToJSON(ModelReturn_2);
	printf("repeating ModelReturn:\n%s\n", cJSON_Print(jsonModelReturn_2));
}

int main() {
  test_ModelReturn(1);
  test_ModelReturn(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_return_MAIN
#endif // model_return_TEST
