#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - it's a function to output what into inside .
 * @s :  a string to output it .
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
