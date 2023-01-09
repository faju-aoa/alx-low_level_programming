#include <stdio.h>
#include <string.h>
/**
 *_memset - capital each letter
 *@s: parameter
 *@b: parameter
 *@n: parameter
 *Return: return value
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = memset(s, b, n);
return (p);
}
