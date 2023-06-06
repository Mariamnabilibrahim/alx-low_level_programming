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
	listint_t *node;
	unsigned int i = 0;

	for (node = head; node && i < index; node = node->next, i++)
		;
	return (node);
}
