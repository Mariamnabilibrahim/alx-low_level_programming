#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 *
 * @c: string
 *
 * Return: cp
*/

char *leet(char *c)
{
	char *cp = c;
	char Letter[] = {'A', 'E', 'O', 'T', 'L'};
	int Num[] = {4, 3, 0, 7, 1};
	unsigned int x;

	while (*c)
	{
		for (x = 0; x < sizeof(Letter) / sizeof(char); x++)
		{
			if (*c == Letter[x] || *c == Letter[x] + 32)
			{
				*c = 48 + Num[x];
			}
		}
		c++;
	}

	return (cp);
}
