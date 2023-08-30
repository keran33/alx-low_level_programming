#include "main.h"

/**
 * factorial - returns the factorial.
 * @n: the parameter int.
 * Return: an integer factorial or error.
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
