#include "main.h"
int prime(int n, int b);
/**
 * is_prime_number - say if an integer is prime .
 * @n: for evaluate a number.
 * Return: return 1 if n is a prime number and 0 if is not .
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
/**
 * prime - calculates a number is prime recursively .
 * @n: to evaluate a number .
 * @b: it is iterator .
 * Return: return 1 if n is a prime and return 0 if it is not .
 */
int prime(int n, int b)
{
	if (b == 1)
	{
		return (1);
	}
	if (n % b == 0 && b > 0)
	{
		return (0);
	}
	return (prime(n, b - 1));
}
