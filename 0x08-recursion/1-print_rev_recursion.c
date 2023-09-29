#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - it's a function to output what into inside .
 * @s :  a string to output it .
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
else
{
_putchar('\n');
}
}
