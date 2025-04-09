#ifndef account_cart_list_200_response_TEST
#define account_cart_list_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_cart_list_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_cart_list_200_response.h"
account_cart_list_200_response_t* instantiate_account_cart_list_200_response(int include_optional);

#include "test_account_cart_list_200_response_result.c"


account_cart_list_200_response_t* instantiate_account_cart_list_200_response(int include_optional) {
  account_cart_list_200_response_t* account_cart_list_200_response = NULL;
  if (include_optional) {
    account_cart_list_200_response = account_cart_list_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_account_cart_list_200_response_result(0)
    );
  } else {
    account_cart_list_200_response = account_cart_list_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return account_cart_list_200_response;
}


#ifdef account_cart_list_200_response_MAIN

void test_account_cart_list_200_response(int include_optional) {
    account_cart_list_200_response_t* account_cart_list_200_response_1 = instantiate_account_cart_list_200_response(include_optional);

	cJSON* jsonaccount_cart_list_200_response_1 = account_cart_list_200_response_convertToJSON(account_cart_list_200_response_1);
	printf("account_cart_list_200_response :\n%s\n", cJSON_Print(jsonaccount_cart_list_200_response_1));
	account_cart_list_200_response_t* account_cart_list_200_response_2 = account_cart_list_200_response_parseFromJSON(jsonaccount_cart_list_200_response_1);
	cJSON* jsonaccount_cart_list_200_response_2 = account_cart_list_200_response_convertToJSON(account_cart_list_200_response_2);
	printf("repeating account_cart_list_200_response:\n%s\n", cJSON_Print(jsonaccount_cart_list_200_response_2));
}

int main() {
  test_account_cart_list_200_response(1);
  test_account_cart_list_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_cart_list_200_response_MAIN
#endif // account_cart_list_200_response_TEST
