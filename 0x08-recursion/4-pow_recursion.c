#include "main.h"

/**
 * _pow_recursion - returns the valu
 * @x: val
 * @y: pow
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
