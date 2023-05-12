#include "main.h"

/**
 * *_strpbrk -  function that searches a string for any of a set of bytes.
 *
 * @s: string
 * @accept: the bytes in the string
 *
 * Return: a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}

	return (0);
}
