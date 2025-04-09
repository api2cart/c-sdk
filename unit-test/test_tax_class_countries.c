#ifndef tax_class_countries_TEST
#define tax_class_countries_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_class_countries_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_class_countries.h"
tax_class_countries_t* instantiate_tax_class_countries(int include_optional);



tax_class_countries_t* instantiate_tax_class_countries(int include_optional) {
  tax_class_countries_t* tax_class_countries = NULL;
  if (include_optional) {
    tax_class_countries = tax_class_countries_create(
      "0",
      "0",
      "0",
      1.337,
      56,
      list_createList(),
      0,
      0
    );
  } else {
    tax_class_countries = tax_class_countries_create(
      "0",
      "0",
      "0",
      1.337,
      56,
      list_createList(),
      0,
      0
    );
  }

  return tax_class_countries;
}


#ifdef tax_class_countries_MAIN

void test_tax_class_countries(int include_optional) {
    tax_class_countries_t* tax_class_countries_1 = instantiate_tax_class_countries(include_optional);

	cJSON* jsontax_class_countries_1 = tax_class_countries_convertToJSON(tax_class_countries_1);
	printf("tax_class_countries :\n%s\n", cJSON_Print(jsontax_class_countries_1));
	tax_class_countries_t* tax_class_countries_2 = tax_class_countries_parseFromJSON(jsontax_class_countries_1);
	cJSON* jsontax_class_countries_2 = tax_class_countries_convertToJSON(tax_class_countries_2);
	printf("repeating tax_class_countries:\n%s\n", cJSON_Print(jsontax_class_countries_2));
}

int main() {
  test_tax_class_countries(1);
  test_tax_class_countries(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_class_countries_MAIN
#endif // tax_class_countries_TEST
