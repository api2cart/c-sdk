#ifndef tax_class_states_TEST
#define tax_class_states_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_class_states_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_class_states.h"
tax_class_states_t* instantiate_tax_class_states(int include_optional);



tax_class_states_t* instantiate_tax_class_states(int include_optional) {
  tax_class_states_t* tax_class_states = NULL;
  if (include_optional) {
    tax_class_states = tax_class_states_create(
      "0",
      1.337,
      56,
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    tax_class_states = tax_class_states_create(
      "0",
      1.337,
      56,
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  }

  return tax_class_states;
}


#ifdef tax_class_states_MAIN

void test_tax_class_states(int include_optional) {
    tax_class_states_t* tax_class_states_1 = instantiate_tax_class_states(include_optional);

	cJSON* jsontax_class_states_1 = tax_class_states_convertToJSON(tax_class_states_1);
	printf("tax_class_states :\n%s\n", cJSON_Print(jsontax_class_states_1));
	tax_class_states_t* tax_class_states_2 = tax_class_states_parseFromJSON(jsontax_class_states_1);
	cJSON* jsontax_class_states_2 = tax_class_states_convertToJSON(tax_class_states_2);
	printf("repeating tax_class_states:\n%s\n", cJSON_Print(jsontax_class_states_2));
}

int main() {
  test_tax_class_states(1);
  test_tax_class_states(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_class_states_MAIN
#endif // tax_class_states_TEST
