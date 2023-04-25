#include "function_pointers.h"
/**
 * int_index - function that search for an integer
 * @array: input array
 * @size: size of array
 * @cmp: pointer to compare function
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++);
		{
			if (cmp(array[i] != 0)
					{
			return (i);
			}
		}
	}
}

