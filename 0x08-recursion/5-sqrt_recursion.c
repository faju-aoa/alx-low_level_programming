#include <stdio.h>
#include <math.h>
/**
 *_sqrt_recursion - find the square recursion
 *@n: parameter
 *Return: return square number
 */
int sqrt_num(int n, int i);
int _sqrt_recursion(int n)
{
int p;
p = sqrt_num(n, 1);
return (p);
}
/**
 *sqrt_num - find the factorial
 *@n: parameter
 *@i: parameter
 *Return: return sqrt_number
 */
int sqrt_num(int n, int i)
{
if (n < 0)
{
return (-1);
}
if ((i * i) > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (sqrt_num(n, i + 1));
}
