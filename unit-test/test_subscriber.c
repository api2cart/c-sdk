#ifndef subscriber_TEST
#define subscriber_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscriber_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscriber.h"
subscriber_t* instantiate_subscriber(int include_optional);



subscriber_t* instantiate_subscriber(int include_optional) {
  subscriber_t* subscriber = NULL;
  if (include_optional) {
    subscriber = subscriber_create(
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      0,
      0
    );
  } else {
    subscriber = subscriber_create(
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      0,
      0
    );
  }

  return subscriber;
}


#ifdef subscriber_MAIN

void test_subscriber(int include_optional) {
    subscriber_t* subscriber_1 = instantiate_subscriber(include_optional);

	cJSON* jsonsubscriber_1 = subscriber_convertToJSON(subscriber_1);
	printf("subscriber :\n%s\n", cJSON_Print(jsonsubscriber_1));
	subscriber_t* subscriber_2 = subscriber_parseFromJSON(jsonsubscriber_1);
	cJSON* jsonsubscriber_2 = subscriber_convertToJSON(subscriber_2);
	printf("repeating subscriber:\n%s\n", cJSON_Print(jsonsubscriber_2));
}

int main() {
  test_subscriber(1);
  test_subscriber(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscriber_MAIN
#endif // subscriber_TEST
