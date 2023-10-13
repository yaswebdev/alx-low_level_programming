#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - the function to print the sumi .
 * @n: the integer to add .
 * Return: sum .
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;
va_list ptr;

if (n == 0)
	return (0);
va_start(ptr, n);
for (i = 0; i < n; i++)
	sum += va_arg(ptr, int);
va_end(ptr);
return (sum);
}
