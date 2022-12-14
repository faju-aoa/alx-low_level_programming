#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - printing lowercase letter
 */
void print_alphabet(void)
{
char letter;
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
letter = alph;
_putchar(letter);
}
putchar('\n');
}
