#include "main.h"

/**
 * _strchr - locate a character
 * @s: source string
 * @c: wanted char
 * Return:the new  string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
		else
			return (0);
}
