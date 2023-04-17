#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog-function that print a struct dog
 * @d:print struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";

	printf("Name: %s\nAge: %f\nowner: %s\n", d->name, d->age, d->owner);
}
