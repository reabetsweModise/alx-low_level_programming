#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable
 * @d: pointer to struct dog to initialize
 * @d_name: name to initialize
 * @d_age: age to initialize
 * @d_owner: owner to initialize
 */
void init_dog(struct dog *d, char *d_name, float d_age, char *d_owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->d_name = d_name;
	d->d_age = d_age;
	d->d_owner = d_owner;
}

