#include "main"

/**
 * print_line -Write a function that draws a straight line in the terminal.
* @n: Integer amount of _
*/
void print_line(int n)
{
	int c;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
			for (c = 0; c <= n; c++)
		{
		_putchar(95);
	_putchar('\n');
		}
}
