#include "main.h"

/**
 * _pow_recursion - raises x to the power y.
 * @x: base integer.
 * @y: the power to raise by.
 * Return: the power or -1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
