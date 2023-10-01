#include "main.h"
/**
* _strlen_recursngth of a string.
* @s: The string to 
*Return: The length
*/
int _strlen_recursion(char *s)
{
	int lon = 0;

	if (*s)
	{
		lon++;
		lon += _strlen_recursion(s + 1);
	}

	return (lon);
}
