#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - check for lowercase letter
 *@c:a character parameter
 *Return: retuns 1 and 0 depending on condition
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
