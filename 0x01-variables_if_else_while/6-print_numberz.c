#include <stdio.h>

/**
 * main - all single digit numbers of base 10 starting from 0
 *
 * Return: always 0 succes
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
