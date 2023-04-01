#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: the pointer to the dest
 */
char *cap_string(char *s)
{
	int count = 0;

	while (*(s + count) != '\n'))
	{
	if ((*(s + count) >= 97) && (*(s + count) <= 122))
	*(s + count) = *(s + count) - 32;
count++;
	}
	return(s);
}
