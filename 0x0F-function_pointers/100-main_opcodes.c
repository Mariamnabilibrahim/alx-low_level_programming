#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: the number of arguments on the command line
 * @argv: argument is a vector of C strings
 * Return: Always 0 (success)
*/

int main(int argc, char **argv)
{
	char *x = (char *)main;
	int y;

	if (argc != 2)
		printf("Error\n"), exit(1);
	y = atoi(argv[1]);

	if (y < 0)
		printf("Error\n"), exit(2);

	while (y--)
		printf("%02hhx%s", *x, y ? " " : "\n");

	return (0);
}
