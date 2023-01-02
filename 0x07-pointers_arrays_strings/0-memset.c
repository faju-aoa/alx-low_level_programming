#include <stdio.h>
/**
 *_memset - capital each letter
 *@s: parameter
 *@b: parameter
 *@n: parameter
 *Return: return string
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
