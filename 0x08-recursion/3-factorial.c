#include "main.h"
/**
 * factorial - print factorial for given number
 * @n: given number
 * Return : the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}

