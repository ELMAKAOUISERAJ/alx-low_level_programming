#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that search for an integer
 * @array: input array
 * @size: size of array
 * @cmp: pointer to compare function
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	 unsigned int i;

	if (array != NULL && size > 0 && action != NULL )
		{
			for (i = 0; i < size; i++)
				action(array[i]);
		}

