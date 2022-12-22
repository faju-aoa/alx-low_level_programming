#include <stdio.h>
#include <string.h>
/**
 *_strncat - joining two string
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *Return: return string
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
