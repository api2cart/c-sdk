#ifndef model_response_marketplace_product_find_TEST
#define model_response_marketplace_product_find_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_response_marketplace_product_find_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_response_marketplace_product_find.h"
model_response_marketplace_product_find_t* instantiate_model_response_marketplace_product_find(int include_optional);

#include "test_pagination.c"
#include "test_response_marketplace_product_find_result.c"


model_response_marketplace_product_find_t* instantiate_model_response_marketplace_product_find(int include_optional) {
  model_response_marketplace_product_find_t* model_response_marketplace_product_find = NULL;
  if (include_optional) {
    model_response_marketplace_product_find = model_response_marketplace_product_find_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_pagination(0),
       // false, not to have infinite recursion
      instantiate_response_marketplace_product_find_result(0),
      0,
      0
    );
  } else {
    model_response_marketplace_product_find = model_response_marketplace_product_find_create(
      56,
      "0",
      NULL,
      NULL,
      0,
      0
    );
  }

  return model_response_marketplace_product_find;
}


#ifdef model_response_marketplace_product_find_MAIN

void test_model_response_marketplace_product_find(int include_optional) {
    model_response_marketplace_product_find_t* model_response_marketplace_product_find_1 = instantiate_model_response_marketplace_product_find(include_optional);

	cJSON* jsonmodel_response_marketplace_product_find_1 = model_response_marketplace_product_find_convertToJSON(model_response_marketplace_product_find_1);
	printf("model_response_marketplace_product_find :\n%s\n", cJSON_Print(jsonmodel_response_marketplace_product_find_1));
	model_response_marketplace_product_find_t* model_response_marketplace_product_find_2 = model_response_marketplace_product_find_parseFromJSON(jsonmodel_response_marketplace_product_find_1);
	cJSON* jsonmodel_response_marketplace_product_find_2 = model_response_marketplace_product_find_convertToJSON(model_response_marketplace_product_find_2);
	printf("repeating model_response_marketplace_product_find:\n%s\n", cJSON_Print(jsonmodel_response_marketplace_product_find_2));
}

int main() {
  test_model_response_marketplace_product_find(1);
  test_model_response_marketplace_product_find(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_response_marketplace_product_find_MAIN
#endif // model_response_marketplace_product_find_TEST
