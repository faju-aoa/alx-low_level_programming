#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - searches for an integer
 * @n: array to search
 * @separator: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
if (!separator)
{
printf("%d", va_arg(ptr, int));
}
else if (separator && i == 0)
{
printf("%d", va_arg(ptr, int));
}
else
{
printf("%s%d", separator, va_arg(list, int));
}
}
va_end(list);
printf("\n");
}
