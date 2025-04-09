#ifndef order_shipment_add_batch_TEST
#define order_shipment_add_batch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_shipment_add_batch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_shipment_add_batch.h"
order_shipment_add_batch_t* instantiate_order_shipment_add_batch(int include_optional);



order_shipment_add_batch_t* instantiate_order_shipment_add_batch(int include_optional) {
  order_shipment_add_batch_t* order_shipment_add_batch = NULL;
  if (include_optional) {
    order_shipment_add_batch = order_shipment_add_batch_create(
      list_createList()
    );
  } else {
    order_shipment_add_batch = order_shipment_add_batch_create(
      list_createList()
    );
  }

  return order_shipment_add_batch;
}


#ifdef order_shipment_add_batch_MAIN

void test_order_shipment_add_batch(int include_optional) {
    order_shipment_add_batch_t* order_shipment_add_batch_1 = instantiate_order_shipment_add_batch(include_optional);

	cJSON* jsonorder_shipment_add_batch_1 = order_shipment_add_batch_convertToJSON(order_shipment_add_batch_1);
	printf("order_shipment_add_batch :\n%s\n", cJSON_Print(jsonorder_shipment_add_batch_1));
	order_shipment_add_batch_t* order_shipment_add_batch_2 = order_shipment_add_batch_parseFromJSON(jsonorder_shipment_add_batch_1);
	cJSON* jsonorder_shipment_add_batch_2 = order_shipment_add_batch_convertToJSON(order_shipment_add_batch_2);
	printf("repeating order_shipment_add_batch:\n%s\n", cJSON_Print(jsonorder_shipment_add_batch_2));
}

int main() {
  test_order_shipment_add_batch(1);
  test_order_shipment_add_batch(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_shipment_add_batch_MAIN
#endif // order_shipment_add_batch_TEST
