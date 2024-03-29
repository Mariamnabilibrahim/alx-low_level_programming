#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_dnodeint_end - function that adds a new node
 *	at the end of a dlistint_t list.
 * @head: input
 * @n: input
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
