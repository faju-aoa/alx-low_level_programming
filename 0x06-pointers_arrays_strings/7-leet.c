#include <stdio.h>
/**
 *leet - capital each letter
 *@s: parameter
 *Return: return string
 */
char *leet(char *s)
{
int indx1 = 0, indx2;
char encode[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (s[indx1])
{
for (indx2 = 0; indx2 <= 7; indx2++)
{
if (s[indx1] == encode[indx2] ||
s[indx1] - 32 == encode[indx2])
{
s[indx1] = indx2 + '0';
}
}
indx1++;
}
return (s);
}
