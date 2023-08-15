#include "main.h"

/**
 * print_sign - to print the sign of an integer.
 * @n: the integer to be checked.
 * Return: 1 if greater than 0, 0 if zero and
 * -1 if less than zero.
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
