#include <stdio.h>
#include <string.h>
/**
 *_strpbrk - capital each letter
 *@s: parameter
 *@accept: parameter
 *Return: return string
 */
char *_strpbrk(char *s, char *accept)
{
char *f = strpbrk(s, accept)
if (f)
{
return (f);
}
else
{
return (NULL);
}
}
