#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an  array of integers
 * @min: minimuim int in array
 * @max: maximium int in array
 * Return: pointer to memoey space or Null
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(p + i) = min;
	return (p);
}
