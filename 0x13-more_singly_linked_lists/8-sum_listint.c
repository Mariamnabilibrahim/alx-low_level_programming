#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 *	the data (n) of a listint_t linked list.
 * @head: input
 * Return: if the list is empty, return 0
*/

int sum_listint(listint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
