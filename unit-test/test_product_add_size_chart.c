#ifndef product_add_size_chart_TEST
#define product_add_size_chart_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_size_chart_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add_size_chart.h"
product_add_size_chart_t* instantiate_product_add_size_chart(int include_optional);



product_add_size_chart_t* instantiate_product_add_size_chart(int include_optional) {
  product_add_size_chart_t* product_add_size_chart = NULL;
  if (include_optional) {
    product_add_size_chart = product_add_size_chart_create(
      "0",
      "0"
    );
  } else {
    product_add_size_chart = product_add_size_chart_create(
      "0",
      "0"
    );
  }

  return product_add_size_chart;
}


#ifdef product_add_size_chart_MAIN

void test_product_add_size_chart(int include_optional) {
    product_add_size_chart_t* product_add_size_chart_1 = instantiate_product_add_size_chart(include_optional);

	cJSON* jsonproduct_add_size_chart_1 = product_add_size_chart_convertToJSON(product_add_size_chart_1);
	printf("product_add_size_chart :\n%s\n", cJSON_Print(jsonproduct_add_size_chart_1));
	product_add_size_chart_t* product_add_size_chart_2 = product_add_size_chart_parseFromJSON(jsonproduct_add_size_chart_1);
	cJSON* jsonproduct_add_size_chart_2 = product_add_size_chart_convertToJSON(product_add_size_chart_2);
	printf("repeating product_add_size_chart:\n%s\n", cJSON_Print(jsonproduct_add_size_chart_2));
}

int main() {
  test_product_add_size_chart(1);
  test_product_add_size_chart(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_size_chart_MAIN
#endif // product_add_size_chart_TEST
