#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * print_alphabet - printing lowercase letter
 */
void print_alphabet(void)
{
char letter;
char alph;
for (alph = 'A'; alph <= 'Z'; alph++)
{
letter = alph;
putchar(tolower(letter));
}
putchar('\n');
}
