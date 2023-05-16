#include "main.h"
#include <stdlib.h>

/**
 * str1 - function that splits a string into words.
 * @s: string
 * Return: Returns NULL if str == NULL or str == ""
*/

int str1(char *s)
{
	int x, y = 0;

	for (x = 0; s[x]; x++)
	{

		if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
				y++;
		}
		else if (x == 0)
			b++;
	}
	y++;
	return (y);
}

/*
 * **strtow - function that splits a string into words.
 * @str: string
 * Return: Returns NULL if str == NULL or str == ""
*/

char **strtow(char *str)
{
	int x, y, z, a, b = 0, d = 0;
	char **c;

	if (str == NULL || *str == '\0')
		return (NULL);
	b = str1(str);
	if (b == 1)
		return (NULL);
	c = (char **)malloc(b * sizeof(char *));
	if (c == NULL)
		return (NULL);
	c[b - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (y = 1; str[x + y] != ' ' && str[x + y]; y++)
				;
			y++;
			c[d] = (char *)malloc(y * sizeof(char));
			y++;
			if (c[d] == NULL)
			{
				for (z = 0; z < d; z++)
					free(c[d]);
				free(c[b - 1]);
				free(c);
				return (NULL);
			}
			for (a = 0; a < y; a++)
			c[d][a] = str[x + a];
			c[d][a] = '\0';
			d++;
			x += y;
			}
			else
			x++;
		}
		return (c);
	}
}
