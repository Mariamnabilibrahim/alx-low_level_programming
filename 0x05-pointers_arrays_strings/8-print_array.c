#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: input
 * @n: input
*/

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (num != (n - 1))
			printf("%d, ", a[num]);
		else
			printf("%d", a[num]);
	}
	printf("\n");
}
