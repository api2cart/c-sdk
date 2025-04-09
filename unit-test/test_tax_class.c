#ifndef tax_class_TEST
#define tax_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_class.h"
tax_class_t* instantiate_tax_class(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


tax_class_t* instantiate_tax_class(int include_optional) {
  tax_class_t* tax_class = NULL;
  if (include_optional) {
    tax_class = tax_class_create(
      "0",
      "0",
      1,
      1.337,
      56,
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      0,
      0
    );
  } else {
    tax_class = tax_class_create(
      "0",
      "0",
      1,
      1.337,
      56,
      NULL,
      NULL,
      0,
      0
    );
  }

  return tax_class;
}


#ifdef tax_class_MAIN

void test_tax_class(int include_optional) {
    tax_class_t* tax_class_1 = instantiate_tax_class(include_optional);

	cJSON* jsontax_class_1 = tax_class_convertToJSON(tax_class_1);
	printf("tax_class :\n%s\n", cJSON_Print(jsontax_class_1));
	tax_class_t* tax_class_2 = tax_class_parseFromJSON(jsontax_class_1);
	cJSON* jsontax_class_2 = tax_class_convertToJSON(tax_class_2);
	printf("repeating tax_class:\n%s\n", cJSON_Print(jsontax_class_2));
}

int main() {
  test_tax_class(1);
  test_tax_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_class_MAIN
#endif // tax_class_TEST
