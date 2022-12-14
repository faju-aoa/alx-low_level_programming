#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit - check for sign of number
 *@num:parameter for the function
 *Return: Return the last digit
 */
int print_last_digit(int num)
{
int l;
l = num % 10;
if (l < 0)
{
l = l * -1;
}
_putchar(l + '0');
return (0);
}
