#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a dog structure
 * @d: A dog structure.
 * @name: store the name of the dog.
 * @age: store the age of the dog.
 * @owner: store the owner of the dog.
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = d;
d->name = name;
d->age = age;
d->owner = owner;
}
