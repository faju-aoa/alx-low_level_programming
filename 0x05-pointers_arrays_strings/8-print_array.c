#include <stdio.h>
#include "main.h"
/**
 *print_array - function that print array
 *@a:s pointer parameter;
 *@n:n parameter
 *Return: return void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == 0)
{
printf("%d", a[i]);
}
else
{
printf(", %d", a[i]);
}
}
printf("\n");
}
