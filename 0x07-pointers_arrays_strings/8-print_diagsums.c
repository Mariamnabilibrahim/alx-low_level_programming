#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 *		two diagonals of a square matrix of integers.
 *
 * @a: array
 * @size: array size
*/

void print_diagsums(int *a, int size)
{
	int x, y = 0, z = 0,

	for (x = 0; x < size; x++)
	{
		y += a[x];
		y += a[size - x - 1];
		a += size;
	}
	printf("%d, ", y);
	printf("%d\n", z);
}
