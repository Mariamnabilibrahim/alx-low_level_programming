#include "main.h"

/**
 * is_prime_number - function that returns 1
 *		if the input integer is a prime number
 * _prime - function input integer
 * @n: input
 * @x: input
 * Return: 1 otherwise return 0.
*/

int _prime(int n, int x);
int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - function that cheak input integer is a prime number
 *
 * @n: input
 * @x: input
 * Return: 1 otherwise return 0.
*/
int _prime(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, x + 1));
	}
}
