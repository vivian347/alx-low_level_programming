#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, n_len, o_len;
	struct dog *new_dog;

	n_len = 0;
	while (name[n_len] != '\0')
		n_len++;
	o_len = 0;
	while (owner[o_len] != '\0')
		o_len++;
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(n_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	new_dog->owner = malloc(o_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}
	for (i = 0 ; i < n_len ; i++)
		new_dog->name[i] = name[i];
	for (i = 0 ; i < o_len ; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
