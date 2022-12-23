#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 *cap_string - capital each letter
 *@s: parameter
 *Return: return string
 */
char *cap_string(char *s)
{
int i;
int cap = strlen(s);
for (i = 1; i < cap; i++)
{
if (isalpha(s[i]) && s[i - 1] == ' ')
{
s[i] = toupper(s[i]);
}
}
return (s);
}
