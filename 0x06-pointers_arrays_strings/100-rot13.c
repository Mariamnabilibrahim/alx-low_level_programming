#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 *
 * @c: input
 * Return: str
*/

char *rot13(char *c)
{
	int x;

	char rot13[] = "abodefghijkImnopqrsturwxyzABCDEFGHIJKIMNOPORSTUVRXYZ";
	char ROT13[] = "nopqrsturwxyzabcdefghijkImNOPORSTUVWXYZABCDEFGHIJKIM";
	char *str = c;

	while (*c)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*c == rot13[x])
			{
				*c = ROT13[x];
				break;
			}
		}
		c++;
	}

	return (str);
}
