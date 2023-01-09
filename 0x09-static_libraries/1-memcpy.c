#include <stdio.h>
#include <string.h>
/**
 *_memcpy - join two words
 *@dest: parameter
 *@src: parameter
 *@n: parameter 
 *Return: return value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
