#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the first 50 Fibonacci numbers,
 *		starting with 1 and 2
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int x;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (x = 0; x < 50; x++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
