#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit number.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCIL representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
