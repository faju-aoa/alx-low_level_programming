#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
int i = 0;
char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int base;
int j = 0;
while (digit[i])
{
j = i % 10;
base = digit[j];
putchar(base);
i++;
}
putchar('\n');
return (0);
}
