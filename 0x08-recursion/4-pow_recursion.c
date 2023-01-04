#include <stdio.h>
#include <math.h>
/**
 *_pow_recursion - find the factorial
 *@x: parameter
 *@y: parameter
 *Return: return factorial
 */
int _pow_recursion(int x, int y)
{
int p;
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
p = pow(x, y);
return (p);
}
