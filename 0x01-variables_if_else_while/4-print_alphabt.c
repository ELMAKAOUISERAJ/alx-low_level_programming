#include <stdio.h>
/**
 * main - Entry point 
 * When I was having that alphabet soup, I never thought that it would pay off
 * Return : Always 0 succes
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		if (x != 'q' && x != 'e')
		       putchar(x);
putchar('\n');
return (0);
}
