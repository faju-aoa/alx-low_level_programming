#include <stdio.h>
/**
 *_memcpy - capital each letter
 *@s: parameter
 *@c: parameter
 *Return: return string
 */
char *_strchr(char *s, char c)
{
char *f = strchr(s, c);
if (f)
{
return (f);
}
else
{
return (NULL);
}
