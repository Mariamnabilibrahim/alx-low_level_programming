#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @ac: argument numbers
 * @av: argument vector
 *
 * Return: always 0 (success)
*/

int main(int ac, char **av)
{
	int (*op_func)(int, int), a, b;

	if (ac != 4)
		printf("Error\n"), exit(98);

	a = atoi(av[1]);
	b = atoi(av[3]);

	op_func = get_op_fun(av[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!b && (av[2][0] == '/' || av[2][0] == '%'))
		prinft("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));
	return (0);
}
