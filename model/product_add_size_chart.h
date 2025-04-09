/*
 * product_add_size_chart.h
 *
 * A size chart for the product. Only one property is supported.
 */

#ifndef _product_add_size_chart_H_
#define _product_add_size_chart_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_size_chart_t product_add_size_chart_t;




typedef struct product_add_size_chart_t {
    char *id; // string
    char *url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_size_chart_t;

__attribute__((deprecated)) product_add_size_chart_t *product_add_size_chart_create(
    char *id,
    char *url
);

void product_add_size_chart_free(product_add_size_chart_t *product_add_size_chart);

product_add_size_chart_t *product_add_size_chart_parseFromJSON(cJSON *product_add_size_chartJSON);

cJSON *product_add_size_chart_convertToJSON(product_add_size_chart_t *product_add_size_chart);

#endif /* _product_add_size_chart_H_ */

