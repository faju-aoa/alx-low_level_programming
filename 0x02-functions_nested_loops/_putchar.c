#include <stdio.h>
#include "main.h"
void show(void)
{
int i =0;
char letter[] = "_putchar\n";
while (letter[i])
{
char word = letter[i];
putchar(word);
i++;
}
}
