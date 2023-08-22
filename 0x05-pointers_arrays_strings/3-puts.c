#include "main.h"

/**
 * _puts - function to print out a string.
 * @str: the variable.
 * Return: is 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
