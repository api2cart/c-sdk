#ifndef coupon_action_TEST
#define coupon_action_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define coupon_action_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/coupon_action.h"
coupon_action_t* instantiate_coupon_action(int include_optional);



coupon_action_t* instantiate_coupon_action(int include_optional) {
  coupon_action_t* coupon_action = NULL;
  if (include_optional) {
    coupon_action = coupon_action_create(
      "0",
      "0",
      1.337,
      "0",
      1,
      "0",
      1.337,
      56,
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    coupon_action = coupon_action_create(
      "0",
      "0",
      1.337,
      "0",
      1,
      "0",
      1.337,
      56,
      "0",
      list_createList(),
      0,
      0
    );
  }

  return coupon_action;
}


#ifdef coupon_action_MAIN

void test_coupon_action(int include_optional) {
    coupon_action_t* coupon_action_1 = instantiate_coupon_action(include_optional);

	cJSON* jsoncoupon_action_1 = coupon_action_convertToJSON(coupon_action_1);
	printf("coupon_action :\n%s\n", cJSON_Print(jsoncoupon_action_1));
	coupon_action_t* coupon_action_2 = coupon_action_parseFromJSON(jsoncoupon_action_1);
	cJSON* jsoncoupon_action_2 = coupon_action_convertToJSON(coupon_action_2);
	printf("repeating coupon_action:\n%s\n", cJSON_Print(jsoncoupon_action_2));
}

int main() {
  test_coupon_action(1);
  test_coupon_action(0);

  printf("Hello world \n");
  return 0;
}

#endif // coupon_action_MAIN
#endif // coupon_action_TEST
