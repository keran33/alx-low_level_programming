#include "main.h"

/**
 * flip_bits - function that returns the number o
 * bits you would need to flip to get from one
 * number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, bitcount = 0;
	unsigned long int now;
	unsigned long int tobe = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		now = tobe >> a;
		if (now & 1)
			bitcount++;
	}
	return (bitcount);
}
