#include <stdio.h>
#include <string.h>

/**
 *_strncpy - joining two string
 *@dest: parameter
 *@src: parameter
 *@n: parameter
*Return: return string
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
