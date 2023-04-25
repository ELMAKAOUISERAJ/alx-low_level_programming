#include "3-calc.h"
/**
 * op_add - add two int
 * @a: number 1
 * @b: NUMBER 2
 * Return: Sum of 1 & 2
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two numbers
 * @a: first inreger
 * @b: second integer
 * Return: substraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiple two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of number by other
 * @a: first number
 * @b: second number
 * Return: division result
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
/**
 * op_mod - remainder of the division 
 * @a: first number
 * @b:second number
 * Return: modulo a & b
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
