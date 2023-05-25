#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: input
 * @...: input
 * Return: If n == 0, return 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int y = 0, x = n;
	va_list z;

	if (!n)
		return (0);
	va_start(z, n);

	while (x--)
		y += va_arg(z, int);
	va_end(z);
	return (y);
}
