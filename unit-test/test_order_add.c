#ifndef order_add_TEST
#define order_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_add.h"
order_add_t* instantiate_order_add(int include_optional);



order_add_t* instantiate_order_add(int include_optional) {
  order_add_t* order_add = NULL;
  if (include_optional) {
    order_add = order_add_create(
      "10",
      "25",
      "1",
      "1",
      "Completed",
      true,
      true,
      "jubari@hannsgroup.com",
      "Adam",
      "Smith",
      "Green str. 35",
      "Chicago",
      "12345",
      "IL",
      "US",
      "John",
      "Smith",
      "Green str. 35",
      "Chicago",
      "24545",
      "IL",
      "US",
      23.56,
      "2012-09-25 19:40:00",
      "PayPal",
      "d41d8cd98f00b204e9800998ecf8427e",
      "UPS Ground",
      "USD",
      "Red str, 2",
      "Apple",
      "8 800 5659 6896",
      "545 45878",
      "This coole order",
      "Test admin comment",
      "Test admin private comment",
      "John",
      "Smith",
      "88008547457",
      "US",
      "1990-12-03",
      "5656598",
      "Green str. 35",
      "Apple",
      "880086544564",
      "556868",
      "2014-05-05 05:05:00",
      "2014-06-05 05:05:00",
      563.23,
      5.5,
      true,
      5.5,
      5.5,
      "USPS",
      "1",
      5.5,
      5.5,
      list_createList(),
      5.5,
      "fulfilled",
      "paid",
      23.56,
      "POS",
      "tag1,tag2",
      "bypass",
      true,
      list_createList(),
      23,
      false,
      "newsletter",
      list_createList()
    );
  } else {
    order_add = order_add_create(
      "10",
      "25",
      "1",
      "1",
      "Completed",
      true,
      true,
      "jubari@hannsgroup.com",
      "Adam",
      "Smith",
      "Green str. 35",
      "Chicago",
      "12345",
      "IL",
      "US",
      "John",
      "Smith",
      "Green str. 35",
      "Chicago",
      "24545",
      "IL",
      "US",
      23.56,
      "2012-09-25 19:40:00",
      "PayPal",
      "d41d8cd98f00b204e9800998ecf8427e",
      "UPS Ground",
      "USD",
      "Red str, 2",
      "Apple",
      "8 800 5659 6896",
      "545 45878",
      "This coole order",
      "Test admin comment",
      "Test admin private comment",
      "John",
      "Smith",
      "88008547457",
      "US",
      "1990-12-03",
      "5656598",
      "Green str. 35",
      "Apple",
      "880086544564",
      "556868",
      "2014-05-05 05:05:00",
      "2014-06-05 05:05:00",
      563.23,
      5.5,
      true,
      5.5,
      5.5,
      "USPS",
      "1",
      5.5,
      5.5,
      list_createList(),
      5.5,
      "fulfilled",
      "paid",
      23.56,
      "POS",
      "tag1,tag2",
      "bypass",
      true,
      list_createList(),
      23,
      false,
      "newsletter",
      list_createList()
    );
  }

  return order_add;
}


#ifdef order_add_MAIN

void test_order_add(int include_optional) {
    order_add_t* order_add_1 = instantiate_order_add(include_optional);

	cJSON* jsonorder_add_1 = order_add_convertToJSON(order_add_1);
	printf("order_add :\n%s\n", cJSON_Print(jsonorder_add_1));
	order_add_t* order_add_2 = order_add_parseFromJSON(jsonorder_add_1);
	cJSON* jsonorder_add_2 = order_add_convertToJSON(order_add_2);
	printf("repeating order_add:\n%s\n", cJSON_Print(jsonorder_add_2));
}

int main() {
  test_order_add(1);
  test_order_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_add_MAIN
#endif // order_add_TEST
