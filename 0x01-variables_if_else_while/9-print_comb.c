#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
 
int main(void)
{
int num = 0;
while (num <= 9)
{
int digit = num;
putchar(digit + '0');
putchar(',');
putchar(' ');
num++;
}
putchar('\n');
return (0);
}
