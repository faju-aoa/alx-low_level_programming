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
  if (d->name != NULL)
    {
      printf("Name: %s\n", d->name);
    }
  else
    {
      printf("(nil)");
    }
  if (d->age != 0)
    {
      printf("Age: %1f\n", d->age);
    }
  else
    {
      printf("(nil)");
    }
  if (d->owner != NULL)
    {
      printf("Owner: %s\n", d->owner);
	}
  else
    {
      printf("(nil)");
    }
 }
}
