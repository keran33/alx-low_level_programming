#include "main.h"

/**
 * _isalpha - to determine whether uppercae.
 *@c: character checked
 * Return: 1 if c is a letter, 0 otherwise.
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
