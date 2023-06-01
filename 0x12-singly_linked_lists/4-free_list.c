#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head: input
 *
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *node, *nxt_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		nxt_node = node->next;
		free(node->sre);
		free(node);
		node = nxt_node;
	}

}
