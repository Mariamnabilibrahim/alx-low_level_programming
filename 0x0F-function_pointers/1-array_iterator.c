#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 *	as a parameter on each element of an array
 * @array: int array
 * @size:  is the size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array && size && action)
		while (array <= x)
			action(*array++);
}
