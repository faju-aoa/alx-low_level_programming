#include <stdio.h>
/**
 *_print_rev_recursion - reverse num
 *@s: parameter
 *Return: return nothing
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
