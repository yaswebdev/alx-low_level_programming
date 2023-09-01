#include "main.h"
int actual_sqrt_recursion(int n, int i);
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
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - it is the recurse to find natural .
 * square: root of a number .
 * @n: number to calculate
 * @i: it's iterator.
 * Return: return the resulting of square.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
