#include "main.h"

/**
 * _strchr - locate character.
 * @s: string.
 * @c: character to search.
 * Return: s or null.
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
