#ifndef coupon_condition_TEST
#define coupon_condition_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define coupon_condition_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/coupon_condition.h"
coupon_condition_t* instantiate_coupon_condition(int include_optional);



coupon_condition_t* instantiate_coupon_condition(int include_optional) {
  coupon_condition_t* coupon_condition = NULL;
  if (include_optional) {
    coupon_condition = coupon_condition_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    coupon_condition = coupon_condition_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  }

  return coupon_condition;
}


#ifdef coupon_condition_MAIN

void test_coupon_condition(int include_optional) {
    coupon_condition_t* coupon_condition_1 = instantiate_coupon_condition(include_optional);

	cJSON* jsoncoupon_condition_1 = coupon_condition_convertToJSON(coupon_condition_1);
	printf("coupon_condition :\n%s\n", cJSON_Print(jsoncoupon_condition_1));
	coupon_condition_t* coupon_condition_2 = coupon_condition_parseFromJSON(jsoncoupon_condition_1);
	cJSON* jsoncoupon_condition_2 = coupon_condition_convertToJSON(coupon_condition_2);
	printf("repeating coupon_condition:\n%s\n", cJSON_Print(jsoncoupon_condition_2));
}

int main() {
  test_coupon_condition(1);
  test_coupon_condition(0);

  printf("Hello world \n");
  return 0;
}

#endif // coupon_condition_MAIN
#endif // coupon_condition_TEST
