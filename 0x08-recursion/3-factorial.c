#include <stdio.h>
#include <string.h>
/**
 *factorial - find the factorial
 *@n: parameter
 *Return: return factorial
 */
int factorial(int n)
{
int fact;
if (n <= 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
else
{
fact = factorial(n - 1) * n;
}
return (fact);
}
