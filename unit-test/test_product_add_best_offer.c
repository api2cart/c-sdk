#ifndef product_add_best_offer_TEST
#define product_add_best_offer_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_best_offer_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add_best_offer.h"
product_add_best_offer_t* instantiate_product_add_best_offer(int include_optional);



product_add_best_offer_t* instantiate_product_add_best_offer(int include_optional) {
  product_add_best_offer_t* product_add_best_offer = NULL;
  if (include_optional) {
    product_add_best_offer = product_add_best_offer_create(
      1.337,
      1.337
    );
  } else {
    product_add_best_offer = product_add_best_offer_create(
      1.337,
      1.337
    );
  }

  return product_add_best_offer;
}


#ifdef product_add_best_offer_MAIN

void test_product_add_best_offer(int include_optional) {
    product_add_best_offer_t* product_add_best_offer_1 = instantiate_product_add_best_offer(include_optional);

	cJSON* jsonproduct_add_best_offer_1 = product_add_best_offer_convertToJSON(product_add_best_offer_1);
	printf("product_add_best_offer :\n%s\n", cJSON_Print(jsonproduct_add_best_offer_1));
	product_add_best_offer_t* product_add_best_offer_2 = product_add_best_offer_parseFromJSON(jsonproduct_add_best_offer_1);
	cJSON* jsonproduct_add_best_offer_2 = product_add_best_offer_convertToJSON(product_add_best_offer_2);
	printf("repeating product_add_best_offer:\n%s\n", cJSON_Print(jsonproduct_add_best_offer_2));
}

int main() {
  test_product_add_best_offer(1);
  test_product_add_best_offer(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_best_offer_MAIN
#endif // product_add_best_offer_TEST
