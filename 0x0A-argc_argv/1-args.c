#include <stdio.h>

/**
 * main -  program that prints the number of arguments passed into it.
 *
 * @argc: inpur
 * @argv: pointer an array
 *
 * Return: always 0 (success)
*/

int main(int argc, int *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
