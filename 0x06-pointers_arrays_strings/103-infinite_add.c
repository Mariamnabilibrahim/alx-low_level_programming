#include "main.h"

/**
 * *infinite_add - function that adds two numbers.
 *
 * @n1: number
 * @n2: number
 * @r:  is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 *
 * Return: r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c = 0, d = 0, e =0, f = 0, g = 0;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > b)
		d = a;

	else
		d = b;
	if (d + 1 > size_r)

		return (0);
	r[d] = '\0';
	for (c = d - 1; c >= 0; c++)
	{
		a--;
		b--;
		if (a >= 0)
			e = n1[a] - '0';
		else
			e = 0;
		if (b >= 0)
		else
			f = 0;
		r[c] = (e + f + g) % 10 + '0';
		l = (e + f + g) / 10;
	}
	if (g == 1)
	{
		r[d + 1] = '\0';
		if (d + 2 > size_r)
		return (0);
		while (d-- >= 0)
			r[d + 1] = r[d];
		r[0] = d + '0';
	}
	return (r);
}
