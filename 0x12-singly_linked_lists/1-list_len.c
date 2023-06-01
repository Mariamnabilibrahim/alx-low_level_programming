#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  function that returns the number of
 *	elements in a linked list_t list.
 * @h: input
 *
 * Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
