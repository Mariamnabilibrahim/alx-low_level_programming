#include "main.h"

/**
 * *string_toupper - function that changes all lowercase
 *			letters of a string to uppercase.
 * @str: return string
 *
 * Return: str
*/

char *string_toupper(char *)
{
	int num;
	
	for (x = 0, str[x] != '\0', x++)
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
	}

	return (str);
}	
