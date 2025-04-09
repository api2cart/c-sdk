#ifndef catalog_price_rule_action_TEST
#define catalog_price_rule_action_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define catalog_price_rule_action_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/catalog_price_rule_action.h"
catalog_price_rule_action_t* instantiate_catalog_price_rule_action(int include_optional);



catalog_price_rule_action_t* instantiate_catalog_price_rule_action(int include_optional) {
  catalog_price_rule_action_t* catalog_price_rule_action = NULL;
  if (include_optional) {
    catalog_price_rule_action = catalog_price_rule_action_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      1,
      list_createList(),
      0,
      0
    );
  } else {
    catalog_price_rule_action = catalog_price_rule_action_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      1,
      list_createList(),
      0,
      0
    );
  }

  return catalog_price_rule_action;
}


#ifdef catalog_price_rule_action_MAIN

void test_catalog_price_rule_action(int include_optional) {
    catalog_price_rule_action_t* catalog_price_rule_action_1 = instantiate_catalog_price_rule_action(include_optional);

	cJSON* jsoncatalog_price_rule_action_1 = catalog_price_rule_action_convertToJSON(catalog_price_rule_action_1);
	printf("catalog_price_rule_action :\n%s\n", cJSON_Print(jsoncatalog_price_rule_action_1));
	catalog_price_rule_action_t* catalog_price_rule_action_2 = catalog_price_rule_action_parseFromJSON(jsoncatalog_price_rule_action_1);
	cJSON* jsoncatalog_price_rule_action_2 = catalog_price_rule_action_convertToJSON(catalog_price_rule_action_2);
	printf("repeating catalog_price_rule_action:\n%s\n", cJSON_Print(jsoncatalog_price_rule_action_2));
}

int main() {
  test_catalog_price_rule_action(1);
  test_catalog_price_rule_action(0);

  printf("Hello world \n");
  return 0;
}

#endif // catalog_price_rule_action_MAIN
#endif // catalog_price_rule_action_TEST
