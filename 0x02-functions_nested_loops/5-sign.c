#include <stdio.h>
#include "main.h"
/**
 *print_sign - check for sign of number
 *@n:parameter for the function
 *Return: Return 1 and 0 if n is +, 0 or -
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('\n');
return (n);
}
