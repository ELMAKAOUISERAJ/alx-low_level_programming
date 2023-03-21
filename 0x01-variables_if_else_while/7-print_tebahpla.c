#include <stdio.h>

/**
 * main - lowercase alphabet in reverse
 *
 * Return: always 0 success
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
