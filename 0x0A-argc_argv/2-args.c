#include <stdio.h>

/**
 * main -  program that prints all arguments it receives.
 * @argc: input
 * @argv: input
 * Return: always 0 (success)
*/

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
