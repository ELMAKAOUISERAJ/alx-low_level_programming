#include <stdio.h>
/**
 * main - print number of argument passed
 * @argc: num of parameters
 * @argv: array of parameters
 * REturn: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
