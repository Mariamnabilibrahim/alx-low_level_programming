#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nt
 *	 node of a listint_t linked list.
 * @head: input
 * @index:  is the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n;
	unsigned int x;

	for (n = head, x = 0, n && x < index; n = n->next, x++)
		;
	return (n);
}
