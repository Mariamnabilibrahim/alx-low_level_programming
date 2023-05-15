#include "main.h"

/**
 * *create_array - function that creates an array of chars,
 *		and initializes it with a specific char.
 * @size: input
 * @c: input
 * Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
	{
		return (0);
	}

	while (size--)
	{
		n[size] = c;
	}

	return (n);
}
