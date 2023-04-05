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
