#ifndef coupon_TEST
#define coupon_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define coupon_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/coupon.h"
coupon_t* instantiate_coupon(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


coupon_t* instantiate_coupon(int include_optional) {
  coupon_t* coupon = NULL;
  if (include_optional) {
    coupon = coupon_create(
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      1,
      56,
      56,
      56,
      56,
      "0",
      list_createList(),
      list_createList(),
      0,
      0
    );
  } else {
    coupon = coupon_create(
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      list_createList(),
      NULL,
      NULL,
      1,
      56,
      56,
      56,
      56,
      "0",
      list_createList(),
      list_createList(),
      0,
      0
    );
  }

  return coupon;
}


#ifdef coupon_MAIN

void test_coupon(int include_optional) {
    coupon_t* coupon_1 = instantiate_coupon(include_optional);

	cJSON* jsoncoupon_1 = coupon_convertToJSON(coupon_1);
	printf("coupon :\n%s\n", cJSON_Print(jsoncoupon_1));
	coupon_t* coupon_2 = coupon_parseFromJSON(jsoncoupon_1);
	cJSON* jsoncoupon_2 = coupon_convertToJSON(coupon_2);
	printf("repeating coupon:\n%s\n", cJSON_Print(jsoncoupon_2));
}

int main() {
  test_coupon(1);
  test_coupon(0);

  printf("Hello world \n");
  return 0;
}

#endif // coupon_MAIN
#endif // coupon_TEST
