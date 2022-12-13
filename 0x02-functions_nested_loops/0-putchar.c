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
}
/*show function for printing*/
void show(void)
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
