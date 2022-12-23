#include <stdio.h>
#include <ctype.h>
/**
 *string_toupper - joining two string
 *@s: parameter
 *Return: return string
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
s[i] = toupper((unsigned char)s[i]);
i++;
}
return (s);
}
