#include <stdio.h>
/**
 *_memcpy - capital each letter
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *Return: return string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
