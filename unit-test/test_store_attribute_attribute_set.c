#ifndef store_attribute_attribute_set_TEST
#define store_attribute_attribute_set_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define store_attribute_attribute_set_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/store_attribute_attribute_set.h"
store_attribute_attribute_set_t* instantiate_store_attribute_attribute_set(int include_optional);



store_attribute_attribute_set_t* instantiate_store_attribute_attribute_set(int include_optional) {
  store_attribute_attribute_set_t* store_attribute_attribute_set = NULL;
  if (include_optional) {
    store_attribute_attribute_set = store_attribute_attribute_set_create(
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    store_attribute_attribute_set = store_attribute_attribute_set_create(
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  }

  return store_attribute_attribute_set;
}


#ifdef store_attribute_attribute_set_MAIN

void test_store_attribute_attribute_set(int include_optional) {
    store_attribute_attribute_set_t* store_attribute_attribute_set_1 = instantiate_store_attribute_attribute_set(include_optional);

	cJSON* jsonstore_attribute_attribute_set_1 = store_attribute_attribute_set_convertToJSON(store_attribute_attribute_set_1);
	printf("store_attribute_attribute_set :\n%s\n", cJSON_Print(jsonstore_attribute_attribute_set_1));
	store_attribute_attribute_set_t* store_attribute_attribute_set_2 = store_attribute_attribute_set_parseFromJSON(jsonstore_attribute_attribute_set_1);
	cJSON* jsonstore_attribute_attribute_set_2 = store_attribute_attribute_set_convertToJSON(store_attribute_attribute_set_2);
	printf("repeating store_attribute_attribute_set:\n%s\n", cJSON_Print(jsonstore_attribute_attribute_set_2));
}

int main() {
  test_store_attribute_attribute_set(1);
  test_store_attribute_attribute_set(0);

  printf("Hello world \n");
  return 0;
}

#endif // store_attribute_attribute_set_MAIN
#endif // store_attribute_attribute_set_TEST
