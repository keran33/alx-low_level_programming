#include "main.h"

/**
 * _strpbrk - searches a set of bytes in a string.
 * @s: string to search from.
 * @accept: string to search in s.
 * Return: accept of NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
