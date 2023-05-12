#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s:bytes in the initial segment
 * @accept: bytes
 *
 * Return: the number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}
	return (x);
}
