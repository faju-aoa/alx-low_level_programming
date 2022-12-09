#include <stdio.h>
#include <ctype.h>
/**
 *main-Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int i = 0;
char str[] = "ABCDEFGHIJKMNOPQRSTUVWXYZ";
char string;
while (str[i])
{
string =str[i];
putchar(tolower(string));
i++;
}
return (0);

}
