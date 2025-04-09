#ifndef response_customer_wishlist_list_result_TEST
#define response_customer_wishlist_list_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define response_customer_wishlist_list_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/response_customer_wishlist_list_result.h"
response_customer_wishlist_list_result_t* instantiate_response_customer_wishlist_list_result(int include_optional);



response_customer_wishlist_list_result_t* instantiate_response_customer_wishlist_list_result(int include_optional) {
  response_customer_wishlist_list_result_t* response_customer_wishlist_list_result = NULL;
  if (include_optional) {
    response_customer_wishlist_list_result = response_customer_wishlist_list_result_create(
      56,
      list_createList(),
      0,
      0
    );
  } else {
    response_customer_wishlist_list_result = response_customer_wishlist_list_result_create(
      56,
      list_createList(),
      0,
      0
    );
  }

  return response_customer_wishlist_list_result;
}


#ifdef response_customer_wishlist_list_result_MAIN

void test_response_customer_wishlist_list_result(int include_optional) {
    response_customer_wishlist_list_result_t* response_customer_wishlist_list_result_1 = instantiate_response_customer_wishlist_list_result(include_optional);

	cJSON* jsonresponse_customer_wishlist_list_result_1 = response_customer_wishlist_list_result_convertToJSON(response_customer_wishlist_list_result_1);
	printf("response_customer_wishlist_list_result :\n%s\n", cJSON_Print(jsonresponse_customer_wishlist_list_result_1));
	response_customer_wishlist_list_result_t* response_customer_wishlist_list_result_2 = response_customer_wishlist_list_result_parseFromJSON(jsonresponse_customer_wishlist_list_result_1);
	cJSON* jsonresponse_customer_wishlist_list_result_2 = response_customer_wishlist_list_result_convertToJSON(response_customer_wishlist_list_result_2);
	printf("repeating response_customer_wishlist_list_result:\n%s\n", cJSON_Print(jsonresponse_customer_wishlist_list_result_2));
}

int main() {
  test_response_customer_wishlist_list_result(1);
  test_response_customer_wishlist_list_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // response_customer_wishlist_list_result_MAIN
#endif // response_customer_wishlist_list_result_TEST
