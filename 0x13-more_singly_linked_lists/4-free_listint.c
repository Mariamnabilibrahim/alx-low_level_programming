#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: input
 *
*/

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head;
	head = head->next;
	free(n);
	}
}

