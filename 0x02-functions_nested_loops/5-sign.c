#include "main.h"

/**
 * print_sign - prints + if n is greater than zero
 *		0 and prints 0 if n is zero, -1 and prints - if n is less zero
 *
 * @n: take input for function
 *
 * Return: 1 if +, 0 if 0, -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
