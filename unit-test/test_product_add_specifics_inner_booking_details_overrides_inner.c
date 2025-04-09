#ifndef product_add_specifics_inner_booking_details_overrides_inner_TEST
#define product_add_specifics_inner_booking_details_overrides_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_specifics_inner_booking_details_overrides_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add_specifics_inner_booking_details_overrides_inner.h"
product_add_specifics_inner_booking_details_overrides_inner_t* instantiate_product_add_specifics_inner_booking_details_overrides_inner(int include_optional);



product_add_specifics_inner_booking_details_overrides_inner_t* instantiate_product_add_specifics_inner_booking_details_overrides_inner(int include_optional) {
  product_add_specifics_inner_booking_details_overrides_inner_t* product_add_specifics_inner_booking_details_overrides_inner = NULL;
  if (include_optional) {
    product_add_specifics_inner_booking_details_overrides_inner = product_add_specifics_inner_booking_details_overrides_inner_create(
      api2cart_openapi_product_add_specifics_inner_booking_details_overrides_inner_DAY_sunday,
      "a"
    );
  } else {
    product_add_specifics_inner_booking_details_overrides_inner = product_add_specifics_inner_booking_details_overrides_inner_create(
      api2cart_openapi_product_add_specifics_inner_booking_details_overrides_inner_DAY_sunday,
      "a"
    );
  }

  return product_add_specifics_inner_booking_details_overrides_inner;
}


#ifdef product_add_specifics_inner_booking_details_overrides_inner_MAIN

void test_product_add_specifics_inner_booking_details_overrides_inner(int include_optional) {
    product_add_specifics_inner_booking_details_overrides_inner_t* product_add_specifics_inner_booking_details_overrides_inner_1 = instantiate_product_add_specifics_inner_booking_details_overrides_inner(include_optional);

	cJSON* jsonproduct_add_specifics_inner_booking_details_overrides_inner_1 = product_add_specifics_inner_booking_details_overrides_inner_convertToJSON(product_add_specifics_inner_booking_details_overrides_inner_1);
	printf("product_add_specifics_inner_booking_details_overrides_inner :\n%s\n", cJSON_Print(jsonproduct_add_specifics_inner_booking_details_overrides_inner_1));
	product_add_specifics_inner_booking_details_overrides_inner_t* product_add_specifics_inner_booking_details_overrides_inner_2 = product_add_specifics_inner_booking_details_overrides_inner_parseFromJSON(jsonproduct_add_specifics_inner_booking_details_overrides_inner_1);
	cJSON* jsonproduct_add_specifics_inner_booking_details_overrides_inner_2 = product_add_specifics_inner_booking_details_overrides_inner_convertToJSON(product_add_specifics_inner_booking_details_overrides_inner_2);
	printf("repeating product_add_specifics_inner_booking_details_overrides_inner:\n%s\n", cJSON_Print(jsonproduct_add_specifics_inner_booking_details_overrides_inner_2));
}

int main() {
  test_product_add_specifics_inner_booking_details_overrides_inner(1);
  test_product_add_specifics_inner_booking_details_overrides_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_specifics_inner_booking_details_overrides_inner_MAIN
#endif // product_add_specifics_inner_booking_details_overrides_inner_TEST
