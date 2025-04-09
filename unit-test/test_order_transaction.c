#ifndef order_transaction_TEST
#define order_transaction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_transaction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_transaction.h"
order_transaction_t* instantiate_order_transaction(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


order_transaction_t* instantiate_order_transaction(int include_optional) {
  order_transaction_t* order_transaction = NULL;
  if (include_optional) {
    order_transaction = order_transaction_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      "0",
      1.337,
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      0,
      0
    );
  } else {
    order_transaction = order_transaction_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      NULL,
      "0",
      1.337,
      NULL,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      0,
      0
    );
  }

  return order_transaction;
}


#ifdef order_transaction_MAIN

void test_order_transaction(int include_optional) {
    order_transaction_t* order_transaction_1 = instantiate_order_transaction(include_optional);

	cJSON* jsonorder_transaction_1 = order_transaction_convertToJSON(order_transaction_1);
	printf("order_transaction :\n%s\n", cJSON_Print(jsonorder_transaction_1));
	order_transaction_t* order_transaction_2 = order_transaction_parseFromJSON(jsonorder_transaction_1);
	cJSON* jsonorder_transaction_2 = order_transaction_convertToJSON(order_transaction_2);
	printf("repeating order_transaction:\n%s\n", cJSON_Print(jsonorder_transaction_2));
}

int main() {
  test_order_transaction(1);
  test_order_transaction(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_transaction_MAIN
#endif // order_transaction_TEST
