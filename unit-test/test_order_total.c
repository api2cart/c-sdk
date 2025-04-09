#ifndef order_total_TEST
#define order_total_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_total_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_total.h"
order_total_t* instantiate_order_total(int include_optional);



order_total_t* instantiate_order_total(int include_optional) {
  order_total_t* order_total = NULL;
  if (include_optional) {
    order_total = order_total_create(
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      0,
      0
    );
  } else {
    order_total = order_total_create(
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      0,
      0
    );
  }

  return order_total;
}


#ifdef order_total_MAIN

void test_order_total(int include_optional) {
    order_total_t* order_total_1 = instantiate_order_total(include_optional);

	cJSON* jsonorder_total_1 = order_total_convertToJSON(order_total_1);
	printf("order_total :\n%s\n", cJSON_Print(jsonorder_total_1));
	order_total_t* order_total_2 = order_total_parseFromJSON(jsonorder_total_1);
	cJSON* jsonorder_total_2 = order_total_convertToJSON(order_total_2);
	printf("repeating order_total:\n%s\n", cJSON_Print(jsonorder_total_2));
}

int main() {
  test_order_total(1);
  test_order_total(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_total_MAIN
#endif // order_total_TEST
