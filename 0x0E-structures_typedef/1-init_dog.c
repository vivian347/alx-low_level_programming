#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable type struct dog
 * @d: pointer
 * @name: name of dog
 * @age: ageof dog
 * @owner: owner of dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
