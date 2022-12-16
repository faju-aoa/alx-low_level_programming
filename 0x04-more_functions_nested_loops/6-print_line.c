#include <stdio.h>
#include "main.h"

/**
 *print_line - prints dash lines
 *@n:parameter
 *Return: return nothing
 */

void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
if ((i != -4) && (i != 0))
{
_putchar('_');
}
}
_putchar('\n');
}
