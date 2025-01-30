#ifndef	__SEARCH_ALGOS__
#define __SEARCH_ALGOS__

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);


#endif /* __SEARCH_ALGOS__ */
