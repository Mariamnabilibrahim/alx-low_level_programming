#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *
 * @s: pointer to the memory area
 * @b: the constant byte
 * @n: bytes
 *
 * Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}

	return (s);
}
