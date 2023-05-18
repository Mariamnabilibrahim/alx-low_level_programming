#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously
 * @new_size:  is the new size, in bytes of the new memory block
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * Return: If new_size is equal to zero, and ptr is not NULL,
 *	then the call is equivalent to free(ptr). Return NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
		{
			p = malloc(new_size);
			if (p == NULL)
				return (NULL);
			for (x = 0; x < old_size && x < new_size; x++)
				*((char *)p + x) = *((char *)ptr + x);
			free(ptr);
		}
	return (p);
}
