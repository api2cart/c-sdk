#ifndef account_cart_add_200_response_result_TEST
#define account_cart_add_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_cart_add_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_cart_add_200_response_result.h"
account_cart_add_200_response_result_t* instantiate_account_cart_add_200_response_result(int include_optional);



account_cart_add_200_response_result_t* instantiate_account_cart_add_200_response_result(int include_optional) {
  account_cart_add_200_response_result_t* account_cart_add_200_response_result = NULL;
  if (include_optional) {
    account_cart_add_200_response_result = account_cart_add_200_response_result_create(
      "0"
    );
  } else {
    account_cart_add_200_response_result = account_cart_add_200_response_result_create(
      "0"
    );
  }

  return account_cart_add_200_response_result;
}


#ifdef account_cart_add_200_response_result_MAIN

void test_account_cart_add_200_response_result(int include_optional) {
    account_cart_add_200_response_result_t* account_cart_add_200_response_result_1 = instantiate_account_cart_add_200_response_result(include_optional);

	cJSON* jsonaccount_cart_add_200_response_result_1 = account_cart_add_200_response_result_convertToJSON(account_cart_add_200_response_result_1);
	printf("account_cart_add_200_response_result :\n%s\n", cJSON_Print(jsonaccount_cart_add_200_response_result_1));
	account_cart_add_200_response_result_t* account_cart_add_200_response_result_2 = account_cart_add_200_response_result_parseFromJSON(jsonaccount_cart_add_200_response_result_1);
	cJSON* jsonaccount_cart_add_200_response_result_2 = account_cart_add_200_response_result_convertToJSON(account_cart_add_200_response_result_2);
	printf("repeating account_cart_add_200_response_result:\n%s\n", cJSON_Print(jsonaccount_cart_add_200_response_result_2));
}

int main() {
  test_account_cart_add_200_response_result(1);
  test_account_cart_add_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_cart_add_200_response_result_MAIN
#endif // account_cart_add_200_response_result_TEST
