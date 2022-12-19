#include <stdio.h>
#include "main.h"
/**
 *print_rev - function that print string in reverse
 *@s:s pointer parameter;
 *Return: return void
 */
void print_rev(char *s)
{
int i = 0;
int j = 0;
while (s[i] != '\0')
{
i++;
}
for (j = i - 1; j >= 0; j--)
{
putchar(s[j]);
}
putchar('\n');
}
