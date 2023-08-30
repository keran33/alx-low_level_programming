#include "main.h"

/**
 * _strlen_recursion - return length of string.
 * @s: parameter to be passed.
 * Return: int strlen.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
