#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * create_array - function that create array
 * @size: byte of array
 * @c: size of the array
 * Return: return ptr.
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
ptr = (char *)malloc(size * sizeof(c));
if (size == 0)
{
return (NULL);
}
if (ptr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
}
return (ptr);
}
