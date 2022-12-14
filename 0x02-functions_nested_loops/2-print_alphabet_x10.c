#include <stdio.h>
#include "main.h"
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
for (alph = 'a'; alph <= 'z'; alph++)
{
letter = alph;
_putchar(letter);
}
_putchar('\n');
}
}
