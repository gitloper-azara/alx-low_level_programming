#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog.
 * @d: pointer to struct.
 * @name: pointer to the name of dog.
 * @age: age of dog.
 * @owner: pointer to the owner of dog.
 *
 * Return: Void.
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
