#ifndef coupon_code_TEST
#define coupon_code_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define coupon_code_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/coupon_code.h"
coupon_code_t* instantiate_coupon_code(int include_optional);



coupon_code_t* instantiate_coupon_code(int include_optional) {
  coupon_code_t* coupon_code = NULL;
  if (include_optional) {
    coupon_code = coupon_code_create(
      "0",
      "0",
      56,
      0,
      0
    );
  } else {
    coupon_code = coupon_code_create(
      "0",
      "0",
      56,
      0,
      0
    );
  }

  return coupon_code;
}


#ifdef coupon_code_MAIN

void test_coupon_code(int include_optional) {
    coupon_code_t* coupon_code_1 = instantiate_coupon_code(include_optional);

	cJSON* jsoncoupon_code_1 = coupon_code_convertToJSON(coupon_code_1);
	printf("coupon_code :\n%s\n", cJSON_Print(jsoncoupon_code_1));
	coupon_code_t* coupon_code_2 = coupon_code_parseFromJSON(jsoncoupon_code_1);
	cJSON* jsoncoupon_code_2 = coupon_code_convertToJSON(coupon_code_2);
	printf("repeating coupon_code:\n%s\n", cJSON_Print(jsoncoupon_code_2));
}

int main() {
  test_coupon_code(1);
  test_coupon_code(0);

  printf("Hello world \n");
  return 0;
}

#endif // coupon_code_MAIN
#endif // coupon_code_TEST
