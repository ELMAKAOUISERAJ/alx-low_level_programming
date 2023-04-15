#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple two numbers
 * @argc: nb of arguments
 * @argv: array of arrguments
 * Return: always 0 succes
 */
int main(int argc, char *argv[])
{
	int mult, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;
	printf("%d\n", mult);
	return (0);
}
