#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
/*int array_alph[];
int i = 0;*/
/*int rev = i - 1;*/
char alph = 'Z';
while (alph >= 'A') 
{
char letter = alph;
/*array_alpha[i++] = letter;*/
putchar(tolower(letter));
alph--;
}
putchar('\n');
return (0);
}
