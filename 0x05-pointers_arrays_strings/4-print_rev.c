#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 *
 * @s: input
 *
 * Return:  a string in reverse
*/

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	while (x--)
	{
		putchar(s[x]);
	}
	putchar('\n');
}
