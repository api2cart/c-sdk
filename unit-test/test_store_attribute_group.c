#ifndef store_attribute_group_TEST
#define store_attribute_group_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define store_attribute_group_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/store_attribute_group.h"
store_attribute_group_t* instantiate_store_attribute_group(int include_optional);



store_attribute_group_t* instantiate_store_attribute_group(int include_optional) {
  store_attribute_group_t* store_attribute_group = NULL;
  if (include_optional) {
    store_attribute_group = store_attribute_group_create(
      "0",
      "0",
      56,
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    store_attribute_group = store_attribute_group_create(
      "0",
      "0",
      56,
      "0",
      list_createList(),
      0,
      0
    );
  }

  return store_attribute_group;
}


#ifdef store_attribute_group_MAIN

void test_store_attribute_group(int include_optional) {
    store_attribute_group_t* store_attribute_group_1 = instantiate_store_attribute_group(include_optional);

	cJSON* jsonstore_attribute_group_1 = store_attribute_group_convertToJSON(store_attribute_group_1);
	printf("store_attribute_group :\n%s\n", cJSON_Print(jsonstore_attribute_group_1));
	store_attribute_group_t* store_attribute_group_2 = store_attribute_group_parseFromJSON(jsonstore_attribute_group_1);
	cJSON* jsonstore_attribute_group_2 = store_attribute_group_convertToJSON(store_attribute_group_2);
	printf("repeating store_attribute_group:\n%s\n", cJSON_Print(jsonstore_attribute_group_2));
}

int main() {
  test_store_attribute_group(1);
  test_store_attribute_group(0);

  printf("Hello world \n");
  return 0;
}

#endif // store_attribute_group_MAIN
#endif // store_attribute_group_TEST
