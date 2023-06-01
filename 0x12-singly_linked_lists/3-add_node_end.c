#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: input
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !n_node)
		return (NULL);

	if (str)
	{
		n_node->str = strdup(str);
		if (!n_node->str)
		{
			free(n_node);
			return (NULL);
		}
		n_node->len = strl(n_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = n_node;
	}
	else
		*head = n_node;
	return (n_node);
}
