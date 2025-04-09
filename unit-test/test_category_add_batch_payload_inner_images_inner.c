#ifndef category_add_batch_payload_inner_images_inner_TEST
#define category_add_batch_payload_inner_images_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define category_add_batch_payload_inner_images_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/category_add_batch_payload_inner_images_inner.h"
category_add_batch_payload_inner_images_inner_t* instantiate_category_add_batch_payload_inner_images_inner(int include_optional);



category_add_batch_payload_inner_images_inner_t* instantiate_category_add_batch_payload_inner_images_inner(int include_optional) {
  category_add_batch_payload_inner_images_inner_t* category_add_batch_payload_inner_images_inner = NULL;
  if (include_optional) {
    category_add_batch_payload_inner_images_inner = category_add_batch_payload_inner_images_inner_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    category_add_batch_payload_inner_images_inner = category_add_batch_payload_inner_images_inner_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return category_add_batch_payload_inner_images_inner;
}


#ifdef category_add_batch_payload_inner_images_inner_MAIN

void test_category_add_batch_payload_inner_images_inner(int include_optional) {
    category_add_batch_payload_inner_images_inner_t* category_add_batch_payload_inner_images_inner_1 = instantiate_category_add_batch_payload_inner_images_inner(include_optional);

	cJSON* jsoncategory_add_batch_payload_inner_images_inner_1 = category_add_batch_payload_inner_images_inner_convertToJSON(category_add_batch_payload_inner_images_inner_1);
	printf("category_add_batch_payload_inner_images_inner :\n%s\n", cJSON_Print(jsoncategory_add_batch_payload_inner_images_inner_1));
	category_add_batch_payload_inner_images_inner_t* category_add_batch_payload_inner_images_inner_2 = category_add_batch_payload_inner_images_inner_parseFromJSON(jsoncategory_add_batch_payload_inner_images_inner_1);
	cJSON* jsoncategory_add_batch_payload_inner_images_inner_2 = category_add_batch_payload_inner_images_inner_convertToJSON(category_add_batch_payload_inner_images_inner_2);
	printf("repeating category_add_batch_payload_inner_images_inner:\n%s\n", cJSON_Print(jsoncategory_add_batch_payload_inner_images_inner_2));
}

int main() {
  test_category_add_batch_payload_inner_images_inner(1);
  test_category_add_batch_payload_inner_images_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // category_add_batch_payload_inner_images_inner_MAIN
#endif // category_add_batch_payload_inner_images_inner_TEST
