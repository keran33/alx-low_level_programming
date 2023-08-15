#include "main.h"

/**
 * print_last_digit - to print the last digit
 * of an integer.
 * @n: the integer.
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
