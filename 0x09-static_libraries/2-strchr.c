#include "main.h"

/**
 * *_strchr -  function that locates a character in a string.
 *
 * @s: in the string
 * @c: the first occurrence of the character
 *
 * Return: pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
	int y;

	for (y = 0; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
		{
			return (s + y);
		}
	}
	return ('\0');
}
