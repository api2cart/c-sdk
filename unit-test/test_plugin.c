#ifndef plugin_TEST
#define plugin_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plugin_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plugin.h"
plugin_t* instantiate_plugin(int include_optional);



plugin_t* instantiate_plugin(int include_optional) {
  plugin_t* plugin = NULL;
  if (include_optional) {
    plugin = plugin_create(
      "0",
      1,
      0,
      0
    );
  } else {
    plugin = plugin_create(
      "0",
      1,
      0,
      0
    );
  }

  return plugin;
}


#ifdef plugin_MAIN

void test_plugin(int include_optional) {
    plugin_t* plugin_1 = instantiate_plugin(include_optional);

	cJSON* jsonplugin_1 = plugin_convertToJSON(plugin_1);
	printf("plugin :\n%s\n", cJSON_Print(jsonplugin_1));
	plugin_t* plugin_2 = plugin_parseFromJSON(jsonplugin_1);
	cJSON* jsonplugin_2 = plugin_convertToJSON(plugin_2);
	printf("repeating plugin:\n%s\n", cJSON_Print(jsonplugin_2));
}

int main() {
  test_plugin(1);
  test_plugin(0);

  printf("Hello world \n");
  return 0;
}

#endif // plugin_MAIN
#endif // plugin_TEST
