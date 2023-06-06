#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: input
*/

void free_listint2(listint_t **head)
{
	listint_t *n, *t;

	if (!head)
		return;

	n = *head;
	while (n)
	{
		t = n;
		n = n->next;
		free(t);
	}
	*head = NULL;
}
