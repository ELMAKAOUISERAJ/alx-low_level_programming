#include "main.h"
#include <stdio.h>
/**
 * _isdigit - chechs for a digit
 *@c: char
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c);
{
	int c;

		if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
