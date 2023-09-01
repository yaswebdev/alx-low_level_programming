#include "main.h"
/**
 * factorial - return factorial of n .
 * @n: it was the number to return the factorial of n .
 * Return: return the facturial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
