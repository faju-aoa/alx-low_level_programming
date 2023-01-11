#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function that dublicate
 * @str: string
 * Return: return ptr.
 */
char *_strdup(char *str)
{
char *ptr;
char *c;
unsigned int i, j;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
}
ptr = (char *)malloc(sizeof(char) * i + 1));
if (ptr == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
ptr[j] = str[j];
}
return (ptr);
}
