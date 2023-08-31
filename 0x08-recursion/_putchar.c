#include "main.h"
#include <unistd.h>
/**
 * _putchar - to print the character
 * Return: Always 0 (to success the code)
 * @n - is the character to print it
 */
int _putchar(char n)
{
	return (write(1, &n, 1));
}
