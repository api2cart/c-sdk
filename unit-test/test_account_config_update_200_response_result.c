#ifndef account_config_update_200_response_result_TEST
#define account_config_update_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_config_update_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_config_update_200_response_result.h"
account_config_update_200_response_result_t* instantiate_account_config_update_200_response_result(int include_optional);



account_config_update_200_response_result_t* instantiate_account_config_update_200_response_result(int include_optional) {
  account_config_update_200_response_result_t* account_config_update_200_response_result = NULL;
  if (include_optional) {
    account_config_update_200_response_result = account_config_update_200_response_result_create(
      56
    );
  } else {
    account_config_update_200_response_result = account_config_update_200_response_result_create(
      56
    );
  }

  return account_config_update_200_response_result;
}


#ifdef account_config_update_200_response_result_MAIN

void test_account_config_update_200_response_result(int include_optional) {
    account_config_update_200_response_result_t* account_config_update_200_response_result_1 = instantiate_account_config_update_200_response_result(include_optional);

	cJSON* jsonaccount_config_update_200_response_result_1 = account_config_update_200_response_result_convertToJSON(account_config_update_200_response_result_1);
	printf("account_config_update_200_response_result :\n%s\n", cJSON_Print(jsonaccount_config_update_200_response_result_1));
	account_config_update_200_response_result_t* account_config_update_200_response_result_2 = account_config_update_200_response_result_parseFromJSON(jsonaccount_config_update_200_response_result_1);
	cJSON* jsonaccount_config_update_200_response_result_2 = account_config_update_200_response_result_convertToJSON(account_config_update_200_response_result_2);
	printf("repeating account_config_update_200_response_result:\n%s\n", cJSON_Print(jsonaccount_config_update_200_response_result_2));
}

int main() {
  test_account_config_update_200_response_result(1);
  test_account_config_update_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_config_update_200_response_result_MAIN
#endif // account_config_update_200_response_result_TEST
