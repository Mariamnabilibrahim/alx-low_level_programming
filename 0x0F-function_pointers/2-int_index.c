#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: int array
 * @size:  is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element for
 *	which the cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}

	return (-1);
}
