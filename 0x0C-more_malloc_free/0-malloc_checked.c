#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check for allocatd space
 * @b: parameter.
 * Return: return void
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
