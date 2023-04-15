#include <stdio.h>
/**
 * main - print all argument it receive
 * @argc: nb of argument
 * @argv: array of argument
 * Return: always 0 succes
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
}
return (0);
}
