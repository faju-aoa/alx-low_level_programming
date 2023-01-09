#include <stdio.h>
#include <string.h>
/**
 *strstr - seaqrch substring
 *@haystack: parameter
 *@needle : parameter
 *Return: return value
 */
char *_strstr(char *haystack, char *needle)
{
char *p = strstr(haystack, needle);
return (p);
}
