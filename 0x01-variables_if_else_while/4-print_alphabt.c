#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char le;

		for (le = 'a'; le <= 'z'; le++)
		{
		if (le != 'e' && le != 'q')
		putchar(le);
		}
		putchar('\n');

	return (0);
}
