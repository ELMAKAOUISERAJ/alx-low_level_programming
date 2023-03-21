#include <stdio.h>

/**
 * main - all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 succes
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%i", x);
	putchar(x);
	return (0);
}
