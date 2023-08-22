#include "main.h"
#include <stdio.h>

/**
 * main - crack the code.
 * Return: the code.
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		_putchar(c);
	}
	_putchar(2772 - sum);

	return (0);
}
