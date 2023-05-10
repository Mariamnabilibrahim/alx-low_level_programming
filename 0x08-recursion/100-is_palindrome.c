#include "main.h"
/**
 * fun2 - function that returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s);
int fun1(char *s, int x, int y, int z);
int fun2(char *s)
{
	int a = 0;

	if (*s > '\0')
	{
		a += fun2(s + 1) + 1;
	}
	return (a);
}
/**
 * is_palindrome - function that returns 1
 *              if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	int y = fun2(s);
	return (fun1(s, 0, y - 1, y % 2));
}
/**
 * fun1 - function that returns 1
 *              if a string is a palindrome and 0 if not.
 * @s: string
 * @x: input
 * @y: input
 * @z: input
 * Return: 1 if a string is a palindrome and 0 if not.
*/
int fun1(char *s, int x, int y, int z)
{
	if ((x == y && z != 0) || (x == y + 1 && z == 0))
	{
	return (1);
	}
	else if (s[x] != s[y])
	return (0);
}
