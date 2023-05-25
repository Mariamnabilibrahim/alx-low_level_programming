#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * format_char - formats of char
 * @sep: string
 * @p: pointer
*/

void format_char(char *sep, va_list p)
{
	printf("%s%c", sep, va_arg(p, int));
}

/**
 * format_int - formats of int
 * @sep: string
 * @p: pointer
*/

void format_int(char *sep, va_list p)
{
	printf("%s%d", sep, va_arg(p, int));
}

/**
 * format_float - formats of float
 * @sep: string
 * @p: pointer
*/

void format_float(char *sep, va_list p)
{
	printf("%s%f", sep, va_arg(p, double));
}

/**
 * format_string - formats of string
 * @sep: string
 * @p: pointer
*/

void format_string(char *sep, va_list p)
{
	char *str = va_arg(p, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
	printf("%s%s", sep, str);
}

/**
 * print_all - function that prints anything.
 * @format:  is a list of types of arguments
 *
 * Return: Print a new line at the end of your function
*/

void print_all(const char * const format, ...)
{
	int x = 0, y;
	char *sep = "";
	va_list p;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(p, format);
	while (format && format[x])
	{
		y = 0;
		while (tokens[y].token)
		{
			if (format[x] == tokens[y].token[0])
			{
				tokens[y].f(sep, p);
				sep = ", ";
			}
			y++
		}
		x++
	}
	printf("\n");
	va_end(p);
}
