#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/*prints a - z*/
	while (ch <= 'z;)
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
