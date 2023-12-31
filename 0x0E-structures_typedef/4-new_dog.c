#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer tp a newly allocated space in memory.
 * @str: string as a parameter.
 *
 * Return: a pointer to the newly allocated space.
 */

char *_strdup(char *str)
{
	int i, n;
	char *array;

	if (str == NULL)
		return (NULL);

	n = 0;
	while (str[n] != '\0')
		n++;

	array = malloc(sizeof(char) * n + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		array[i] = str[i];
	array[n] = '\0';

	return (array);
}

/**
 * new_dog - creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Return: pointer to new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dog_name, *dog_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog_name = _strdup(name);
	if (dog_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog_owner = _strdup(owner);
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(dog);
		return (NULL);
	}
	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;

	return (dog);
}
