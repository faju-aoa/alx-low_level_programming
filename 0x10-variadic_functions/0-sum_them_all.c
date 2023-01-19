#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - searches for an integer
 * @n: array to search
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list ptr;
va_start(ptr, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
