#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * fun - function that allocates memory for an array, using malloc.
 * @x: input
 * @y: input
 * @z: input
 * Return: ptr
*/

char fun(char *x, char y, unsigned int z)
{
	char *ptr = x;

	while (z--)
		*x++ = y;

	return (ptr);
}

/**
 * *_calloc - function that allocates memory for an array, using malloc.
 * @nmemb: input
 * @size: bytes
 * Return: If nmemb or size is 0, then _calloc returns NULL
 *	If malloc fails, then _calloc returns NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *b;

	if (size == 0 || nmemb == 0)
		return (NULL);
	b = malloc(sizeof(int) * nmemb);

	if (b == 0)
		return (NULL);

	fun(b, 0, sizeof(int) * nmemb);

	return (b);
}
