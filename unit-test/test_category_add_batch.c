#ifndef category_add_batch_TEST
#define category_add_batch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define category_add_batch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/category_add_batch.h"
category_add_batch_t* instantiate_category_add_batch(int include_optional);



category_add_batch_t* instantiate_category_add_batch(int include_optional) {
  category_add_batch_t* category_add_batch = NULL;
  if (include_optional) {
    category_add_batch = category_add_batch_create(
      list_createList()
    );
  } else {
    category_add_batch = category_add_batch_create(
      list_createList()
    );
  }

  return category_add_batch;
}


#ifdef category_add_batch_MAIN

void test_category_add_batch(int include_optional) {
    category_add_batch_t* category_add_batch_1 = instantiate_category_add_batch(include_optional);

	cJSON* jsoncategory_add_batch_1 = category_add_batch_convertToJSON(category_add_batch_1);
	printf("category_add_batch :\n%s\n", cJSON_Print(jsoncategory_add_batch_1));
	category_add_batch_t* category_add_batch_2 = category_add_batch_parseFromJSON(jsoncategory_add_batch_1);
	cJSON* jsoncategory_add_batch_2 = category_add_batch_convertToJSON(category_add_batch_2);
	printf("repeating category_add_batch:\n%s\n", cJSON_Print(jsoncategory_add_batch_2));
}

int main() {
  test_category_add_batch(1);
  test_category_add_batch(0);

  printf("Hello world \n");
  return 0;
}

#endif // category_add_batch_MAIN
#endif // category_add_batch_TEST
