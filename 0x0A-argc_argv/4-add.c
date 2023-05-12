#include <stdio.h>

/**
 * main -  program that adds positive numbers.
 * @argc: input
 * @argv: input
 * Return: Alwyas 0 (success)
*/

int main(int argc, char *argv[])
{
	int x = 0;
	char *y;

	while (--argc)
	{
		for (y = argv[argc]; *y; y++)
			if (*y < '0' || *y > '9')
				return (printf("Error\n"), 1);
		x += atoi(argv[argc]);
	}
	printf("%d\n", x);
	return (0);
}
