#include "main.h"
/**
 * print_last_digit -prints the last digit of a number
 * @n: input number
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}
}
