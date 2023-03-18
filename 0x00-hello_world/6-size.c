#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a_char;
	int a_int;
	float a_flt;
	double a_double;
	printf("the siz of char:%lu bytes\n", sizeof(a_char)); 
	printf("the size of int:%lu bytes\n", sizeof(a_int));
	printf("the size of float:%lu bytes\n", sizeof(a_flt));
	printf("the size of double :%lu bytes\n", sizeof(a_double));
}
