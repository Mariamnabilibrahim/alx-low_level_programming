#include "main.h"

/**
 * *_strncpy - function that copies a string.
 *
 * @dest: input
 * @src: input
 * @n: bytes from src
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
