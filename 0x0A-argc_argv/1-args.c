#include <stdio.h>

/**
 * main -  program that prints the number of arguments passed into it.
 *
 * @argc: inpur
 * @argv: input
 *
 * Return: always 0 (success)
*/

int main(int argc, int const *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
