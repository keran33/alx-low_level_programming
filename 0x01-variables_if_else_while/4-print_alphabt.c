#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(1);
	putchar('\n');
	return (0);
}
