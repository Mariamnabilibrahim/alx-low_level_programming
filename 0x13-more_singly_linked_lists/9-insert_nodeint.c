#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 *	node at a given position.
 * @head: input
 * @idx: is the index of the list where the new node should be added
 * @n: input
 *
 * Return:  the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listlit_t *n_node = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!head || !n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	if (!idx)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	node = *head;
	while (node)
	{
		if (x == idx - 1)
		{
			n_node->next = node->next;
			node->next = n_node;
			return (n_node);
		}
		x++;
		node = node->next;
	}
	free(n_node);
	return (NULL);
}
