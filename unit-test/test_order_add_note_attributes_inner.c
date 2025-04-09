#ifndef order_add_note_attributes_inner_TEST
#define order_add_note_attributes_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_add_note_attributes_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_add_note_attributes_inner.h"
order_add_note_attributes_inner_t* instantiate_order_add_note_attributes_inner(int include_optional);



order_add_note_attributes_inner_t* instantiate_order_add_note_attributes_inner(int include_optional) {
  order_add_note_attributes_inner_t* order_add_note_attributes_inner = NULL;
  if (include_optional) {
    order_add_note_attributes_inner = order_add_note_attributes_inner_create(
      "0",
      "0"
    );
  } else {
    order_add_note_attributes_inner = order_add_note_attributes_inner_create(
      "0",
      "0"
    );
  }

  return order_add_note_attributes_inner;
}


#ifdef order_add_note_attributes_inner_MAIN

void test_order_add_note_attributes_inner(int include_optional) {
    order_add_note_attributes_inner_t* order_add_note_attributes_inner_1 = instantiate_order_add_note_attributes_inner(include_optional);

	cJSON* jsonorder_add_note_attributes_inner_1 = order_add_note_attributes_inner_convertToJSON(order_add_note_attributes_inner_1);
	printf("order_add_note_attributes_inner :\n%s\n", cJSON_Print(jsonorder_add_note_attributes_inner_1));
	order_add_note_attributes_inner_t* order_add_note_attributes_inner_2 = order_add_note_attributes_inner_parseFromJSON(jsonorder_add_note_attributes_inner_1);
	cJSON* jsonorder_add_note_attributes_inner_2 = order_add_note_attributes_inner_convertToJSON(order_add_note_attributes_inner_2);
	printf("repeating order_add_note_attributes_inner:\n%s\n", cJSON_Print(jsonorder_add_note_attributes_inner_2));
}

int main() {
  test_order_add_note_attributes_inner(1);
  test_order_add_note_attributes_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_add_note_attributes_inner_MAIN
#endif // order_add_note_attributes_inner_TEST
