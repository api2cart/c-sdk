#ifndef product_review_TEST
#define product_review_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_review_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_review.h"
product_review_t* instantiate_product_review(int include_optional);

#include "test_a2_c_date_time.c"


product_review_t* instantiate_product_review(int include_optional) {
  product_review_t* product_review = NULL;
  if (include_optional) {
    product_review = product_review_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      list_createList(),
      0,
      0
    );
  } else {
    product_review = product_review_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      list_createList(),
      "0",
      NULL,
      list_createList(),
      0,
      0
    );
  }

  return product_review;
}


#ifdef product_review_MAIN

void test_product_review(int include_optional) {
    product_review_t* product_review_1 = instantiate_product_review(include_optional);

	cJSON* jsonproduct_review_1 = product_review_convertToJSON(product_review_1);
	printf("product_review :\n%s\n", cJSON_Print(jsonproduct_review_1));
	product_review_t* product_review_2 = product_review_parseFromJSON(jsonproduct_review_1);
	cJSON* jsonproduct_review_2 = product_review_convertToJSON(product_review_2);
	printf("repeating product_review:\n%s\n", cJSON_Print(jsonproduct_review_2));
}

int main() {
  test_product_review(1);
  test_product_review(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_review_MAIN
#endif // product_review_TEST
