#ifndef discount_TEST
#define discount_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discount_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discount.h"
discount_t* instantiate_discount(int include_optional);



discount_t* instantiate_discount(int include_optional) {
  discount_t* discount = NULL;
  if (include_optional) {
    discount = discount_create(
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      56,
      0,
      0
    );
  } else {
    discount = discount_create(
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      56,
      0,
      0
    );
  }

  return discount;
}


#ifdef discount_MAIN

void test_discount(int include_optional) {
    discount_t* discount_1 = instantiate_discount(include_optional);

	cJSON* jsondiscount_1 = discount_convertToJSON(discount_1);
	printf("discount :\n%s\n", cJSON_Print(jsondiscount_1));
	discount_t* discount_2 = discount_parseFromJSON(jsondiscount_1);
	cJSON* jsondiscount_2 = discount_convertToJSON(discount_2);
	printf("repeating discount:\n%s\n", cJSON_Print(jsondiscount_2));
}

int main() {
  test_discount(1);
  test_discount(0);

  printf("Hello world \n");
  return 0;
}

#endif // discount_MAIN
#endif // discount_TEST
