#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * _sqrt - function of square root
 * @n: input
 * @x: input
 * Return: the natural square root of a number.
*/

int _sqrt(int n, int x);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function of square root
 * @n: input
 * @x: input
 * Return: the natural square root of a number.
*/

int _sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (_sqrt(n, x + 1));
	}
	else
		return (-1);
}
