#include "dog.h"
#include <stdio.h>

/**
 * init_dog - wof wof.
 * @d: dog.
 * @name: name dog.
 * @age: age dog.
 * @owner: owner dog.
 * Return: return 0.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
