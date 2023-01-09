#include <stdio.h>
#include <string.h>
/**
 *_strncat - join two words
 *@s: parameter
 *@b: parameter
 *@n: parameter
 *Return: return value
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
