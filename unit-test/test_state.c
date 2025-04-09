#ifndef state_TEST
#define state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/state.h"
state_t* instantiate_state(int include_optional);



state_t* instantiate_state(int include_optional) {
  state_t* state = NULL;
  if (include_optional) {
    state = state_create(
      "0",
      "0",
      0,
      0
    );
  } else {
    state = state_create(
      "0",
      "0",
      0,
      0
    );
  }

  return state;
}


#ifdef state_MAIN

void test_state(int include_optional) {
    state_t* state_1 = instantiate_state(include_optional);

	cJSON* jsonstate_1 = state_convertToJSON(state_1);
	printf("state :\n%s\n", cJSON_Print(jsonstate_1));
	state_t* state_2 = state_parseFromJSON(jsonstate_1);
	cJSON* jsonstate_2 = state_convertToJSON(state_2);
	printf("repeating state:\n%s\n", cJSON_Print(jsonstate_2));
}

int main() {
  test_state(1);
  test_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // state_MAIN
#endif // state_TEST
