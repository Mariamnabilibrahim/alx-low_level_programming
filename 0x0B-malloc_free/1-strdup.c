#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to
 *	a newly allocated space in memory
 * @str: string
 * Return: NULL if str = NULL
*/

char *_strdup(char *str)
{
	int x = 0, y = 0;
	char *z;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[y] != '\0'; y++)
		;
	z = malloc(y * sizeof(*str) + 1);

	if (z == 0)
	{
		return (NULL);
	}
	else
	{
		for (; x < y; x++)
			z[x] = str[x];
	}
	return (z);
}
