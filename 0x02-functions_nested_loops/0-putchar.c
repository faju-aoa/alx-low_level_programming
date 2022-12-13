#include <stdio.h>
/**
 * main - Entry point
 *
 *Retun: Always 0 (success)
 */
void show(void);
int main(void)
{
show();
return (0);
}X
void show(void)
/*show function for printing*/
{
int i = 0;
char letter[] = "_putchar\n";
while (letter[i])
{
char word = letter[i];
putchar(word);
i++;
}
}
