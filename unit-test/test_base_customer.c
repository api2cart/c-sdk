#ifndef base_customer_TEST
#define base_customer_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define base_customer_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/base_customer.h"
base_customer_t* instantiate_base_customer(int include_optional);



base_customer_t* instantiate_base_customer(int include_optional) {
  base_customer_t* base_customer = NULL;
  if (include_optional) {
    base_customer = base_customer_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      0,
      0
    );
  } else {
    base_customer = base_customer_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      0,
      0
    );
  }

  return base_customer;
}


#ifdef base_customer_MAIN

void test_base_customer(int include_optional) {
    base_customer_t* base_customer_1 = instantiate_base_customer(include_optional);

	cJSON* jsonbase_customer_1 = base_customer_convertToJSON(base_customer_1);
	printf("base_customer :\n%s\n", cJSON_Print(jsonbase_customer_1));
	base_customer_t* base_customer_2 = base_customer_parseFromJSON(jsonbase_customer_1);
	cJSON* jsonbase_customer_2 = base_customer_convertToJSON(base_customer_2);
	printf("repeating base_customer:\n%s\n", cJSON_Print(jsonbase_customer_2));
}

int main() {
  test_base_customer(1);
  test_base_customer(0);

  printf("Hello world \n");
  return 0;
}

#endif // base_customer_MAIN
#endif // base_customer_TEST
