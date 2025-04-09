#ifndef store_attribute_TEST
#define store_attribute_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define store_attribute_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/store_attribute.h"
store_attribute_t* instantiate_store_attribute(int include_optional);



store_attribute_t* instantiate_store_attribute(int include_optional) {
  store_attribute_t* store_attribute = NULL;
  if (include_optional) {
    store_attribute = store_attribute_create(
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      56,
      1,
      1,
      1,
      list_createList(),
      "0",
      "0",
      0,
      0
    );
  } else {
    store_attribute = store_attribute_create(
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      56,
      1,
      1,
      1,
      list_createList(),
      "0",
      "0",
      0,
      0
    );
  }

  return store_attribute;
}


#ifdef store_attribute_MAIN

void test_store_attribute(int include_optional) {
    store_attribute_t* store_attribute_1 = instantiate_store_attribute(include_optional);

	cJSON* jsonstore_attribute_1 = store_attribute_convertToJSON(store_attribute_1);
	printf("store_attribute :\n%s\n", cJSON_Print(jsonstore_attribute_1));
	store_attribute_t* store_attribute_2 = store_attribute_parseFromJSON(jsonstore_attribute_1);
	cJSON* jsonstore_attribute_2 = store_attribute_convertToJSON(store_attribute_2);
	printf("repeating store_attribute:\n%s\n", cJSON_Print(jsonstore_attribute_2));
}

int main() {
  test_store_attribute(1);
  test_store_attribute(0);

  printf("Hello world \n");
  return 0;
}

#endif // store_attribute_MAIN
#endif // store_attribute_TEST
