#include "main.h"

/**
 * factorial - returns the fac
 * @n: number to return the fa
 * Return: factorial 
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
