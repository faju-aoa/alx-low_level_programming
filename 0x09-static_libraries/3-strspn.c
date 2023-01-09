#include <stdio.h>
#include <string.h>
/**
 *strspn - copy string
 *@s: parameter
 *Return: return value
 */
unsigned int _strspn(char *s, char *accept)
{
int p = strspn(s, accept);
return (p);
}
