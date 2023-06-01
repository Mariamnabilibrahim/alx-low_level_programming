#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * strl - function that prints all the elements of a list_t list
 * @s: string
 *
 * Return: the number of nodes
*/

int strl(char *s)
{
	int x = 0;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: input
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", strl(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
