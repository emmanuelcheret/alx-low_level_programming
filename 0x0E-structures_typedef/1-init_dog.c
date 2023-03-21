#include <stdio.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");

	return (0);
}
