#include "main.h"
/**
 * _strlen_recursion - return the legth of a string.
 * @s: to masure the string.
 * Return: return the length of the string .
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
