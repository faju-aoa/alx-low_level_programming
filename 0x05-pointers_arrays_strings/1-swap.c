#include <stdio.h>
#include "main.h"
/**
 *swap_int - function that swap a and b
 *@a:a pointer parameter;
 *@b:b pointer parameter;
 *Return: return void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
