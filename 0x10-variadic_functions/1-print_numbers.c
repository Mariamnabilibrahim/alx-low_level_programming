#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: input
 * Return: void function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%d%s", va_arg(ap. int),
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
