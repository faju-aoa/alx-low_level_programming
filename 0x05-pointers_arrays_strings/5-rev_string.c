#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
char tmp;
int i, leng, l;

leng = 0;
l = 0;

while (s[leng] != '\0')
{
leng++;
}

l = leng - 1;

for (i = 0; i < leng / 2; i++)
{
tmp = s[i];
s[i] = s[l];
s[l--] = tmp;
}
}
