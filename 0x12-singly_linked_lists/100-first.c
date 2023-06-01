#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

void cons(void) __attribute__ ((constructor));

/**
 * cons -  function that prints  before the main function is executed.
 * 
 * Return: void
*/

void cons(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
