#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of two integers.
 * @a: the first number.
 * @b: the second.
 *
 * Return: the sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 *op_sub - return the difference of two integers.
 *@a: the first number.
 *@b: the second number.
 *
 *Return: the difference of the two integers.
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 *op_mul - return the product of two integers.
 *@a: the first number.
 *@b: the second number.
 *
 *Return: the product of the two.
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 *op_div - return the division of two integers
 *@a: the first number.
 *@b: the second number.
 *
 *Return: the division of the two integers.
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 *op_mod - Return the modulus of two integers
 *@a: the first number.
 *@b: the second number
 *
 *Return: the remainder of their division.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
