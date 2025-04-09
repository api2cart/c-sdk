#ifndef tax_class_zip_codes_range_TEST
#define tax_class_zip_codes_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_class_zip_codes_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_class_zip_codes_range.h"
tax_class_zip_codes_range_t* instantiate_tax_class_zip_codes_range(int include_optional);



tax_class_zip_codes_range_t* instantiate_tax_class_zip_codes_range(int include_optional) {
  tax_class_zip_codes_range_t* tax_class_zip_codes_range = NULL;
  if (include_optional) {
    tax_class_zip_codes_range = tax_class_zip_codes_range_create(
      "0",
      "0",
      0,
      0
    );
  } else {
    tax_class_zip_codes_range = tax_class_zip_codes_range_create(
      "0",
      "0",
      0,
      0
    );
  }

  return tax_class_zip_codes_range;
}


#ifdef tax_class_zip_codes_range_MAIN

void test_tax_class_zip_codes_range(int include_optional) {
    tax_class_zip_codes_range_t* tax_class_zip_codes_range_1 = instantiate_tax_class_zip_codes_range(include_optional);

	cJSON* jsontax_class_zip_codes_range_1 = tax_class_zip_codes_range_convertToJSON(tax_class_zip_codes_range_1);
	printf("tax_class_zip_codes_range :\n%s\n", cJSON_Print(jsontax_class_zip_codes_range_1));
	tax_class_zip_codes_range_t* tax_class_zip_codes_range_2 = tax_class_zip_codes_range_parseFromJSON(jsontax_class_zip_codes_range_1);
	cJSON* jsontax_class_zip_codes_range_2 = tax_class_zip_codes_range_convertToJSON(tax_class_zip_codes_range_2);
	printf("repeating tax_class_zip_codes_range:\n%s\n", cJSON_Print(jsontax_class_zip_codes_range_2));
}

int main() {
  test_tax_class_zip_codes_range(1);
  test_tax_class_zip_codes_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_class_zip_codes_range_MAIN
#endif // tax_class_zip_codes_range_TEST
