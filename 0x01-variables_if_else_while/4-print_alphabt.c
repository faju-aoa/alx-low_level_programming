#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * 
 *Return: Always 0 (success)
 */

int main(void)
{
int i = 0;
char letter[] = "ABCDFGHIJKLMNOPRSTUVWXYZ\n";
char string;
int lower;
while (letter[i])
{       
string = letter[i];
lower = tolower(string);
putchar(lower);
i++;
}
return (0);
}
