#include <stdio.h>
#include "main.h"
/**
 *print_numbers - check for uppercase letter
 *
 *Return: return 1 and 0
 */
void print_numbers(void)
{
int num = 0;
int digit;
while (num <= 9)
{
digit = num;
_putchar(digit + '0');
num++;
}
_putchar('\n');
}
