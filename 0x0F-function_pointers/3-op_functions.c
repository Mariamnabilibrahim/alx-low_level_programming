#include "3-calc.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * op_add - the sum of a and b
 * @a: integers
 * @b: integers
 * Return: the sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of a and b
 * @a: integers
 * @b: integers
 * Return:  returns the difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and
 * @a: integers
 * @b: integers
 * Return: returns the product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div: returns the result of the division of a by b
 * @a: integers
 * @b: integers
 * Return: returns the result of the division of a by b.
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: integers
 * @b: integers
 * Return:  returns the remainder of the division of a by b.
*/

int op_mod(int a, int b)
{
	return (a % b);
}
