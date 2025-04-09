#ifndef plugin_list_TEST
#define plugin_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plugin_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plugin_list.h"
plugin_list_t* instantiate_plugin_list(int include_optional);



plugin_list_t* instantiate_plugin_list(int include_optional) {
  plugin_list_t* plugin_list = NULL;
  if (include_optional) {
    plugin_list = plugin_list_create(
      56,
      list_createList(),
      0,
      0
    );
  } else {
    plugin_list = plugin_list_create(
      56,
      list_createList(),
      0,
      0
    );
  }

  return plugin_list;
}


#ifdef plugin_list_MAIN

void test_plugin_list(int include_optional) {
    plugin_list_t* plugin_list_1 = instantiate_plugin_list(include_optional);

	cJSON* jsonplugin_list_1 = plugin_list_convertToJSON(plugin_list_1);
	printf("plugin_list :\n%s\n", cJSON_Print(jsonplugin_list_1));
	plugin_list_t* plugin_list_2 = plugin_list_parseFromJSON(jsonplugin_list_1);
	cJSON* jsonplugin_list_2 = plugin_list_convertToJSON(plugin_list_2);
	printf("repeating plugin_list:\n%s\n", cJSON_Print(jsonplugin_list_2));
}

int main() {
  test_plugin_list(1);
  test_plugin_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // plugin_list_MAIN
#endif // plugin_list_TEST
