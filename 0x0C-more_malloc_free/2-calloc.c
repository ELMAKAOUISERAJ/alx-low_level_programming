#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocate memory to an array using malloc
 *@nmemb: elements of array
 *@size: size of an array
 *Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
		unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(mem + i) = 0;
	return ((void *)mem);
}
