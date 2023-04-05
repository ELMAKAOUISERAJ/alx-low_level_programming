#include "main.h"
/**
 * _strstr - finds the first occurrence
 * @haystack: source string
 * @needle: searching string
 * Return: the new string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * coincidence - define if the strin b is iside a
 * @a: source string
 * @b: searched string
 * Return: 1 if there is a coincidence 0 otherways
 */
int coincidence(char *a, char *b)
{
	while (*b && *b ==*a)
	{
		b++;
		a++;
	}
	if (*b == '\0')
		return (1);
	else
		return (0);
}
