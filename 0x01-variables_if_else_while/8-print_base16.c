#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int num = 0;
char alph = 'A';
int digit;
char letter;
while (alph <= 'F')
{
while (num <= 9)
{
digit = num;
putchar(tolower(digit) + '0');
num++;
}
letter = alph;
putchar(tolower(letter));
alph++;
}
putchar('\n');
return (0);
}
