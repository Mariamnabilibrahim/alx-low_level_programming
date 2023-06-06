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
	listint_t *n = NULL, *nxt = NULL;

	if (!head || !*head)
		return (NULL);

	n = *head;
	*head = NULL;
	while (n)
	{
		nxt = n->next;
		n->next = *head;
		*head = n;
		n = nxt;
	}
	return (*head);
}
