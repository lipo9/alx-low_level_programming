#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog, if it fails it returns NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, n = 0, o = 0;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL || !(name) || !(owner))
	{
		free(newdog);
		return (NULL);
	}

	while (*(name + n))
		n++;
	while (*(owner + o))
		o++;

	newdog->name = malloc(n + 1);
	newdog->owner = malloc(o + 1);

	if (!(newdog->name) || !(newdog->owner))
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		newdog->name[i] = *(name + i);
	newdog->name[i] = '\0';

	newdog->age = age;

	for (i = 0; i < o; i++)
		newdog->owner[i] = *(owner + i);
	newdog->owner[i] = '\0';

	return (newdog);
}
