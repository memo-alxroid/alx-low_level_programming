#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name (string)
 * @age: dog age (float)
 * @owner: dog owner name (string)
 *
 * Return: pointer to new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(struct dog));
	if (!newDog)
	{
		free(newDog);
		return (NULL);
	}
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
