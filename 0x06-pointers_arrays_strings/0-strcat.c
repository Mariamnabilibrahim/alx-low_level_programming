#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: input
 * @src: input
 *
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (dest[x])
		x++;

	for (y = 0; scr[y] ; y++)
		dest[x++] = src[y];

	return (dest);
}
