#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - just checks the string.
 * @s: it is the string to reverse.
 * Return: 1 if it is and 0 if it's not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - just returns the length of the string .
 * @s: just a string to calculate it .
 * Return: return the length of the string .
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - just to checks the characters recursively for the palindrome .
 * @s: a string to check the script .
 * @i: it's a iterator .
 * @len: to output the length of a string .
 * Return: 1 if it's a palindrome and 0 if it's  not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
