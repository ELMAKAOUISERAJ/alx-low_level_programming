#include <stdio.h>
/**
 * main - multiple two numbers
 * @argc: nb of arguments
 * @argv: array of arrguments
 * Return: always 0 succes
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if(argv != 3)
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
