#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: input
 * Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *nxt = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		nxt = node->next;
		node->next = *head;
		*head = node;
		node = nxt;
	}
	return (*head);
}
