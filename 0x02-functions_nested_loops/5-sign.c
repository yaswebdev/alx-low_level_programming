#include "main.h"

/**
 * print_sign - function that returns the sign of a number
 * @n: the number to check if it is negative or positive
 * Return: 1 if it is positive, 0 if it is null, -1 if it is negative
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
