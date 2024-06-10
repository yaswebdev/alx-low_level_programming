#include "main.h"

/**
 * print_last_digit - function prototype that return last digit
 * @n: last digit
 * Return: return last digit of an integer
 */

int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
n = -n;
}
last_digit = n % 10;
return (last_digit);
}
