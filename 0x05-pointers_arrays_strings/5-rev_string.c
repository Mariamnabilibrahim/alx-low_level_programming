#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: input
 *
 * Return: reverses a string.
*/

void rev_string(char *s)
{
	int x, y;
	char z;

	for (x = 0; s[x] != '\0'; ++x)

	for (y = 0; y < 1 / 2; y++)
	{
		z = s[y]
		s[x] = s[x - 1 - y];
		s[x - 1 - y] = z;
	}
}
