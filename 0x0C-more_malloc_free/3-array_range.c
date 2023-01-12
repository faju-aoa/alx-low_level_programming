#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array
 *@max: parameter
 *@min: paramter
 *Return: return void
 */
int *array_range(int min, int max)
{
int r, i;
int *ptr;
char *f;
r = 0;
if (min > max)
{
return (NULL);
}
r = ((max + 1) - min);
ptr = (char *))calloc(r, sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
f = ptr;
for (i = 0; i < r; i++)
{
f[i] = min++;
}
return (ptr);
}
