#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - check for lowercase letter
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
