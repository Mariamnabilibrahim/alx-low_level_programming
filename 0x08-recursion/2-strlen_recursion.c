#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: string
 *
 * Return: the length of a string
*/

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s > '\0')
	{
		x += _strlen_recursion(s + 1) + 1;
	}
	return (x);
}
