#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: distination
 * @src: source
 * @n: lenght of buffer
 * Return: the new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
			i++;
	}
	return (dest);
}
