#include "main"

/**
 * print_line -Write a function that draws a straight line in the terminal.
* @n: Integer amount of _
*/
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
		_putchar('_');
	_putchar('\n');
		}
}
