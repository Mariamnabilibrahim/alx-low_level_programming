#include "main.h"

/**
 *  puts_half - function that prints half of a string,
 *
 *  @str: string type
*/

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)

		x++;
	for (x /= 2; str[x] != '\0'; x++)
	{
		putchar(str[x]);
	}
	putchar('\n');
}
