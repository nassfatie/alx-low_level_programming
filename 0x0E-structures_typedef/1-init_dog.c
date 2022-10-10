#include <stdio.h>
#include "dog.h"

/**
*init_dog - initialize a dog structure
*@name:name of dog
*@age:age of dog
*@owner:owner of dog
*@d:dog structure
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
