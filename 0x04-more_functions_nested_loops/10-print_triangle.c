#include <stdio.h>
#include "main.h"

/**
 *print_triangle - prints square
 *@size:size of triangle
 *Return: return nothing
 */

void print_triangle(int size)
{
int i;
int j;
int k = 0;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
if (i == size)
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
