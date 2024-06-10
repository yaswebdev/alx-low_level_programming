#include "main.h"

/**
 * _abs - function prototype that return the abs of integer
 * @n: the number that we use
 * Return: n if n not negative
 */

int _abs(int n)
{
if (n < 0)
{
return (-1 * n);
}
else
{
return (n);
}
}
