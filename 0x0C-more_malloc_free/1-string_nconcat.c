#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: input
 * Return: always 0 (success)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, y, a, b;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	s = malloc(a + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
		s[x] = s1[x];

	for (y = 0; y < n; y++)
	{
		s[x] = s2[y];
		x++;
	}

	s[x] = '\0';
	return (s);
}
