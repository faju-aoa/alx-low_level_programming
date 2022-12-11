#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char alph = 'Z';
while (alph >= 'A') 
{
char letter = alph;
putchar(tolower(letter));
alph--;
}
putchar('\n');
return (0);
}
