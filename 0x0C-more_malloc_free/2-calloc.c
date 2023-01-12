#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory
 *@nmemb: parameter
 *@size: paramter
 *Return: return void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
char *f;
unsigned int i;
ptr = (char *)malloc(nmemb * size);
if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (ptr == NULL)
{
return (NULL);
}
f = ptr;
for (i = 0; i < (nmemb * size); i++)
{
f[i] = '\0';
}
return (ptr);
}
