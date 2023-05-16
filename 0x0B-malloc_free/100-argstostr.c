#include "main.h"

/**
 * str - function that concatenates all the arguments of your program.
 * @s: input
 * Return: Always 0 (success)
*/

int str(char *s)
{
	int x = 0;

	for (; s[x] != '\0'; x++)
		;
	return (x);
}

/**
 * *argstostr -  function that concatenates all the arguments of your program
 * @ac: input
 * @av: input
 * Return: Always 0 (success)
*/

char *argstostr(int ac, char **av)
{
	int y = 0, z = 0;
	int a = 0, b = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; y < ac; y++, z++)
		z += str(av[y]);

	s = malloc(sizeof(char) * z + 1);
	if (s == 0)
		return (NULL);

	for (y = 0; y < ac; y++)
	{
		for (a = 0; av[y][a] != '\0'; a++, b++)
			s[b] = av[y][a];

		s[b] = '\n';
		b++;
	}
	s[b] = '\0';
	return (s);
}
