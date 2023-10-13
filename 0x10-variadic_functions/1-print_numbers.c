#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - function to print numbers .
 * @new line .
 * @n: integers to print .
 * @separator: string to be printrd between numbers .
 * Return: nothing .
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list spr;
	unsigned int i;

	va_start(spr, n);
	for (i = 0 ; i < n; i++)
	{
	printf("%d", va_arg(spr, int));
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");

	va_end(spr);
}
