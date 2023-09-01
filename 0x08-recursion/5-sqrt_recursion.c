#include "main.h"
int recursion(int n, int b);
/**
 * _sqrt_recursion - returns the natura root square.
 * @n: number to calculate .
 * Return: return the resulting square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (recursion(n, 0));
}
/**
 * recursion - it is the recurse to find natural .
 * square: root of a number .
 * @n: number to calculate
 * @b: it's iterator.
 * Return: return the resulting of square.
 */
int recursion(int n, int b)
{
	if (b * b > n)
	{
		return (-1);
	}
	if (b * b == n)
	{
		return (b);
	}
	return (recursion(n, b + 1));
}
