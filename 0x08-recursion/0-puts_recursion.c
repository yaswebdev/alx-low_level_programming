#include "main.h"
/**
 * _puts_recursion - is the function like puts();
 * @s: the character
 * Return: Always 0 (to Success the code)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
