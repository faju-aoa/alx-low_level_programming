#include <stdarg.h>
#include <stdio.h>
/**
 * print_all- print format
 * @format: array to format
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *s, *sep = "";
va_list ptr;
va_start(ptr, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(ptr, int));
break;
case 'i':
printf("%s%d", sep, va_arg(ptr, int));
break;
case 'f':
printf("%s%f", sep, va_arg(ptr, double));
break;
case 's':
str = va_arg(ptr, char *);
if (!s)
str = "(nil)";
printf("%s%s", sep, s);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}
printf("\n");
va_end(ptr);
}
