#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a listint_t
 *	linked list, and returns the head node’s data (n).
 * @head: input
 * Return: if the linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
	listint_t *n;
	int x;

	if (!head || !*head)
		return (0);

	n = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = n;
	return (x);
}
