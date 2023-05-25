#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n:  is the number of strings passed to the function
 * @...: string
 * Return: void function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
