#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *print_dog - print attribute of dog
 *@d : dog structure
 *
 *Return: return nothing
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL || d->age != 0 || d->owner == NULL)
{
printf("Name: %s\n", d->name);
printf("Age: %1f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
}
