#include <stdio.h>
#include "main.h"

/**
 * _islower - function prototype
 * Return: 0 if executed successfully
 * @c: the caractere that we want checked
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
