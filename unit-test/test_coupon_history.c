#ifndef coupon_history_TEST
#define coupon_history_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define coupon_history_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/coupon_history.h"
coupon_history_t* instantiate_coupon_history(int include_optional);



coupon_history_t* instantiate_coupon_history(int include_optional) {
  coupon_history_t* coupon_history = NULL;
  if (include_optional) {
    coupon_history = coupon_history_create(
      "0",
      1.337,
      0,
      0
    );
  } else {
    coupon_history = coupon_history_create(
      "0",
      1.337,
      0,
      0
    );
  }

  return coupon_history;
}


#ifdef coupon_history_MAIN

void test_coupon_history(int include_optional) {
    coupon_history_t* coupon_history_1 = instantiate_coupon_history(include_optional);

	cJSON* jsoncoupon_history_1 = coupon_history_convertToJSON(coupon_history_1);
	printf("coupon_history :\n%s\n", cJSON_Print(jsoncoupon_history_1));
	coupon_history_t* coupon_history_2 = coupon_history_parseFromJSON(jsoncoupon_history_1);
	cJSON* jsoncoupon_history_2 = coupon_history_convertToJSON(coupon_history_2);
	printf("repeating coupon_history:\n%s\n", cJSON_Print(jsoncoupon_history_2));
}

int main() {
  test_coupon_history(1);
  test_coupon_history(0);

  printf("Hello world \n");
  return 0;
}

#endif // coupon_history_MAIN
#endif // coupon_history_TEST
