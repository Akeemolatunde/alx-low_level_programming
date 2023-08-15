#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - new dog struct whose variable is to initialize
 * @d: pointer to the struct of new dog
 * @name: name of the new dog
 * @age: age of new dog
 * @owner: owner of mew dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
