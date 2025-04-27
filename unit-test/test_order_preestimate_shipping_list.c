#ifndef order_preestimate_shipping_list_TEST
#define order_preestimate_shipping_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_preestimate_shipping_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_preestimate_shipping_list.h"
order_preestimate_shipping_list_t* instantiate_order_preestimate_shipping_list(int include_optional);



order_preestimate_shipping_list_t* instantiate_order_preestimate_shipping_list(int include_optional) {
  order_preestimate_shipping_list_t* order_preestimate_shipping_list = NULL;
  if (include_optional) {
    order_preestimate_shipping_list = order_preestimate_shipping_list_create(
      "1",
      "5",
      "jubari@hannsgroup.com",
      "1",
      "Green str. 35",
      "Chicago",
      "24545",
      "IL",
      "US",
      "force_all",
      "false",
      list_createList()
    );
  } else {
    order_preestimate_shipping_list = order_preestimate_shipping_list_create(
      "1",
      "5",
      "jubari@hannsgroup.com",
      "1",
      "Green str. 35",
      "Chicago",
      "24545",
      "IL",
      "US",
      "force_all",
      "false",
      list_createList()
    );
  }

  return order_preestimate_shipping_list;
}


#ifdef order_preestimate_shipping_list_MAIN

void test_order_preestimate_shipping_list(int include_optional) {
    order_preestimate_shipping_list_t* order_preestimate_shipping_list_1 = instantiate_order_preestimate_shipping_list(include_optional);

	cJSON* jsonorder_preestimate_shipping_list_1 = order_preestimate_shipping_list_convertToJSON(order_preestimate_shipping_list_1);
	printf("order_preestimate_shipping_list :\n%s\n", cJSON_Print(jsonorder_preestimate_shipping_list_1));
	order_preestimate_shipping_list_t* order_preestimate_shipping_list_2 = order_preestimate_shipping_list_parseFromJSON(jsonorder_preestimate_shipping_list_1);
	cJSON* jsonorder_preestimate_shipping_list_2 = order_preestimate_shipping_list_convertToJSON(order_preestimate_shipping_list_2);
	printf("repeating order_preestimate_shipping_list:\n%s\n", cJSON_Print(jsonorder_preestimate_shipping_list_2));
}

int main() {
  test_order_preestimate_shipping_list(1);
  test_order_preestimate_shipping_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_preestimate_shipping_list_MAIN
#endif // order_preestimate_shipping_list_TEST
