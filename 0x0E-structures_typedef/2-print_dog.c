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
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %1f\n", d->age ? d->age : 0);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}

