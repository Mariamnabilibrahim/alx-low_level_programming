#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 *
 * @dest: input
 * @src: input
 * @n: bytes from src
 *
 * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x])
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x + y] = src[i];
	dest[x + y] = '\0';

	return (dest);
}
