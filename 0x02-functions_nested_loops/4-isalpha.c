#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_isalpha - check for alpha letters
 *@c:parameter for the function
 *Return: Return 1 and 0 if c is letter, lowercase or uppercase
 */ 
int _isalpha(int c)
{
if ((isalpha(c)) || (islower(c)) || (isupper(c)))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
