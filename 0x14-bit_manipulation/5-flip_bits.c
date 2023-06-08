#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 *	you would need to flip to get from one number to another.
 * @n: input
 * @m: input
 *
 * Return: void
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int y = 0;

	while (x)
	{
		if (x & 1ul)
			y++;
		x = x >> 1;
	}
	return (c);
}
