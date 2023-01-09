#include <stdio.h>
#include <string.h>
/**
 *strstr - seaqrch substring
 *@strpbrk: parameter
 *@accept : parameter
 *Return: return value
 */
char *_strpbrk(char *s, char *accept)
{
char *p = strpbrk(s, accept);
return (p);
}
