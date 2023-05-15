#include "main.h"
#include <stdlib.h>

/**
 * str1 - function that concatenates two strings.
 * @s: string
 * Return: NULL on failure
*/

int str1(char *s)
{
	int x = 0;

	for (; s[x] != '\0'; x++)
		;
	return (x);
}

/**
 * str2 - function that concatenates two strings.
 * @s: string
 * Return:  NULL on failure
*/

int str2(char *s)
{
	int x = 0;

	for (; s[x] != '\0'; x++)
	;
	return (x);
}

/**
 * *str_concat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: return NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int y, z, n;
	char *m;

	if (s1 == NULL)
		y = "\0";

	if (s2 == NULL)
	       z = "\0";

	y = str1(s1);
	z = str1(s2);
	m = malloc((y + z) * sizeof(char) + 1);
	if (m == 0)
	return (0);
	for (n = 0; n <= y + z; n++)
	{
		if (n < y)
		m[n] = s1[n];
	else
		m[n] = s2[n - y];
	}
	m[n] = '\0';
	return (m);
}
