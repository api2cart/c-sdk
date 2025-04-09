#ifndef account_supported_platforms_200_response_result_supported_platforms_inner_TEST
#define account_supported_platforms_200_response_result_supported_platforms_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_supported_platforms_200_response_result_supported_platforms_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_supported_platforms_200_response_result_supported_platforms_inner.h"
account_supported_platforms_200_response_result_supported_platforms_inner_t* instantiate_account_supported_platforms_200_response_result_supported_platforms_inner(int include_optional);

#include "test_account_supported_platforms_200_response_result_supported_platforms_inner_params.c"


account_supported_platforms_200_response_result_supported_platforms_inner_t* instantiate_account_supported_platforms_200_response_result_supported_platforms_inner(int include_optional) {
  account_supported_platforms_200_response_result_supported_platforms_inner_t* account_supported_platforms_200_response_result_supported_platforms_inner = NULL;
  if (include_optional) {
    account_supported_platforms_200_response_result_supported_platforms_inner = account_supported_platforms_200_response_result_supported_platforms_inner_create(
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_account_supported_platforms_200_response_result_supported_platforms_inner_params(0)
    );
  } else {
    account_supported_platforms_200_response_result_supported_platforms_inner = account_supported_platforms_200_response_result_supported_platforms_inner_create(
      "0",
      "0",
      "0",
      "0",
      NULL
    );
  }

  return account_supported_platforms_200_response_result_supported_platforms_inner;
}


#ifdef account_supported_platforms_200_response_result_supported_platforms_inner_MAIN

void test_account_supported_platforms_200_response_result_supported_platforms_inner(int include_optional) {
    account_supported_platforms_200_response_result_supported_platforms_inner_t* account_supported_platforms_200_response_result_supported_platforms_inner_1 = instantiate_account_supported_platforms_200_response_result_supported_platforms_inner(include_optional);

	cJSON* jsonaccount_supported_platforms_200_response_result_supported_platforms_inner_1 = account_supported_platforms_200_response_result_supported_platforms_inner_convertToJSON(account_supported_platforms_200_response_result_supported_platforms_inner_1);
	printf("account_supported_platforms_200_response_result_supported_platforms_inner :\n%s\n", cJSON_Print(jsonaccount_supported_platforms_200_response_result_supported_platforms_inner_1));
	account_supported_platforms_200_response_result_supported_platforms_inner_t* account_supported_platforms_200_response_result_supported_platforms_inner_2 = account_supported_platforms_200_response_result_supported_platforms_inner_parseFromJSON(jsonaccount_supported_platforms_200_response_result_supported_platforms_inner_1);
	cJSON* jsonaccount_supported_platforms_200_response_result_supported_platforms_inner_2 = account_supported_platforms_200_response_result_supported_platforms_inner_convertToJSON(account_supported_platforms_200_response_result_supported_platforms_inner_2);
	printf("repeating account_supported_platforms_200_response_result_supported_platforms_inner:\n%s\n", cJSON_Print(jsonaccount_supported_platforms_200_response_result_supported_platforms_inner_2));
}

int main() {
  test_account_supported_platforms_200_response_result_supported_platforms_inner(1);
  test_account_supported_platforms_200_response_result_supported_platforms_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_supported_platforms_200_response_result_supported_platforms_inner_MAIN
#endif // account_supported_platforms_200_response_result_supported_platforms_inner_TEST
