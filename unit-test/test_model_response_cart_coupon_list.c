#ifndef model_response_cart_coupon_list_TEST
#define model_response_cart_coupon_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_response_cart_coupon_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_response_cart_coupon_list.h"
model_response_cart_coupon_list_t* instantiate_model_response_cart_coupon_list(int include_optional);

#include "test_pagination.c"
#include "test_response_cart_coupon_list_result.c"


model_response_cart_coupon_list_t* instantiate_model_response_cart_coupon_list(int include_optional) {
  model_response_cart_coupon_list_t* model_response_cart_coupon_list = NULL;
  if (include_optional) {
    model_response_cart_coupon_list = model_response_cart_coupon_list_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_pagination(0),
       // false, not to have infinite recursion
      instantiate_response_cart_coupon_list_result(0),
      0,
      0
    );
  } else {
    model_response_cart_coupon_list = model_response_cart_coupon_list_create(
      56,
      "0",
      NULL,
      NULL,
      0,
      0
    );
  }

  return model_response_cart_coupon_list;
}


#ifdef model_response_cart_coupon_list_MAIN

void test_model_response_cart_coupon_list(int include_optional) {
    model_response_cart_coupon_list_t* model_response_cart_coupon_list_1 = instantiate_model_response_cart_coupon_list(include_optional);

	cJSON* jsonmodel_response_cart_coupon_list_1 = model_response_cart_coupon_list_convertToJSON(model_response_cart_coupon_list_1);
	printf("model_response_cart_coupon_list :\n%s\n", cJSON_Print(jsonmodel_response_cart_coupon_list_1));
	model_response_cart_coupon_list_t* model_response_cart_coupon_list_2 = model_response_cart_coupon_list_parseFromJSON(jsonmodel_response_cart_coupon_list_1);
	cJSON* jsonmodel_response_cart_coupon_list_2 = model_response_cart_coupon_list_convertToJSON(model_response_cart_coupon_list_2);
	printf("repeating model_response_cart_coupon_list:\n%s\n", cJSON_Print(jsonmodel_response_cart_coupon_list_2));
}

int main() {
  test_model_response_cart_coupon_list(1);
  test_model_response_cart_coupon_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_response_cart_coupon_list_MAIN
#endif // model_response_cart_coupon_list_TEST
