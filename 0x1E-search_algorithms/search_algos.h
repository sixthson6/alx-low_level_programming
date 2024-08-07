#include <stddef.h>
#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* helper functions */
void print_array(int *array, size_t left, size_t right);

#endif
