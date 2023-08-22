#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an int array.
 * @a: array to be used.
 * @n: the variable.
 *
 * Return: is 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
