#ifndef tax_class_zip_codes_TEST
#define tax_class_zip_codes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_class_zip_codes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_class_zip_codes.h"
tax_class_zip_codes_t* instantiate_tax_class_zip_codes(int include_optional);



tax_class_zip_codes_t* instantiate_tax_class_zip_codes(int include_optional) {
  tax_class_zip_codes_t* tax_class_zip_codes = NULL;
  if (include_optional) {
    tax_class_zip_codes = tax_class_zip_codes_create(
      1,
      list_createList(),
      list_createList(),
      0,
      0
    );
  } else {
    tax_class_zip_codes = tax_class_zip_codes_create(
      1,
      list_createList(),
      list_createList(),
      0,
      0
    );
  }

  return tax_class_zip_codes;
}


#ifdef tax_class_zip_codes_MAIN

void test_tax_class_zip_codes(int include_optional) {
    tax_class_zip_codes_t* tax_class_zip_codes_1 = instantiate_tax_class_zip_codes(include_optional);

	cJSON* jsontax_class_zip_codes_1 = tax_class_zip_codes_convertToJSON(tax_class_zip_codes_1);
	printf("tax_class_zip_codes :\n%s\n", cJSON_Print(jsontax_class_zip_codes_1));
	tax_class_zip_codes_t* tax_class_zip_codes_2 = tax_class_zip_codes_parseFromJSON(jsontax_class_zip_codes_1);
	cJSON* jsontax_class_zip_codes_2 = tax_class_zip_codes_convertToJSON(tax_class_zip_codes_2);
	printf("repeating tax_class_zip_codes:\n%s\n", cJSON_Print(jsontax_class_zip_codes_2));
}

int main() {
  test_tax_class_zip_codes(1);
  test_tax_class_zip_codes(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_class_zip_codes_MAIN
#endif // tax_class_zip_codes_TEST
