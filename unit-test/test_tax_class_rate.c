#ifndef tax_class_rate_TEST
#define tax_class_rate_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_class_rate_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_class_rate.h"
tax_class_rate_t* instantiate_tax_class_rate(int include_optional);



tax_class_rate_t* instantiate_tax_class_rate(int include_optional) {
  tax_class_rate_t* tax_class_rate = NULL;
  if (include_optional) {
    tax_class_rate = tax_class_rate_create(
      "0",
      "0",
      1.337,
      56,
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      0,
      0
    );
  } else {
    tax_class_rate = tax_class_rate_create(
      "0",
      "0",
      1.337,
      56,
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      0,
      0
    );
  }

  return tax_class_rate;
}


#ifdef tax_class_rate_MAIN

void test_tax_class_rate(int include_optional) {
    tax_class_rate_t* tax_class_rate_1 = instantiate_tax_class_rate(include_optional);

	cJSON* jsontax_class_rate_1 = tax_class_rate_convertToJSON(tax_class_rate_1);
	printf("tax_class_rate :\n%s\n", cJSON_Print(jsontax_class_rate_1));
	tax_class_rate_t* tax_class_rate_2 = tax_class_rate_parseFromJSON(jsontax_class_rate_1);
	cJSON* jsontax_class_rate_2 = tax_class_rate_convertToJSON(tax_class_rate_2);
	printf("repeating tax_class_rate:\n%s\n", cJSON_Print(jsontax_class_rate_2));
}

int main() {
  test_tax_class_rate(1);
  test_tax_class_rate(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_class_rate_MAIN
#endif // tax_class_rate_TEST
