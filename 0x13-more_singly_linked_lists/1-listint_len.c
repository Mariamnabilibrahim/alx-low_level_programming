#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function that returns the number
 *	of elements in a linked listint_t list.
 *
 * @h: input
 * Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
