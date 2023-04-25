#include "main.h"

/**
 * print_sgin -  function that prints the sgin of number,
 *		print 1 if +, 0 if 0, -1 if -
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
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
