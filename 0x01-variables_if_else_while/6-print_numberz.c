
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
int i = 0;
int rev;
int array_digit[10];
int num  = 9;

while (num > -1)
{
int digit = num % 10;
array_digit[i] = digit;
i++;
num--;
}
for (rev = i-1; rev > -1; rev--)
{
putchar(array_digit[rev] + '0');
}
putchar('\n');
return (0);

}
