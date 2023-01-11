#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - join string
 *@s1:string
 *@s2: string
 * Return: return ptr.
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
unsigned int i, j, k, limit;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
ptr = malloc(sizeof(char) * (i + j + 1));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (k = 0; k < i; k++)
{
ptr[k] = s1[k];
}
limit = j;
for (j = 0; j <= limit; k++, j++)
{
ptr[k] = s2[j];
}
return (ptr);
}
