#ifndef order_financial_status_list_200_response_result_order_financial_statuses_inner_TEST
#define order_financial_status_list_200_response_result_order_financial_statuses_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_financial_status_list_200_response_result_order_financial_statuses_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_financial_status_list_200_response_result_order_financial_statuses_inner.h"
order_financial_status_list_200_response_result_order_financial_statuses_inner_t* instantiate_order_financial_status_list_200_response_result_order_financial_statuses_inner(int include_optional);



order_financial_status_list_200_response_result_order_financial_statuses_inner_t* instantiate_order_financial_status_list_200_response_result_order_financial_statuses_inner(int include_optional) {
  order_financial_status_list_200_response_result_order_financial_statuses_inner_t* order_financial_status_list_200_response_result_order_financial_statuses_inner = NULL;
  if (include_optional) {
    order_financial_status_list_200_response_result_order_financial_statuses_inner = order_financial_status_list_200_response_result_order_financial_statuses_inner_create(
      "0",
      "0"
    );
  } else {
    order_financial_status_list_200_response_result_order_financial_statuses_inner = order_financial_status_list_200_response_result_order_financial_statuses_inner_create(
      "0",
      "0"
    );
  }

  return order_financial_status_list_200_response_result_order_financial_statuses_inner;
}


#ifdef order_financial_status_list_200_response_result_order_financial_statuses_inner_MAIN

void test_order_financial_status_list_200_response_result_order_financial_statuses_inner(int include_optional) {
    order_financial_status_list_200_response_result_order_financial_statuses_inner_t* order_financial_status_list_200_response_result_order_financial_statuses_inner_1 = instantiate_order_financial_status_list_200_response_result_order_financial_statuses_inner(include_optional);

	cJSON* jsonorder_financial_status_list_200_response_result_order_financial_statuses_inner_1 = order_financial_status_list_200_response_result_order_financial_statuses_inner_convertToJSON(order_financial_status_list_200_response_result_order_financial_statuses_inner_1);
	printf("order_financial_status_list_200_response_result_order_financial_statuses_inner :\n%s\n", cJSON_Print(jsonorder_financial_status_list_200_response_result_order_financial_statuses_inner_1));
	order_financial_status_list_200_response_result_order_financial_statuses_inner_t* order_financial_status_list_200_response_result_order_financial_statuses_inner_2 = order_financial_status_list_200_response_result_order_financial_statuses_inner_parseFromJSON(jsonorder_financial_status_list_200_response_result_order_financial_statuses_inner_1);
	cJSON* jsonorder_financial_status_list_200_response_result_order_financial_statuses_inner_2 = order_financial_status_list_200_response_result_order_financial_statuses_inner_convertToJSON(order_financial_status_list_200_response_result_order_financial_statuses_inner_2);
	printf("repeating order_financial_status_list_200_response_result_order_financial_statuses_inner:\n%s\n", cJSON_Print(jsonorder_financial_status_list_200_response_result_order_financial_statuses_inner_2));
}

int main() {
  test_order_financial_status_list_200_response_result_order_financial_statuses_inner(1);
  test_order_financial_status_list_200_response_result_order_financial_statuses_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_financial_status_list_200_response_result_order_financial_statuses_inner_MAIN
#endif // order_financial_status_list_200_response_result_order_financial_statuses_inner_TEST
