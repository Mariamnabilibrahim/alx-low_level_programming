#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 *	at index index of a listint_t linked list.
 * @head: input
 * @index:  is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n, *p_node;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		n = *head;
		*head = (*head)->next;
		free(n);
		return (1);
	}
	n = *head;
	while (n)
	{
		if (x == index)
		{
			p_node->next = n->next;
			free(n);
			return (1);
		}
		x++;
		p_node = n;
		n = n->next;
	}
	return (-1);
}
