#include <stdio.h>
#include <ctype.h>
/**
 *main Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int i = 0;
int j = 0;
char string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
char string1[] = "abcdefghijkmnopqrstuvwxyz";
char letters1;
char letters2;
int lower;
int upper;
while (string[i])
{
while (string1[j])
{
letters1 = string[j];
lower = tolower(letters1);
putchar(lower);
j++;
}
letters2 = string[i];
upper = toupper(letters2);
putchar(upper);
i++;
}
return (0);
}
