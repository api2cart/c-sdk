#ifndef catalog_price_rule_TEST
#define catalog_price_rule_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define catalog_price_rule_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/catalog_price_rule.h"
catalog_price_rule_t* instantiate_catalog_price_rule(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


catalog_price_rule_t* instantiate_catalog_price_rule(int include_optional) {
  catalog_price_rule_t* catalog_price_rule = NULL;
  if (include_optional) {
    catalog_price_rule = catalog_price_rule_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      1.337,
      list_createList(),
      56,
      0,
      0
    );
  } else {
    catalog_price_rule = catalog_price_rule_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      list_createList(),
      NULL,
      NULL,
      NULL,
      1.337,
      list_createList(),
      56,
      0,
      0
    );
  }

  return catalog_price_rule;
}


#ifdef catalog_price_rule_MAIN

void test_catalog_price_rule(int include_optional) {
    catalog_price_rule_t* catalog_price_rule_1 = instantiate_catalog_price_rule(include_optional);

	cJSON* jsoncatalog_price_rule_1 = catalog_price_rule_convertToJSON(catalog_price_rule_1);
	printf("catalog_price_rule :\n%s\n", cJSON_Print(jsoncatalog_price_rule_1));
	catalog_price_rule_t* catalog_price_rule_2 = catalog_price_rule_parseFromJSON(jsoncatalog_price_rule_1);
	cJSON* jsoncatalog_price_rule_2 = catalog_price_rule_convertToJSON(catalog_price_rule_2);
	printf("repeating catalog_price_rule:\n%s\n", cJSON_Print(jsoncatalog_price_rule_2));
}

int main() {
  test_catalog_price_rule(1);
  test_catalog_price_rule(0);

  printf("Hello world \n");
  return 0;
}

#endif // catalog_price_rule_MAIN
#endif // catalog_price_rule_TEST
