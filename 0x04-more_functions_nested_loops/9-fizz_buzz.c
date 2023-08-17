#include <stdio.h>
#include "main.h"

/**
 * main - entry point.
 *
 * Description: prints numbers 1-100
 * fizz for mul3, buzz for mul5
 * and fizzbuzz for both.
 *
 * Return:always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
