#include <stdio.h>
#include <string.h>
/**
 *_strstr - capital each letter
 *@needle: parameter
 *@haystack: parameter
 *Return: return string
 */
char *_strstr(char *haystack, char *needle)
{
char *f = strstr(haystack, needle);
if (f)
{
return (f);
}
else
{
return (NULL);
}
}
