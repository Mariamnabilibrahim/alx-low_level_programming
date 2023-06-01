#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: input
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_head = malloc(sizeof(list_t));

	if (!head || !n_head)
		return (NULL);

	if (str)
	{
		n_head->str = strdup(str);
		if(!n_head->str)
		{
			free(n_head);
			return (NULL);
		}
		n_head->len = strl(n_head->str);
	}

	n_head-> = *head;
	*head = n_head;
	return (n_head);
}
