#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 *		two diagonals of a square matrix of integers.
 *
 * @a: input
 * @size: input
 *
 * Return: 0 (success)
*/

void print_diagsums(int *a, int size)
{
	int x, y = 0, z = 0;

	for (x = 0; x < size; x++)
	{
		y = y + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		z += a[x * size + (size - x - 1)];
	}
	printf("%d, ", y);
	printf("%d\n", z);
}
