#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
 
int main() {
{
int i;
int j;
for(i = 0; i <= 8; i++)
{
for(j = i+1; j <= 9;j++)
{
if (i != j)  
{
putchar(i + '0');
putchar(j + '0');
}
if ((i <=8) & (!((i==8) & (j==9))))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);

}
