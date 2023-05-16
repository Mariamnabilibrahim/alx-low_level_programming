#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to
 *	a 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: return NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int **z, x, y;

	z = malloc(sizeof(*z) * height);

	if (width <= 0 || height <= 0 || z == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			z[x] = malloc(sizeof(**z) * width);
			if (z[x] == 0)
			{
				while (x--)
					free(z[x]);
				free(z);
				return (NULL);
			}

			for (y = 0; y < width; y++)
			{
				z[x][y] = 0;
			}
		}
	}
	return (z);
}
