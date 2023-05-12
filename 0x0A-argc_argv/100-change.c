#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *	to make change for an amount of money.
 * @argc: input
 * @argv: input
 * Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int x, y = 0, z = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (x = 0; x < 5; x++)
		{
			if (z >= cents[x])
			{
				y += z / cents[x];
				z = z % cents[x];
				if (z % cents[x] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
