#include "function_pointers.h"
/**
 * array_eterator - execute a function given as parameter
 * for each element in the array
 * @array: input array
 * @size: size of array
 * @action: input function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
