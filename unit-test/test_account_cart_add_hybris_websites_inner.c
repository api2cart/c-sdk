#ifndef account_cart_add_hybris_websites_inner_TEST
#define account_cart_add_hybris_websites_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_cart_add_hybris_websites_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_cart_add_hybris_websites_inner.h"
account_cart_add_hybris_websites_inner_t* instantiate_account_cart_add_hybris_websites_inner(int include_optional);



account_cart_add_hybris_websites_inner_t* instantiate_account_cart_add_hybris_websites_inner(int include_optional) {
  account_cart_add_hybris_websites_inner_t* account_cart_add_hybris_websites_inner = NULL;
  if (include_optional) {
    account_cart_add_hybris_websites_inner = account_cart_add_hybris_websites_inner_create(
      "0",
      "0",
      list_createList()
    );
  } else {
    account_cart_add_hybris_websites_inner = account_cart_add_hybris_websites_inner_create(
      "0",
      "0",
      list_createList()
    );
  }

  return account_cart_add_hybris_websites_inner;
}


#ifdef account_cart_add_hybris_websites_inner_MAIN

void test_account_cart_add_hybris_websites_inner(int include_optional) {
    account_cart_add_hybris_websites_inner_t* account_cart_add_hybris_websites_inner_1 = instantiate_account_cart_add_hybris_websites_inner(include_optional);

	cJSON* jsonaccount_cart_add_hybris_websites_inner_1 = account_cart_add_hybris_websites_inner_convertToJSON(account_cart_add_hybris_websites_inner_1);
	printf("account_cart_add_hybris_websites_inner :\n%s\n", cJSON_Print(jsonaccount_cart_add_hybris_websites_inner_1));
	account_cart_add_hybris_websites_inner_t* account_cart_add_hybris_websites_inner_2 = account_cart_add_hybris_websites_inner_parseFromJSON(jsonaccount_cart_add_hybris_websites_inner_1);
	cJSON* jsonaccount_cart_add_hybris_websites_inner_2 = account_cart_add_hybris_websites_inner_convertToJSON(account_cart_add_hybris_websites_inner_2);
	printf("repeating account_cart_add_hybris_websites_inner:\n%s\n", cJSON_Print(jsonaccount_cart_add_hybris_websites_inner_2));
}

int main() {
  test_account_cart_add_hybris_websites_inner(1);
  test_account_cart_add_hybris_websites_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_cart_add_hybris_websites_inner_MAIN
#endif // account_cart_add_hybris_websites_inner_TEST
