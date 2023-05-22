#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: the dog init
 * @age: age of dog
 * @owner: name of owner
 * @name: name of dog
 *
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
