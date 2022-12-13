#include <stdio.h>
#include "work.h"
void work()
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
