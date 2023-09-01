#include "main.h"
int check(char *s, int i, int len);
int strlen_recur(char *s);

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
	return (check(s, 0, strlen_recur(s)));
}
/**
 * strlen_recur - just returns the length of the string .
 * @s: just a string to calculate it .
 * Return: return the length of the string .
 */
int strlen_recur(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_recur(s + 1));
}
/**
 * check - just to checks the characters recursively for the palindrome .
 * @s: a string to check the script .
 * @i: it's a iterator .
 * @len: to output the length of a string .
 * Return: 1 if it's a palindrome and 0 if it's  not
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check(s, i + 1, len - 1));
}
