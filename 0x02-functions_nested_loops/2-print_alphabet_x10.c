#include <stdio.h>
#include <ctype.h>
/**
 * print_alphabet_x10 - Prints "letter"
 */
void print_alphabet_x10(void)
{
int alph;
int i;
int letter;
for (i = 0; i <= 9; i++)
{
for (alph = 'A'; alph <= 'Z'; alph++)
{
letter = alph;
putchar(tolower(letter));
}
putchar('\n');
}
}
