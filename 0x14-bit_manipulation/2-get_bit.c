#include "main.h"

/**
 * get_bit - function that returns the value of a
 * bit at a given index.
 * @n: number to check.
 * @index: the index to check.
 *
 * Return: value of the bit, -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
