#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * strl - function to get lenght
 * @s: string
 *
 * Return: lenght
*/

int strl(const char *s)
{
	int l = 0;

	while (*s++)
		l++;

	return (l);
}
/**
 * strc - function to copy string
 * @x: string to copy
 * @y: string
 *
 * Return: x
*/

char *strc(char *x; char *y)
{
	int z;

	for (z = 0; y[z]; z++)
		x[z] = y[z];
	x[z] = '\0';

	return (x);
}

/**
 * new_dog - function that creates a new dog.
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: Return NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (strl(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (strl(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = strc(dog->name, name);
	dog->age = age;
	dog->owner = strc(dog->owner, owner);

	return (dog);
}

