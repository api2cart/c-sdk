#ifndef gift_card_TEST
#define gift_card_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gift_card_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gift_card.h"
gift_card_t* instantiate_gift_card(int include_optional);



gift_card_t* instantiate_gift_card(int include_optional) {
  gift_card_t* gift_card = NULL;
  if (include_optional) {
    gift_card = gift_card_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    gift_card = gift_card_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  }

  return gift_card;
}


#ifdef gift_card_MAIN

void test_gift_card(int include_optional) {
    gift_card_t* gift_card_1 = instantiate_gift_card(include_optional);

	cJSON* jsongift_card_1 = gift_card_convertToJSON(gift_card_1);
	printf("gift_card :\n%s\n", cJSON_Print(jsongift_card_1));
	gift_card_t* gift_card_2 = gift_card_parseFromJSON(jsongift_card_1);
	cJSON* jsongift_card_2 = gift_card_convertToJSON(gift_card_2);
	printf("repeating gift_card:\n%s\n", cJSON_Print(jsongift_card_2));
}

int main() {
  test_gift_card(1);
  test_gift_card(0);

  printf("Hello world \n");
  return 0;
}

#endif // gift_card_MAIN
#endif // gift_card_TEST
