#include "main.h"

/**
 * set_bit - function that sets the value of a
 * bit to 1 at a given index.
 * @n: number to be set.
 * @index: index to set bit.
 *
 * Return: 1 success, -1 error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setb;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setb = 1 << index;
	*n = *n | setb;
	return (1);
}
