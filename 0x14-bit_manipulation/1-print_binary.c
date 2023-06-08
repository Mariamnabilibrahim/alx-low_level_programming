#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: input
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, p = 0;

	while (b)
	{
		if (n & 1l << --b)
		{
		_putchar('1');
		p++;
		}
		else if (p)
			_putchar('0');
	}
	if (!p)
		_putchar('0');
}
