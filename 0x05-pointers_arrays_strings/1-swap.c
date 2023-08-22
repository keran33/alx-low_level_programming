#include "main.h"

/**
 * swap_int - swaps two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: is 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
