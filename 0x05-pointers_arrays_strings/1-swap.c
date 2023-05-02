#include "main.h"

/**
 * void swap_int -  function that swaps the values of two integers.
 *
 * @a: input
 * @b: input
*/

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
