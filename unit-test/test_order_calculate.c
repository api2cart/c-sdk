#ifndef order_calculate_TEST
#define order_calculate_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_calculate_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_calculate.h"
order_calculate_t* instantiate_order_calculate(int include_optional);



order_calculate_t* instantiate_order_calculate(int include_optional) {
  order_calculate_t* order_calculate = NULL;
  if (include_optional) {
    order_calculate = order_calculate_create(
      "jubari@hannsgroup.com",
      "usd",
      "1",
      list_createList(),
      "John",
      "Smith",
      "Green str. 35",
      "Green str. 35",
      "Chicago",
      "24545",
      "IL",
      "US",
      "Apple",
      "880086544564",
      "Adam",
      "Smith",
      "Green str. 35",
      "Red str, 2",
      "Chicago",
      "12345",
      "IL",
      "US",
      "Apple",
      "8 800 5659 6896",
      "{result}",
      list_createList()
    );
  } else {
    order_calculate = order_calculate_create(
      "jubari@hannsgroup.com",
      "usd",
      "1",
      list_createList(),
      "John",
      "Smith",
      "Green str. 35",
      "Green str. 35",
      "Chicago",
      "24545",
      "IL",
      "US",
      "Apple",
      "880086544564",
      "Adam",
      "Smith",
      "Green str. 35",
      "Red str, 2",
      "Chicago",
      "12345",
      "IL",
      "US",
      "Apple",
      "8 800 5659 6896",
      "{result}",
      list_createList()
    );
  }

  return order_calculate;
}


#ifdef order_calculate_MAIN

void test_order_calculate(int include_optional) {
    order_calculate_t* order_calculate_1 = instantiate_order_calculate(include_optional);

	cJSON* jsonorder_calculate_1 = order_calculate_convertToJSON(order_calculate_1);
	printf("order_calculate :\n%s\n", cJSON_Print(jsonorder_calculate_1));
	order_calculate_t* order_calculate_2 = order_calculate_parseFromJSON(jsonorder_calculate_1);
	cJSON* jsonorder_calculate_2 = order_calculate_convertToJSON(order_calculate_2);
	printf("repeating order_calculate:\n%s\n", cJSON_Print(jsonorder_calculate_2));
}

int main() {
  test_order_calculate(1);
  test_order_calculate(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_calculate_MAIN
#endif // order_calculate_TEST
