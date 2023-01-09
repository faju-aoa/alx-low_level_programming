#include <stdio.h>
#include <string.h>
/**
 *_strncpy - copy string
 *@dest:parameter
 *@src: parameter
 *@n: parameter
 *Return: return value
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
