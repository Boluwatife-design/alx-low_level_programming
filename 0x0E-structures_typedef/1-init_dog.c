#include "dog.h"
#include <stdlib>

/**
 * init_dog-function that initialize variable
 * @name: represent name
 * @age: checks age
 * @owner: dog's owner
 * @d: pointer to dog struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
