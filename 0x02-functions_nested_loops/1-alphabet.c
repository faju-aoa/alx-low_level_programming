#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

void print_alphabet()
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
