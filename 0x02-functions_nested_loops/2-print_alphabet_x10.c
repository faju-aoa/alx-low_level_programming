#include <stdio.h>
#include <ctype.h>
/**
 * print_alphabet_x1o - Prints "letter"
 */
void print_alphabet(void)
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
