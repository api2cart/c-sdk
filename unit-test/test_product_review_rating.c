#ifndef product_review_rating_TEST
#define product_review_rating_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_review_rating_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_review_rating.h"
product_review_rating_t* instantiate_product_review_rating(int include_optional);



product_review_rating_t* instantiate_product_review_rating(int include_optional) {
  product_review_rating_t* product_review_rating = NULL;
  if (include_optional) {
    product_review_rating = product_review_rating_create(
      "0",
      "0",
      56,
      0,
      0
    );
  } else {
    product_review_rating = product_review_rating_create(
      "0",
      "0",
      56,
      0,
      0
    );
  }

  return product_review_rating;
}


#ifdef product_review_rating_MAIN

void test_product_review_rating(int include_optional) {
    product_review_rating_t* product_review_rating_1 = instantiate_product_review_rating(include_optional);

	cJSON* jsonproduct_review_rating_1 = product_review_rating_convertToJSON(product_review_rating_1);
	printf("product_review_rating :\n%s\n", cJSON_Print(jsonproduct_review_rating_1));
	product_review_rating_t* product_review_rating_2 = product_review_rating_parseFromJSON(jsonproduct_review_rating_1);
	cJSON* jsonproduct_review_rating_2 = product_review_rating_convertToJSON(product_review_rating_2);
	printf("repeating product_review_rating:\n%s\n", cJSON_Print(jsonproduct_review_rating_2));
}

int main() {
  test_product_review_rating(1);
  test_product_review_rating(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_review_rating_MAIN
#endif // product_review_rating_TEST
