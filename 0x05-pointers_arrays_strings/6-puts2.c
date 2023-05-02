#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: input
*/

void puts2(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (num / 2 == 0)
		{
			putchar(str[num]);
		}
		putchar('\n');
	}
}
