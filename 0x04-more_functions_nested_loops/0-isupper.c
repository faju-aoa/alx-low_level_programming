#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *_isupper - check for uppercase letter
 *@c:parameter that accept numbers
 *Return: return 1 and 0
 */
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (2);
}
}
