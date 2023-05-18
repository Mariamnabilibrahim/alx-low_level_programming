#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: string
 * @max: string
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int x, y;
	int *p;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	p = malloc(sizeof(int) * y);
	if (!p)
		return (NULL);
	for (x = 0; x < y; x++)
		p[x] = min++;

	return (p);
}
