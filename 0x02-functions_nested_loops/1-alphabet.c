#include "main.h"
/**
 * print_alphabet - Print the alphabet in lowercase.
 * Description: print_alphabet();
 * Return: always à success
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
